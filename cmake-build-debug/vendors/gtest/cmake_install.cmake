# Install script for directory: /Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gtest" TYPE FILE FILES
    "/Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest/gtest-death-test.h"
    "/Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest/gtest-message.h"
    "/Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest/gtest-param-test.h"
    "/Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest/gtest-printers.h"
    "/Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest/gtest-spi.h"
    "/Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest/gtest-test-part.h"
    "/Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest/gtest-typed-test.h"
    "/Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest/gtest.h"
    "/Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest/gtest_pred_impl.h"
    "/Users/yysz02/Desktop/Mooooooves/CPPLibraryLearning/vendors/gtest/gtest_prod.h"
    )
endif()

