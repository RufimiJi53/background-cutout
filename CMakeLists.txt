cmake_minimum_required(VERSION 3.16)
project(background-cutout CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(backgroundcutout
    src/main.cpp
    src/remover.cpp
    src/video.cpp
    src/batch.cpp
)

target_include_directories(backgroundcutout PRIVATE include)

if(WIN32)
    target_link_libraries(backgroundcutout PRIVATE userenv)
endif()
