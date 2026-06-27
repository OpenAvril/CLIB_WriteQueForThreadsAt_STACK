cmake_minimum_required(VERSION 3.28.3)
project(CLIB_WriteQueForThreadsAt_ClientInputSend VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_WriteQueForThreadsAt_ClientInputSend STATIC
        include/CLIB_WriteQueForThreadAt_InputPerihperalSamples.h
        src/CLIB_WriteQueForThreadAt_InputPerihperalSamples.cpp
        include/WriteQueForThreadAt_InputPerihperalSamples_Framework.h
        src/WriteQueForThreadAt_InputPerihperalSamples_Framework.cpp
        include/WriteQueForThreadAt_InputPerihperalSamples_Global.h
        src/WriteQueForThreadAt_InputPerihperalSamples_Global.cpp
        include/WriteQueForThreadAt_InputPerihperalSamples.h
        src/WriteQueForThreadAt_InputPerihperalSamples.cpp
        include/WriteQueForThreadAt_InputPerihperalSamples_Control.h
        src/WriteQueForThreadAt_InputPerihperalSamples_Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)