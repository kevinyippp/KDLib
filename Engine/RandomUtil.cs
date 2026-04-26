using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;

namespace Utils;

public static class RandomUtil
{
    public static int GetRandomInt()
    {
        // Allocate 4 bytes (32 bits) for an int
        byte[] bytes = new byte[4];

        // Fill bytes with cryptographically secure random bytes
        RandomNumberGenerator.Fill(bytes);

        // Convert bytes to int
        int randomValue = BitConverter.ToInt32(bytes, 0);

        return randomValue;
    }

    /// <summary>
    /// return a number that with lower bound inclusive and upper bound exclusive
    /// </summary>
    /// <returns>A random integer value.</returns>
    public static int GetRandomInt(int min, int max)
    {
        if (min >= max)
            throw new ArgumentException("min must be less than max");

        int range = max - min;

        while (true)
        {
            byte[] bytes = new byte[4];
            RandomNumberGenerator.Fill(bytes);
            int value = BitConverter.ToInt32(bytes, 0) & int.MaxValue; // make non-negative

            if (value < (int.MaxValue / range) * range)  // avoid modulo bias
            {
                return (value % range) + min;
            }
        }
    }

    /// <summary>
    /// Determines whether an event occurs based on the given chance.
    /// </summary>
    /// <param name="chance">A float value between 0 and 1 representing the probability of success.
    /// A value of 0 guarantees failure, and a value of 1 guarantees success.</param>
    /// <returns>True if the event occurs based on the probability, otherwise false.</returns>
    public static bool Roll(float chance)
    {
        if (chance <= 0) return false;
        if (chance >= 1) return true;
        
        return Random.Shared.NextDouble() < chance;
    }
    
    
    public static double GetRandomDouble(double min, double max)
    {
        if (min >= max)
            throw new ArgumentException("min must be less than max");

        // Generate 8 bytes for a UInt64
        byte[] bytes = new byte[8];
        RandomNumberGenerator.Fill(bytes);

        // Convert to UInt64
        ulong ulongRand = BitConverter.ToUInt64(bytes, 0);

        // Normalize to [0,1)
        double normalized = ulongRand / (double)ulong.MaxValue;

        // Scale and shift to [min, max)
        return normalized * (max - min) + min;
    }

    /// <summary>
    /// Selects and returns a random element from the provided enumerable collection.
    /// </summary>
    /// <typeparam name="T">The type of elements in the enumerable.</typeparam>
    /// <param name="enumerable">The enumerable collection to pick a random element from.</param>
    /// <returns>A randomly selected element from the enumerable.</returns>
    /// <exception cref="ArgumentNullException">Thrown when the enumerable is null.</exception>
    /// <exception cref="ArgumentException">Thrown when the enumerable is empty.</exception>
    public static T PickRandom<T>(IEnumerable<T> enumerable)
    {
        var list = enumerable.ToList();
        return list[GetRandomInt(0, list.Count)];
    }
    
    public static List<T> Shuffle<T>(this IEnumerable<T> source)
    {
        var list = source.ToList();
        int n = list.Count;
        
        while (n > 1)
        {
            n--;
            int k = GetRandomInt(0, n + 1);
            (list[k], list[n]) = (list[n], list[k]);
        }
        
        return list;
    }
    
    public static T GetRandomEnum<T>() where T : struct, Enum
    {
        Array values = Enum.GetValues(typeof(T));
        return (T)values.GetValue(GetRandomInt(0, values.Length))!;
    }
}