cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_ServerOutputSend VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_ServerOutputSend STATIC
        include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h
        include/WriteEnableForThreadsAt_ServerOutputSend__Framework.h
        include/WriteEnableForThreadsAt_ServerOutputSend__Global.h
        include/WriteEnableForThreadsAt_ServerOutputSend__App.h
        include/WriteEnableForThreadsAt_ServerOutputSend__Control.h
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
