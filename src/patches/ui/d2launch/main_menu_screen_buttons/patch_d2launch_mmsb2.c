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

#include "patches/ui/d2launch/main_menu_screen_buttons/patch_d2launch_mmsb2.h"

#include "patches/ui/d2launch/main_menu_screen_buttons/patch_1_07_d2launch_mmsb2.h"

/**
 * External
 */

struct D2Launch_MainMenuScreenButtonsPatch
    D2Launch_MainMenuScreenButtonsPatch_Init(void) {
  struct D2Launch_MainMenuScreenButtonsPatch patch;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
    case D2_GameVersion_k1_11:
    case D2_GameVersion_k1_11B:
    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta:
    case D2_GameVersion_k1_13C:
    case D2_GameVersion_k1_13D:
    case D2_GameVersion_kLod1_14A:
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
    case D2_GameVersion_kLod1_14D:
      patch.as_1_07 = D2Launch_MainMenuScreenButtonsPatch_1_07_Init();
      break;
  }

  return patch;
}

void D2Launch_MainMenuScreenButtonsPatch_Deinit(
    struct D2Launch_MainMenuScreenButtonsPatch* patch) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
    case D2_GameVersion_k1_11:
    case D2_GameVersion_k1_11B:
    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta:
    case D2_GameVersion_k1_13C:
    case D2_GameVersion_k1_13D:
    case D2_GameVersion_kLod1_14A:
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
    case D2_GameVersion_kLod1_14D:
      D2Launch_MainMenuScreenButtonsPatch_1_07_Deinit(&patch->as_1_07);
      break;
  }
}

void D2Launch_MainMenuScreenButtonsPatch_Apply(
    struct D2Launch_MainMenuScreenButtonsPatch* patch) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
    case D2_GameVersion_k1_11:
    case D2_GameVersion_k1_11B:
    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta:
    case D2_GameVersion_k1_13C:
    case D2_GameVersion_k1_13D:
    case D2_GameVersion_kLod1_14A:
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
    case D2_GameVersion_kLod1_14D:
      D2Launch_MainMenuScreenButtonsPatch_1_07_Apply(&patch->as_1_07);
      break;
  }
}
