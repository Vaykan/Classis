cmake_minimum_required(VERSION 3.26)
project(Classis)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_EXE_LINKER_FLAGS "-static")

set(optimizations "-Ofast -funroll-loops -mavx2")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${optimizations}")

include_directories(.)

add_executable(Classis
        Classis.cpp
        Classis.h
        Fight.cpp
        Fight.h
        Person.cpp
        Person.h)
