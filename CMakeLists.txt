if (POLICY CMP0048)
  cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)
project(test_wstring VERSION 1.1.0 LANGUAGES CXX)

add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

add_subdirectory(GSL)
include_directories(GSL/include)

cmake_minimum_required(VERSION 3.16)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE GSL)

add_executable(t test.cpp)
