using Engine.GameObjectModel;
using KDLib.GameObjectModel.GameComponents;

namespace KDLib.GameObjectModel;

public static class KDEngine
{
    public static IInputState Input { get; set; } = null;
    public static IAssetManager AssetManager { get; set; } = null;
}