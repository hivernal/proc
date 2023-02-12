project(container LANGUAGES CXX)

cmake_minimum_required(VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(SOURCE cycle_in.cpp  cycle_out.cpp  encryption_in.cpp  encryption_out.cpp  
    main.cpp  replacing_in.cpp  replacing_out.cpp container_constr.cpp, container_in.cpp container_out.cpp)

add_executable(container ${SOURCE})
