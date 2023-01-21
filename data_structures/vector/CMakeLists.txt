add_library(vector STATIC)

target_sources(vector
  PRIVATE   ${CMAKE_CURRENT_LIST_DIR}/vector.c
  PUBLIC    ${CMAKE_CURRENT_LIST_DIR}/vector.h)

target_include_directories(vector
  PUBLIC    ${CMAKE_CURRENT_LIST_DIR})