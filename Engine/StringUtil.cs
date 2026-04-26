using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace Utils;

public static class StringUtil
{
    public static string CollectionToString<T>(
    IEnumerable<T> collection,
    Func<T, string> selector)
    {
        var str = "";

        foreach (var element in collection)
        {
            str += $"[{selector(element)}] ";
        }

        return str + '\n';
    }
    
    public static string ToSnakeCase(string text)
    {
        if (string.IsNullOrEmpty(text)) return text;
        return Regex.Replace(text, @"([a-z0-9])([A-Z])", "$1_$2").ToLower();
    }

    public static string GetGenericTypeName(Type type)
    {
        if (type.IsGenericType) {
            string name = type.Name.Split('`')[0];
            string arg = type.GetGenericArguments()[0].Name;
            return $"{name}<{arg}>";
        }

        return type.Name;
    }
    
}