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

#include "patches/music/d2sound/main_menu_music/patch_1_07_d2sound_mmm.h"

#include <stddef.h>

#include <sgd2mapi98.h>

#include "common/mem_sizeof.h"

/**
 * How to find this patch:
 * 1. Search for the string "data\\global\\music\\introedit.wav" in
 *    read-only memory.
 * 2. Patch all use cases with branch opcodes.
 */

typedef struct D2Sound_MainMenuMusicPatch_1_07 Patch_1_07;

enum {
  kPatchCount =
      mem_sizeof(Patch_1_07, patches) / mem_sizeof(Patch_1_07, patches[0])
};

void __cdecl D2Sound_MainMenuMusicPatch_1_07_Shim01(void);

static struct Mapi_GameAddress GetGameAddress01(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
      offset = 0x4C5F;
      break;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      offset = 0x4AAF;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize01(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
      return 0x4C71 - 0x4C5F;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      return 0x4AC1 - 0x4AAF;
  }
}

static struct Mapi_GameAddress GetGameAddress02(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
      offset = 0x4CBD;
      break;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      offset = 0x4B0D;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize02(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
      return 0x4CCF - 0x4CBD;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      return 0x4B1F - 0x4B0D;
  }
}

void __cdecl D2Sound_MainMenuMusicPatch_1_07_Shim03(void);

static struct Mapi_GameAddress GetGameAddress03(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
      offset = 0x4D19;
      break;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      offset = 0x4B69;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize03(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
      return 0x4D27 - 0x4D19;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      return 0x4B77 - 0x4B69;
  }
}

static struct Mapi_GameAddress GetGameAddress04(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
      offset = 0x4DE4;
      break;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      offset = 0x4C34;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize04(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
      return 0x4DF6 - 0x4DE4;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      return 0x4C46 - 0x4C34;
  }
}

static struct Mapi_GameAddress GetGameAddress05(void) {
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
      offset = 0x4F62;
      break;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      offset = 0x4DB2;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Sound, offset);
}

static size_t GetPatchSize05(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
      return 0x4F74 - 0x4F62;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      return 0x4DC4 - 0x4DB2;
  }
}

/**
 * External
 */

struct D2Sound_MainMenuMusicPatch_1_07
    D2Sound_MainMenuMusicPatch_1_07_Init(void) {
  struct Mapi_GameAddress game_address;
  struct D2Sound_MainMenuMusicPatch_1_07 patch;
  size_t patch_count;

  patch_count = 0;
  game_address = GetGameAddress01();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_1_07_Shim01,
          GetPatchSize01());
  game_address = GetGameAddress02();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_1_07_Shim01,
          GetPatchSize02());
  game_address = GetGameAddress03();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_1_07_Shim03,
          GetPatchSize03());
  game_address = GetGameAddress04();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_1_07_Shim01,
          GetPatchSize04());
  game_address = GetGameAddress05();
  patch.patches[patch_count++] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Sound_MainMenuMusicPatch_1_07_Shim01,
          GetPatchSize05());

  return patch;
}

void D2Sound_MainMenuMusicPatch_1_07_Deinit(
    struct D2Sound_MainMenuMusicPatch_1_07* patch) {}

void D2Sound_MainMenuMusicPatch_1_07_Apply(
    struct D2Sound_MainMenuMusicPatch_1_07* patch) {
  size_t i;

  for (i = 0; i < kPatchCount; ++i) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}
