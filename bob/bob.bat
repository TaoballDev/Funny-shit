@echo off

echo Compiling and running C# program to create notepads...
csc /out:create_notepads.exe create_notepads.cs
create_notepads.exe

echo.
echo All files created. Press any key to delete them.
pause > nul

rem Delete the created text files
for /L %%i in (1, 1, 9) do (
    del "file%%i.txt"
    echo Deleted file%%i.txt
)

echo All files deleted.
pause > nul
