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

#include "patches/ui/d2launch/char_create_screen_background/patch_1_07_d2launch_ccsb.h"

#include <stddef.h>

#include <sgd2mapi98.h>

#include "common/mem_sizeof.h"

/**
 * How to find this patch:
 * 1. Search for the string "%s\\ui\\FrontEnd\\CharacterCreate" in
 *    read-only memory.
 * 2. Patch the branch opcode that is nearby the use case for this
 *    string.
 */

typedef struct D2Launch_CharCreateScreenBackgroundPatch_1_07 Patch_1_07;

enum {
  kPatchCount =
      mem_sizeof(Patch_1_07, patches) / mem_sizeof(Patch_1_07, patches[0])
};

void __cdecl D2Launch_CharCreateScreenBackgroundPatch_1_07_Shim01(void);

static struct Mapi_GameAddress GetGameAddress01(void) {
  struct Mapi_GameAddress game_address;
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
      offset = 0x1356E;
      break;
    case D2_GameVersion_k1_07:
      offset = 0x1408E;
      break;
    case D2_GameVersion_k1_08:
      offset = 0x140AE;
      break;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      offset = 0x1559E;
      break;
    case D2_GameVersion_k1_09D:
      offset = 0x1551E;
      break;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
      offset = 0xF4BE;
      break;
    case D2_GameVersion_k1_10:
      offset = 0x1705E;
      break;
    case D2_GameVersion_k1_11:
      offset = 0xA99E;
      break;
    case D2_GameVersion_k1_11B:
      offset = 0x10A5E;
      break;
    case D2_GameVersion_k1_12A:
      offset = 0xFCCE;
      break;
    case D2_GameVersion_k1_13ABeta:
      offset = 0x103CE;
      break;
    case D2_GameVersion_k1_13C:
      offset = 0x111AE;
      break;
    case D2_GameVersion_k1_13D:
      offset = 0x9B7E;
      break;
    case D2_GameVersion_kLod1_14A:
      offset = 0x10CCEE;
      break;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      offset = 0x2DE1E;
      break;
    case D2_GameVersion_kLod1_14D:
      offset = 0x32735;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Launch, offset);
}

static size_t GetPatchSize01(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
      return 0x13573 - 0x1356E;
    case D2_GameVersion_k1_07:
      return 0x14093 - 0x1408E;
    case D2_GameVersion_k1_08:
      return 0x140B3 - 0x140AE;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      return 0x155A3 - 0x1559E;
    case D2_GameVersion_k1_09D:
      return 0x15523 - 0x1551E;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
      return 0xF4C3 - 0xF4BE;
    case D2_GameVersion_k1_10:
      return 0x17063 - 0x1705E;
    case D2_GameVersion_k1_11:
      return 0xA9A3 - 0xA99E;
    case D2_GameVersion_k1_11B:
      return 0x10A63 - 0x10A5E;
    case D2_GameVersion_k1_12A:
      return 0xFCD3 - 0xFCCE;
    case D2_GameVersion_k1_13ABeta:
      return 0x103D3 - 0x103CE;
    case D2_GameVersion_k1_13C:
      return 0x111B3 - 0x111AE;
    case D2_GameVersion_k1_13D:
      return 0x9B83 - 0x9B7E;
    case D2_GameVersion_kLod1_14A:
      return 0x10CCF3 - 0x10CCEE;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      return 0x2DE23 - 0x2DE1E;
    case D2_GameVersion_kLod1_14D:
      return 0x3273A - 0x32735;
  }
}

/**
 * External
 */

struct D2Launch_CharCreateScreenBackgroundPatch_1_07
    D2Launch_CharCreateScreenBackgroundPatch_1_07_Init(void) {
  struct Mapi_GameAddress game_address;
  struct D2Launch_CharCreateScreenBackgroundPatch_1_07 patch;

  game_address = GetGameAddress01();
  patch.patches[0] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Launch_CharCreateScreenBackgroundPatch_1_07_Shim01,
          GetPatchSize01());

  return patch;
}

void D2Launch_CharCreateScreenBackgroundPatch_1_07_Deinit(
    struct D2Launch_CharCreateScreenBackgroundPatch_1_07* patch) {}

void D2Launch_CharCreateScreenBackgroundPatch_1_07_Apply(
    struct D2Launch_CharCreateScreenBackgroundPatch_1_07* patch) {
  size_t i;

  for (i = 0; i < kPatchCount; ++i) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}
