@echo off

REM 1. Create the build folder one level above the script folder (in the root CGameEngine folder)
if not exist "%~dp0..\build" mkdir "%~dp0..\build"

REM 2. Jump into that build folder
pushd "%~dp0..\build"
pwd

REM 3. Compile using the script's permanent folder path to find the code file
cl -Zi "%~dp0\win32_handmade.cpp" user32.lib gdi32.lib

REM 4. Return to wherever you were before
popd
