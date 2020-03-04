cmake_minimum_required(VERSION 3.10)

project(Template)
include_directories(include)
file(GLOB SOURCES "src/*.c")

add_executable(Template ${SOURCES})
