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

#include "patches/music/d2sound/main_menu_music/replacement_d2sound_mmm.h"

#include <mdc/std/stdint.h>

#include "common/config.h"

struct MusicEntry classic_music_table[] = {
  { "data\\global\\music\\common\\options.wav" },
  { "data\\global\\music\\act1\\caves.wav" },
  { "data\\global\\music\\act1\\monastery.wav" },
  { "data\\global\\music\\act1\\crypt.wav" },
  { "data\\global\\music\\act2\\harem.wav" },
  { "data\\global\\music\\act2\\tombs.wav" },
  { "data\\global\\music\\act3\\spider.wav" },
  { "data\\global\\music\\act3\\kurastsewer.wav" }
};

struct MusicEntry lod_music_table[] = {
  { "data\\global\\music\\introedit.wav" },
  { "data\\global\\music\\act5\\icecaves.wav" },
  { "data\\global\\music\\act5\\xtemple.wav" },
  { "data\\global\\music\\act2\\desert.wav" },
  { "data\\global\\music\\act2\\sewer.wav" },
  { "data\\global\\music\\act3\\kurast.wav" },
  { "data\\global\\music\\act3\\kurastsewer.wav" },
  { "data\\global\\music\\act4\\diablo.wav" }
};

/**
 * External
 */

struct MusicEntry* __cdecl SGD2FCM_D2Sound_SelectMusic(int32_t index) {
  return Config_GetGlobal()->enabled_classic_music
      ? &classic_music_table[index]
      : &lod_music_table[index];
}
