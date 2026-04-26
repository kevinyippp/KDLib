using System;

namespace Utils;

public static class ConsoleUtil
{
    public static void Print(object obj, ConsoleColor color)
    {
        Console.ForegroundColor = color;
        Console.Write(obj.ToString());
        Console.ResetColor();
    }
    
    public static void PrintLine(object obj, ConsoleColor color = ConsoleColor.Black)
    {
        Console.ForegroundColor = color;
        Console.WriteLine(obj.ToString());
        Console.ResetColor();
    }
}