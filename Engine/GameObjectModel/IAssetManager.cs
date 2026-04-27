using ConsoleApp;

namespace Engine.GameObjectModel;

public interface IAssetManager
{
    ISprite LoadSprite(string path);
}