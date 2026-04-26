using System.Numerics;

namespace KYLib;

public static class Vector2Extensions
{
    //Always use this one if vector's length can be 0 or otherwise in standard library normalized will return <Nan, Nan>
    public static Vector2 Normalize(this Vector2 v) 
    {
        float lengthSq = v.LengthSquared();
        if (lengthSq > 0) {
            return Vector2.Normalize(v);
        }
        return Vector2.Zero;
    }
}