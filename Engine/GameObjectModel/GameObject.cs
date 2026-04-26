using System.Numerics;
using KYLib.GameObjectLib;

namespace KYLib.GameObjectModel;

public sealed class GameObject
{
    public string Id { get; }
    public Vector2 Position { get; set; }

    public IReadOnlyList<GameComponent> Components => _gameComponents;
    private readonly List<GameComponent> _gameComponents = [];
    
    public GameObject(string id) {
        Id = id;
    }
    
    public void AddComponent(params GameComponent[] gameComponents)
    {
        foreach (var component in gameComponents ) {
            component.GameObject = this;
            _gameComponents.Add(component);
        }
    }

    public T GetComponent<T>() where T : GameComponent {
        return _gameComponents.OfType<T>().First();
    }
    
    public void RemoveComponent(GameComponent gameComponent)
    {
        gameComponent.GameObject = null;
        _gameComponents.Remove(gameComponent);
    }
    
    public void UpdateComponents(double dt)
    {
        foreach (var gameComponent in _gameComponents) {
            gameComponent.Update(dt);
        }
    }
    public void DrawComponents(ICanvas canvas)
    {
        foreach (var gameComponent in _gameComponents) {
            gameComponent.Draw(canvas);
        }
    }
}