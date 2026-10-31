@echo off
echo [1/3] Compilando binario...

:: Agregamos -I para que encuentre los headers si los moviste
g++ main.cpp src/*.cpp -o program.exe

:: Verificamos si la compilacion fue exitosa antes de seguir
if %errorlevel% equ 0 (
    echo [2/3] Limpiando archivos temporales...
    if exist *.o del *.o
    
    echo [3/3] Ejecutando programa...
    echo ---------------------------------------
    :: Usamos .\ para asegurar la ejecucion en Windows
    .\program.exe
) else (
    echo [!] ERROR: La compilacion fallo. Revisa el codigo.
    pause
)