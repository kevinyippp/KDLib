namespace KYLib.FiniteStateMachine;

public sealed class StateMachine<TEnum> : IUpdatable where TEnum : struct, Enum
{
    public event Action<TEnum>? StateEntered;
    public event Action<TEnum>? StateExited;
    public TEnum ActiveState { get; private set; }

    private readonly Queue<TEnum> _pendingTransitions = new Queue<TEnum>();
    private readonly Dictionary<TEnum, IState<TEnum>> _stateMap;
    private readonly TEnum _initial;
    private IState<TEnum>? _currentState;
    
    public StateMachine(TEnum initial, Dictionary<TEnum, IState<TEnum>> states) {
        _initial = initial;
        _stateMap = new Dictionary<TEnum, IState<TEnum>>(states);
    }

    public void Start() 
    {
        if (_currentState != null) return;
        TransitionTo(_initial);
    }

    public void Update(double dt)
    {
        if (_pendingTransitions.Count > 0)
        {
            TransitionTo(_pendingTransitions.Dequeue());
            return;
        }

        var next = _currentState?.Update(dt);
        if (next != null) {
            _pendingTransitions.Enqueue(next.Value);
        }
    }

    private void TransitionTo(TEnum next)
    {
        if (_currentState != null) {
            StateExited?.Invoke(ActiveState);
            _currentState.Exit();
        }

        ActiveState = next;
        _currentState = _stateMap[next];
        _currentState.Enter();
        StateEntered?.Invoke(next);
    }
    public void Stop()
    {
        if (_currentState != null) {
            StateExited?.Invoke(ActiveState);
            _currentState.Exit();
            _currentState = null;
        }
    
        _pendingTransitions.Clear();
    }
}