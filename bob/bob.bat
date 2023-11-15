@echo off
setlocal enabledelayedexpansion

rem Create 9 text files and write "bob" to each of them
for /l %%i in (1, 1, 9) do (
    echo bob > "file%%i.txt"
    echo Created file%%i.txt
)

echo.
echo All files created. Press any key to delete them.
pause > nul

rem Delete the created text files
for /l %%i in (1, 1, 9) do (
    del "file%%i.txt"
    echo Deleted file%%i.txt
)

echo All files deleted.
pause > nul
