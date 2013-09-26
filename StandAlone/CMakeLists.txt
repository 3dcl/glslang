file(GLOB ROOT_SOURCE *.cpp)
file(GLOB ROOT_HEADER *.hpp *.inl *.h)
file(GLOB ROOT_CODEGEN ../glslang/GenericCodeGen/*.cpp ../glslang/GenericCodeGen/*.h)
file(GLOB ROOT_OGLCOMPILIER ../OGLCompilersDLL/*.cpp ../OGLCompilersDLL/*.h)

source_group("GL Compilier Files" FILES ${ROOT_OGLCOMPILIER})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/glslang/public)

source_group("Shader Files" FILES ${SHADER_PATH})
add_executable(${TARGET_STANDALONE} ${ROOT_SOURCE} ${ROOT_HEADER} ${ROOT_CODEGEN} ${ROOT_OGLCOMPILIER})

target_link_libraries(${TARGET_STANDALONE} ${TARGET_GLSLANG} ${BINARY_FILES})

