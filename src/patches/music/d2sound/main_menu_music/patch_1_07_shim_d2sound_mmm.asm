; SlashGaming Diablo II Free Classic Menu
; Copyright (C) 2024  Mir Drualga
;
; This file is part of SlashGaming Diablo II Free Classic Menu.
;
; This program is free software: you can redistribute it and/or modify
; it under the terms of the GNU Affero General Public License as published
; by the Free Software Foundation, either version 3 of the License, or
; (at your option) any later version.
;
; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU Affero General Public License for more details.
;
; You should have received a copy of the GNU Affero General Public License
; along with this program.  If not, see <http://www.gnu.org/licenses/>.
;
; Additional permissions under GNU Affero General Public License version 3
; section 7
;
; If you modify this Program, or any covered work, by linking or combining
; it with Diablo II (or a modified version of that game and its
; libraries), containing parts covered by the terms of Blizzard End User
; License Agreement, the licensors of this Program grant you additional
; permission to convey the resulting work. This additional permission is
; also extended to any combination of expansions, mods, and remasters of
; the game.
;
; If you modify this Program, or any covered work, by linking or combining
; it with any Graphics Device Interface (GDI), DirectDraw, Direct3D,
; Glide, OpenGL, or Rave wrapper (or modified versions of those
; libraries), containing parts not covered by a compatible license, the
; licensors of this Program grant you additional permission to convey the
; resulting work.
;
; If you modify this Program, or any covered work, by linking or combining
; it with any library (or a modified version of that library) that links
; to Diablo II (or a modified version of that game and its libraries),
; containing parts not covered by a compatible license, the licensors of
; this Program grant you additional permission to convey the resulting
; work.

global _D2Sound_MainMenuMusicPatch_1_07_Shim01
global _D2Sound_MainMenuMusicPatch_1_07_Shim03

extern _SGD2FCM_D2Sound_SelectMusic

section .data

section .bss

section .text

_D2Sound_MainMenuMusicPatch_1_07_Shim01:
    push ebp
    mov ebp, esp

    push edx

    push esi
    call _SGD2FCM_D2Sound_SelectMusic
    add esp, 4

    ; Return value should be stored in ecx
    mov ecx, eax

    pop edx

    leave
    ret

_D2Sound_MainMenuMusicPatch_1_07_Shim03:
    push ebp
    mov ebp, esp

    push edx

    push 0
    call _SGD2FCM_D2Sound_SelectMusic
    add esp, 4

    ; Return value should be stored in ecx
    mov ecx, eax

    pop edx

    leave
    ret
