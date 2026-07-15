cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_SIMULATION_InputSamples VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_SIMULATION_InputSamples STATIC
        include/CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples.h
        src/CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples.cpp
        include/WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework.h
        src/WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework.cpp
        include/WriteEnableForThreadsAt_SIMULATION_InputSamples__Global.h
        src/WriteEnableForThreadsAt_SIMULATION_InputSamples__Global.cpp
        include/WriteEnableForThreadsAt_SIMULATION_InputSamples__App.h
        src/WriteEnableForThreadsAt_SIMULATION_InputSamples__App.cpp
        include/WriteEnableForThreadsAt_SIMULATION_InputSamples__Control.h
        src/WriteEnableForThreadsAt_SIMULATION_InputSamples__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
