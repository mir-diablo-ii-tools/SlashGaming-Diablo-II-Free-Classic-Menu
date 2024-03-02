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

#include "patches/ui/d2launch/change_password_screen_text/patch_1_07_d2launch_cpst.h"

#include <stddef.h>

#include <sgd2mapi98.h>

#include "common/mem_sizeof.h"

/**
 * How to find this patch:
 * Pre-1.14a:
 * 1. In Ghidra, make sure run a default analysis over D2Launch.dll,
 *    then run the Aggressive Instruction Finder.
 * 2. Look for use cases of Fog Ordinal 10227.
 * 3. One of the use cases should resemble the original code for the
 *    LoginScreenText patch, but at a different location, with different
 *    parameters to the D2Lang Ordinals.
 *
 * 1.14a and greater:
 * 1. Open up Game.exe and open up a connection to online.
 * 2. Click "Account Settings".
 * 3. Find Game.exe's statically linked D2Lang Ordinal and put a
 *    breakpoint at the start of that function.
 * 4. Click "Change Password".
 * 5. Breakpoint should activate. Step out of function, add the value
 *    of EAX as a pointer to a Unicode string.
 * 6. Repeat steps until the string "Change Password" is found.
 * 7. Scroll up to find the function that needs to be patched.
 *
 * Unlike the other patches, the ID of the string in the D2Lang string
 * table is defined in patchstring.tbl, so it changes with every patch.
 *
 * The ID 5224 is the only consistent choice, but there are a bunch of
 * other functions that also use 5224 to call the D2Lang Ordinal, so
 * that method to finding doesn't work.
 */

typedef struct D2Launch_ChangePasswordScreenTextPatch_1_07 Patch_1_07;

enum {
  kPatchCount =
      mem_sizeof(Patch_1_07, patches) / mem_sizeof(Patch_1_07, patches[0])
};

void __cdecl D2Launch_ChangePasswordScreenTextPatch_1_07_Shim01(void);

static struct Mapi_GameAddress GetGameAddress01(void) {
  struct Mapi_GameAddress game_address;
  ptrdiff_t offset;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07:
      offset = 0x12B1C;
      break;
    case D2_GameVersion_k1_08:
      offset = 0x12B3C;
      break;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      offset = 0x1403C;
      break;
    case D2_GameVersion_k1_09D:
      offset = 0x13FDC;
      break;
    case D2_GameVersion_k1_10Beta:
      offset = 0xEC9D;
      break;
    case D2_GameVersion_k1_10SBeta:
      offset = 0x6343;
      break;
    case D2_GameVersion_k1_10:
      offset = 0x15A19;
      break;
    case D2_GameVersion_k1_11:
      offset = 0xF888;
      break;
    case D2_GameVersion_k1_11B:
      offset = 0x15968;
      break;
    case D2_GameVersion_k1_12A:
      offset = 0x14BB8;
      break;
    case D2_GameVersion_k1_13ABeta:
      offset = 0x152B8;
      break;
    case D2_GameVersion_k1_13C:
      offset = 0x160B8;
      break;
    case D2_GameVersion_k1_13D:
      offset = 0xEA68;
      break;
    case D2_GameVersion_kLod1_14A:
      offset = 0x10C76A;
      break;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      offset = 0x2D89A;
      break;
    case D2_GameVersion_kLod1_14D:
      offset = 0x321AA;
      break;
  }

  return Mapi_GameAddress_InitFromLibraryAndOffset(
      D2_DefaultLibrary_kD2Launch, offset);
}

static size_t GetPatchSize01(void) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07:
      return 0x12B21 - 0x12B1C;
    case D2_GameVersion_k1_08:
      return 0x12B41 - 0x12B3C;
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
      return 0x14041 - 0x1403C;
    case D2_GameVersion_k1_09D:
      return 0x13FE1 - 0x13FDC;
    case D2_GameVersion_k1_10Beta:
      return 0xECA2 - 0xEC9D;
    case D2_GameVersion_k1_10SBeta:
      return 0x6348 - 0x6343;
    case D2_GameVersion_k1_10:
      return 0x15A1E - 0x15A19;
    case D2_GameVersion_k1_11:
      return 0xF88D - 0xF888;
    case D2_GameVersion_k1_11B:
      return 0x1596D - 0x15968;
    case D2_GameVersion_k1_12A:
      return 0x14BBD - 0x14BB8;
    case D2_GameVersion_k1_13ABeta:
      return 0x152BD - 0x152B8;
    case D2_GameVersion_k1_13C:
      return 0x160BD - 0x160B8;
    case D2_GameVersion_k1_13D:
      return 0xEA6D - 0xEA68;
    case D2_GameVersion_kLod1_14A:
      return 0x10C76F - 0x10C76A;
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
      return 0x2D89F - 0x2D89A;
    case D2_GameVersion_kLod1_14D:
      return 0x321AF - 0x321AA;
  }
}

/**
 * External
 */

struct D2Launch_ChangePasswordScreenTextPatch_1_07
    D2Launch_ChangePasswordScreenTextPatch_1_07_Init(void) {
  struct Mapi_GameAddress game_address;
  struct D2Launch_ChangePasswordScreenTextPatch_1_07 patch;

  game_address = GetGameAddress01();
  patch.patches[0] =
      Mapi_GamePatch_InitGameBranchPatch(
          &game_address,
          Mapi_BranchType_kCall,
          &D2Launch_ChangePasswordScreenTextPatch_1_07_Shim01,
          GetPatchSize01());

  return patch;
}

void D2Launch_ChangePasswordScreenTextPatch_1_07_Deinit(
    struct D2Launch_ChangePasswordScreenTextPatch_1_07* patch) {}

void D2Launch_ChangePasswordScreenTextPatch_1_07_Apply(
    struct D2Launch_ChangePasswordScreenTextPatch_1_07* patch) {
  size_t i;

  for (i = 0; i < kPatchCount; ++i) {
    Mapi_GamePatch_Apply(&patch->patches[i]);
  }
}
