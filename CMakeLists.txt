cmake_minimum_required(VERSION 3.12)
project(lmfi VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 14)

# Add dependencies
find_package(OpenCV 3.4.3 EXACT REQUIRED CONFIG)
add_subdirectory(extern/Catch2)

enable_testing()

# Add our targets
add_subdirectory(src)
