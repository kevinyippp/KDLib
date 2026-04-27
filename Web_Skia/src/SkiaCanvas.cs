using System.Numerics;
using BlazorApp;
using ConsoleApp;
using KDLib.GameObjectLib;
using KDLib.GameObjectLib.GameComponents;
using KDLib.GameObjectModel;
using SkiaSharp;

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
        var paint = new SKPaint
        {
            Color = color.ToSkia(),
            Style = SKPaintStyle.Fill,
            IsAntialias = true
        };

        using var path = new SKPath();
        path.MoveTo(v1.X, v1.Y);
        path.LineTo(v2.X, v2.Y);
        path.LineTo(v3.X, v3.Y);
        path.Close();

        _canvas.DrawPath(path, paint);
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
        using var paint = new SKPaint
        {
            Color = color.ToSkia(),
            StrokeWidth = thickness,
            Style = SKPaintStyle.Stroke,
            IsAntialias = true
        };

        _canvas.DrawLine(p1.X, p1.Y, p2.X, p2.Y, paint);
    }

    public void DrawSprite(ISprite sprite, Vector2 position)
    {
        if (sprite is SkiaSprite skSprite)
        {
            _canvas.DrawBitmap(skSprite.Bitmap, position.X, position.Y);
        }
    }
}