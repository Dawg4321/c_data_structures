add_library(linked_list STATIC)

target_sources(linked_list
  PRIVATE   ${CMAKE_CURRENT_LIST_DIR}/linked_list.c
  PUBLIC    ${CMAKE_CURRENT_LIST_DIR}/linked_list.h)

target_include_directories(linked_list
  PUBLIC    ${CMAKE_CURRENT_LIST_DIR})