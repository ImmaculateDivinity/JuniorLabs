cmake_minimum_required(VERSION 3.26)
project(DataStructureVisualization)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(CMAKE_CXX_STANDARD 17)

add_executable(DataStructureVisualization main.cpp)
