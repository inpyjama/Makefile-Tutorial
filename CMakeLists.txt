cmake_minimum_required(VERSION 3.10)
project(calculator)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -g")

# Source directory
set(SRCDIR src)

# Find C source files recursively
file(GLOB_RECURSE SOURCES ${SRCDIR}/*.c)

# Main target
set(TARGET calculator)

add_executable(${TARGET} ${SOURCES})