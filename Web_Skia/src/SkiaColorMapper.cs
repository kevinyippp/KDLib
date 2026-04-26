using KYLib.GameObjectLib.GameComponents;
using SkiaSharp;

namespace BlazorApp;

public static class SkiaColorMapper
{
    public static SKColor ToSkia(this GameColor color) => color switch
    {
        GameColor.Cyan    => SKColors.Cyan,
        GameColor.Red     => SKColors.Red,
        GameColor.Black   => SKColors.Black,
        GameColor.White   => SKColors.White,
        GameColor.Emerald => SKColor.Parse("#00C957"),
        _                 => SKColors.White
    };
}