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
    if(WIN32)
        message("using custom command for bison on glslang.y")
        add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp ${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp.h
                        COMMAND ../tools/bison.exe --defines=${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp.h -t MachineIndependent/glslang.y -o ${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp
                        MAIN_DEPENDENCY MachineIndependent/glslang.y
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
        set(BISON_GLSLParser_OUTPUT_SOURCE ${CMAKE_CURRENT_BINARY_DIR}/glslang_tab.cpp)
    else(WIN32)
        message( FATAL_ERROR "Bison not found: please install bison or set the right path." )
    endif(WIN32)
endif(BISON_FOUND)

add_library(glslang ${LIBRARY_TYPE} ${BISON_GLSLParser_OUTPUT_SOURCE} ${SOURCES} ${HEADERS})

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