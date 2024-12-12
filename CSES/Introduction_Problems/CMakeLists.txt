cmake_minimum_required(VERSION 3.25)
project(Introduction_Problems)

set(CMAKE_CXX_STANDARD 17)
# Obtener todos los archivos fuente .cpp en el directorio del proyecto
file(GLOB SOURCES "src/*.cpp")

# Crear un ejecutable para cada archivo fuente .cpp encontrado
foreach(SOURCE ${SOURCES})
    get_filename_component(EXECUTABLE_NAME ${SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCE})
endforeach()

add_executable(Introduction_Problems main.cpp)
add_executable(p2 p2.cpp)
add_executable(p3 p3.cpp)