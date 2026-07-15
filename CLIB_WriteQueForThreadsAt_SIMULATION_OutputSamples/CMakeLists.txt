cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_SIMULATION_OutputSamples VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_SIMULATION_OutputSamples STATIC
        include/CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples.h
        src/CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples.cpp
        include/WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework.h
        src/WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework.cpp
        include/WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global.h
        src/WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global.cpp
        include/WriteEnableForThreadsAt_SIMULATION_OutputSamples__App.h
        src/WriteEnableForThreadsAt_SIMULATION_OutputSamples__App.cpp
        include/WriteEnableForThreadsAt_SIMULATION_OutputSamples__Control.h
        src/WriteEnableForThreadsAt_SIMULATION_OutputSamples__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
