cmake_minimum_required(VERSION 2.6)

project(testORC)

set(CMAKE_CXX_STANDARD 11)

add_executable(testORC test.cpp)
include_directories(${CMAKE_BINARY_DIR}/../orc)

target_link_libraries(testORC ${CMAKE_BINARY_DIR}/liborc.a ${CMAKE_BINARY_DIR}/liblz4.a
  ${CMAKE_BINARY_DIR}/libsnappy.a ${CMAKE_BINARY_DIR}/libprotobuf.a ${CMAKE_BINARY_DIR}/libz.a ${CMAKE_BINARY_DIR}/libprotoc.a)
