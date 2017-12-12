cmake_minimum_required(VERSION 3.8)
project(ProjetCPP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Book.h Book.cpp Comic.h Poetry.h Comic.cpp Poetry.cpp)
add_executable(ProjetCPP ${SOURCE_FILES})