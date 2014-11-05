cmake_minimum_required(VERSION 2.8)

include_directories(MachineIndependent ../OGLCompilersDLL ${CMAKE_CURRENT_BINARY_DIR})
if(WIN32)
    add_subdirectory(OSDependent/Windows)
    include_directories(${include_directories} OSDependent/Windows)
elseif(UNIX)
    add_subdirectory(OSDependent/Linux)
    include_directories(${include_directories} OSDependent/Linux)
else(WIN32)
    message("unkown platform")
endif(WIN32)

set(SOURCES
    MachineIndependent/glslang.y
    MachineIndependent/Constant.cpp
    MachineIndependent/InfoSink.cpp
    MachineIndependent/Initialize.cpp
    MachineIndependent/IntermTraverse.cpp
    MachineIndependent/Intermediate.cpp
    MachineIndependent/ParseHelper.cpp
    MachineIndependent/PoolAlloc.cpp
    MachineIndependent/RemoveTree.cpp
    MachineIndependent/Scan.cpp
    MachineIndependent/ShaderLang.cpp
    MachineIndependent/SymbolTable.cpp
    MachineIndependent/Versions.cpp
    MachineIndependent/intermOut.cpp
    MachineIndependent/limits.cpp
    MachineIndependent/linkValidate.cpp
    MachineIndependent/parseConst.cpp
    MachineIndependent/reflection.cpp
    MachineIndependent/preprocessor/Pp.cpp
    MachineIndependent/preprocessor/PpAtom.cpp
    MachineIndependent/preprocessor/PpContext.cpp
    MachineIndependent/preprocessor/PpMemory.cpp
    MachineIndependent/preprocessor/PpScanner.cpp
    MachineIndependent/preprocessor/PpSymbols.cpp
    MachineIndependent/preprocessor/PpTokens.cpp
    GenericCodeGen/CodeGen.cpp
    GenericCodeGen/Link.cpp)

set(PUBLIC_HEADERS
    Public/ShaderLang.h
    Public/ResourceLimits.h  
)
    
set(HEADERS
    ${PUBLIC_HEADERS}
    Include/BaseTypes.h
    Include/Common.h
    Include/ConstantUnion.h
    Include/InfoSink.h
    Include/InitializeGlobals.h
    Include/intermediate.h
    Include/PoolAlloc.h
    Include/revision.h
    Include/ShHandle.h
    Include/Types.h
    MachineIndependent/gl_types.h
    MachineIndependent/Initialize.h
    MachineIndependent/localintermediate.h
    MachineIndependent/ParseHelper.h
    MachineIndependent/reflection.h
    MachineIndependent/RemoveTree.h
    MachineIndependent/Scan.h
    MachineIndependent/ScanContext.h
    MachineIndependent/SymbolTable.h
    MachineIndependent/unistd.h
    MachineIndependent/Versions.h
    MachineIndependent/preprocessor/PpContext.h
    MachineIndependent/preprocessor/PpTokens.h)

find_package(BISON)
if(BISON_FOUND)
    message("bison found")
    BISON_TARGET(GLSLParser MachineIndependent/glslang.y ${CMAKE_CURRENT_BINARY_DIR}/gen_glslang_tab.cpp
                 COMPILE_FLAGS
                 "--defines=${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp.h")
else(BISON_FOUND)
    message("using custom command for bison on glslang.y")
    add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp ${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp.h
                       COMMAND ../tools/bison.exe --defines=${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp.h -t MachineIndependent/glslang.y -o ${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp
                       MAIN_DEPENDENCY MachineIndependent/glslang.y
                       WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
    set(BISON_GLSLParser_OUTPUT_SOURCE ${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp)
endif(BISON_FOUND)

add_library(glslang ${LIBRARY_TYPE} ${BISON_GLSLParser_OUTPUT_SOURCE} ${SOURCES} ${HEADERS})
add_dependencies(glslang GLSLParser)

if(WIN32)
    source_group("Public" REGULAR_EXPRESSION "Public/*")
    source_group("MachineIndependent" REGULAR_EXPRESSION "MachineIndependent/[^/]*")
    source_group("Generated Files" FILES ${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp ${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp.h)
    source_group("Include" REGULAR_EXPRESSION "Include/[^/]*")
    source_group("GenericCodeGen" REGULAR_EXPRESSION "GenericCodeGen/*")
    source_group("MachineIndependent\\Preprocessor" REGULAR_EXPRESSION "MachineIndependent/preprocessor/*")
endif(WIN32)

install(TARGETS glslang 
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        INCLUDES DESTINATION include/glslang)
install(FILES ${PUBLIC_HEADERS} DESTINATION include/glslang)

# find bison
#find_package(BISON REQUIRED)

# pre build target to create bison parser

#add_custom_target(RUN_BISON)
#add_custom_command(
#	TARGET RUN_BISON PRE_BUILD
#	COMMAND ${BISON_EXECUTABLE} -t -v -d ${CMAKE_CURRENT_SOURCE_DIR}/MachineIndependent/glslang.y
#	COMMAND ${CMAKE_COMMAND} -E remove ${CMAKE_CURRENT_SOURCE_DIR}/MachineIndependent/glslang_tab.h
#	COMMAND ${CMAKE_COMMAND} -E remove ${CMAKE_CURRENT_SOURCE_DIR}/MachineIndependent/gen_glslang_tab.cpp
#	COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_BINARY_DIR}/glslang.tab.h ${CMAKE_CURRENT_SOURCE_DIR}/MachineIndependent/glslang_tab.h
#	COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_BINARY_DIR}/glslang.tab.c ${CMAKE_CURRENT_SOURCE_DIR}/MachineIndependent/gen_glslang_tab.cpp
#	)


# build option for static or dynamic add_library
#option(BUILT_STATIC "Build the glslang library as static library." OFF)

#if(BUILT_STATIC)
#  set(LIBRARY_TYPE STATIC)
#else()
#  set(LIBRARY_TYPE SHARED)
#endif()

#file(GLOB ROOT_INDEPENDENT ./MachineIndependent/*.cpp ./MachineIndependent/*.h)
#file(GLOB ROOT_PREPROCESSOR ./MachineIndependent/preprocessor/*.cpp ./MachineIndependent/preprocessor/*.h)
#file(GLOB ROOT_HEADER ./include/*.h)
#file(GLOB ROOT_PUBLIC ./Public/*.h)

#if(WIN32)
#	file(GLOB ROOT_OSDEPENDENT ./OSDependent/Windows/*.cpp ./OSDependent/Windows/*.h)
#else()
#	file(GLOB ROOT_OSDEPENDENT ./OSDependent/Posix/*.cpp ./OSDependent/Posix/*.h)
#endif()

#source_group("Public Files" FILES ${ROOT_PUBLIC})
#source_group("Source Files" FILES ${ROOT_INDEPENDENT})
#source_group("Header Files" FILES ${ROOT_HEADER})
#source_group("Preprocessor Files" FILES ${ROOT_PREPROCESSOR})
#source_group("OS Dependent Files" FILES ${ROOT_OSDEPENDENT})


#add_library(${TARGET_GLSLANG} ${LIBRARY_TYPE} ${ROOT_PUBLIC} ${ROOT_INDEPENDENT} ${ROOT_HEADER} ${ROOT_PREPROCESSOR} ${ROOT_OSDEPENDENT})
#add_dependencies(${TARGET_GLSLANG} RUN_BISON)
#add_custom_command(
#	TARGET ${TARGET_GLSLANG} POST_BUILD
#	COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:${TARGET_GLSLANG}> ${CMAKE_CURRENT_SOURCE_DIR}/../Install/${INSTALL_DIRECTORY})
	
#install(TARGETS ${TARGET_GLSLANG}
#        RUNTIME DESTINATION bin
#        LIBRARY DESTINATION lib
#        ARCHIVE DESTINATION lib/static)