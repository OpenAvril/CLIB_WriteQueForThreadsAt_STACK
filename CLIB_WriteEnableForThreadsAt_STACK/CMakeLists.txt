cmake_minimum_required(VERSION 3.20)
project(CLIB_WriteEnableForThreadsAt_STACK VERSION 1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the library (STATIC or SHARED)
add_library(CLIB_WriteEnableForThreadsAt_STACK SHARED
        include/CLIB_WriteEnableForThreadsAt_STACK.h
        src/CLIB_WriteEnableForThreadsAt_STACK.cpp
        include/WriteEnableForThreadsAt_STACK_Framework.h
        src/WriteEnableForThreadsAt_STACK_Framework.cpp
        include/WriteEnableForThreadsAt_STACK_Global.h
        src/WriteEnableForThreadsAt_STACK_Global.cpp
        include/WriteEnableForThreadsAt_STACK.h
        src/WriteEnableForThreadsAt_STACK.cpp
        include/WriteEnableForThreadsAt_STACK_Control.h
        src/WriteEnableForThreadsAt_STACK_Control.cpp
)

# Define include directories for public headers
target_include_directories(CLIB_WriteEnableForThreadsAt_STACK PUBLIC include)
