namespace KYLib.GameObjectModel;

public abstract class GameComponent : IUpdatable
{
    public GameObject? GameObject { get; internal set; }
    public virtual void Update(double dt) {}
    public virtual void Draw(ICanvas canvas) {}
}