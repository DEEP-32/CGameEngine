# 1. Load the Visual Studio PowerShell Plugin
Import-Module "G:\IDE\VisualStudioProduct\Common7\Tools\Microsoft.VisualStudio.DevShell.dll"

# 2. Activate the compiler variables without changing our current folder
Enter-VsDevShell -VsInstallPath "G:\IDE\VisualStudioProduct" -SkipAutomaticLocation

$env:Path = "$env:Path;G:\Projects\Personnel\HandmadeHero\CGameEngine\misc"
