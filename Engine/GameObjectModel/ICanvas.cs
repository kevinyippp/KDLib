using System.Numerics;
using ConsoleApp;
using KYLib.GameObjectLib.GameComponents;

namespace KYLib.GameObjectModel;

public interface ICanvas
{
    void DrawSprite(ISprite sprite, Vector2 position);
    void DrawCircle(float radius, GameColor color, Vector2 position);
    void DrawRectangle(float width, float height, GameColor color, Vector2 position);
    void DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, GameColor color);
    void DrawText(string text, int fontSize, GameColor color, Vector2 position);
    void DrawLine(Vector2 p1, Vector2 p2, float thickness, GameColor color);
}