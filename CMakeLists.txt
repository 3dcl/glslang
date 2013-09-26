cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
cmake_policy(VERSION 2.6)

project(glslang)
enable_testing()

set(TARGET_GLSLANG glslang)
set(TARGET_STANDALONE StandAlone)

add_subdirectory(glslang)
add_subdirectory(StandAlone)
