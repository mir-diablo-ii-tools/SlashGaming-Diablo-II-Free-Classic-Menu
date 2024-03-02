target_sources(${PROJECT_NAME}
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/compile_options.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/dll_main.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/license.c")

add_subdirectory("common")
add_subdirectory("patches")
