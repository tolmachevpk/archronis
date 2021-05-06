cmake_minimum_required(VERSION 3.19)
project(archronis)

set(CMAKE_CXX_STANDARD 20)

add_executable(archronis main.cpp Headers/read_files.h Sources/read_files.cpp Headers/lz77.h Sources/lz77.cpp Headers/compressed_data.h Sources/compressed_data.cpp Headers/node.h Sources/node.cpp Headers/converter_int_bits.h Sources/converter_int_bits.cpp Headers/write_files_from_archive.h Sources/write_files_from_archive.cpp)