cmake_minimum_required(VERSION 3.24)

set(PROJECT_NAME my_math)
project(${PROJECT_NAME} LANGUAGES CXX)

add_library(my_math
    my_math.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

add_compile_options(-Wall -Wextra -Werror -pedantic)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)