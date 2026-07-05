cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_InputPerihperalSamples VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_InputPerihperalSamples STATIC
        include/CLIB_WriteEnableForThreadsAt_InputPerihperalSamples.h
        src/CLIB_WriteEnableForThreadsAt_InputPerihperalSamples.cpp
        include/WriteEnableForThreadsAt_InputPerihperalSamples__Framework.h
        src/WriteEnableForThreadsAt_InputPerihperalSamples__Framework.cpp
        include/WriteEnableForThreadsAt_InputPerihperalSamples__Global.h
        src/WriteEnableForThreadsAt_InputPerihperalSamples__Global.cpp
        include/WriteEnableForThreadsAt_InputPerihperalSamples__App.h
        src/WriteEnableForThreadsAt_InputPerihperalSamples__App.cpp
        include/WriteEnableForThreadsAt_InputPerihperalSamples__Control.h
        src/WriteEnableForThreadsAt_InputPerihperalSamples__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
