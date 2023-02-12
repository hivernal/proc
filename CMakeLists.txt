project(container LANGUAGES CXX)

cmake_minimum_required(VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(SOURCE main.cpp)

add_executable(container ${SOURCE})
