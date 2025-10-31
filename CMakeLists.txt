cmake_minimum_required(VERSION 3.16)
project(ci_cd_lab5 LANGUAGES CXX)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Library with geometry code
add_library(geometry src/rectangle.cpp)
target_include_directories(geometry PUBLIC include)

# Sample application (not used in tests)
add_executable(app src/main.cpp)
target_link_libraries(app PRIVATE geometry)

# ---- Tests ----
enable_testing()
add_executable(test_rectangle tests/test_rectangle.cpp)
target_link_libraries(test_rectangle PRIVATE geometry)
add_test(NAME rectangle_tests COMMAND test_rectangle)
