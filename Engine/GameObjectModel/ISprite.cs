using System.Numerics;

namespace ConsoleApp;

public interface ISprite
{
    string Id { get; }
    int Width { get; }
    int Height { get; }
    Vector2 Scale { get; set; }
}