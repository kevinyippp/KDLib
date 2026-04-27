namespace KDLib.GameObjectModel;

public abstract class GameComponent : IUpdatable
{
    public GameObject? GameObject { get; internal set; } = null;
    internal bool HasStarted { get; set; } = false;
    public virtual void OnAdded(){}
    public virtual void Start(){}
    public virtual void Update(double dt) {}
    public virtual void Draw(ICanvas canvas) {}
}