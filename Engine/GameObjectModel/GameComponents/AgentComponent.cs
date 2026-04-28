using System.Numerics;

namespace KDLib.GameObjectModel.GameComponents;

public class AgentComponent : GameComponent
{
    private readonly float SPEED = 240;
    private readonly List<GameObject> _nodes;
    private int _index = 0;
    
    public AgentComponent(List<GameObject> nodes) {
        _nodes = nodes;
    }
    
    public override void Update(double dt)
    {
        var node = _nodes[_index];
        var displacement = node.Position - GameObject.Position;
        var direction = displacement.Normalize();

        GameObject.Position += direction * SPEED * (float)dt;
            
        if (displacement.Length() < 1.0f) {
            _index = (_index + 1) % _nodes.Count;
        }

        // Console.WriteLine($"Delta time: {dt}");
        
        if (dt > 1.0f) {
            Thread.Sleep(10000);
        }
        
        // Console.WriteLine(GameObject.Position);
    }
}