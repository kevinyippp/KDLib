using KYLib;
using KYLib.GameObjectLib.GameComponents;
using KYLib.GameObjectModel.GameComponents;
using Raylib_cs;

namespace ConsoleApp.GameComponents;

public class RaylibInputState : IInputState
{
    public HashSet<KeyboardButton> PressedKeys {
        get {
            field.Clear();
            if (Raylib.IsKeyDown(KeyboardKey.W)) field.Add(KeyboardButton.W);
            if (Raylib.IsKeyDown(KeyboardKey.S)) field.Add(KeyboardButton.S);
            if (Raylib.IsKeyDown(KeyboardKey.A)) field.Add(KeyboardButton.A);
            if (Raylib.IsKeyDown(KeyboardKey.D)) field.Add(KeyboardButton.D);
            return field;
        }
    } = [];
}