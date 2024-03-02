target_sources(${PROJECT_NAME}
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_d2sound_mmm.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_d2sound_mmm.h"

        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_07_d2sound_mmm.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_07_d2sound_mmm.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_07_shim_d2sound_mmm.asm"

        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_11_d2sound_mmm.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_11_d2sound_mmm.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_1_11_shim_d2sound_mmm.asm"

        "${CMAKE_CURRENT_SOURCE_DIR}/patch_lod_1_14a_d2sound_mmm.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_lod_1_14a_d2sound_mmm.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/patch_lod_1_14a_shim_d2sound_mmm.asm"

        "${CMAKE_CURRENT_SOURCE_DIR}/replacement_d2sound_mmm.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/replacement_d2sound_mmm.h")
