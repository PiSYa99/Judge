cmake_minimum_required(VERSION 3.16)

project(Judge)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "C:/Users/Admin/Desktop/Working/Judge/executable")

add_executable(judge
    src/main.cpp
    src/ProcessRunner.cpp
    src/Compiler.cpp
)

target_include_directories(judge PRIVATE include)