using System.Numerics;
using KYLib.GameObjectLib;
using KYLib.GameObjectLib.GameComponents;

namespace KYLib.GameObjectModel.GameComponents;

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

        var finalPos = GameObject.Position + Offset;
        
        
        switch (Shape)
        {
            case ShapeType.Square:
                canvas.DrawRectangle(Size, Size, Color, finalPos);
                break;
            case ShapeType.Circle:
                canvas.DrawCircle(Size, Color, finalPos);
                break;
            case ShapeType.Triangle:
                canvas.DrawTriangle(
                    new Vector2(0, 1) * Size + finalPos,  // Bottom center (v1)
                    new Vector2(1, 0) * Size + finalPos,  // Top Right (v2)
                    new Vector2(-1, 0) * Size + finalPos, // Top Left (v3)
                    Color
                );
                break;
        }
    }
}