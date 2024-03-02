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

#include "patches/music/d2sound/main_menu_music/patch_1_11_d2sound_mmm.h"

#include <stddef.h>

#include <sgd2mapi98.h>

#include "common/mem_sizeof.h"

/**
 * How to find this patch:
 * 1. Search for the string "data\\global\\music\\introedit.wav" in
 *    read-only memory.
 * 2. Patch all use cases with branch opcodes.
 */

typedef struct D2Sound_MainMenuMusicPatch_1_11 Patch_1_11;

enum {
  kPatchCount =
      mem_sizeof(Patch_1_11, patches) / mem_sizeof(Patch_1_11, patches[0])
};

void __cdecl D2Sound_MainMenuMusicPatch_1_11_Shim01(void);

static struct Mapi_GameAddress GetGameAddress01(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_11:
      offset = 0x6608;
      break;
    case D2_GameVersion_k1_11B:
      offset = 0x7498;
      break;
    case D2_GameVersion_k1_12A:
      offset = 0x9808;
      break;
    case D2_GameVersion_k1_13ABeta:
      offset = 0x8088;
      break;
    case D2_GameVersion_k1_13C:
      offset = 0x7BF8;
      break;
    case D2_GameVersion_k1_13D:
      offset = 0x7458;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize01(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_11:
      return 0x661A - 0x6608;
    case D2_GameVersion_k1_11B:
      return 0x74AA - 0x7498;
    case D2_GameVersion_k1_12A:
      return 0x981A - 0x9808;
    case D2_GameVersion_k1_13ABeta:
      return 0x809A - 0x8088;
    case D2_GameVersion_k1_13C:
      return 0x7C0A - 0x7BF8;
    case D2_GameVersion_k1_13D:
      return 0x746A - 0x7458;
  }
}

void __cdecl D2Sound_MainMenuMusicPatch_1_11_Shim02(void);

static struct Mapi_GameAddress GetGameAddress02(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_11:
      offset = 0x6847;
      break;
    case D2_GameVersion_k1_11B:
      offset = 0x7677;
      break;
    case D2_GameVersion_k1_12A:
      offset = 0x9A47;
      break;
    case D2_GameVersion_k1_13ABeta:
      offset = 0x8257;
      break;
    case D2_GameVersion_k1_13C:
      offset = 0x7DC7;
      break;
    case D2_GameVersion_k1_13D:
      offset = 0x76C7;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize02(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_11:
      return 0x6859 - 0x6847;
    case D2_GameVersion_k1_11B:
      return 0x7689 - 0x7677;
    case D2_GameVersion_k1_12A:
      return 0x9A59 - 0x9A47;
    case D2_GameVersion_k1_13ABeta:
      return 0x8269 - 0x8257;
    case D2_GameVersion_k1_13C:
      return 0x7DD9 - 0x7DC7;
    case D2_GameVersion_k1_13D:
      return 0x76D9 - 0x76C7;
  }
}

void __cdecl D2Sound_MainMenuMusicPatch_1_11_Shim03(void);

static struct Mapi_GameAddress GetGameAddress03(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_11:
      offset = 0x68C9;
      break;
    case D2_GameVersion_k1_11B:
      offset = 0x76F9;
      break;
    case D2_GameVersion_k1_12A:
      offset = 0x9AC9;
      break;
    case D2_GameVersion_k1_13ABeta:
      offset = 0x82D9;
      break;
    case D2_GameVersion_k1_13C:
      offset = 0x7E49;
      break;
    case D2_GameVersion_k1_13D:
      offset = 0x7749;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize03(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_11:
      return 0x68D7 - 0x68C9;
    case D2_GameVersion_k1_11B:
      return 0x7707 - 0x76F9;
    case D2_GameVersion_k1_12A:
      return 0x9AD7 - 0x9AC9;
    case D2_GameVersion_k1_13ABeta:
      return 0x82E7 - 0x82D9;
    case D2_GameVersion_k1_13C:
      return 0x7E57 - 0x7E49;
    case D2_GameVersion_k1_13D:
      return 0x7757 - 0x7749;
  }
}

static struct Mapi_GameAddress GetGameAddress04(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_11:
      offset = 0x692F;
      break;
    case D2_GameVersion_k1_11B:
      offset = 0x775F;
      break;
    case D2_GameVersion_k1_12A:
      offset = 0x9B2F;
      break;
    case D2_GameVersion_k1_13ABeta:
      offset = 0x833F;
      break;
    case D2_GameVersion_k1_13C:
      offset = 0x7EAF;
      break;
    case D2_GameVersion_k1_13D:
      offset = 0x77AF;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize04(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_11:
      return 0x6941 - 0x692F;
    case D2_GameVersion_k1_11B:
      return 0x7771 - 0x775F;
    case D2_GameVersion_k1_12A:
      return 0x9B41 - 0x9B2F;
    case D2_GameVersion_k1_13ABeta:
      return 0x8351 - 0x833F;
    case D2_GameVersion_k1_13C:
      return 0x7EC1 - 0x7EAF;
    case D2_GameVersion_k1_13D:
      return 0x77C1 - 0x77AF;
  }
}

/**
 * External
 */

struct D2Sound_MainMenuMusicPatch_1_11
    D2Sound_MainMenuMusicPatch_1_11_Init(void) {
  struct Mapi_GameAddress game_address;
  struct D2Sound_MainMenuMusicPatch_1_11 patch;
  size_t patch_count;

  patch_count = 0;
  game_address = GetGameAddress01();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_1_11_Shim01,
          GetPatchSize01());
  game_address = GetGameAddress02();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_1_11_Shim02,
          GetPatchSize02());
  game_address = GetGameAddress03();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_1_11_Shim03,
          GetPatchSize03());
  game_address = GetGameAddress04();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_1_11_Shim02,
          GetPatchSize04());

  return patch;
}

void D2Sound_MainMenuMusicPatch_1_11_Deinit(
    struct D2Sound_MainMenuMusicPatch_1_11* patch) {}

void D2Sound_MainMenuMusicPatch_1_11_Apply(
    struct D2Sound_MainMenuMusicPatch_1_11* patch) {
  size_t i;

  for (i = 0; i < kPatchCount; ++i) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}
