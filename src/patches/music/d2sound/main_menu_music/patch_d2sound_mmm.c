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

#include "patches/music/d2sound/main_menu_music/patch_d2sound_mmm.h"

#include <sgd2mapi98.h>

#include "patches/music/d2sound/main_menu_music/patch_1_07_d2sound_mmm.h"
#include "patches/music/d2sound/main_menu_music/patch_1_11_d2sound_mmm.h"
#include "patches/music/d2sound/main_menu_music/patch_lod_1_14a_d2sound_mmm.h"

/**
 * External
 */

struct D2Sound_MainMenuMusicPatch D2Sound_MainMenuMusicPatch_Init(void) {
  struct D2Sound_MainMenuMusicPatch patch;

  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      patch.as_1_07 = D2Sound_MainMenuMusicPatch_1_07_Init();
      break;
    case D2_GameVersion_k1_11:
    case D2_GameVersion_k1_11B:
    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta:
    case D2_GameVersion_k1_13C:
    case D2_GameVersion_k1_13D:
      patch.as_1_11 = D2Sound_MainMenuMusicPatch_1_11_Init();
      break;
    case D2_GameVersion_kLod1_14A:
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
    case D2_GameVersion_kLod1_14D:
      patch.as_lod_1_14a = D2Sound_MainMenuMusicPatch_Lod1_14a_Init();
      break;
  }

  return patch;
}

void D2Sound_MainMenuMusicPatch_Deinit(struct D2Sound_MainMenuMusicPatch* patch) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      D2Sound_MainMenuMusicPatch_1_07_Deinit(&patch->as_1_07);
      break;
    case D2_GameVersion_k1_11:
    case D2_GameVersion_k1_11B:
    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta:
    case D2_GameVersion_k1_13C:
    case D2_GameVersion_k1_13D:
      D2Sound_MainMenuMusicPatch_1_11_Deinit(&patch->as_1_11);
      break;
    case D2_GameVersion_kLod1_14A:
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
    case D2_GameVersion_kLod1_14D:
      D2Sound_MainMenuMusicPatch_Lod1_14a_Deinit(&patch->as_lod_1_14a);
      break;
  }
}

void D2Sound_MainMenuMusicPatch_Apply(struct D2Sound_MainMenuMusicPatch* patch) {
  switch (D2_GameVersion_GetRunning()) {
    case D2_GameVersion_k1_07:
    case D2_GameVersion_k1_07Beta:
    case D2_GameVersion_k1_08:
    case D2_GameVersion_k1_09:
    case D2_GameVersion_k1_09B:
    case D2_GameVersion_k1_09D:
    case D2_GameVersion_k1_10Beta:
    case D2_GameVersion_k1_10SBeta:
    case D2_GameVersion_k1_10:
      D2Sound_MainMenuMusicPatch_1_07_Apply(&patch->as_1_07);
      break;
    case D2_GameVersion_k1_11:
    case D2_GameVersion_k1_11B:
    case D2_GameVersion_k1_12A:
    case D2_GameVersion_k1_13ABeta:
    case D2_GameVersion_k1_13C:
    case D2_GameVersion_k1_13D:
      D2Sound_MainMenuMusicPatch_1_11_Apply(&patch->as_1_11);
      break;
    case D2_GameVersion_kLod1_14A:
    case D2_GameVersion_kLod1_14B:
    case D2_GameVersion_kLod1_14C:
    case D2_GameVersion_kLod1_14D:
      D2Sound_MainMenuMusicPatch_Lod1_14a_Apply(&patch->as_lod_1_14a);
      break;
  }
}
