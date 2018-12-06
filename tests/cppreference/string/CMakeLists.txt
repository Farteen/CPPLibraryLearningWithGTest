file(GLOB SRCS *.cpp)
message(STATUS "cppreference learning: " ${SRCS})
add_executable(cppreference_learning ${SRCS})
target_link_libraries(cppreference_learning gtest)