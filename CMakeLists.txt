cmake_minimum_required(VERSION 3.25)

project(cocoboard
    VERSION 0.0.1
    DESCRIPTION "Keyboard implemented with STM32F411"
    LANGUAGES C CXX)

message("C flags: ${CMAKE_C_FLAGS}")
message("C++ flags: ${CMAKE_CXX_FLAGS}")

add_executable(cocoboard main.cpp)

#TODO: this will have to be added sooner or later.
#target_link_libraries(cocoboard gcc)

