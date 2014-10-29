cmake_minimum_required(VERSION 2.8)

project(glslang)

if(WIN32)
    set(CMAKE_GENERATOR_TOOLSET "v110" CACHE STRING "Platform Toolset" FORCE)
    include(ChooseMSVCCRT.cmake)
elseif(UNIX)
    add_definitions(-fPIC)
else(WIN32)
    message("unkown platform")
endif(WIN32)

# build option for static or dynamic add_library
option(BUILD_STATIC "Build the glslang library as static library." OFF)

if(BUILD_STATIC)
  set(LIBRARY_TYPE STATIC)
else()
  set(LIBRARY_TYPE SHARED)
endif()

add_subdirectory(glslang)
add_subdirectory(OGLCompilersDLL)
add_subdirectory(StandAlone)
add_subdirectory(BIL)
