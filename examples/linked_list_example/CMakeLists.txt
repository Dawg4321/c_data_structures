cmake_minimum_required(VERSION 3.25)

include(../../CMakeLists.txt)
project(linked_list_example)

add_executable(linked_list_example linked_list_example.c)


target_link_libraries(linked_list_example linked_list)