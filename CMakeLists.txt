cmake_minimum_required(VERSION 3.19)
project(archronis)

set(CMAKE_CXX_STANDARD 20)

add_executable(archronis main.cpp Headers/read_bytes.h Sources/read_bytes.cpp)