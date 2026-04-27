using System.Numerics;
using KDLib;
using Raylib_cs;

namespace ConsoleApp;

public class RaylibWorldRunner
{
    private const double MAX_DELTA_TIME = 1.0 / 15.0;
    private readonly RaylibCanvas _canvas = new RaylibCanvas();
    private readonly GameWorld _gameWorld;
    private readonly RenderTexture2D _target;
    
    public RaylibWorldRunner(GameWorld gameWorld) {
        _gameWorld = gameWorld;
        Raylib.SetConfigFlags(ConfigFlags.ResizableWindow);
        Raylib.SetConfigFlags(ConfigFlags.VSyncHint);
        Raylib.InitWindow(_gameWorld.Width, _gameWorld.Height, _gameWorld.Title);
        _target = Raylib.LoadRenderTexture(_gameWorld.Width, _gameWorld.Height);
        Raylib.SetTextureFilter(_target.Texture, TextureFilter.Bilinear);
    }

    public void Run() 
    {
        while (!Raylib.WindowShouldClose()) 
        {
            double dt = Math.Min(Raylib.GetFrameTime(), MAX_DELTA_TIME);

            _gameWorld.Update(dt);

            Raylib.BeginTextureMode(_target);
            Raylib.ClearBackground(Color.DarkGray);
        
            _gameWorld.Draw(_canvas);
        
            Raylib.EndTextureMode();

            Raylib.BeginDrawing();
            Raylib.ClearBackground(Color.Black);

            float scale = Math.Min((float)Raylib.GetScreenWidth() / _gameWorld.Width, (float)Raylib.GetScreenHeight() / _gameWorld.Height);

            Rectangle sourceRec = new Rectangle(0, 0, _target.Texture.Width, -_target.Texture.Height);
        
            Rectangle destRec = new Rectangle(
                (Raylib.GetScreenWidth() - (_gameWorld.Width * scale)) * 0.5f,
                (Raylib.GetScreenHeight() - (_gameWorld.Height * scale)) * 0.5f,
                _gameWorld.Width * scale,
                _gameWorld.Height * scale
            );

            Raylib.DrawTexturePro(_target.Texture, sourceRec, destRec, new Vector2(0, 0), 0.0f, Color.White);
        
            Raylib.EndDrawing();
        }

        Raylib.UnloadRenderTexture(_target);
        Raylib.CloseWindow();
    }
}