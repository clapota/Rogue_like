cmake_minimum_required(VERSION 3.2)
project(rogue_like)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

set(EXECUTABLE_NAME rogue_like_server)

file(
        GLOB_RECURSE
        source_files
        src/*.cpp
        include/*.hpp
)

include_directories(include/)
include_directories(/usr/include/)

add_executable(
        ${EXECUTABLE_NAME}
        ${source_files}
)

# SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML REQUIRED audio network graphics window system)

if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR} include/ /usr/include/)
    target_link_libraries(${EXECUTABLE_NAME}
            -lsfml-graphics
            -lsfml-window
            -lsfml-system
            -lsfml-network)
endif()