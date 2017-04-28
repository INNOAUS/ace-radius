cmake_minimum_required(VERSION 2.8.12)
project(ace-radius)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(ace-radius STATIC ${SOURCES})
target_include_directories(ace-radius PUBLIC "include")
target_include_directories(ace-radius PRIVATE "include/ace-radius")
target_compile_definitions(ace-radius PRIVATE HAVE_SYS_IOCTL_H HAVE_SOCKLEN_T)
