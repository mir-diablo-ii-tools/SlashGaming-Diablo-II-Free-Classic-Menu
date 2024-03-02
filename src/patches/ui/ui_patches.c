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

#include "patches/ui/ui_patches.h"

#include <sgd2mapi98.h>

#include "compile_options.h"
#include "patches/ui/d2launch/char_create_screen_background/patch_d2launch_ccsb.h"
#include "patches/ui/d2launch/create_account_screen_text/patch_d2launch_cast.h"
#include "patches/ui/d2launch/credits_screen_background/patch_d2launch_csb.h"
#include "patches/ui/d2launch/login_screen_text/patch_d2launch_lst.h"
#include "patches/ui/d2launch/main_menu_screen_background/patch_d2launch_mmsb.h"
#include "patches/ui/d2launch/main_menu_screen_buttons/patch_d2launch_mmsb2.h"
#include "patches/ui/d2launch/realm_select_option/patch_d2launch_rso.h"
#include "patches/ui/d2launch/tcp_ip_game_screen_background/patch_d2launch_tigsb.h"
#include "patches/ui/d2launch/title_screen_background/patch_d2launch_tsb.h"

struct UiPatches UiPatches_Init(void) {
  struct UiPatches patches;

  patches.d2launch_change_password_screen_text =
      D2Launch_ChangePasswordScreenTextPatch_Init();
  patches.d2launch_char_create_screen_background =
      D2Launch_CharCreateScreenBackgroundPatch_Init();
  patches.d2launch_create_account_screen_text =
      D2Launch_CreateAccountScreenTextPatch_Init();
  patches.d2launch_credits_screen_background =
      D2Launch_CreditsScreenBackgroundPatch_Init();
  patches.d2launch_login_screen_text = D2Launch_LoginScreenTextPatch_Init();
  patches.d2launch_main_menu_screen_background =
      D2Launch_MainMenuScreenBackgroundPatch_Init();
  patches.d2launch_main_menu_screen_buttons =
      D2Launch_MainMenuScreenButtonsPatch_Init();
  patches.d2launch_realm_select_option =
      D2Launch_RealmSelectOptionPatch_Init();
  patches.d2launch_tcp_ip_game_screen_background =
      D2Launch_TcpIpGameScreenBackgroundPatch_Init();
  patches.d2launch_title_screen_background =
      D2Launch_TitleScreenBackgroundPatch_Init();

  return patches;
}

void UiPatches_Deinit(struct UiPatches* patches) {
  D2Launch_TitleScreenBackgroundPatch_Deinit(
      &patches->d2launch_title_screen_background);
  D2Launch_TcpIpGameScreenBackgroundPatch_Deinit(
      &patches->d2launch_tcp_ip_game_screen_background);
  D2Launch_RealmSelectOptionPatch_Deinit(
      &patches->d2launch_realm_select_option);
  D2Launch_MainMenuScreenButtonsPatch_Deinit(
      &patches->d2launch_main_menu_screen_buttons);
  D2Launch_MainMenuScreenBackgroundPatch_Deinit(
      &patches->d2launch_main_menu_screen_background);
  D2Launch_LoginScreenTextPatch_Deinit(&patches->d2launch_login_screen_text);
  D2Launch_CreditsScreenBackgroundPatch_Deinit(
      &patches->d2launch_credits_screen_background);
  D2Launch_CreateAccountScreenTextPatch_Deinit(
      &patches->d2launch_create_account_screen_text);
  D2Launch_CharCreateScreenBackgroundPatch_Deinit(
      &patches->d2launch_char_create_screen_background);
  D2Launch_ChangePasswordScreenTextPatch_Deinit(
      &patches->d2launch_change_password_screen_text);
}

void UiPatches_Apply(struct UiPatches* patches) {
  D2Launch_ChangePasswordScreenTextPatch_Apply(
      &patches->d2launch_change_password_screen_text);
  D2Launch_CharCreateScreenBackgroundPatch_Apply(
      &patches->d2launch_char_create_screen_background);
  D2Launch_CreateAccountScreenTextPatch_Apply(
      &patches->d2launch_create_account_screen_text);
  D2Launch_CreditsScreenBackgroundPatch_Apply(
      &patches->d2launch_credits_screen_background);
  D2Launch_LoginScreenTextPatch_Apply(&patches->d2launch_login_screen_text);
  D2Launch_MainMenuScreenBackgroundPatch_Apply(
      &patches->d2launch_main_menu_screen_background);
  D2Launch_MainMenuScreenButtonsPatch_Apply(
      &patches->d2launch_main_menu_screen_buttons);
  D2Launch_RealmSelectOptionPatch_Apply(
      &patches->d2launch_realm_select_option);
  D2Launch_TcpIpGameScreenBackgroundPatch_Apply(
      &patches->d2launch_tcp_ip_game_screen_background);
  D2Launch_TitleScreenBackgroundPatch_Apply(
      &patches->d2launch_title_screen_background);
}
