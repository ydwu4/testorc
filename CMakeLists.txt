cmake_minimum_required(VERSION 2.6)

project(testORC)

set(CMAKE_CXX_STANDARD 11)

add_executable(testORC test.cpp)
include_directories(${CMAKE_HOME_DIRECTORY}/orc)

target_link_libraries(testORC ${CMAKE_HOME_DIRECTORY}/orc/lib/liborc.a ${CMAKE_HOME_DIRECTORY}/orc/lib/liblz4.a
  ${CMAKE_HOME_DIRECTORY}/orc/lib/libsnappy.a ${CMAKE_HOME_DIRECTORY}/orc/lib/libprotobuf.a ${CMAKE_HOME_DIRECTORY}/orc/lib/libz.a ${CMAKE_HOME_DIRECTORY}/orc/lib/libprotoc.a)
