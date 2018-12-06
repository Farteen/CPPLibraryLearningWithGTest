cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 11)
project(CPPLibraryLearning)

add_executable(main main.cpp)

include_directories(${PROJECT_SOURCE_DIR}/vendors)

add_subdirectory(vendors)
add_subdirectory(tests)


