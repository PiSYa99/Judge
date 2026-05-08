cmake_minimum_required(VERSION 3.10.0)
project(Judge VERSION 0.1.0 LANGUAGES C CXX)


include(CTest)
enable_testing()

add_executable (judge
    src/runner/ProcessRunner.cpp
    src/temp/test.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_include_directories(judge PRIVATE include)