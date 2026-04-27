using System.Numerics;
using ConsoleApp;

namespace KDLib.GameObjectModel.GameComponents;

public class SpriteComponent : GameComponent
{
    private readonly ISprite _sprite;
    public bool Centered { get; set; } = true;
    public SpriteComponent(ISprite sprite)
    {
        _sprite = sprite;
    }
    
    public override void Draw(ICanvas canvas) 
    {
        var offset = new Vector2();
        
        if (Centered)
            offset = new Vector2(_sprite.Width/2.0f,_sprite.Height/2.0f) * -1;
        
        canvas.DrawSprite(_sprite, GameObject.Position + offset);
    }
}