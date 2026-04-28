using System.Numerics;
using ConsoleApp;
using SkiaSharp;

namespace BlazorApp;

public class SkiaSprite : ISprite
{
    public string Id { get; }
    public int Width => Bitmap.Width;
    public int Height => Bitmap.Height;
    public Vector2 Scale { get; set; } = Vector2.One;
    public SKBitmap Bitmap { get; }

    public SkiaSprite(string id, SKBitmap bitmap)
    {
        Id = id;
        Bitmap = bitmap;
    }
}