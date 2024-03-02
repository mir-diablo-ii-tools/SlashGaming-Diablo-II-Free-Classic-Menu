# Microsoft Developer Studio Project File - Name="SGD2FreeClassicMenu" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=SGD2FreeClassicMenu - Win32 Debug Dll
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "SGD2FreeClassicMenu.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "SGD2FreeClassicMenu.mak" CFG="SGD2FreeClassicMenu - Win32 Debug Dll"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "SGD2FreeClassicMenu - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "SGD2FreeClassicMenu - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "SGD2FreeClassicMenu - Win32 Release Dll" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "SGD2FreeClassicMenu - Win32 Debug Dll" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "./src" /I "./include" /I "./third_party/MDC/MDCc/include" /I "./third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FCM_DLLEXPORT" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386
# ADD LINK32 libunicows.lib libMDCc.lib libSGD2MAPIc.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"Release/SGD2FreeClassicMenu.static.dll" /libpath:"./third_party/MDC/MDCc/Release" /libpath:"./third_party/SGD2MAPI98/SGD2MAPIc/Release"

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "./src" /I "./include" /I "./third_party/MDC/MDCc/include" /I "./third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FCM_DLLEXPORT" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo /o"Debug/SGD2FreeClassicMenuD.bsc"
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 libunicows.lib libMDCcD.lib libSGD2MAPIcD.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /out:"Debug/SGD2FreeClassicMenuD.static.dll" /pdbtype:sept /libpath:"./third_party/MDC/MDCc/Debug" /libpath:"./third_party/SGD2MAPI98/SGD2MAPIc/Debug"

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseDll"
# PROP BASE Intermediate_Dir "ReleaseDll"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseDll"
# PROP Intermediate_Dir "ReleaseDll"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /I "../third_party/MDC/MDCc/include" /I "../third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FCM_DLLEXPORT" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MD /W3 /GX /O2 /I "./src" /I "./include" /I "./third_party/MDC/MDCc/include" /I "./third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "NDEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FCM_DLLEXPORT" /D "SGD2MAPI_C_DLLIMPORT" /D "MDC_C_DLLIMPORT" /FD /c
# SUBTRACT CPP /Fr /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 libunicows.lib libMDCc.lib libSGD2MAPIc.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"Release/SGD2FreeClassicMenu.static.dll" /libpath:"../third_party/MDC/MDCc/Release" /libpath:"../third_party/SGD2MAPI98/SGD2MAPIc/Release"
# ADD LINK32 libunicows.lib MDCc.lib SGD2MAPIc.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /libpath:"./third_party/MDC/MDCc/ReleaseDll" /libpath:"./third_party/SGD2MAPI98/SGD2MAPIc/ReleaseDll"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "DebugDll"
# PROP BASE Intermediate_Dir "DebugDll"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "DebugDll"
# PROP Intermediate_Dir "DebugDll"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "../third_party/MDC/MDCc/include" /I "../third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FCM_DLLEXPORT" /FD /GZ /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "./src" /I "./include" /I "./third_party/MDC/MDCc/include" /I "./third_party/SGD2MAPI98/SGD2MAPIc/include" /D "WIN32" /D "_DEBUG" /D "_UNICODE" /D "UNICODE" /D "SGD2FCM_DLLEXPORT" /D "SGD2MAPI_C_DLLIMPORT" /D "MDC_C_DLLIMPORT" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo /o"DebugDll/SGD2FreeClassicMenuD.bsc"
LINK32=link.exe
# ADD BASE LINK32 libunicows.lib libMDCcD.lib libSGD2MAPIcD.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /out:"Debug/SGD2FreeClassicMenu.static.dll" /pdbtype:sept /libpath:"../third_party/MDC/MDCc/Debug" /libpath:"../third_party/SGD2MAPI98/SGD2MAPIc/Debug"
# ADD LINK32 libunicows.lib MDCcD.lib SGD2MAPIcD.lib shlwapi.lib version.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /out:"DebugDll/SGD2FreeClassicMenuD.dll" /pdbtype:sept /libpath:"./third_party/MDC/MDCc/DebugDll" /libpath:"./third_party/SGD2MAPI98/SGD2MAPIc/DebugDll"

!ENDIF 

# Begin Target

# Name "SGD2FreeClassicMenu - Win32 Release"
# Name "SGD2FreeClassicMenu - Win32 Debug"
# Name "SGD2FreeClassicMenu - Win32 Release Dll"
# Name "SGD2FreeClassicMenu - Win32 Debug Dll"
# Begin Group "Files"

# PROP Default_Filter ""
# Begin Group "include"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\include\dllapi_define.inc
# End Source File
# Begin Source File

SOURCE=.\include\dllapi_undef.inc
# End Source File
# Begin Source File

SOURCE=.\include\license.h
# End Source File
# End Group
# Begin Group "resource"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\resource\resource.rc
# End Source File
# Begin Source File

SOURCE=.\resource\slashgaming_game_loader.ico
# End Source File
# End Group
# Begin Group "src"

# PROP Default_Filter ""
# Begin Group "common"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\common\config.c
# End Source File
# Begin Source File

SOURCE=.\src\common\config.h
# End Source File
# Begin Source File

SOURCE=.\src\common\mem_sizeof.h
# End Source File
# End Group
# Begin Group "patches"

# PROP Default_Filter ""
# Begin Group "music"

# PROP Default_Filter ""
# Begin Group "d2sound"

# PROP Default_Filter ""
# Begin Group "main_menu_music"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_1_07_d2sound_mmm.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_1_07_d2sound_mmm.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_1_07_shim_d2sound_mmm.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\Release
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_1_07_shim_d2sound_mmm.asm
InputName=patch_1_07_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\Debug
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_1_07_shim_d2sound_mmm.asm
InputName=patch_1_07_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\ReleaseDll
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_1_07_shim_d2sound_mmm.asm
InputName=patch_1_07_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\DebugDll
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_1_07_shim_d2sound_mmm.asm
InputName=patch_1_07_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_1_11_d2sound_mmm.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_1_11_d2sound_mmm.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_1_11_shim_d2sound_mmm.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\Release
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_1_11_shim_d2sound_mmm.asm
InputName=patch_1_11_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\Debug
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_1_11_shim_d2sound_mmm.asm
InputName=patch_1_11_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\ReleaseDll
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_1_11_shim_d2sound_mmm.asm
InputName=patch_1_11_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\DebugDll
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_1_11_shim_d2sound_mmm.asm
InputName=patch_1_11_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_d2sound_mmm.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_d2sound_mmm.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_lod_1_14a_d2sound_mmm.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_lod_1_14a_d2sound_mmm.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\patch_lod_1_14a_shim_d2sound_mmm.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\Release
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_lod_1_14a_shim_d2sound_mmm.asm
InputName=patch_lod_1_14a_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\Debug
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_lod_1_14a_shim_d2sound_mmm.asm
InputName=patch_lod_1_14a_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\ReleaseDll
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_lod_1_14a_shim_d2sound_mmm.asm
InputName=patch_lod_1_14a_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\music\d2sound\main_menu_music
IntDir=.\DebugDll
InputPath=.\src\patches\music\d2sound\main_menu_music\patch_lod_1_14a_shim_d2sound_mmm.asm
InputName=patch_lod_1_14a_shim_d2sound_mmm

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\replacement_d2sound_mmm.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\music\d2sound\main_menu_music\replacement_d2sound_mmm.h
# End Source File
# End Group
# End Group
# Begin Source File

SOURCE=.\src\patches\music\music_patches.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\music\music_patches.h
# End Source File
# End Group
# Begin Group "ui"

# PROP Default_Filter ""
# Begin Group "d2launch"

# PROP Default_Filter ""
# Begin Group "change_password_screen_text"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\change_password_screen_text\patch_1_07_d2launch_cpst.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\change_password_screen_text\patch_1_07_d2launch_cpst.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\change_password_screen_text\patch_1_07_shim_d2launch_cpst.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\change_password_screen_text
IntDir=.\Release
InputPath=.\src\patches\ui\d2launch\change_password_screen_text\patch_1_07_shim_d2launch_cpst.asm
InputName=patch_1_07_shim_d2launch_cpst

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\change_password_screen_text
IntDir=.\Debug
InputPath=.\src\patches\ui\d2launch\change_password_screen_text\patch_1_07_shim_d2launch_cpst.asm
InputName=patch_1_07_shim_d2launch_cpst

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\change_password_screen_text
IntDir=.\ReleaseDll
InputPath=.\src\patches\ui\d2launch\change_password_screen_text\patch_1_07_shim_d2launch_cpst.asm
InputName=patch_1_07_shim_d2launch_cpst

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\change_password_screen_text
IntDir=.\DebugDll
InputPath=.\src\patches\ui\d2launch\change_password_screen_text\patch_1_07_shim_d2launch_cpst.asm
InputName=patch_1_07_shim_d2launch_cpst

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\change_password_screen_text\patch_d2launch_cpst.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\change_password_screen_text\patch_d2launch_cpst.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\change_password_screen_text\replacement_d2launch_cpst.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\change_password_screen_text\replacement_d2launch_cpst.h
# End Source File
# End Group
# Begin Group "char_create_screen_background"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\char_create_screen_background\patch_1_07_d2launch_ccsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\char_create_screen_background\patch_1_07_d2launch_ccsb.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\char_create_screen_background\patch_1_07_shim_d2launch_ccsb.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\char_create_screen_background
IntDir=.\Release
InputPath=.\src\patches\ui\d2launch\char_create_screen_background\patch_1_07_shim_d2launch_ccsb.asm
InputName=patch_1_07_shim_d2launch_ccsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\char_create_screen_background
IntDir=.\Debug
InputPath=.\src\patches\ui\d2launch\char_create_screen_background\patch_1_07_shim_d2launch_ccsb.asm
InputName=patch_1_07_shim_d2launch_ccsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\char_create_screen_background
IntDir=.\ReleaseDll
InputPath=.\src\patches\ui\d2launch\char_create_screen_background\patch_1_07_shim_d2launch_ccsb.asm
InputName=patch_1_07_shim_d2launch_ccsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\char_create_screen_background
IntDir=.\DebugDll
InputPath=.\src\patches\ui\d2launch\char_create_screen_background\patch_1_07_shim_d2launch_ccsb.asm
InputName=patch_1_07_shim_d2launch_ccsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\char_create_screen_background\patch_d2launch_ccsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\char_create_screen_background\patch_d2launch_ccsb.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\char_create_screen_background\replacement_d2launch_ccsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\char_create_screen_background\replacement_d2launch_ccsb.h
# End Source File
# End Group
# Begin Group "create_account_screen_text"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\create_account_screen_text\patch_1_07_d2launch_cast.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\create_account_screen_text\patch_1_07_d2launch_cast.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\create_account_screen_text\patch_1_07_shim_d2launch_cast.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\create_account_screen_text
IntDir=.\Release
InputPath=.\src\patches\ui\d2launch\create_account_screen_text\patch_1_07_shim_d2launch_cast.asm
InputName=patch_1_07_shim_d2launch_cast

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\create_account_screen_text
IntDir=.\Debug
InputPath=.\src\patches\ui\d2launch\create_account_screen_text\patch_1_07_shim_d2launch_cast.asm
InputName=patch_1_07_shim_d2launch_cast

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\create_account_screen_text
IntDir=.\ReleaseDll
InputPath=.\src\patches\ui\d2launch\create_account_screen_text\patch_1_07_shim_d2launch_cast.asm
InputName=patch_1_07_shim_d2launch_cast

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\create_account_screen_text
IntDir=.\DebugDll
InputPath=.\src\patches\ui\d2launch\create_account_screen_text\patch_1_07_shim_d2launch_cast.asm
InputName=patch_1_07_shim_d2launch_cast

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\create_account_screen_text\patch_d2launch_cast.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\create_account_screen_text\patch_d2launch_cast.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\create_account_screen_text\replacement_d2launch_cast.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\create_account_screen_text\replacement_d2launch_cast.h
# End Source File
# End Group
# Begin Group "credits_screen_background"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\credits_screen_background\patch_1_07_d2launch_csb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\credits_screen_background\patch_1_07_d2launch_csb.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\credits_screen_background\patch_1_07_shim_d2launch_csb.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\credits_screen_background
IntDir=.\Release
InputPath=.\src\patches\ui\d2launch\credits_screen_background\patch_1_07_shim_d2launch_csb.asm
InputName=patch_1_07_shim_d2launch_csb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\credits_screen_background
IntDir=.\Debug
InputPath=.\src\patches\ui\d2launch\credits_screen_background\patch_1_07_shim_d2launch_csb.asm
InputName=patch_1_07_shim_d2launch_csb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\credits_screen_background
IntDir=.\ReleaseDll
InputPath=.\src\patches\ui\d2launch\credits_screen_background\patch_1_07_shim_d2launch_csb.asm
InputName=patch_1_07_shim_d2launch_csb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\credits_screen_background
IntDir=.\DebugDll
InputPath=.\src\patches\ui\d2launch\credits_screen_background\patch_1_07_shim_d2launch_csb.asm
InputName=patch_1_07_shim_d2launch_csb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\credits_screen_background\patch_d2launch_csb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\credits_screen_background\patch_d2launch_csb.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\credits_screen_background\replacement_d2launch_csb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\credits_screen_background\replacement_d2launch_csb.h
# End Source File
# End Group
# Begin Group "login_screen_text"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\login_screen_text\patch_1_07_d2launch_lst.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\login_screen_text\patch_1_07_d2launch_lst.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\login_screen_text\patch_1_07_shim_d2launch_lst.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\login_screen_text
IntDir=.\Release
InputPath=.\src\patches\ui\d2launch\login_screen_text\patch_1_07_shim_d2launch_lst.asm
InputName=patch_1_07_shim_d2launch_lst

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\login_screen_text
IntDir=.\Debug
InputPath=.\src\patches\ui\d2launch\login_screen_text\patch_1_07_shim_d2launch_lst.asm
InputName=patch_1_07_shim_d2launch_lst

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\login_screen_text
IntDir=.\ReleaseDll
InputPath=.\src\patches\ui\d2launch\login_screen_text\patch_1_07_shim_d2launch_lst.asm
InputName=patch_1_07_shim_d2launch_lst

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\login_screen_text
IntDir=.\DebugDll
InputPath=.\src\patches\ui\d2launch\login_screen_text\patch_1_07_shim_d2launch_lst.asm
InputName=patch_1_07_shim_d2launch_lst

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\login_screen_text\patch_d2launch_lst.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\login_screen_text\patch_d2launch_lst.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\login_screen_text\replacement_d2launch_lst.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\login_screen_text\replacement_d2launch_lst.h
# End Source File
# End Group
# Begin Group "main_menu_screen_background"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_background\patch_1_07_d2launch_mmsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_background\patch_1_07_d2launch_mmsb.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_background\patch_1_07_shim_d2launch_mmsb.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\main_menu_screen_background
IntDir=.\Release
InputPath=.\src\patches\ui\d2launch\main_menu_screen_background\patch_1_07_shim_d2launch_mmsb.asm
InputName=patch_1_07_shim_d2launch_mmsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\main_menu_screen_background
IntDir=.\Debug
InputPath=.\src\patches\ui\d2launch\main_menu_screen_background\patch_1_07_shim_d2launch_mmsb.asm
InputName=patch_1_07_shim_d2launch_mmsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\main_menu_screen_background
IntDir=.\ReleaseDll
InputPath=.\src\patches\ui\d2launch\main_menu_screen_background\patch_1_07_shim_d2launch_mmsb.asm
InputName=patch_1_07_shim_d2launch_mmsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\main_menu_screen_background
IntDir=.\DebugDll
InputPath=.\src\patches\ui\d2launch\main_menu_screen_background\patch_1_07_shim_d2launch_mmsb.asm
InputName=patch_1_07_shim_d2launch_mmsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_background\patch_d2launch_mmsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_background\patch_d2launch_mmsb.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_background\replacement_d2launch_mmsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_background\replacement_d2launch_mmsb.h
# End Source File
# End Group
# Begin Group "main_menu_screen_buttons"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_buttons\patch_1_07_d2launch_mmsb2.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_buttons\patch_1_07_d2launch_mmsb2.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_buttons\patch_1_07_shim_d2launch_mmsb2.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\main_menu_screen_buttons
IntDir=.\Release
InputPath=.\src\patches\ui\d2launch\main_menu_screen_buttons\patch_1_07_shim_d2launch_mmsb2.asm
InputName=patch_1_07_shim_d2launch_mmsb2

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\main_menu_screen_buttons
IntDir=.\Debug
InputPath=.\src\patches\ui\d2launch\main_menu_screen_buttons\patch_1_07_shim_d2launch_mmsb2.asm
InputName=patch_1_07_shim_d2launch_mmsb2

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\main_menu_screen_buttons
IntDir=.\ReleaseDll
InputPath=.\src\patches\ui\d2launch\main_menu_screen_buttons\patch_1_07_shim_d2launch_mmsb2.asm
InputName=patch_1_07_shim_d2launch_mmsb2

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\main_menu_screen_buttons
IntDir=.\DebugDll
InputPath=.\src\patches\ui\d2launch\main_menu_screen_buttons\patch_1_07_shim_d2launch_mmsb2.asm
InputName=patch_1_07_shim_d2launch_mmsb2

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_buttons\patch_d2launch_mmsb2.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_buttons\patch_d2launch_mmsb2.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_buttons\replacement_d2launch_mmsb2.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\main_menu_screen_buttons\replacement_d2launch_mmsb2.h
# End Source File
# End Group
# Begin Group "realm_select_option"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\realm_select_option\patch_1_07_d2launch_rso.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\realm_select_option\patch_1_07_d2launch_rso.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\realm_select_option\patch_1_07_shim_d2launch_rso.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\realm_select_option
IntDir=.\Release
InputPath=.\src\patches\ui\d2launch\realm_select_option\patch_1_07_shim_d2launch_rso.asm
InputName=patch_1_07_shim_d2launch_rso

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\realm_select_option
IntDir=.\Debug
InputPath=.\src\patches\ui\d2launch\realm_select_option\patch_1_07_shim_d2launch_rso.asm
InputName=patch_1_07_shim_d2launch_rso

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\realm_select_option
IntDir=.\ReleaseDll
InputPath=.\src\patches\ui\d2launch\realm_select_option\patch_1_07_shim_d2launch_rso.asm
InputName=patch_1_07_shim_d2launch_rso

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\realm_select_option
IntDir=.\DebugDll
InputPath=.\src\patches\ui\d2launch\realm_select_option\patch_1_07_shim_d2launch_rso.asm
InputName=patch_1_07_shim_d2launch_rso

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\realm_select_option\patch_d2launch_rso.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\realm_select_option\patch_d2launch_rso.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\realm_select_option\replacement_d2launch_rso.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\realm_select_option\replacement_d2launch_rso.h
# End Source File
# End Group
# Begin Group "tcp_ip_game_screen_background"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\patch_1_07_d2launch_tigsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\patch_1_07_d2launch_tigsb.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\patch_1_07_shim_d2launch_tigsb.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\tcp_ip_game_screen_background
IntDir=.\Release
InputPath=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\patch_1_07_shim_d2launch_tigsb.asm
InputName=patch_1_07_shim_d2launch_tigsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\tcp_ip_game_screen_background
IntDir=.\Debug
InputPath=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\patch_1_07_shim_d2launch_tigsb.asm
InputName=patch_1_07_shim_d2launch_tigsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\tcp_ip_game_screen_background
IntDir=.\ReleaseDll
InputPath=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\patch_1_07_shim_d2launch_tigsb.asm
InputName=patch_1_07_shim_d2launch_tigsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\tcp_ip_game_screen_background
IntDir=.\DebugDll
InputPath=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\patch_1_07_shim_d2launch_tigsb.asm
InputName=patch_1_07_shim_d2launch_tigsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\patch_d2launch_tigsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\patch_d2launch_tigsb.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\replacement_d2launch_tigsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\tcp_ip_game_screen_background\replacement_d2launch_tigsb.h
# End Source File
# End Group
# Begin Group "title_screen_background"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\title_screen_background\patch_1_07_d2launch_tsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\title_screen_background\patch_1_07_d2launch_tsb.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\title_screen_background\patch_1_07_shim_d2launch_tsb.asm

!IF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\title_screen_background
IntDir=.\Release
InputPath=.\src\patches\ui\d2launch\title_screen_background\patch_1_07_shim_d2launch_tsb.asm
InputName=patch_1_07_shim_d2launch_tsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\title_screen_background
IntDir=.\Debug
InputPath=.\src\patches\ui\d2launch\title_screen_background\patch_1_07_shim_d2launch_tsb.asm
InputName=patch_1_07_shim_d2launch_tsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Release Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\title_screen_background
IntDir=.\ReleaseDll
InputPath=.\src\patches\ui\d2launch\title_screen_background\patch_1_07_shim_d2launch_tsb.asm
InputName=patch_1_07_shim_d2launch_tsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ELSEIF  "$(CFG)" == "SGD2FreeClassicMenu - Win32 Debug Dll"

# Begin Custom Build
InputDir=.\src\patches\ui\d2launch\title_screen_background
IntDir=.\DebugDll
InputPath=.\src\patches\ui\d2launch\title_screen_background\patch_1_07_shim_d2launch_tsb.asm
InputName=patch_1_07_shim_d2launch_tsb

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	nasm.exe -f win32 -Xvc -o "$(IntDir)\$(InputName).obj" $(InputDir)\$(InputName).asm

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\title_screen_background\patch_d2launch_tsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\title_screen_background\patch_d2launch_tsb.h
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\title_screen_background\replacement_d2launch_tsb.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\d2launch\title_screen_background\replacement_d2launch_tsb.h
# End Source File
# End Group
# End Group
# Begin Source File

SOURCE=.\src\patches\ui\ui_patches.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\ui\ui_patches.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\src\patches\patches.c
# End Source File
# Begin Source File

SOURCE=.\src\patches\patches.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\src\compile_options.h
# End Source File
# Begin Source File

SOURCE=.\src\dll_main.c
# End Source File
# Begin Source File

SOURCE=.\src\license.c
# End Source File
# End Group
# End Group
# End Target
# End Project
