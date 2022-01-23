cmake_minimum_required(VERSION 3.0.0)
project(dsamain VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(dsamain array_copy.cpp)

#牛哇
add_executable(cxxtest cxxtest/what_happen_new.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
