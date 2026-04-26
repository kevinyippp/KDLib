using ConsoleApp;
using SkiaSharp;

namespace BlazorApp;

public class SkiaSprite : ISprite
{
    public string Id { get; }
    public int Width => Bitmap.Width;
    public int Height => Bitmap.Height;
    public SKBitmap Bitmap { get; }

    public SkiaSprite(string id, SKBitmap bitmap)
    {
        Id = id;
        Bitmap = bitmap;
    }
}