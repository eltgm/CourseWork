cmake_minimum_required(VERSION 3.12)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
add_executable(untitled2 main.cpp classes/base.cpp headers/base.h classes/application.cpp headers/application.h classes/game.cpp headers/game.h classes/screen.cpp headers/screen.h classes/file_reader.cpp headers/file_reader.h)