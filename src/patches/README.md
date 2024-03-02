# Patches
Contains all the patches used to create the mod.

## Structure
Patch folders should use concise names that describe what the patch does. The C and H files consist of:

- patch_v_vv: For the individual patches that apply to a given version. These can be shared between version with patch similarities. The patch number should be as low as possible.
- patch_v_vv_shim: For the shims that will be applied for branch-based patches. This is written in x86 to be assembled by NASM. Should be kept as minimal as possible, and only to transfer between the original context to the replacement context.
- patch: The multiplex patch selector, based on version.
- replacement: For the C code to replace the original code.

When a name may be ambiguous, try to pick a name that is closest to the primary source. The priority for naming is as follows:

1. Ingame name (from playing the game, including the Help Screen)
2. Game manuals (Diablo 1, Diablo 2, Diablo 2: LoD)
3. [Arreat Summit](https://classic.battle.net/diablo2exp)
4. Game assets and code
5. Common name used by the modding community
6. You

Visual C++ 6.0 does not create unique object file names for duplicate file names. To work around this, the initials of the patch folder are appended to the filename of each C and H file. If there is overlap, append a unique number.
