cmake_minimum_required(VERSION 3.10)

project(CathedralOfShadows)

set(CMAKE_CXX_STANDARD 14)

add_executable(app src/main.cpp src/parser/Parser.cpp src/model/Demon.cpp)

add_subdirectory(include)

target_link_libraries(app PUBLIC nlohmann_json)

target_include_directories(app PUBLIC "${PROJECT_SOURCE_DIR}/include")
