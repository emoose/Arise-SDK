#include "pch.h"

// Code to enable dev-console & allow loading loose/unpacked files
// Originally part of DQXIS-SDK: https://raw.githubusercontent.com/emoose/DQXIS-SDK/master/DQXI-SDK/DQXIHook.cpp

// UGameViewportClient::SetupInitialLocalPlayer hook, allows us to set ViewportConsole
// and with that, the UE4 dev console will be available even in Shipping builds!
StaticConstructObject_InternalFn StaticConstructObject_Internal = nullptr;

typedef void* (*UGameViewportClient__SetupInitialLocalPlayerFn)(UGameViewportClient* thisptr, void* OutError);
UGameViewportClient__SetupInitialLocalPlayerFn UGameViewportClient__SetupInitialLocalPlayer_Orig;
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

void* UGameViewportClient__SetupInitialLocalPlayer_Hook(UGameViewportClient* thisptr, void* OutError)
{
  auto ret = UGameViewportClient__SetupInitialLocalPlayer_Orig(thisptr, OutError);

  SetupViewportConsole(thisptr);

  return ret;
}

typedef void* (*FPakPlatformFile__FindFileInPakFilesFn)(void* thisptr, const TCHAR* Filename, void** OutPakFile, void* OutEntry);
typedef bool (*FPakPlatformFile__IsNonPakFilenameAllowedFn)(void* thisptr, const FString& InFilename);

const wchar_t* gameDataStart = L"../../../"; // seems to be at the start of every game path

// FPakPlatformFile::FindFileInPakFiles hook: this will check for any loose file with the same filename
// If a loose file is found will return null (ie: saying that the .pak doesn't contain it)
// 90% of UE4 games will then try loading loose files, luckily DQXI is part of that 90% :D
FPakPlatformFile__FindFileInPakFilesFn FPakPlatformFile__FindFileInPakFiles_Orig;
void* FPakPlatformFile__FindFileInPakFiles_Hook(void* thisptr, const TCHAR* Filename, void** OutPakFile, void* OutEntry)
{
  if (OutPakFile)
    *OutPakFile = nullptr;

  if (Filename && wcsstr(Filename, gameDataStart) && FileExists(Filename))
    return 0; // file exists, tell game it's not in pak

  return FPakPlatformFile__FindFileInPakFiles_Orig(thisptr, Filename, OutPakFile, OutEntry);
}

FPakPlatformFile__IsNonPakFilenameAllowedFn FPakPlatformFile__IsNonPakFilenameAllowed_Orig;
bool FPakPlatformFile__IsNonPakFilenameAllowed_Hook(void* thisptr, const FString& InFilename)
{
  return 1;
}

extern const uint32_t Addr_UGameViewportClient__SetupInitialLocalPlayer;
extern const uint32_t Addr_FPakPlatformFile__FindFileInPakFiles;
extern const uint32_t Addr_FPakPlatformFile__IsNonPakFilenameAllowed;

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