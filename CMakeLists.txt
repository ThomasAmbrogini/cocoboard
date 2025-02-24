cmake_minimum_required(VERSION 3.25)

project(cocoboard
    VERSION 0.0.1
    DESCRIPTION "Keyboard implemented with STM32F411"
    LANGUAGES C CXX)

add_executable(cocoboard main.cpp)
target_link_libraries(cocoboard PRIVATE stdc++)

