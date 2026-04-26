using System.Collections.Generic;

public class ChangeTracker<T>
{
    private T _lastValue;
    public T Value { get; private set; }

    public ChangeTracker(T initialValue) 
    {
        _lastValue = initialValue;
        Value = initialValue;
    }

    public bool Set(T newValue) => TrySwap(newValue, out _);

    public bool TrySwap(T newValue, out T oldValue)
    {
        oldValue = Value;
        if (EqualityComparer<T>.Default.Equals(Value, newValue))
            return false;

        _lastValue = Value;
        Value = newValue;
        return true;
    }
}