target_sources(${PROJECT_NAME}
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/patches.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/patches.h")

add_subdirectory("music")
add_subdirectory("ui")
