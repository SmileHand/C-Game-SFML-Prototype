@echo off
REM Compila sin borrar el build anterior
cmake -S . -B build -G "MinGW Makefiles" -DCMAKE_CXX_COMPILER=g++
cmake --build build
build\MiJuegoSFML.exe
echo Compilación completada.
pause
