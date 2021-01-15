cmake_minimum_required(VERSION 3.17)

project(VMMemory)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(VMMemorySrc VMMemory.cpp VMMemory.h)
message(STATUS ${VMMemorySrc})
add_library(vmmemorylib STATIC ${VMMemorySrc})
target_compile_features(vmmemorylib PUBLIC cxx_std_17)
target_include_directories (vmmemorylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}) # SUPER KOMENDA!!! MOŻNA KRÓTSZE ŚCIEŻKI PODAWAĆ DZIĘKI NIEJ!!, ZOBACZ ./test/example_tests