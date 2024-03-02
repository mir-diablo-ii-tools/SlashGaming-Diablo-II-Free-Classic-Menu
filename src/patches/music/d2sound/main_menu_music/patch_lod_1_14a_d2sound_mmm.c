/**
 * SlashGaming Diablo II Free Classic Menu
 * Copyright (C) 2024  Mir Drualga
 *
 * This file is part of SlashGaming Diablo II Free Classic Menu.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Additional permissions under GNU Affero General Public License version 3
 *  section 7
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with Diablo II (or a modified version of that game and its
 *  libraries), containing parts covered by the terms of Blizzard End User
 *  License Agreement, the licensors of this Program grant you additional
 *  permission to convey the resulting work. This additional permission is
 *  also extended to any combination of expansions, mods, and remasters of
 *  the game.
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with any Graphics Device Interface (GDI), DirectDraw, Direct3D,
 *  Glide, OpenGL, or Rave wrapper (or modified versions of those
 *  libraries), containing parts not covered by a compatible license, the
 *  licensors of this Program grant you additional permission to convey the
 *  resulting work.
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with any library (or a modified version of that library) that links
 *  to Diablo II (or a modified version of that game and its libraries),
 *  containing parts not covered by a compatible license, the licensors of
 *  this Program grant you additional permission to convey the resulting
 *  work.
 */

#include "patches/music/d2sound/main_menu_music/patch_lod_1_14a_d2sound_mmm.h"

#include <stddef.h>

#include <sgd2mapi98.h>

#include "common/mem_sizeof.h"

/**
 * How to find this patch:
 * 1. Search for the string "data\\global\\music\\introedit.wav" in
 *    read-only memory.
 * 2. Patch all use cases with branch opcodes.
 */

typedef struct D2Sound_MainMenuMusicPatch_Lod1_14a Patch_Lod1_14a;

enum {
  kPatchCount =
      mem_sizeof(Patch_Lod1_14a, patches)
          / mem_sizeof(Patch_Lod1_14a, patches[0])
};

void __cdecl D2Sound_MainMenuMusicPatch_Lod1_14a_Shim01(void);

static struct Mapi_GameAddress GetGameAddress01(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_kLod1_14A:
      offset = 0x4B7E;
      break;
    case D2_GameVersion_kLod1_14B:
      offset = 0x11290E;
      break;
    case D2_GameVersion_kLod1_14C:
      offset = 0x1124FE;
      break;
    case D2_GameVersion_kLod1_14D:
      offset = 0x11475E;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize01(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_kLod1_14A:
      return 0x4B95 - 0x4B7E;
    case D2_GameVersion_kLod1_14B:
      return 0x112925 - 0x11290E;
    case D2_GameVersion_kLod1_14C:
      return 0x112515 - 0x1124FE;
    case D2_GameVersion_kLod1_14D:
      return 0x114775 - 0x11475E;
  }
}

void __cdecl D2Sound_MainMenuMusicPatch_Lod1_14a_Shim02(void);

static struct Mapi_GameAddress GetGameAddress02(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_kLod1_14A:
      offset = 0x4CC1;
      break;
    case D2_GameVersion_kLod1_14B:
      offset = 0x112A51;
      break;
    case D2_GameVersion_kLod1_14C:
      offset = 0x112641;
      break;
    case D2_GameVersion_kLod1_14D:
      offset = 0x1148A1;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize02(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_kLod1_14A:
      return 0x4CD3 - 0x4CC1;
    case D2_GameVersion_kLod1_14B:
      return 0x112A63 - 0x112A51;
    case D2_GameVersion_kLod1_14C:
      return 0x112653 - 0x112641;
    case D2_GameVersion_kLod1_14D:
      return 0x1148B3 - 0x1148A1;
  }
}

void __cdecl D2Sound_MainMenuMusicPatch_Lod1_14a_Shim03(void);

static struct Mapi_GameAddress GetGameAddress03(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_kLod1_14A:
      offset = 0x4EFE;
      break;
    case D2_GameVersion_kLod1_14B:
      offset = 0x112C8E;
      break;
    case D2_GameVersion_kLod1_14C:
      offset = 0x11287E;
      break;
    case D2_GameVersion_kLod1_14D:
      offset = 0x114AED;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize03(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_kLod1_14A:
      return 0x4F10 - 0x4EFE;
    case D2_GameVersion_kLod1_14B:
      return 0x112CA0 - 0x112C8E;
    case D2_GameVersion_kLod1_14C:
      return 0x112890 - 0x11287E;
    case D2_GameVersion_kLod1_14D:
      return 0x114AFF - 0x114AED;
  }
}

/**
 * External
 */

struct D2Sound_MainMenuMusicPatch_Lod1_14a
    D2Sound_MainMenuMusicPatch_Lod1_14a_Init(void) {
  struct Mapi_GameAddress game_address;
  struct D2Sound_MainMenuMusicPatch_Lod1_14a patch;
  size_t patch_count;

  patch_count = 0;
  game_address = GetGameAddress01();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_Lod1_14a_Shim01,
          GetPatchSize01());
  game_address = GetGameAddress02();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_Lod1_14a_Shim02,
          GetPatchSize02());
  game_address = GetGameAddress03();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_Lod1_14a_Shim01,
          GetPatchSize03());

  return patch;
}

void D2Sound_MainMenuMusicPatch_Lod1_14a_Deinit(
    struct D2Sound_MainMenuMusicPatch_Lod1_14a* patch) {}

void D2Sound_MainMenuMusicPatch_Lod1_14a_Apply(
    struct D2Sound_MainMenuMusicPatch_Lod1_14a* patch) {
  size_t i;

  for (i = 0; i < kPatchCount; ++i) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}
