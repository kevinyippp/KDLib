using Raylib_cs;

namespace ConsoleApp;

public class RaylibSprite : ISprite
{
    public Texture2D Texture { get; }
    public string Id { get; init; }
    public int Width => Texture.Width;
    public int Height => Texture.Height;

    public RaylibSprite(string id, Texture2D texture)
    {
        Id = id;
        Texture = texture;
    }

    public void Dispose()
    {
        Raylib.UnloadTexture(Texture);
    }
}