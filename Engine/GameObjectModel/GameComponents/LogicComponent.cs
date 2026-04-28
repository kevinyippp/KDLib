using System.Numerics;
using KDLib.GameObjectModel;
using KDLib.GameObjectModel.GameComponents;
using KYLib.FiniteStateMachine;

namespace Engine.GameObjectModel.GameComponents;

public class LogicComponent : GameComponent
{
    private const float MOVE_SPEED = 240.0f;
    
    private enum CharacterState {Idle, Walk}
    private StateMachine<CharacterState> _fsm;

    private class IdleState(GameObject gameObject) : IState<CharacterState>
    {
        private InputComponent _inputComponent;
        
        public void Enter()
        {
            _inputComponent = gameObject.GetComponent<InputComponent>();
            
            var velocityComponent = gameObject.GetComponent<VelocityComponent>();
            var spriteComponent = gameObject.GetComponent<SpriteComponent>();
            
            velocityComponent.Velocity = Vector2.Zero;
            spriteComponent.StartFrame = 1;
            spriteComponent.EndFrame = 4;
            spriteComponent.Fps = 4;
            spriteComponent.ResetFrame();
        }
        
        public CharacterState? Update(double dt)
        {
            if (_inputComponent.InputDirection != Vector2.Zero) {
                return CharacterState.Walk;
            }
            
            return null;
        }
    }
    private class WalkState(GameObject gameObject) : IState<CharacterState>
    {
        private InputComponent _inputComponent;
        private VelocityComponent _velocityComponent;
        private SpriteComponent _spriteComponent;
        
        public void Enter()
        {
            _inputComponent = gameObject.GetComponent<InputComponent>();
            _velocityComponent = gameObject.GetComponent<VelocityComponent>();    
            _spriteComponent = gameObject.GetComponent<SpriteComponent>();
            
            _spriteComponent.StartFrame = 5;
            _spriteComponent.EndFrame = 10;
            _spriteComponent.Fps = 12;
            _spriteComponent.ResetFrame();
        }

        public void Exit() {
            var velocityComponent = gameObject.GetComponent<VelocityComponent>();
            velocityComponent.Velocity = Vector2.Zero;
        }
        
        public CharacterState? Update(double dt)
        {
            if (_inputComponent.InputDirection == Vector2.Zero) {
                return CharacterState.Idle;
            }
            
            if (_inputComponent.InputDirection.X != 0)
                _spriteComponent.FlipX = _inputComponent.InputDirection.X < 0;
            
            _velocityComponent.Velocity = _inputComponent.InputDirection * MOVE_SPEED;
            return null;
        }
    }
    
    public override void Start() {
        var stateMap = new Dictionary<CharacterState, IState<CharacterState>>() {
            [CharacterState.Idle] = new IdleState(this.GameObject),
            [CharacterState.Walk] = new WalkState(this.GameObject)
        };
        _fsm = new StateMachine<CharacterState>(CharacterState.Walk, stateMap);

        var textComponent = GameObject.GetComponent<TextComponent>();
        textComponent.Offset = new Vector2(-60, -80);
        
        _fsm.StateEntered += state => textComponent.Text = $"State: {state}"; 
        
        _fsm.Start();
    }

    public override void Update(double dt)
    {
        _fsm.Update(dt);
    }
}