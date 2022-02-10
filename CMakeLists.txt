cmake_minimum_required(VERSION 3.0.0)
project(dsacpp VERSION 0.1.0)

include(CTest)
enable_testing()

set(SOURCES src/array_copy.cpp src/test.cpp)

add_executable(myarray ${SOURCES})

target_include_directories(myarray
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

#牛哇
# add_executable(cxxtest cxxtest/constconst.cpp)
# add_executable(functionconst cxxtest/functionconst.cpp)
# add_executable(ptrconst cxxtest/ptrconst.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
