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

#ifndef SGD2FCM_PATCHES_UI_D2LAUNCH_MAIN_MENU_SCREEN_BACKGROUND_PATCH_D2LAUNCH_MMSB_H_
#define SGD2FCM_PATCHES_UI_D2LAUNCH_MAIN_MENU_SCREEN_BACKGROUND_PATCH_D2LAUNCH_MMSB_H_

#include "patches/ui/d2launch/main_menu_screen_background/patch_1_07_d2launch_mmsb.h"

struct D2Launch_MainMenuScreenBackgroundPatch {
  union {
    struct D2Launch_MainMenuScreenBackgroundPatch_1_07 as_1_07;
  };
};

struct D2Launch_MainMenuScreenBackgroundPatch
    D2Launch_MainMenuScreenBackgroundPatch_Init(void);

void D2Launch_MainMenuScreenBackgroundPatch_Deinit(
    struct D2Launch_MainMenuScreenBackgroundPatch* patch);

void D2Launch_MainMenuScreenBackgroundPatch_Apply(
    struct D2Launch_MainMenuScreenBackgroundPatch* patch);

#endif  /* SGD2FCM_PATCHES_UI_D2LAUNCH_MAIN_MENU_SCREEN_BACKGROUND_PATCH_D2LAUNCH_MMSB_H_ */
