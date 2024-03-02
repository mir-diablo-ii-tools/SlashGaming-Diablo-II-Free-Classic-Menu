target_sources(${PROJECT_NAME}
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/music_patches.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/music_patches.h")

add_subdirectory("d2sound")
