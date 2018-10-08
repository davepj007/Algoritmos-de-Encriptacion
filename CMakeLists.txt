cmake_minimum_required(VERSION 3.2)
project(Algoritmos-de-Encriptacion)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algoritmos-de-Encriptacion main.cpp Algoritmos/Cesar.cpp Algoritmos/Cesar.h Algoritmos/Vigenere.h Algoritmos/Vigenere.cpp Algoritmos/Feistel.cpp Algoritmos/Feistel.h)