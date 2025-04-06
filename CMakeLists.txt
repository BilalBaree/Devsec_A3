
cmake_minimum_required(VERSION 3.10)
project(StudentManager)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(StudentApp src/System.cpp src/main.cpp)
add_executable(UnitTests tests/test_system.cpp src/System.cpp)
