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

#include "patches/ui/d2launch/credits_screen_background/patch_1_07_d2launch_csb.h"

#include <stddef.h>

#include <sgd2mapi98.h>

#include "common/mem_sizeof.h"

/**
 * How to find this patch:
 * 1. Search for the string "%s\\ui\\CharSelect\\creditsbckg" in
 *    read-only memory.
 * 2. Patch the branch opcode that is nearby the use case for this
 *    string.
 */

typedef struct D2Launch_CreditsScreenBackgroundPatch_1_07 Patch_1_07;

enum {
  kPatchCount =
      mem_sizeof(Patch_1_07, patches) / mem_sizeof(Patch_1_07, patches[0])
};

void __cdecl D2Launch_CreditsScreenBackgroundPatch_1_07_Shim01(void);

static struct Mapi_GameAddress GetGameAddress01(void) {
  struct Mapi_GameAddress game_address;
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
      offset = 0xC02B;
      break;
    case D2_GameVersion_k1_07:
      offset = 0xC17B;
      break;
    case D2_GameVersion_k1_08:
      offset = 0xC19B;
      break;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      offset = 0xC26B;
      break;
    case D2_GameVersion_k1_09D:
      offset = 0xC25B;
      break;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
      offset = 0x8DEB;
      break;
    case D2_GameVersion_k1_10:
      offset = 0xDC4B;
      break;
    case D2_GameVersion_k1_11:
      offset = 0xC8DB;
      break;
    case D2_GameVersion_k1_11B:
      offset = 0x12A3B;
      break;
    case D2_GameVersion_k1_12A:
      offset = 0x11C0B;
      break;
    case D2_GameVersion_k1_13ABeta:
      offset = 0x1230B;
      break;
    case D2_GameVersion_k1_13C:
      offset = 0x1318B;
      break;
    case D2_GameVersion_k1_13D:
      offset = 0xBABB;
      break;
    case D2_GameVersion_kLod1_14A:
      offset = 0x108F5B;
      break;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      offset = 0x2A03B;
      break;
    case D2_GameVersion_kLod1_14D:
      offset = 0x2E876;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Launch, offset);
}

static size_t GetPatchSize01(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
      return 0xC030 - 0xC02B;
    case D2_GameVersion_k1_07:
      return 0xC180 - 0xC17B;
    case D2_GameVersion_k1_08:
      return 0xC1A0 - 0xC19B;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      return 0xC270 - 0xC26B;
    case D2_GameVersion_k1_09D:
      return 0xC260 - 0xC25B;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
      return 0x8DF0 - 0x8DEB;
    case D2_GameVersion_k1_10:
      return 0xDC50 - 0xDC4B;
    case D2_GameVersion_k1_11:
      return 0xC8E0 - 0xC8DB;
    case D2_GameVersion_k1_11B:
      return 0x12A40 - 0x12A3B;
    case D2_GameVersion_k1_12A:
      return 0x11C10 - 0x11C0B;
    case D2_GameVersion_k1_13ABeta:
      return 0x12310 - 0x1230B;
    case D2_GameVersion_k1_13C:
      return 0x13190 - 0x1318B;
    case D2_GameVersion_k1_13D:
      return 0xBAC0 - 0xBABB;
    case D2_GameVersion_kLod1_14A:
      return 0x108F60 - 0x108F5B;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      return 0x2A040 - 0x2A03B;
    case D2_GameVersion_kLod1_14D:
      return 0x2E87B - 0x2E876;
  }
}

/**
 * External
 */

struct D2Launch_CreditsScreenBackgroundPatch_1_07
    D2Launch_CreditsScreenBackgroundPatch_1_07_Init(void) {
  struct Mapi_GameAddress game_address;
  struct D2Launch_CreditsScreenBackgroundPatch_1_07 patch;

  game_address = GetGameAddress01();
  patch.patches[0] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Launch_CreditsScreenBackgroundPatch_1_07_Shim01,
          GetPatchSize01());

  return patch;
}

void D2Launch_CreditsScreenBackgroundPatch_1_07_Deinit(
    struct D2Launch_CreditsScreenBackgroundPatch_1_07* patch) {}

void D2Launch_CreditsScreenBackgroundPatch_1_07_Apply(
    struct D2Launch_CreditsScreenBackgroundPatch_1_07* patch) {
  size_t i;

  for (i = 0; i < kPatchCount; ++i) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}
