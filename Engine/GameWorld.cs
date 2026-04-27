using System.Numerics;
using KDLib.GameObjectModel;
using KDLib.GameObjectModel.GameComponents;
using KDLib.GameObjectLib;

namespace KDLib;

public class GameWorld : IUpdatable
{
    public List<GameObject> GameObjects { get; } = [];
    public readonly int Width;
    public readonly int Height;
    public readonly string Title;
    
    public event Action<double>? OnUpdate;
    public event Action<ICanvas>? OnDraw;
    
    public GameWorld(int width, int height, string title)
    {
        Width = width;
        Height = height;
        Title = title;
    }

    private void StartComponents()
    {
        foreach (var obj in GameObjects) {
            foreach (var comp in obj.Components) {
                if (!comp.HasStarted) {
                    comp.Start();
                    comp.HasStarted = true;
                }
            }
        }
    }
    
    private void UpdateCollisions()
    {
        var collisions = GameObjects
            .SelectMany(g => g.Components.OfType<CollisionComponent>())
            .ToList();
        
        foreach (var c in collisions) c.IsOverlapped = false;

        for (int a = 0; a < collisions.Count; ++a)
        {
            for (int b = a + 1; b < collisions.Count; ++b)
            {
                var ca = collisions[a];
                var cb = collisions[b];
                
                Vector2 posA = GetWorldOrigin(ca);
                Vector2 posB = GetWorldOrigin(cb);

                if (IsOverlapping(posA, ca.Shape, posB, cb.Shape)) {
                    ca.IsOverlapped = true;
                    cb.IsOverlapped = true;
                }
            }
        }
    }
    private static Vector2 GetWorldOrigin(CollisionComponent comp)
    {
        Vector2 basePos = comp.Centered 
            ? comp.GameObject.Position - new Vector2(comp.Shape.Width / 2, comp.Shape.Height / 2)
            : comp.GameObject.Position;
        
        return basePos + comp.Shape.Offset;
    }
    private static bool IsOverlapping(Vector2 posA, CollisionShape shapeA, Vector2 posB, CollisionShape shapeB)
    {
        return posA.X < posB.X + shapeB.Width &&
               posA.X + shapeA.Width > posB.X &&
               posA.Y < posB.Y + shapeB.Height &&
               posA.Y + shapeA.Height > posB.Y;
    }
    private void RaiseOnUpdate(double dt) => OnUpdate?.Invoke(dt);
    private void RaiseOnDraw(ICanvas canvas) => OnDraw?.Invoke(canvas);
    
    public void Update(double dt)
    {
        StartComponents();
        RaiseOnUpdate(dt);
        foreach (var obj in GameObjects) {
            obj.UpdateComponents(dt);
        }
        UpdateCollisions();
    }
    public void Draw(ICanvas canvas)
    {
        RaiseOnDraw(canvas);
        foreach (var gameObject in GameObjects) {
            gameObject.DrawComponents(canvas);
        }
    }
}