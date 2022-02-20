cmake_minimum_required(VERSION 3.5.0)
project(dsacpp VERSION 0.1.0)

set( CMAKE_CXX_STANDARD 11 )

include(CTest)
enable_testing()


add_executable(myarray src/test.cpp)

target_include_directories(myarray PRIVATE include/vector)

#牛哇
# add_executable(cxxtest cxxtest/constconst.cpp)
# add_executable(functionconst cxxtest/functionconst.cpp)
# add_executable(ptrconst cxxtest/ptrconst.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
