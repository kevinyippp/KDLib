using System.Numerics;
using KDLib.GameObjectLib;
using Raylib_cs;
using ConsoleApp.Helpers;
using KDLib.GameObjectLib.GameComponents;
using KDLib.GameObjectModel;

namespace ConsoleApp;

public class RaylibCanvas : ICanvas
{
    public void DrawSpriteRegion(ISprite sprite, Vector2 position, SpriteRegion src)
    {
        if (sprite is RaylibSprite rs) {
            var source = new Rectangle(
                src.StartPosition.X, src.StartPosition.Y,
                src.FlipX ? -src.Size.X : src.Size.X,
                src.FlipY ? -src.Size.Y : src.Size.Y
            );
            
            var dest = new Rectangle(
                position.X, 
                position.Y,
                src.Size.X * sprite.Scale.X
                , src.Size.Y * sprite.Scale.Y
            );
            
            Raylib.DrawTexturePro(rs.Texture, source, dest, Vector2.Zero, 0f, Color.White);
        }
    }

    public void DrawCircle(float radius, GameColor color, Vector2 position) {
        Raylib.DrawCircleV(position, radius, color.ToRaylib());
    }

    public void DrawRectangle(float width, float height, GameColor color, Vector2 position) {
        Vector2 size = new Vector2(width, height);
        Raylib.DrawRectangleV(position, size, color.ToRaylib());
    }

    public void DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, GameColor color)
    {
        Raylib.DrawTriangle(v1, v2, v3, color.ToRaylib());
    }

    public void DrawText(string text, int fontSize, GameColor color, Vector2 position) {
        Raylib.DrawTextEx(Raylib.GetFontDefault(), text, position, fontSize, 2, color.ToRaylib());
    }

    public void DrawLine(Vector2 p1, Vector2 p2, float thickness, GameColor color)
    {
        Raylib.DrawLineEx(p1, p2, thickness, color.ToRaylib());
    }
}