@echo off
setlocal
set "SRC=%~1"
set "DIR=%~dp1"
set "NAME=%~n1"
set "EXE=%DIR%%NAME%.exe"

echo Compiling %NAME%.cpp ...
g++ -std=c++14 -O2 -Wall "%SRC%" -o "%EXE%"
if errorlevel 1 (
    echo COMPILATION FAILED
    exit /b 1
)

echo Running...
echo ------------------------------
"%EXE%" < "%DIR%input.txt" > "%DIR%output.txt"
type "%DIR%output.txt"
echo ------------------------------
echo Done. Output also saved to output.txt
endlocal