using System;
using System.Collections.Generic;
using System.Numerics;

namespace lib;

/// <summary>
/// Represents a trackable object that provides a mechanism to observe changes to its value.
/// This class is generic and can work with any data type.
/// </summary>
/// <typeparam name="T">The type of value being tracked.</typeparam>
public class Trackable<T>
{
    public event Action<T> Changed;

    /// <summary>
    /// Gets or sets the value being tracked by the Trackable object.
    /// When the value is set, the Changed event is triggered if the new value differs from the current value.
    /// </summary>
    public T Value
    {
        get;
        set
        {
            if (EqualityComparer<T>.Default.Equals(field, value))
                return;
            
            field = value;
            Changed?.Invoke(value);
        }
    }
    public Trackable(T initialValue)
    {
        Value = initialValue;
    }
}