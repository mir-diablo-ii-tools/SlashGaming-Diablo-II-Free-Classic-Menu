target_sources(${PROJECT_NAME}
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_d2launch_rso.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_d2launch_rso.h"

        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_07_d2launch_rso.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_07_d2launch_rso.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_07_shim_d2launch_rso.asm"

        "${CMAKE_CURRENT_SOURCE_DIR}/replacement_d2launch_rso.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/replacement_d2launch_rso.h")
