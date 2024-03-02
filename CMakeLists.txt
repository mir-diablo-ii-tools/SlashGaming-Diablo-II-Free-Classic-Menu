cmake_minimum_required(VERSION 3.11)

# Name of the project, also is the name of the file
project(SGD2FreeClassicMenu)

# Define requirements for C
set(CMAKE_C_STANDARD 90)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Enable NASM
set(CMAKE_ASM_NASM_OBJECT_FORMAT win32)
enable_language(ASM_NASM)

# Remove MinGW compiled binary "lib" prefix
if (MINGW)
    set(CMAKE_IMPORT_LIBRARY_PREFIX "")
    set(CMAKE_SHARED_LIBRARY_PREFIX "")
    set(CMAKE_STATIC_LIBRARY_PREFIX "")
endif (MINGW)

add_subdirectory("third_party")

# Output DLL
add_library(${PROJECT_NAME} SHARED)

add_subdirectory("src")
add_subdirectory("include")

target_compile_definitions(${PROJECT_NAME} PRIVATE NOMINMAX)
target_include_directories(${PROJECT_NAME}
    PRIVATE
        "${CMAKE_SOURCE_DIR}/src"
    PUBLIC
        "${CMAKE_SOURCE_DIR}/include")

target_link_libraries(${PROJECT_NAME} libSGD2MAPIc libMDCc)
add_dependencies(${PROJECT_NAME} libSGD2MAPIc libMDCc)

# Project source listing
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES})
