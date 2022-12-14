project(qubo)
cmake_minimum_required(VERSION 3.0)
#
set(qubo_lib_src ${CMAKE_CURRENT_SOURCE_DIR}/../source/qubo.cpp
                 ${CMAKE_CURRENT_SOURCE_DIR}/../source/qubo.hpp
                 ${CMAKE_CURRENT_SOURCE_DIR}/../source/util_serial_loop.cpp
                 ${CMAKE_CURRENT_SOURCE_DIR}/../source/util_serial_loop.hpp)
SOURCE_GROUP("Source Files\\qubo" FILES ${qubo_lib_src} )
#
set(qubo_test_src ${CMAKE_CURRENT_SOURCE_DIR}/../source/main.cpp)
SOURCE_GROUP("Source Files\\qubo_test" FILES ${qubo_test_src} )
#
add_library(qubo_lib ${qubo_lib_src})
#
add_executable (qubo_test ${qubo_test_src} )
target_link_libraries (qubo_test LINK_PUBLIC qubo_lib)
#
