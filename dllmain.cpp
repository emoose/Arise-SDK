#include "pch.h"
#include <fstream>
#include <sstream>
#include <Shlobj.h>
#include <filesystem>

const uint32_t Addr_Timestamp = 0x1E0;
const uint32_t Value_Timestamp = 1626315361; // 2021/07/15 02:16:01

const uint32_t Addr_ProcessEvent = 0x14CBA50;
const uint32_t Addr_GUObjectArray = 0x44DC350;
const uint32_t Addr_Names = 0x4C6DE10;

const uint32_t Addr_APFNpcManager__InitsDistances = 0xE1C860;

const uint32_t Addr_UAriseGameInstance__IsBootDisplaySkip_Ptr = 0x3D465E8;

// Addresses for UE4Hook.cpp
const uint32_t Addr_StaticConstructObject_Internal = 0x14EA190;
extern const uint32_t Addr_UGameViewportClient__SetupInitialLocalPlayer = 0x2034460; // requires extern for it to be visible outside of dllmain...
extern const uint32_t Addr_FPakPlatformFile__FindFileInPakFiles = 0x27E93C0;
extern const uint32_t Addr_FPakPlatformFile__IsNonPakFilenameAllowed = 0x27F4130;

using namespace SDK;

HMODULE DllHModule;
HMODULE GameHModule;
uintptr_t mBaseAddress;

const int NewNPCDistance = 100000;

typedef void(*APFNpcManager__HandlesDistanceDespawn_Fn)(void* a1, void* a2, FPFNpcSpawnSettingsData* spawnSettings);
APFNpcManager__HandlesDistanceDespawn_Fn APFNpcManager__HandlesDistanceDespawn_Orig;

typedef void(*APFNpcManager__InitsDistances_Fn)(APFNpcManager* a1, bool a2);
APFNpcManager__InitsDistances_Fn APFNpcManager__InitsDistances_Orig;
void APFNpcManager__InitsDistances_Hook(APFNpcManager* a1, bool a2)
{
  // Seems to only be called once during scene load, should be perfect place to hook!
  APFNpcManager__InitsDistances_Orig(a1, a2);
  if (NewNPCDistance > a1->SpawnSettings.DespawnDistance)
  {
    a1->SpawnSettings.DespawnDistance = NewNPCDistance;
    a1->SpawnSettings.SpawnDistance = NewNPCDistance - 500;
  }
  if (NewNPCDistance > a1->SpawnSettingsHigh.DespawnDistance)
  {
    a1->SpawnSettingsHigh.DespawnDistance = NewNPCDistance;
    a1->SpawnSettingsHigh.SpawnDistance = NewNPCDistance - 500;
  }
  if (NewNPCDistance > a1->CameraSettings.CameraFarFadeOutDistance)
  {
    a1->CameraSettings.CameraFarFadeOutDistance = NewNPCDistance;
    a1->CameraSettings.CameraFarFadeInDistance = NewNPCDistance - 500;
  }
  if (NewNPCDistance > a1->CameraSettingsHigh.CameraFarFadeOutDistance)
  {
    a1->CameraSettingsHigh.CameraFarFadeOutDistance = NewNPCDistance;
    a1->CameraSettingsHigh.CameraFarFadeInDistance = NewNPCDistance - 500;
  }
}

void UAriseGameInstance__ReturnTrue(void* a1, FFrame* a2, bool* a3)
{
  if (a2->Code)
    a2->Code++;

  *a3 = 1;
}

bool InitGame()
{
  printf("\nArise-SDK 0.1.5 - https://github.com/emoose/Arise-SDK\n");

  GameHModule = GetModuleHandleA("Tales of Arise.exe");

  if (!GameHModule)
  {
    MessageBoxA(0, "Failed to get module handle for 'Tales of Arise.exe', aborting Arise-SDK load...", "Arise-SDK", 0);
    return false;
  }
  mBaseAddress = reinterpret_cast<uintptr_t>(GameHModule);

  // Check that this is the EXE we were built against...
  uint32_t timestamp = *reinterpret_cast<uint32_t*>(mBaseAddress + Addr_Timestamp);
  if (timestamp != Value_Timestamp)
  {
    MessageBoxA(0, "Unsupported 'Tales of Arise.exe' version, aborting Arise-SDK load...", "Arise-SDK", 0);
    return false;
  }

  return true;
}

void InitPlugin()
{
  UObject::ProcessEventPtr = reinterpret_cast<ProcessEventFn>(mBaseAddress + Addr_ProcessEvent);
  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + Addr_GUObjectArray);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + Addr_Names);

  StaticConstructObject_Internal = reinterpret_cast<StaticConstructObject_InternalFn>(mBaseAddress + Addr_StaticConstructObject_Internal);

  MH_Initialize();

  MH_GameHook(APFNpcManager__InitsDistances);

  // This needs to be handled differently to other hooks
  // IsBootDisplaySkip (and others like IsDebugMode) point to a func which just always returns 0
  // This func is used by a bunch of different functions, so hooking it & forcing the value isn't a great idea
  // Instead, we overwrite the addr used to set up the IsBootDisplaySkip UFunction, so it points to our func
  SafeWriteModule(Addr_UAriseGameInstance__IsBootDisplaySkip_Ptr, uint64_t(&UAriseGameInstance__ReturnTrue));
  // N.B: if our DLL was injected later on after the IsBootDisplaySkip UFunction was created, changing addr above probably wouldn't make a difference
  // In that case we'd need to find the UFunction object and change the Func field manually
  // Since this function is only used at startup that's not really required here though

  // TODO: patch out the code that overwrites r.Shadow.MaxCSMResolution, so it can be changed inside Engine.ini freely
  // without patching it the game will always overwrite any INI value set for this, limiting it to 4096 and below
  // using console you can set this to 8192+, but there's no way to make it stick, since game will overwrite your INI changes
  // uncommenting this will prevent that, but will also leave it stuck at 2048 for people that don't have it setup inside INI...
  // maybe worth trying to hook this and make it so overwrite only happens when it's larger than the current value?
  // (so it can overwrite the default 2048 with 4096 fine, but won't overwrite your custom 8192 setting with 4096...)
    // uint8_t nop[] = { 0x90, 0x90, 0x90, 0x90, 0x90 };
    // SafeWriteModule(0xE52F7A, nop, 5);

  Init_UE4Hook();

  MH_EnableHook(MH_ALL_HOOKS);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
      DllHModule = hModule;

      bool Proxy_Attach(); // proxy.cpp
      Proxy_Attach();

      if(InitGame())
        Proxy_InitSteamStub();

      break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
      break;
    case DLL_PROCESS_DETACH:
      void Proxy_Detach();
      Proxy_Detach();
      break;
    }
    return TRUE;
}
