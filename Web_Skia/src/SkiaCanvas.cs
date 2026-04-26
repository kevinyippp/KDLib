using System.Numerics;
using ConsoleApp;
using KYLib.GameObjectLib;
using KYLib.GameObjectLib.GameComponents;
using KYLib.GameObjectModel;
using SkiaSharp;

public static class SkiaColorExtensions
{
    public static SKColor ToSkia(this GameColor color) => color switch
    {
        GameColor.Cyan => SKColors.Cyan,
        GameColor.Red => SKColors.Red,
        GameColor.DarkGray => SKColor.Parse("#1E1E1E"),
        _ => SKColors.White
    };
}

public class SkiaCanvas : ICanvas
{
    private readonly SKCanvas _canvas;
    public SkiaCanvas(SKCanvas canvas) => _canvas = canvas;
    public void DrawRectangle(float width, float height, GameColor color, Vector2 position)
    {
        using var paint = new SKPaint { Color = color.ToSkia(), Style = SKPaintStyle.Fill };
        _canvas.DrawRect(position.X, position.Y, width, height, paint);
    }

    public void DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, GameColor color)
    {
        // throw new NotImplementedException();
    }

    public void DrawCircle(float radius, GameColor color, Vector2 position)
    {
        using var paint = new SKPaint { Color = color.ToSkia(), IsAntialias = true };
        _canvas.DrawCircle(position.X, position.Y, radius, paint);
    }
    public void DrawText(string text, int fontSize, GameColor color, Vector2 position)
    {
        using var paint = new SKPaint { Color = color.ToSkia(), TextSize = fontSize, IsAntialias = true };
        _canvas.DrawText(text, position.X, position.Y, paint);
    }

    public void DrawLine(Vector2 p1, Vector2 p2, float thickness, GameColor color)
    {
        // throw new NotImplementedException();
    }

    public void DrawSprite(ISprite sprite, Vector2 position) { /* Implement for Skia */ }
}