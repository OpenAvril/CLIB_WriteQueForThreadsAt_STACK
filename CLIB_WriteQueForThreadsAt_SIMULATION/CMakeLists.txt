cmake_minimum_required(VERSION 4.2)
project(CLIB_WriteQueForThreadsAt_SIMULATION)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_WriteQueForThreadsAt_SIMULATION STATIC
        include/CLIB_WriteEnableForThreadsAt_SIMULATION.h
        src/CLIB_WriteEnableForThreadsAt_SIMULATION.cpp
        include/WriteEnableForThreadsAt_SIMULATION_Framework.h
        src/WriteEnableForThreadsAt_SIMULATION_Framework.cpp
        include/WriteEnableForThreadsAt_SIMULATION_Global.h
        src/WriteEnableForThreadsAt_SIMULATION_Global.cpp
        include/WriteEnableForThreadsAt_SIMULATION.h
        src/WriteEnableForThreadsAt_SIMULATION.cpp
        include/WriteEnableForThreadsAt_SIMULATION_Control.h
        src/WriteEnableForThreadsAt_SIMULATION_Control.cpp
)
