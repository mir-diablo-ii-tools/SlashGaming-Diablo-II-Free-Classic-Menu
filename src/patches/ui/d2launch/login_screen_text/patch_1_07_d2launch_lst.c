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

#include "patches/ui/d2launch/login_screen_text/patch_1_07_d2launch_lst.h"

#include <stddef.h>

#include <sgd2mapi98.h>

#include "common/mem_sizeof.h"

/**
 * How to find this patch:
 * 1. Search for the 4 byte value 5204 in read-only executable memory.
 * 2. Patch the expansion check Fog branch opcode that is above the use
 *    case for this value.
 */

typedef struct D2Launch_LoginScreenTextPatch_1_07 Patch_1_07;

enum {
  kPatchCount =
      mem_sizeof(Patch_1_07, patches) / mem_sizeof(Patch_1_07, patches[0])
};

void __cdecl D2Launch_LoginScreenTextPatch_1_07_Shim01(void);

static struct Mapi_GameAddress GetGameAddress01(void) {
  struct Mapi_GameAddress game_address;
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07:
      offset = 0x82A2;
      break;
    case D2_GameVersion_k1_08:
      offset = 0x82C2;
      break;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      offset = 0x8322;
      break;
    case D2_GameVersion_k1_09D:
      offset = 0x8332;
      break;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
      offset = 0x572B;
      break;
    case D2_GameVersion_k1_10:
      offset = 0x9AA2;
      break;
    case D2_GameVersion_k1_11:
      offset = 0x12B1C;
      break;
    case D2_GameVersion_k1_11B:
      offset = 0x18BDC;
      break;
    case D2_GameVersion_k1_12A:
      offset = 0x17E4C;
      break;
    case D2_GameVersion_k1_13ABeta:
      offset = 0x18623;
      break;
    case D2_GameVersion_k1_13C:
      offset = 0x19403;
      break;
    case D2_GameVersion_k1_13D:
      offset = 0x11DD3;
      break;
    case D2_GameVersion_kLod1_14A:
      offset = 0x10F911;
      break;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      offset = 0x309D1;
      break;
    case D2_GameVersion_kLod1_14D:
      offset = 0x353E4;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Launch, offset);
}

static size_t GetPatchSize01(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07:
      return 0x82A7 - 0x82A2;
    case D2_GameVersion_k1_08:
      return 0x82C7 - 0x82C2;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      return 0x8327 - 0x8322;
    case D2_GameVersion_k1_09D:
      return 0x8337 - 0x8332;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
      return 0x5730 - 0x572B;
    case D2_GameVersion_k1_10:
      return 0x9AA7 - 0x9AA2;
    case D2_GameVersion_k1_11:
      return 0x12B21 - 0x12B1C;
    case D2_GameVersion_k1_11B:
      return 0x18BE1 - 0x18BDC;
    case D2_GameVersion_k1_12A:
      return 0x17E51 - 0x17E4C;
    case D2_GameVersion_k1_13ABeta:
      return 0x18628 - 0x18623;
    case D2_GameVersion_k1_13C:
      return 0x19408 - 0x19403;
    case D2_GameVersion_k1_13D:
      return 0x11DD8 - 0x11DD3;
    case D2_GameVersion_kLod1_14A:
      return 0x10F916 - 0x10F911;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      return 0x309D6 - 0x309D1;
    case D2_GameVersion_kLod1_14D:
      return 0x353E9 - 0x353E4;
  }
}

/**
 * External
 */

struct D2Launch_LoginScreenTextPatch_1_07
    D2Launch_LoginScreenTextPatch_1_07_Init(void) {
  struct Mapi_GameAddress game_address;
  struct D2Launch_LoginScreenTextPatch_1_07 patch;

  game_address = GetGameAddress01();
  patch.patches[0] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Launch_LoginScreenTextPatch_1_07_Shim01,
          GetPatchSize01());

  return patch;
}

void D2Launch_LoginScreenTextPatch_1_07_Deinit(
    struct D2Launch_LoginScreenTextPatch_1_07* patch) {}

void D2Launch_LoginScreenTextPatch_1_07_Apply(
    struct D2Launch_LoginScreenTextPatch_1_07* patch) {
  size_t i;

  for (i = 0; i < kPatchCount; ++i) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}
