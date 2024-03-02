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

#include "common/config.h"
#include "compile_options.h"

#include <stddef.h>
#include <wchar.h>
#include <windows.h>
#include <shlwapi.h>

#include <mdc/error/exit_on_error.h>

#define FILEW L"src/common/config.c"

static struct Config global_config;

static const struct Config kDefaultConfig = {
  /* enabled_classic_music */ 1,
  /* enabled_classic_title_screen_background */ 1,
  /* enabled_classic_char_create_screen_background */ 0,
  /* enabled_classic_credits_screen_background */ 1,
  /* enabled_classic_main_menu_screen_background */ 1,
  /* enabled_classic_tcp_ip_game_screen_background */ 1,
  /* enabled_classic_realm_select_option */ 0,
  /* enabled_classic_main_menu_screen_buttons */ 1,
  /* enabled_classic_login_screen_text */ 1,
  /* enabled_classic_change_password_screen_text */ 1,
  /* enabled_classic_create_account_screen_text */ 1
};

/**
 * Entries below must be grouped by section, then case-insentive,
 * lexicographically sorted.
 */

enum ConfigKey {
  ConfigKey_kUnspecified = 0,

  /* Music */
  ConfigKey_kEnabledClassicMusic,
  /* UI */
  ConfigKey_kEnabledClassicChangePasswordScreenText,
  ConfigKey_kEnabledClassicCharCreateScreenBackground,
  ConfigKey_kEnabledClassicCreateAccountScreenText,
  ConfigKey_kEnabledClassicCreditsScreenBackground,
  ConfigKey_kEnabledClassicLoginScreenText,
  ConfigKey_kEnabledClassicMainMenuScreenBackground,
  ConfigKey_kEnabledClassicMainMenuScreenButtons,
  ConfigKey_kEnabledClassicRealmSelectOption,
  ConfigKey_kEnabledClassicTcpIpGameScreenBackground,
  ConfigKey_kEnabledClassicTitleScreenBackground
};

enum ConfigValueType {
  ConfigValueType_kUnspecified = 0,

  ConfigValueType_kBool,
};

struct ConfigMemberMetadata {
  /** Enumerated value corresponding to the key. */
  enum ConfigKey key;
  /** The section that the key and value belong to. */
  const wchar_t* section_name;
  /** The key name. */
  const wchar_t* key_name;
  /** The type of the value. */
  enum ConfigValueType value_type;
  /**
   * If true, the config member will be enabled. Otherwise, the value is
   * always the default value and cannot be changed.
   */
  int enabled;
};

static const wchar_t kMusicSectionName[] = L"Music";
static const wchar_t kUiSectionName[] = L"UI";

static const struct ConfigMemberMetadata kMemberTable[] = {
  /* Music */
  {
    ConfigKey_kEnabledClassicMusic,
    kMusicSectionName,
    L"Enable Classic Music",
    ConfigValueType_kBool,
    /* enabled */ 1
  },
  /* UI */
  {
    ConfigKey_kEnabledClassicChangePasswordScreenText,
    kUiSectionName,
    L"Enabled Classic Change Password Screen Text",
    ConfigValueType_kBool,
    /* enabled */ 1
  },
  {
    ConfigKey_kEnabledClassicCharCreateScreenBackground,
    kUiSectionName,
    L"Enable Classic Character Creation Screen Background",
    ConfigValueType_kBool,
    /* enabled */ ENABLE_CLASSIC_CHAR_CREATE_SCREEN_BACKGROUND_PATCH
  },
  {
    ConfigKey_kEnabledClassicCreateAccountScreenText,
    kUiSectionName,
    L"Enabled Classic Create Account Screen Text",
    ConfigValueType_kBool,
    /* enabled */ 1
  },
  {
    ConfigKey_kEnabledClassicCreditsScreenBackground,
    kUiSectionName,
    L"Enable Classic Credits Screen Background",
    ConfigValueType_kBool,
    /* enabled */ 1
  },
  {
    ConfigKey_kEnabledClassicLoginScreenText,
    kUiSectionName,
    L"Enabled Classic Login Screen Text",
    ConfigValueType_kBool,
    /* enabled */ 1
  },
  {
    ConfigKey_kEnabledClassicMainMenuScreenBackground,
    kUiSectionName,
    L"Enable Classic Main Menu Screen Background",
    ConfigValueType_kBool,
    /* enabled */ 1
  },
  {
    ConfigKey_kEnabledClassicMainMenuScreenButtons,
    kUiSectionName,
    L"Enable Classic Main Menu Screen Buttons",
    ConfigValueType_kBool,
    /* enabled */ 1
  },
  {
    ConfigKey_kEnabledClassicRealmSelectOption,
    kUiSectionName,
    L"Enable Classic Realm Select Option",
    ConfigValueType_kBool,
    /* enabled */ ENABLE_CLASSIC_REALM_SELECT_PATCH
  },
  {
    ConfigKey_kEnabledClassicTcpIpGameScreenBackground,
    kUiSectionName,
    L"Enable Classic TCP/IP Game Screen Background",
    ConfigValueType_kBool,
    /* enabled */ 1
  },
  {
    ConfigKey_kEnabledClassicTitleScreenBackground,
    kUiSectionName,
    L"Enable Classic Title Screen Background",
    ConfigValueType_kBool,
    /* enabled */ 1
  }
};

enum {
  kMemberCount = sizeof(kMemberTable) / sizeof(kMemberTable[0])
};

static const wchar_t kDefaultPath[] = L"./SGD2FreeClassicMenu.ini";

/** Gets a pointer to the config member by its enumerated key value. */
static void* Config_GetMemberByKey(
    const struct Config* config, enum ConfigKey key) {
  const void* member;

  switch (key) {
    /* Music */
    case ConfigKey_kEnabledClassicMusic:
      member = &config->enabled_classic_music;
      break;
    /* UI */
    case ConfigKey_kEnabledClassicChangePasswordScreenText:
      member = &config->enabled_classic_change_password_screen_text;
      break;
    case ConfigKey_kEnabledClassicCharCreateScreenBackground:
      member = &config->enabled_classic_char_create_screen_background;
      break;
    case ConfigKey_kEnabledClassicCreateAccountScreenText:
      member = &config->enabled_classic_create_account_screen_text;
      break;
    case ConfigKey_kEnabledClassicCreditsScreenBackground:
      member = &config->enabled_classic_credits_screen_background;
      break;
    case ConfigKey_kEnabledClassicLoginScreenText:
      member = &config->enabled_classic_login_screen_text;
      break;
    case ConfigKey_kEnabledClassicMainMenuScreenBackground:
      member = &config->enabled_classic_main_menu_screen_background;
      break;
    case ConfigKey_kEnabledClassicMainMenuScreenButtons:
      member = &config->enabled_classic_main_menu_screen_buttons;
      break;
    case ConfigKey_kEnabledClassicRealmSelectOption:
      member = &config->enabled_classic_realm_select_option;
      break;
    case ConfigKey_kEnabledClassicTcpIpGameScreenBackground:
      member = &config->enabled_classic_tcp_ip_game_screen_background;
      break;
    case ConfigKey_kEnabledClassicTitleScreenBackground:
      member = &config->enabled_classic_title_screen_background;
      break;
  }

  return (void*)member;
}

static int Config_WriteBool(
    const wchar_t* path,
    const wchar_t* section_name,
    const wchar_t* key_name,
    int value) {
  BOOL is_write_success;
  enum {
    kNumberStrCapacity = 64
  };
  wchar_t number_str[kNumberStrCapacity];

  _snwprintf(
      number_str,
      kNumberStrCapacity,
      L"%d",
      value);
  number_str[kNumberStrCapacity - 1] = '\0';
  is_write_success =
      WritePrivateProfileStringW(section_name, key_name, number_str, path);
  if (!is_write_success) {
    Mdc_Error_ExitOnWindowsFunctionError(
        FILEW,
        __LINE__,
        L"WritePrivateProfileStringW",
        GetLastError());
  }
}

static void Config_WriteToFile(
    const struct Config* config, const wchar_t* path) {
  size_t i;

  for (i = 0; i < kMemberCount; ++i) {
    const struct ConfigMemberMetadata* metadata;
    const void* config_value;

    metadata = &kMemberTable[i];
    if (!metadata->enabled) {
      continue;
    }

    config_value = Config_GetMemberByKey(config, metadata->key);

    switch (metadata->value_type) {
      case ConfigValueType_kBool:
        Config_WriteBool(
            path,
            metadata->section_name,
            metadata->key_name,
            *(int*)config_value);
        break;
    }
  }
}

static struct Config Config_Init(const wchar_t* path) {
  struct Config config;
  size_t i;

  for (i = 0; i < kMemberCount; ++i) {
    const struct ConfigMemberMetadata* metadata;
    void* config_value;
    const void* default_value;

    metadata = &kMemberTable[i];
    if (!metadata->enabled) {
      continue;
    }

    config_value = Config_GetMemberByKey(&config, metadata->key);
    default_value = Config_GetMemberByKey(&kDefaultConfig, metadata->key);

    switch (metadata->value_type) {
      case ConfigValueType_kBool:
        *(int*)config_value =
            GetPrivateProfileIntW(
                metadata->section_name,
                metadata->key_name,
                *(const int*)default_value,
                path);
        break;
    }
  }

  Config_WriteToFile(&config, path);

  return config;
}

static void Config_InitGlobalOnce(void) {
  static int is_inited = 0;

  if (is_inited) {
    return;
  }

  global_config = Config_Init(kDefaultPath);

  is_inited = 1;
}

/**
 * External
 */

struct Config* Config_GetGlobal(void) {
  Config_InitGlobalOnce();

  return &global_config;
}
