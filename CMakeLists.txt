cmake_minimum_required(VERSION 3.13)
project(impresario-serialization VERSION 0.1)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(impresario-serialization INTERFACE)
target_include_directories(impresario-serialization INTERFACE compiled/cpp)
