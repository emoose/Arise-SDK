#include "pch.h"

// Code to enable dev-console & allow loading loose/unpacked files
// Originally part of DQXIS-SDK: https://raw.githubusercontent.com/emoose/DQXIS-SDK/master/DQXI-SDK/DQXIHook.cpp

// UGameViewportClient::SetupInitialLocalPlayer hook, allows us to set ViewportConsole
// and with that, the UE4 dev console will be available even in Shipping builds!
StaticConstructObject_InternalFn StaticConstructObject_Internal = nullptr;

void SetupViewportConsole(UGameViewportClient* viewport)
{
  if (viewport->ViewportConsole)
    return; // already has console;

  auto engines = UObject::FindObjects<UEngine>();
  for (auto engine : engines)
  {
    // First UEngine is usually a dud
    if (!engine->ConsoleClass)
      continue;

    viewport->ViewportConsole = (UConsole*)StaticConstructObject_Internal(engine->ConsoleClass, viewport, 0, 0, 0, 0, 0, 0, 0);
    if (viewport->ViewportConsole)
      break;
  }
}

AutoGameAddress Addr_UGameViewportClient__SetupInitialLocalPlayer( // patch0: 0x142034460
  "UGameViewportClient::SetupInitialLocalPlayer",
  { 0xFF, 0x50, 0x18, 0x41, 0xBC, 0x03, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xD8 },
  -0x62
);
typedef void* (*UGameViewportClient__SetupInitialLocalPlayerFn)(UGameViewportClient* thisptr, void* OutError);
UGameViewportClient__SetupInitialLocalPlayerFn UGameViewportClient__SetupInitialLocalPlayer_Orig;
void* UGameViewportClient__SetupInitialLocalPlayer_Hook(UGameViewportClient* thisptr, void* OutError)
{
  auto ret = UGameViewportClient__SetupInitialLocalPlayer_Orig(thisptr, OutError);

  SetupViewportConsole(thisptr);

  return ret;
}

const wchar_t* gameDataStart = L"../../../"; // seems to be at the start of every game path

// FPakPlatformFile::FindFileInPakFiles hook: this will check for any loose file with the same filename
// If a loose file is found will return null (ie: saying that the .pak doesn't contain it)
// 90% of UE4 games will then try loading loose files, luckily DQXI is part of that 90% :D
AutoGameAddress Addr_FPakPlatformFile__FindFileInPakFiles( // patch0: 0x1427E93C0
  "FPakPlatformFile::FindFileInPakFiles",
  { 0x4C, 0x8B, 0x45, 0x38, 0x48, 0x8D, 0x55, 0xD0, 0x49, 0x8B, 0x0F, 0xE8 },
  -0x167
);
typedef void* (*FPakPlatformFile__FindFileInPakFilesFn)(void* thisptr, const TCHAR* Filename, void** OutPakFile, void* OutEntry);
FPakPlatformFile__FindFileInPakFilesFn FPakPlatformFile__FindFileInPakFiles_Orig;
void* FPakPlatformFile__FindFileInPakFiles_Hook(void* thisptr, const TCHAR* Filename, void** OutPakFile, void* OutEntry)
{
  if (OutPakFile)
    *OutPakFile = nullptr;

  if (Filename && wcsstr(Filename, gameDataStart) && FileExists(Filename))
    return 0; // file exists, tell game it's not in pak

  return FPakPlatformFile__FindFileInPakFiles_Orig(thisptr, Filename, OutPakFile, OutEntry);
}

AutoGameAddress Addr_FPakPlatformFile__IsNonPakFilenameAllowed( // patch0: 0x1427F4130
  "FPakPlatformFile::IsNonPakFilenameAllowed",
  { 0x8B, 0x45, 0x58, 0x3B, 0x85, 0x84, 0x00, 0x00, 0x00 },
  -0x7F
);
typedef bool (*FPakPlatformFile__IsNonPakFilenameAllowedFn)(void* thisptr, const FString& InFilename);
FPakPlatformFile__IsNonPakFilenameAllowedFn FPakPlatformFile__IsNonPakFilenameAllowed_Orig;
bool FPakPlatformFile__IsNonPakFilenameAllowed_Hook(void* thisptr, const FString& InFilename)
{
  return 1;
}

void Init_UE4Hook()
{
  //if (Options.EnableDevConsole)
  {
    MH_GameHook(UGameViewportClient__SetupInitialLocalPlayer);
  }

  //if (Options.LoadUnpackedFiles)
  {
    MH_GameHook(FPakPlatformFile__FindFileInPakFiles);
    MH_GameHook(FPakPlatformFile__IsNonPakFilenameAllowed);
  }

  if (UObject::GObjects->ObjObjects.Num())
  {
    // Objects is already filled, likely DLL has been injected instead of being ran at startup
    // Search for UGameViewportClient and apply the dev-console enabler
    auto viewports = UObject::FindObjects<UGameViewportClient>();
    for (auto viewport : viewports)
    {
      if (!viewport->World || !viewport->GameInstance)
        continue; // dud object

      SetupViewportConsole(viewport);
    }
  }
}