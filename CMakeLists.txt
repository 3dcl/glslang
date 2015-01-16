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
option(BUILD_STATIC "Build the glslang library as static library." ON)

if(BUILD_STATIC)
  set(LIBRARY_TYPE STATIC)
else()
  set(LIBRARY_TYPE SHARED)
endif()

add_subdirectory(glslang)
add_subdirectory(OGLCompilersDLL)
add_subdirectory(StandAlone)
add_subdirectory(BIL)

# Create debian package
option(BUILD_DEBIAN_PACKAGE  "Creates a debian package" ON)
if(BUILD_DEBIAN_PACKAGE)
    # set project description for packaging
    set(META_PROJECT_NAME        "glslangvalidator")
    set(META_PROJECT_DESCRIPTION "The GLSL reference compiler")
    set(META_VERSION_MAJOR       "1")
    set(META_VERSION_MINOR       "0")
    set(META_VERSION_PATCH       "0")
    set(META_VERSION             "${META_VERSION_MAJOR}.${META_VERSION_MINOR}.${META_VERSION_PATCH}")
    set(META_AUTHOR_ORGANIZATION "3D Content Logistics GmbH")
    set(META_AUTHOR_DOMAIN       "https://github.com/3dcl/glslang")
    set(META_AUTHOR_MAINTAINER   "Marcel Pursche <marcel.pursche@3dcontentlogistics.com>")

    # Package information
    string(TOLOWER ${META_PROJECT_NAME} package_name)          # Package name
    set(CPACK_PACKAGE_NAME                  "${META_PROJECT_NAME}")
    set(CPACK_PACKAGE_VENDOR                "${META_AUTHOR_ORGANIZATION}")
    set(CPACK_PACKAGE_DESCRIPTION_SUMMARY   "${META_PROJECT_DESCRIPTION}")
    set(CPACK_PACKAGE_VERSION               "${META_VERSION}")
    set(CPACK_PACKAGE_VERSION_MAJOR         "${META_VERSION_MAJOR}")
    set(CPACK_PACKAGE_VERSION_MINOR         "${META_VERSION_MINOR}")
    set(CPACK_PACKAGE_VERSION_PATCH         "${META_VERSION_PATCH}")
    set(CPACK_RESOURCE_FILE_LICENSE         "${CMAKE_SOURCE_DIR}/LICENSE")
    set(CPACK_PACKAGE_RELOCATABLE           OFF)

    # Debian package information
    set(CPACK_DEBIAN_PACKAGE_NAME           "${package_name}")
    set(CPACK_DEBIAN_PACKAGE_VERSION        "${CPACK_PACKAGE_VERSION}")
    set(CPACK_DEBIAN_PACKAGE_MAINTAINER     "${META_AUTHOR_MAINTAINER}")
    set(CPACK_DEBIAN_PACKAGE_DESCRIPTION    "${CPACK_PACKAGE_DESCRIPTION_SUMMARY}")
    set(CPACK_DEBIAN_PACKAGE_SECTION        "Development")
    set(CPACK_DEBIAN_PACKAGE_PRIORITY       "optional")
    set(CPACK_DEBIAN_PACKAGE_DEPENDS        "bison")
    set(CPACK_DEBIAN_PACKAGE_HOMEPAGE       "${META_AUTHOR_DOMAIN}")
    set(CPACK_DEBIAN_PACKAGE_CONTROL_EXTRA  "${CMAKE_CURRENT_SOURCE_DIR}/debian_scripts/postinst;")
        
    set(CPACK_GENERATOR "DEB")

    include(CPack)
endif()
