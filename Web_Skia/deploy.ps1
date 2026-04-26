$publishDir = "bin\Release\net10.0\publish\wwwroot"
$indexPath = "$publishDir/index.html"
$content = Get-Content $indexPath -Raw

# Fix base href
$content = $content -replace '<base href="/" />', '<base href="/KDLib/" />'

# Remove integrity hashes from importmap
$content = $content -replace ',\s*"scopes":\s*\{\},\s*"integrity":\s*\{[^}]*\}', ''
$content = $content -replace '"scopes":\s*\{\},\s*"integrity":\s*\{[^}]*\}', ''

# Fix leftover scopes trailing content
$content = $content -replace '"scopes":\s*\{\},\s*\n\s*\n', '"scopes": {}'

# Remove integrity attribute from preload link
$content = $content -replace '\s*integrity="sha256-[^"]*"', ''

# Auto detect fingerprinted blazor js filename
$blazorJs = (Get-ChildItem "$publishDir/_framework/blazor.webassembly.*.js" | Where-Object { $_.Name -notmatch '\.(br|gz)$' }).Name

# Replace script tag
$content = $content -replace '<script src="_framework/blazor\.webassembly[^"]*\.js"></script>', @"
<script src="_framework/$blazorJs" autostart="false"></script>
<script>
    Blazor.start({
        loadBootResource: function (type, name, defaultUri, integrity) {
            if (type === 'dotnetjs') return defaultUri;
            return fetch(defaultUri, { cache: 'no-cache' });
        }
    });
</script>
"@

Set-Content $indexPath $content
Write-Host "Patched! Using $blazorJs"