cmake_minimum_required(VERSION 3.10)

project(Template)

find_package(PkgConfig REQUIRED)
pkg_check_modules(FFMPEG REQUIRED IMPORTED_TARGET libavformat libavcodec
libavutil libswresample libswscale sdl)

include_directories(include)
file(GLOB SOURCES "src/*c")
add_executable(Template ${SOURCES})
target_link_libraries(Template PUBLIC PkgConfig::FFMPEG)

 


