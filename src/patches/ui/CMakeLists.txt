target_sources(${PROJECT_NAME}
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/ui_patches.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/ui_patches.h")

add_subdirectory("d2launch")
