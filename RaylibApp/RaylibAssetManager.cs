using Engine.GameObjectModel;
using Raylib_cs;

namespace ConsoleApp;

public class RaylibAssetManager : IAssetManager
{
    public ISprite LoadSprite(string path)
    {
        var texture = Raylib.LoadTexture(path);
        return new RaylibSprite(path, texture);
    }
}