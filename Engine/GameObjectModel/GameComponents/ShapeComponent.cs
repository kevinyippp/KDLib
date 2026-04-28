using System.Numerics;
using KDLib.GameObjectLib.GameComponents;
using KDLib.GameObjectLib;

namespace KDLib.GameObjectModel.GameComponents;

public enum ShapeType { Circle, Square, Triangle }

public class ShapeComponent : GameComponent
{
    public ShapeType Shape { get; }
    public float Size { get; set; }
    public GameColor Color { get; set; } // Added color property
    public Vector2 Offset { get; set; }
    public ShapeComponent(ShapeType shapeType, float size = 24f, GameColor color = GameColor.White) 
    {
        Shape = shapeType;
        Size = size;
        Color = color;
    }
    
    public override void Draw(ICanvas canvas)
    {
        if (GameObject == null) 
            return;
        
        var position = GameObject.Position + Offset;
        
        switch (Shape)
        {
            case ShapeType.Square:
                canvas.DrawRectangle(Size, Size, Color, position + new Vector2(-Size / 2, -Size / 2));
                break;
            case ShapeType.Circle:
                canvas.DrawCircle(Size, Color, position);
                break;
            case ShapeType.Triangle:
                canvas.DrawTriangle(
                    new Vector2(0, 1) * Size + position,  // Bottom center (v1)
                    new Vector2(1, 0) * Size + position,  // Top Right (v2)
                    new Vector2(-1, 0) * Size + position, // Top Left (v3)
                    Color
                );
                break;
            default:
                throw new ArgumentOutOfRangeException();
        }
    }
}