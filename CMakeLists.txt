cmake_minimum_required(VERSION 3.15)
project(MiJuegoSFML VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Definir SFML estático
add_definitions(-DSFML_STATIC)

# Ejecutable
# Reemplaza la línea add_executable(...)
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(MiJuegoSFML ${SOURCES})

# Carpeta de headers de SFML
target_include_directories(MiJuegoSFML PRIVATE 
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/include"
    include
)

# Linkear directamente las librerías estáticas
target_link_libraries(MiJuegoSFML
    PRIVATE
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libsfml-graphics-s.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libsfml-window-s.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libsfml-system-s.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libsfml-audio-s.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libsfml-network-s.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libsfml-main.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libfreetype.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libFLAC.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libogg.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libvorbis.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libvorbisfile.a"
    "C:/Users/drago/Downloads/SFML-3.0.2-sources/SFML-3.0.2/build/lib/libvorbisenc.a"
    winmm gdi32 opengl32
)
