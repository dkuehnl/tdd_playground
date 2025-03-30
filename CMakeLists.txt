cmake_minimum_required(VERSION 3.10.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON)

project(tdd_playground VERSION 0.1.0 LANGUAGES C CXX)

include_directories(${CMAKE_SOURCE_DIR}/includes)
add_library(my_library src/module.cpp src/class.cpp)
add_executable(tdd_playground src/main.cpp)
target_link_libraries(tdd_playground PRIVATE my_library)

include(CTest)
enable_testing()
add_subdirectory(tests)

