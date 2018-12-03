cmake_minimum_required(VERSION 3.12)
project(CPPLibraryLearning)

include_directories(${PROJECT_SOURCE_DIR}/vendors)

if (UNIX)
    SET(DEPENDENT_LIBRARIES gtest)
endif ()

add_subdirectory(vendors)
add_subdirectory(tests)



