 
cmake_minimum_required(VERSION 3.10)
project(OrderProcessorDemo)

# Enable testing
enable_testing()

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add source and include directories
include_directories(src)

# Add the main library
add_library(OrderProcessor src/OrderProcessor.cpp)

# Add tests
add_subdirectory(tests)
