cmake_minimum_required(VERSION 3.24)

set(PROJECT_NAME my_math)
project(${PROJECT_NAME} LANGUAGES CXX)

add_library(${PROJECT_NAME} STATIC
    my_math.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

target_compile_options(${PROJECT_NAME} PRIVATE
    -Wall
    -Wextra
    -Werror
    -pedantic
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)