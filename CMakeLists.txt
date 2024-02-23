cmake_minimum_required(VERSION 3.26)
project(Classis)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_EXE_LINKER_FLAGS "-static")


include_directories(.)

add_executable(Classis
        Classis.cpp
        Classis.h
        Fight.cpp
        Fight.h
        Person.cpp
        Person.h)
