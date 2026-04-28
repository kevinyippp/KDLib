using System.Numerics;
using ConsoleApp;

namespace KDLib.GameObjectModel.GameComponents;


public record struct Vector2Int(int X, int Y) {
    public static Vector2Int Zero => new(0, 0);
}

public class SpriteComponent : GameComponent
{
    public ISprite Sprite { get;}
    public bool Centered { get; set; } = true;
    public int VerticalFrame { get; set; }
    public int HorizontalFrame { get; set; }
    public bool FlipY { get; set; } = false;
    public bool FlipX { get; set; } = false;
    
    public Vector2 FrameSize
    {
        get {
            if (VerticalFrame == 0 || HorizontalFrame == 0) {
                return Vector2.Zero;
            }
            
            return new Vector2(Sprite.Width / HorizontalFrame, Sprite.Height / VerticalFrame);
        }
    }
    private Vector2Int _frameIndex = new Vector2Int(0, 0);

    private double _time = 0.0d;
    public int Fps { get; set; } = 4;
    public int StartFrame { get; set; }= 0;
    public int EndFrame { get; set; }= 0;
    
    public SpriteComponent(ISprite sprite)
    {
        Sprite = sprite;
    }

    public override void Update(double dt)
    {
        _time += dt;
        var frameLength = 1.0d / Fps;
        
        if (_time >= frameLength) {
            _time -= frameLength;
            NextFrame();
        }
    }

    public void ResetFrame()
    {
        _frameIndex.X = StartFrame;
    }
    private void NextFrame()
    {
        var range = EndFrame - StartFrame;

        if (range == 0)
            return;
        
        if (_frameIndex.X < StartFrame || _frameIndex.X > EndFrame) {
            ResetFrame();
        }
        
        
        _frameIndex.X = StartFrame + (_frameIndex.X + 1 - StartFrame) % range;
        
        Console.WriteLine($"Frame index X: {_frameIndex.X}");
    }
    
    
    public override void Draw(ICanvas canvas) 
    {   
        Vector2 sourcePos = new Vector2(
            _frameIndex.X * FrameSize.X, 
            _frameIndex.Y * FrameSize.Y
        );

        var region = new SpriteRegion(sourcePos, FrameSize, FlipX, FlipY);
        
        Vector2 offsetPosition = Vector2.Zero;
    
        if (Centered) {
            offsetPosition.X = -(FrameSize.X * Sprite.Scale.X) / 2f;
            offsetPosition.Y = -(FrameSize.Y * Sprite.Scale.Y) / 2f;
        }
        
        canvas.DrawSpriteRegion(
            Sprite,
            GameObject.Position + offsetPosition, 
            region
        );
    }

}