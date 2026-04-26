using System.Numerics;
using KYLib.GameObjectLib;
using KYLib.GameObjectLib.GameComponents;

namespace KYLib.GameObjectModel.GameComponents;

public class TextComponent : GameComponent
{
    public string Text { get; set; } = "";
    public Vector2 Offset { get; set; }
    
    
    public GameColor Color { get; set; } = GameColor.White;
    public int FontSize { get; set; } = 32;

    public override void Draw(ICanvas canvas)
    {
        canvas.DrawText(Text, FontSize, Color, GameObject.Position + Offset + new Vector2(-FontSize/2, -FontSize/2));
    }
}