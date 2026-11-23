cmake_minimum_required(VERSION 3.16)
project(video-grab-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(videograbtool
    src/main.cpp
    src/grabber.cpp
    src/sites.cpp
    src/convert.cpp
)

target_include_directories(videograbtool PRIVATE include)

if(WIN32)
    target_link_libraries(videograbtool PRIVATE userenv)
endif()
