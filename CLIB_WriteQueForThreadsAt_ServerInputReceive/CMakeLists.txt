cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_ServerInputReceive VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_ServerInputReceive STATIC
        include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h
        include/WriteEnableForThreadsAt_ServerInputReceive__Framework.h
        include/WriteEnableForThreadsAt_ServerInputReceive__Global.h
        include/WriteEnableForThreadsAt_ServerInputReceive__App.h
        include/WriteEnableForThreadsAt_ServerInputReceive__Control.h
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
