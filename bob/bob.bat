@echo off
setlocal enabledelayedexpansion

echo Opening Python script to create notepads...
python create_notepads.py

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
