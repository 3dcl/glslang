file(GLOB ROOT_INDEPENDENT ./MachineIndependent/*.cpp ./MachineIndependent/*.h)
file(GLOB ROOT_PREPROCESSOR ./MachineIndependent/preprocessor/*.cpp ./MachineIndependent/preprocessor/*.h)
file(GLOB ROOT_HEADER ./include/*.h)
file(GLOB ROOT_PUBLIC ./Public/*.h)

if(WIN32)
	file(GLOB ROOT_OSDEPENDENT ./OSDependent/Windows/*.cpp ./OSDependent/Windows/*.h)
else()
	file(GLOB ROOT_OSDEPENDENT ./OSDependent/Posix/*.cpp ./OSDependent/Posix/*.h)
endif()

source_group("Public Files" FILES ${ROOT_PUBLIC})
source_group("Source Files" FILES ${ROOT_INDEPENDENT})
source_group("Header Files" FILES ${ROOT_HEADER})
source_group("Preprocessor Files" FILES ${ROOT_PREPROCESSOR})
source_group("OS Dependent Files" FILES ${ROOT_OSDEPENDENT})

if(WIN32)
	set(BISON ${CMAKE_CURRENT_SOURCE_DIR}/../tools/bison.exe)
else()
	set(BISON bison)
endif()

add_library(${TARGET_GLSLANG} STATIC ${ROOT_PUBLIC} ${ROOT_INDEPENDENT} ${ROOT_HEADER} ${ROOT_PREPROCESSOR} ${ROOT_OSDEPENDENT})
add_custom_command(
	TARGET ${TARGET_GLSLANG} PRE_BUILD
	COMMAND ${BISON} -t -v -d ${CMAKE_CURRENT_SOURCE_DIR}/MachineIndependent/glslang.y
	COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_BINARY_DIR}/glslang.tab.h ${CMAKE_CURRENT_SOURCE_DIR}/MachineIndependent/glslang_tab.cpp.h
	COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_BINARY_DIR}/glslang.tab.c ${CMAKE_CURRENT_SOURCE_DIR}/MachineIndependent/gen_glslang_tab.cpp)
add_custom_command(
	TARGET ${TARGET_GLSLANG} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:${TARGET_GLSLANG}> ${CMAKE_CURRENT_SOURCE_DIR}/../Install/${INSTALL_DIRECTORY})



