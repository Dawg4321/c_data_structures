cmake_minimum_required(VERSION 3.25)

include(../../CMakeLists.txt)
project(vector_example)

add_executable(vector_example vector_example.c)

target_link_libraries(vector_example vector)