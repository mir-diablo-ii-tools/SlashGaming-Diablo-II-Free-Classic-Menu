# SlashGaming Diablo II Free Classic Menu
This is a project aimed at changing the Diablo II: Lord of Destruction main menu back to the Classic interface, with no loss in functionality. This is an all-in-one change that requires no MPQ edits, and is configurable via an automatically generated INI file.

## Features
- Restores the Classic menu theme.
- Restores the Classic backgrounds and text display for various menus.
- Restores the Classic position of Main Menu buttons.

## Usage
The DLL does nothing on its own and must be loaded into the game via external tools.

This project supports nearly every version of Diablo II since 1.07 beta. The latest version of Diablo II that is supported is 1.14D.

## System Requirements
It requires only the MSVCRT.dll system library, which is included with Windows 95 OSR2.5. It can run on any system that can run the Windows version of Diablo II.

## Multiplayer Use
This patch will work in any multiplayer setting, but using this patch in Battle.net will most likely get you banned.

## Contribution
SGD2FreeClassicMenu is coded in C89. It currently is intended to compile with Visual C++ 6.0 (VC6).

After cloning the repository, you will need to initialize the submodules with ```git submodule update --init --recursive```. Afterwards, if compiling with VC6, you will need to run the "Fix for VC6.bat" file to fix up submodule DLL dependencies. The VC6 project also links to the [libunicows](http://libunicows.sourceforge.net/) library, so make sure to have that available to the linker.

There are two versions of the DLL that are available. One dynamically links to its submodule libraries while the other uses static-linking. Public releases typically contain the static-linking version, renamed to match the dynamic-linking version.

When you submit a pull request, you certify that the code in the pull request is AGPLv3+ compatible. You also certify that you have authorization to submit the pull request with the code changes. You certify that the merging of the pull request with those changes is authorized under the license terms of the AGPLv3+. Finally, you certify that the contribution is licensed under the AGPLv3+.

## License
This SlashGaming Diablo II Free Classic Menu is licensed under the Affero General Public License, version 3 or higher, with exceptions. If you would like to apply for a licensing exception, please contact Mir Drualga via the SlashDiablo Discord.

## Thanks
- [/r/SlashGaming](https://www.reddit.com/r/slashdiablo/): Getting me interested in working on Diablo II.
- [PhrozenKeep](https://d2mods.info): Providing tons of resources for Diablo II modders.

## Legal Notice
Diablo II and Diablo II: Lord of Destruction are registered trademarks of Blizzard Entertainment. This project is not affiliated with Blizzard Entertainment in any way.
