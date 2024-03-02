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

#include "patches/ui/d2launch/realm_select_option/patch_1_07_d2launch_rso.h"

#include <stddef.h>

#include <sgd2mapi98.h>

#include "common/mem_sizeof.h"

/**
 * How to find this patch:
 * 1. Search for the string "%s\\ui\\FrontEnd\\CurRealm" in
 *    read-only memory.
 * 2. Patch the branch opcode that is nearby the use case for this
 *    string.
 * 3. Repeat for the string "%s\\ui\\FrontEnd\\NarrowButtonBlank02".
 */

typedef struct D2Launch_RealmSelectOptionPatch_1_07 Patch_1_07;

enum {
  kPatchCount =
      mem_sizeof(Patch_1_07, patches) / mem_sizeof(Patch_1_07, patches[0])
};

void __cdecl D2Launch_RealmSelectOptionPatch_1_07_Shim01(void);

static struct Mapi_GameAddress GetGameAddress01(void) {
  struct Mapi_GameAddress game_address;
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
      offset = 0xC485;
      break;
    case D2_GameVersion_k1_07:
      offset = 0xC5D5;
      break;
    case D2_GameVersion_k1_08:
      offset = 0xC5F5;
      break;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      offset = 0xC6C5;
      break;
    case D2_GameVersion_k1_09D:
      offset = 0xC6B5;
      break;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
      offset = 0x9245;
      break;
    case D2_GameVersion_k1_10:
      offset = 0xE0C9;
      break;
    case D2_GameVersion_k1_11:
      offset = 0xCD59;
      break;
    case D2_GameVersion_k1_11B:
      offset = 0x12EB9;
      break;
    case D2_GameVersion_k1_12A:
      offset = 0x12089;
      break;
    case D2_GameVersion_k1_13ABeta:
      offset = 0x12789;
      break;
    case D2_GameVersion_k1_13C:
      offset = 0x13609;
      break;
    case D2_GameVersion_k1_13D:
      offset = 0xBF39;
      break;
    case D2_GameVersion_kLod1_14A:
      offset = 0x1093D9;
      break;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      offset = 0x2A4B9;
      break;
    case D2_GameVersion_kLod1_14D:
      offset = 0x2ED72;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Launch, offset);
}

static size_t GetPatchSize01(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
      return 0xC48A - 0xC485;
    case D2_GameVersion_k1_07:
      return 0xC5DA - 0xC5D5;
    case D2_GameVersion_k1_08:
      return 0xC5FA - 0xC5F5;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      return 0xC6CA - 0xC6C5;
    case D2_GameVersion_k1_09D:
      return 0xC6BA - 0xC6B5;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
      return 0x924A - 0x9245;
    case D2_GameVersion_k1_10:
      return 0xE0CE - 0xE0C9;
    case D2_GameVersion_k1_11:
      return 0xCD5E - 0xCD59;
    case D2_GameVersion_k1_11B:
      return 0x12EBE - 0x12EB9;
    case D2_GameVersion_k1_12A:
      return 0x1208E - 0x12089;
    case D2_GameVersion_k1_13ABeta:
      return 0x1278E - 0x12789;
    case D2_GameVersion_k1_13C:
      return 0x1360E - 0x13609;
    case D2_GameVersion_k1_13D:
      return 0xBF3E - 0xBF39;
    case D2_GameVersion_kLod1_14A:
      return 0x1093DE - 0x1093D9;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      return 0x2A4BE - 0x2A4B9;
    case D2_GameVersion_kLod1_14D:
      return 0x2ED77 - 0x2ED72;
  }
}

static struct Mapi_GameAddress GetGameAddress02(void) {
  struct Mapi_GameAddress game_address;
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
      offset = 0xC4BE;
      break;
    case D2_GameVersion_k1_07:
      offset = 0xC60E;
      break;
    case D2_GameVersion_k1_08:
      offset = 0xC62E;
      break;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      offset = 0xC6FE;
      break;
    case D2_GameVersion_k1_09D:
      offset = 0xC6EE;
      break;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
      offset = 0x927E;
      break;
    case D2_GameVersion_k1_10:
      offset = 0xE102;
      break;
    case D2_GameVersion_k1_11:
      offset = 0xCD92;
      break;
    case D2_GameVersion_k1_11B:
      offset = 0x12EF2;
      break;
    case D2_GameVersion_k1_12A:
      offset = 0x120C2;
      break;
    case D2_GameVersion_k1_13ABeta:
      offset = 0x127C2;
      break;
    case D2_GameVersion_k1_13C:
      offset = 0x13642;
      break;
    case D2_GameVersion_k1_13D:
      offset = 0xBF72;
      break;
    case D2_GameVersion_kLod1_14A:
      offset = 0x109412;
      break;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      offset = 0x2A4F2;
      break;
    case D2_GameVersion_kLod1_14D:
      offset = 0x2EDB1;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Launch, offset);
}

static size_t GetPatchSize02(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
      return 0xC4C3 - 0xC4BE;
    case D2_GameVersion_k1_07:
      return 0xC613 - 0xC60E;
    case D2_GameVersion_k1_08:
      return 0xC633 - 0xC62E;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      return 0xC703 - 0xC6FE;
    case D2_GameVersion_k1_09D:
      return 0xC6F3 - 0xC6EE;
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
      return 0x9283 - 0x927E;
    case D2_GameVersion_k1_10:
      return 0xE107 - 0xE102;
    case D2_GameVersion_k1_11:
      return 0xCD97 - 0xCD92;
    case D2_GameVersion_k1_11B:
      return 0x12EF7 - 0x12EF2;
    case D2_GameVersion_k1_12A:
      return 0x120C7 - 0x120C2;
    case D2_GameVersion_k1_13ABeta:
      return 0x127C7 - 0x127C2;
    case D2_GameVersion_k1_13C:
      return 0x13647 - 0x13642;
    case D2_GameVersion_k1_13D:
      return 0xBF77 - 0xBF72;
    case D2_GameVersion_kLod1_14A:
      return 0x109417 - 0x109412;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      return 0x2A4F7 - 0x2A4F2;
    case D2_GameVersion_kLod1_14D:
      return 0x2EDB6 - 0x2EDB1;
  }
}

/**
 * External
 */

struct D2Launch_RealmSelectOptionPatch_1_07
    D2Launch_RealmSelectOptionPatch_1_07_Init(void) {
  struct Mapi_GameAddress game_address;
  struct D2Launch_RealmSelectOptionPatch_1_07 patch;

  game_address = GetGameAddress01();
  patch.patches[0] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Launch_RealmSelectOptionPatch_1_07_Shim01,
          GetPatchSize01());
  game_address = GetGameAddress02();
  patch.patches[1] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Launch_RealmSelectOptionPatch_1_07_Shim01,
          GetPatchSize02());

  return patch;
}

void D2Launch_RealmSelectOptionPatch_1_07_Deinit(
    struct D2Launch_RealmSelectOptionPatch_1_07* patch) {}

void D2Launch_RealmSelectOptionPatch_1_07_Apply(
    struct D2Launch_RealmSelectOptionPatch_1_07* patch) {
  size_t i;

  for (i = 0; i < kPatchCount; ++i) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}
