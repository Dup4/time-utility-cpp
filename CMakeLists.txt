option(TIME_UTILITY_BUILD_TESTS "Build all of time-utility's own tests." OFF)

cmake_minimum_required(VERSION 3.14)

project(time-utility VERSION 0.0.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# place binaries and libraries according to GNU standards
include(GNUInstallDirs)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

include_directories(
    ${PROJECT_SOURCE_DIR}/include/
)

add_library(time-utility INTERFACE)
target_include_directories(time-utility INTERFACE ${PROJECT_SOURCE_DIR}/include/)

if(TIME_UTILITY_BUILD_TESTS)
    enable_testing()

    add_subdirectory(test/)
endif()
