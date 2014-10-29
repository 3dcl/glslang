cmake_minimum_required(VERSION 2.8)

include_directories(.)
if(WIN32)
    include_directories(../glslang/OSDependent/Windows)
elseif(UNIX)
    include_directories(../glslang/OSDependent/Linux)
else(WIN32)
    message("unkown platform")
endif(WIN32)

set(SOURCES StandAlone.cpp)

add_executable(glslangValidator ${SOURCES})

set(LIBRARIES
    glslang
    OGLCompiler
    OSDependent
    BIL)

if(WIN32)
    set(LIBRARIES ${LIBRARIES} psapi)
elseif(UNIX)
    set(LIBRARIES ${LIBRARIES} pthread)
endif(WIN32)

target_link_libraries(glslangValidator ${LIBRARIES})

if(WIN32)
    source_group("Source" FILES ${SOURCES})
endif(WIN32)

install(TARGETS glslangValidator
        RUNTIME DESTINATION bin)

#find_package(Threads REQUIRED)

#file(GLOB ROOT_SOURCE *.cpp)
#file(GLOB ROOT_HEADER *.hpp *.inl *.h)
#file(GLOB ROOT_CODEGEN ../glslang/GenericCodeGen/*.cpp ../glslang/GenericCodeGen/*.h)
#file(GLOB ROOT_OGLCOMPILIER ../OGLCompilersDLL/*.cpp ../OGLCompilersDLL/*.h)

#source_group("GL Compilier Files" FILES ${ROOT_OGLCOMPILIER})

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/glslang/public)

#add_executable(${TARGET_STANDALONE} ${ROOT_SOURCE} ${ROOT_HEADER} ${ROOT_CODEGEN} ${ROOT_OGLCOMPILIER})
#add_custom_command(
#	TARGET ${TARGET_STANDALONE} POST_BUILD
#	COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:${TARGET_STANDALONE}> ${CMAKE_CURRENT_SOURCE_DIR}/../Install/${INSTALL_DIRECTORY})

#target_link_libraries(${TARGET_STANDALONE} ${TARGET_GLSLANG} ${BINARY_FILES} ${CMAKE_THREAD_LIBS_INIT})

#install(TARGETS ${TARGET_STANDALONE}
#  RUNTIME DESTINATION bin
#  LIBRARY DESTINATION lib
#  ARCHIVE DESTINATION lib/static)