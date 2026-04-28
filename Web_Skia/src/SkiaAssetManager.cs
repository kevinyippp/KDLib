using BlazorApp;
using ConsoleApp;
using Engine.GameObjectModel;
using SkiaSharp;
using System.Net.Http;

public class SkiaAssetManager : IAssetManager
{
    private readonly Dictionary<string, ISprite> _loadedSprites = new();

    public ISprite LoadSprite(string path)
    {
        if (!_loadedSprites.TryGetValue(path, out var sprite))
        {
            throw new Exception($"Asset {path} was not pre-warmed! Web-based engines cannot load on-the-fly.");
        }
        return sprite;
    }

    public async Task PreWarmAsync(HttpClient http, string[] paths)
    {
        foreach (var path in paths)
        {
            var response = await http.GetAsync(path);

            if (!response.IsSuccessStatusCode)
                throw new Exception($"HTTP {(int)response.StatusCode} fetching '{path}'. " +
                                    $"Check the file exists in wwwroot/Assets/.");

            var bytes = await response.Content.ReadAsByteArrayAsync();

            // Blazor WASM SPA fallback returns index.html for missing files with HTTP 200
            var header = System.Text.Encoding.UTF8.GetString(bytes, 0, Math.Min(15, bytes.Length));
            if (header.TrimStart().StartsWith("<"))
                throw new Exception($"'{path}' returned HTML — asset is missing from wwwroot. " +
                                    $"The SPA fallback is intercepting the request.");

            if (bytes.Length == 0)
                throw new Exception($"'{path}' returned empty bytes.");

            SKBitmap? bitmap = null;
            try
            {
                bitmap = SKBitmap.Decode(bytes);
            }
            catch (ArgumentNullException)
            {
                throw new Exception($"SkiaSharp couldn't decode '{path}'. " +
                                    $"Confirm it's a valid PNG/JPEG and not corrupt.");
            }

            if (bitmap == null)
                throw new Exception($"SkiaSharp returned null for '{path}'.");

            _loadedSprites[path] = new SkiaSprite(path, bitmap);
        }
    }
}