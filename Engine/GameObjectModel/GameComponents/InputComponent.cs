using System.Numerics;
using KDLib.GameObjectLib;

namespace KDLib.GameObjectModel.GameComponents;

public interface IInputState
{
    HashSet<KeyboardButton> PressedKeys {get;}
}

public class InputComponent : GameComponent
{
    public int Speed = 400;
    
    private readonly IInputState _inputState;

    public InputComponent(IInputState inputState) => _inputState = inputState; 

    public override void Update(double dt)
    {
        Vector2 direction = Vector2.Zero;

        var pressedKeys = _inputState.PressedKeys;

        if (pressedKeys.Contains(KeyboardButton.W)) direction += new Vector2(0, -1);
        if (pressedKeys.Contains(KeyboardButton.S)) direction += new Vector2(0, 1);
        if (pressedKeys.Contains(KeyboardButton.A)) direction += new Vector2(-1, 0);
        if (pressedKeys.Contains(KeyboardButton.D)) direction += new Vector2(1, 0);

        if (direction != Vector2.Zero)
            direction = Vector2.Normalize(direction);

        GameObject.Position += direction * Speed * (float)dt;
    }
}