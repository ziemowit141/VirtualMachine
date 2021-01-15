cmake_minimum_required(VERSION 3.17)

project(TESTS)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)
add_executable(tests example_test.cpp)
message(STATUS ${GTEST_BOTH_LIBRARIES}) # both libraries includes a gtest_main which allows you not to write a main()
target_link_libraries(tests ${GTEST_BOTH_LIBRARIES} pthread vmmemorylib) # pthread is used by GTest