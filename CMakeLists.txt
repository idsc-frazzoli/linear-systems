cmake_minimum_required(VERSION 2.8s)
project(linear_system)

set(CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS} -g -ftest-coverage -fprofile-arcs")
add_executable(linear_system main.cpp)

install(TARGETS linear_system RUNTIME DESTINATION bin)
