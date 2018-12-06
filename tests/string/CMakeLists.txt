file(GLOB SRCS *.cpp)
message(STATUS "string library test learning: " ${SRCS})
add_executable(string_test ${SRCS} test1.cpp VariadicTemplate.cpp LibraryOverview.cpp StringAndRegularExpression.cpp)
target_link_libraries(string_test gtest)