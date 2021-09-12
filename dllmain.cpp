// dllmain.cpp : Defines the entry point for the DLL application.
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

const uint32_t Addr_UPFNpcCameraFadeComponent__FadeUpdate = 0xE0A810;
const uint32_t Addr_APFNpcManager__HandlesDistanceDespawn = 0xE1C010;

// Addresses for UE4Hook.cpp
const uint32_t Addr_StaticConstructObject_Internal = 0x14EA190;
extern const uint32_t Addr_UGameViewportClient__SetupInitialLocalPlayer = 0x2034460; // requires extern to be visible outside of dllmain...
extern const uint32_t Addr_FPakPlatformFile__FindFileInPakFiles = 0x27E93C0;
extern const uint32_t Addr_FPakPlatformFile__IsNonPakFilenameAllowed = 0x27F4130;

using namespace SDK;

HMODULE DllHModule;
HMODULE GameHModule;
uintptr_t mBaseAddress;

const int NewNPCDistance = 100000;

typedef void(*APFNpcManager__HandlesDistanceDespawn_Fn)(void* a1, void* a2, FPFNpcSpawnSettingsData* spawnSettings);
APFNpcManager__HandlesDistanceDespawn_Fn APFNpcManager__HandlesDistanceDespawn_Orig;

// a1 is a APFNpcManager**?
// caller to this func calls it twice, once with APFNpcManager::SpawnSettings & once with APFNpcManager::SpawnSettingsHigh

// it'd be nice if we could swap spawnSettings for our own FPFNpcSpawnSettingsData instance, so we wouldn't need these NewNPCDistance checks every time
// unfortunately the orig func seems to access APFNpcManager::SpawnSettings directly too though, ignoring the spawnSettings param in some case :/
void APFNpcManager__HandlesDistanceDespawn_Hook(void* a1, void* a2, FPFNpcSpawnSettingsData* spawnSettings)
{
  // Seems that Arise.PF.NPC.AllowDistanceDespawn cvar is checked before this func is called
  // Haven't had any luck making that work though...

  if (NewNPCDistance > spawnSettings->DespawnDistance)
  {
    spawnSettings->DespawnDistance = NewNPCDistance;
    spawnSettings->SpawnDistance = NewNPCDistance;
  }

  return APFNpcManager__HandlesDistanceDespawn_Orig(a1, a2, spawnSettings);
}

typedef void(*UPFNpcCameraFadeComponent__FadeUpdate_Fn)(UPFNpcCameraFadeComponent* thisptr, void* a2);
UPFNpcCameraFadeComponent__FadeUpdate_Fn UPFNpcCameraFadeComponent__FadeUpdate_Orig;

void UPFNpcCameraFadeComponent__FadeUpdate_Hook(UPFNpcCameraFadeComponent* thisptr, void* a2)
{
  if (NewNPCDistance > thisptr->CameraSettings.CameraFarFadeOutDistance)
  {
    thisptr->CameraSettings.CameraFarFadeOutDistance = NewNPCDistance;
    thisptr->CameraSettings.CameraFarFadeInDistance = NewNPCDistance;
  }
  if (NewNPCDistance > thisptr->FarFadeOutDistance)
  {
    thisptr->FarFadeOutDistance = NewNPCDistance;
    thisptr->FarFadeInDistance = NewNPCDistance;
  }
  UPFNpcCameraFadeComponent__FadeUpdate_Orig(thisptr, a2);
}

bool InitGame()
{
  printf("\nArise-SDK 0.1.3 - https://github.com/emoose/Arise-SDK\n");

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

  MH_CreateHook((LPVOID)(mBaseAddress + Addr_UPFNpcCameraFadeComponent__FadeUpdate), 
    UPFNpcCameraFadeComponent__FadeUpdate_Hook, (LPVOID*)&UPFNpcCameraFadeComponent__FadeUpdate_Orig);

  MH_CreateHook((LPVOID)(mBaseAddress + Addr_APFNpcManager__HandlesDistanceDespawn),
    APFNpcManager__HandlesDistanceDespawn_Hook, (LPVOID*)&APFNpcManager__HandlesDistanceDespawn_Orig);

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
