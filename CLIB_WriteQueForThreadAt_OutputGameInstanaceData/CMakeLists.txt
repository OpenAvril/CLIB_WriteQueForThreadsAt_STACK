cmake_minimum_required(VERSION 3.28.3)
project(CLIB_WriteQueForThreadsAt_ClientInputSend VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_WriteQueForThreadsAt_ClientInputSend STATIC
        include/CLIB_WriteQueForThreadAt_OutputGameInstanaceData.h
        src/CLIB_WriteQueForThreadAt_OutputGameInstanaceData.cpp
        include/WriteQueForThreadAt_OutputGameInstanaceData_Framework.h
        src/WriteQueForThreadsAt_OutputGameInstanaceData_Framework.cpp
        include/WriteQueForThreadAt_OutputGameInstanaceData_Global.h
        src/WriteQueForThreadsAt_OutputGameInstanaceData_Global.cpp
        include/WriteQueForThreadAt_OutputGameInstanaceData.h
        src/WriteQueForThreadsAt_OutputGameInstanaceData.cpp
        include/WriteQueForThreadAt_OutputGameInstanaceData_Control.h
        src/WriteQueForThreadsAt_OutputGameInstanaceData_Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)