using System.Numerics;
using KDLib.GameObjectLib;

namespace KDLib.GameObjectModel.GameComponents;

public interface IInputState
{
    HashSet<KeyboardButton> PressedKeys {get;}
}

public class InputComponent : GameComponent
{
    private readonly IInputState _inputState;
    public Vector2 InputDirection { get; private set; } = Vector2.Zero;
    
    
    public InputComponent(IInputState inputState) => _inputState = inputState; 

    public override void Update(double dt)
    {
        InputDirection = Vector2.Zero;

        var pressedKeys = _inputState.PressedKeys;

        if (pressedKeys.Contains(KeyboardButton.W)) InputDirection += new Vector2(0, -1);
        if (pressedKeys.Contains(KeyboardButton.S)) InputDirection += new Vector2(0, 1);
        if (pressedKeys.Contains(KeyboardButton.A)) InputDirection += new Vector2(-1, 0);
        if (pressedKeys.Contains(KeyboardButton.D)) InputDirection += new Vector2(1, 0);

        if (InputDirection != Vector2.Zero)
            InputDirection = Vector2.Normalize(InputDirection);
    }
}