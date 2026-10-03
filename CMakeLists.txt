cmake_minimum_required(VERSION 4.0)
project(FeedHandler LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost REQUIRED)

add_executable(FeedHandler
    src/main.cpp
    src/types/states.hpp
    src/types/level.hpp
    src/types/depthevent.hpp
)

target_link_libraries(FeedHandler PRIVATE Boost::headers)
target_compile_definitions(FeedHandler PRIVATE _WIN32_WINNT=0x0A00)