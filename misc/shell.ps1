# 1. Load the Visual Studio PowerShell Plugin
Import-Module "G:\IDE\VisualStudioProduct\Common7\Tools\Microsoft.VisualStudio.DevShell.dll"

# 2. Activate the compiler variables for 64-bit architecture
Enter-VsDevShell -VsInstallPath "G:\IDE\VisualStudioProduct" -SkipAutomaticLocation -DevCmdArguments "-arch=x64"

# 3. Add misc folder to path
$env:Path = "$env:Path;G:\Projects\Personnel\HandmadeHero\CGameEngine\misc"
