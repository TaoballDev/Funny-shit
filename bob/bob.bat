@echo off

echo Compiling C# programs...

rem Compile create_notepads.cs
csc /out:create_notepads.exe create_notepads.cs

rem Compile process_notepads.cs
csc /out:process_notepads.exe process_notepads.cs

rem Run create_notepads.exe
echo Creating notepad files...
create_notepads.exe

rem Run process_notepads.exe
echo.
echo Processing notepad files...
process_notepads.exe

echo.
echo All files processed. Press any key to delete them.
pause > nul

rem Delete the created text files
for /L %%i in (1, 1, 9) do (
    del "file%%i.txt"
    echo Deleted file%%i.txt
)

echo All files deleted.
pause > nul
