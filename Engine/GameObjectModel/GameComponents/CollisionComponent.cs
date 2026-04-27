using System.Numerics;
using KDLib.GameObjectLib.GameComponents;
using KDLib.GameObjectLib;

namespace KDLib.GameObjectModel.GameComponents;

public class CollisionShape
{
    public Vector2 Offset { get; set; }
    public float Width { get; init; }
    public float Height { get; init; }
    public CollisionShape(float width, float height){
        Width = width;
        Height = height;
    }
    
    public Vector2 GetBoundsPosition(Vector2 parentPosition, bool centered) {
        Vector2 basePos = centered 
            ? parentPosition - new Vector2(Width / 2, Height / 2) 
            : parentPosition;
            
        return basePos + Offset;
    }
}

public class CollisionComponent : GameComponent //TODO: use hashset to store all overlapping collisions, and add events for entered and exited
{
    private const GameColor OVERLAPPED_COLOR = GameColor.Red;
    private const GameColor NORMAL_COLOR = GameColor.Cyan;
    internal bool IsOverlapped { get; set; } = false;
    public bool Centered { get; set; } = true;
    public CollisionShape Shape { get; }
    public CollisionComponent(CollisionShape shape) {
        Shape = shape;
    }
    
    public override void Draw(ICanvas canvas) {
        var color = IsOverlapped ? OVERLAPPED_COLOR : NORMAL_COLOR;
        var renderPos = Shape.GetBoundsPosition(GameObject.Position, Centered);
        canvas.DrawRectangle(Shape.Width, Shape.Height, color, renderPos);
    }
}