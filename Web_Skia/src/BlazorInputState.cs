using System;
using System.Collections.Generic;
using KDLib;
using KDLib.GameObjectLib.GameComponents;
using KDLib.GameObjectModel.GameComponents;

namespace BlazorApp;

public class BlazorInputState : IInputState
{
    public HashSet<KeyboardButton> PressedKeys { get; } = new();

    public void SetKeyState(string code, bool isDown)
    {
        if (Enum.TryParse<KeyboardButton>(code.Replace("Key", ""), out var button))
        {
            if (isDown) PressedKeys.Add(button);
            else PressedKeys.Remove(button);
        }
    }
}