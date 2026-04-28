using System.Numerics;
using Engine.GameObjectModel.GameComponents;
using KDLib.GameObjectLib.GameComponents;
using KDLib.GameObjectModel;
using KDLib.GameObjectModel.GameComponents;
using Utils;

namespace KDLib;

public static class GameScene
{
    public static void Load(GameWorld world)
    {
        List<GameObject> nodes = [
            CreateNode(new Vector2(200, 200), GameColor.Emerald),
            CreateNode(new Vector2(400, 200), GameColor.Aquamarine),
            CreateNode(new Vector2(600, 400), GameColor.Cloud),
            CreateNode(new Vector2(400, 400), GameColor.Purple)
        ];
        
        var label = new GameObject("keyboard_label") {
            Position = new Vector2(32, 680)
        };

        label.AddComponent(new TextComponent() {
            Text = "Move with: {W A S D}",
            FontSize = 32
        });
        
        world.GameObjects.AddRange(nodes);
        world.GameObjects.AddRange(label);
        world.GameObjects.Add(CreateAgent(nodes) );

        var character = CreateCharacter();
        world.GameObjects.Add(character);

        
        world.OnDraw += canvas => {
            for (int i = 0; i < nodes.Count - 1; ++i) {
                var current = nodes[i];
                var next = nodes[i + 1];
                DrawEdge(current.Position, next.Position, canvas);
            }
            DrawEdge(nodes[0].Position, nodes[^1].Position, canvas);
        };
    }

    private static GameObject CreateAgent(List<GameObject> nodes)
    {
        var agent = new GameObject("Agent");
        
        agent.AddComponent(new TextComponent() {
            Text = agent.Id, 
            FontSize = 20,
            Color = GameColor.LightGray,
            Offset = new Vector2(24, -40),
        });
        agent.AddComponent(new ShapeComponent(ShapeType.Triangle, 16, GameColor.Cyan)
        {
            Offset = new Vector2(0, -8)
        });
        agent.AddComponent(new ShapeComponent(ShapeType.Circle,8, GameColor.Cyan) {
            Offset = new Vector2(0, -24)
        });

        agent.AddComponent( new AgentComponent(nodes));
        agent.Position = nodes.First().Position;
        
        Console.WriteLine($"Agent position set to {agent.Position}");
        return agent;
    }

    private static GameObject CreateCharacter()
    {
        var character = new GameObject("dino") {
            Position = new Vector2(100, 100)
        };
        
        character.AddComponent(new InputComponent(KDEngine.Input));
        character.AddComponent(new VelocityComponent());
        character.AddComponent(new ShapeComponent(ShapeType.Square, 24f, GameColor.Amethyst));
        character.AddComponent(new SpriteComponent(KDEngine.AssetManager.LoadSprite("Assets/DinoSprites.png")));
        character.AddComponent(new TextComponent());
        
        
        
        var sprite = character.GetComponent<SpriteComponent>();
        sprite.Sprite.Scale = new Vector2(8, 8);
        sprite.HorizontalFrame = 24;
        sprite.VerticalFrame = 1;
        
        character.AddComponent(new LogicComponent());
        
        Console.WriteLine($"Sprite size: {sprite.FrameSize}");

        return character;
    }
    
    private static void DrawEdge(Vector2 p1, Vector2 p2, ICanvas canvas) {
        canvas.DrawLine(p1, p2, 4.0f, GameColor.Gray);
    }
    private static GameObject CreateNode(Vector2 pos, GameColor color, string? text = null) {
        var node = new GameObject("node") {
            Position = pos
        };
        node.AddComponent( new ShapeComponent(ShapeType.Circle, 16, color));

        if (text != null) {
            node.AddComponent( new TextComponent()
            {
                Text = text,
                Color = GameColor.Emerald
            });
        }
        
        return node;
    }
    private static Vector2 GenerateValidPoint(List<GameObject> existingNodes, float minDistance, float width, float height)
    {
        int maxAttempts = 200;
    
        for (int i = 0; i < maxAttempts; i++)
        {
            const int xOffset = 100;
            
            var candidate = new Vector2(
                (float)RandomUtil.GetRandomDouble(xOffset, width),
                (float)RandomUtil.GetRandomDouble(xOffset, height)
            );

            bool tooClose = false;
            foreach (var node in existingNodes)
            {
                if (Vector2.Distance(candidate, node.Position) < minDistance)
                {
                    tooClose = true;
                    break;
                }
            }

            if (!tooClose) return candidate;
        }
        
        return new Vector2(width / 2, height / 2);
    }
}