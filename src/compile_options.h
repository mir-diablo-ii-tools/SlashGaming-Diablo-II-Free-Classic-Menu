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

#ifndef SGD2FCM_COMPILE_OPTIONS_H_
#define SGD2FCM_COMPILE_OPTIONS_H_

#ifndef ENABLE_CLASSIC_CHAR_SELECT
#define ENABLE_CLASSIC_CHAR_SELECT 0
#endif  /* ENABLE_CLASSIC_CHAR_SELECT */

/*
 * This enables the patch to replace the "New Character" background. It
 * is disabled by default because the Amazon is standing on a box, and
 * the campfire is not aligned to the position of the characters.
 */
#ifndef ENABLE_CLASSIC_CHAR_CREATE_SCREEN_BACKGROUND_PATCH
#define ENABLE_CLASSIC_CHAR_CREATE_SCREEN_BACKGROUND_PATCH 1
#endif  /* ENABLE_CLASSIC_CHAR_CREATE_SCREEN_BACKGROUND_PATCH */

/*
 * This enables the patch to replace the "Realm Select" UI. It is
 * disabled because the placement of the UI is designed for the Classic
 * Character Select Screen, which is not available (yet).
 */
#ifndef ENABLE_CLASSIC_REALM_SELECT_PATCH
#define ENABLE_CLASSIC_REALM_SELECT_PATCH 1
#endif  /* ENABLE_CLASSIC_REALM_SELECT_PATCH */

#endif  /* SGD2FCM_COMPILE_OPTIONS_H_ */
