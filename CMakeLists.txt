cmake_minimum_required(VERSION 3.16)

project(Judge)

set(CMAKE_CXX_STANDARD 20)

add_executable(judge
    temp/main.cpp
    src/runner/ProcessRunner.cpp
)

target_include_directories(judge PRIVATE include)