cmake_minimum_required(VERSION 3.20)
project(my_stdlib)
set(CMAKE_C_STANDARD 23)

add_executable(my_stdlib src/main.c src/abs.c src/cvector.c)
target_include_directories(my_stdlib PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
