cmake_minimum_required(VERSION 3.10)

project(td1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_executable(stack
    main.cpp
    pile_table.cpp
    1.2.cpp
)
