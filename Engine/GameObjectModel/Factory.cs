using KDLib.GameObjectLib.GameComponents;
using KDLib.GameObjectModel.GameComponents;
using KDLib.GameObjectLib;

namespace KDLib.GameObjectModel;

public static class Factory
{
    public static GameObject CreateCharacter(string name, float size, bool isPlayer = false)
    {
        var gameObject = new GameObject(name);

        if (isPlayer){
            gameObject.AddComponent(new InputComponent(KDEngine.Input));
        }

        gameObject.AddComponent(
            new ShapeComponent(ShapeType.Circle, size, GameColor.Blue),
            new CollisionComponent(
                new CollisionShape(128, 128)
            ),
            new TextComponent() {
                Text = name
            }
        );
        
        return gameObject;
    }
}