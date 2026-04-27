using System.Numerics;

namespace KDLib.GameObjectModel.GameComponents;

public class VelocityComponent : GameComponent
{
    public Vector2 Velocity { get; set; }

    public VelocityComponent(Vector2 velocity = new Vector2()) {
        Velocity = velocity;
    }
    
    public override void Update(double dt)
    {
        GameObject.Position += Velocity * (float)dt;
    }
}