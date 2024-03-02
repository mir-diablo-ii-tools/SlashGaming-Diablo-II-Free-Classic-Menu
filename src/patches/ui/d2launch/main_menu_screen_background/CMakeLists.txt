target_sources(${PROJECT_NAME}
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_d2launch_mmsb.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_d2launch_mmsb.h"

        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_07_d2launch_mmsb.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_07_d2launch_mmsb.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_07_shim_d2launch_mmsb.asm"

        "${CMAKE_CURRENT_SOURCE_DIR}/replacement_d2launch_mmsb.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/replacement_d2launch_mmsb.h")
