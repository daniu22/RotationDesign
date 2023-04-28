cmake_minimum_required(VERSION 3.10)
project(RotationDesign)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(RotationDesign
        RotationRepresent.h RotationDesign.cpp test.cpp test.h test.h)
