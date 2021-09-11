// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <fstream>
#include <sstream>
#include <Shlobj.h>
#include <filesystem>

const uint32_t Addr_ProcessEvent = 0x14CBA50;
const uint32_t Addr_GUObjectArray = 0x44DC350;
const uint32_t Addr_Names = 0x4C6DE10;

const uint32_t Addr_UPFNpcCameraFadeComponent__FadeUpdate = 0xE0A810;
const uint32_t Addr_APFNpcManager__HandlesDistanceDespawn = 0xE1C010;

using namespace SDK;

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

void InitPlugin()
{
  printf("\nArise-SDK 0.1 - https://github.com/emoose/Arise-SDK\n");

  GameHModule = GetModuleHandleA("Tales of Arise.exe");

  if (!GameHModule)
    return;

  mBaseAddress = reinterpret_cast<uintptr_t>(GameHModule);

  UObject::ProcessEventPtr = reinterpret_cast<ProcessEventFn>(mBaseAddress + Addr_ProcessEvent);
  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + Addr_GUObjectArray);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + Addr_Names);

  MH_Initialize();

  MH_CreateHook((LPVOID)(mBaseAddress + Addr_UPFNpcCameraFadeComponent__FadeUpdate), 
    UPFNpcCameraFadeComponent__FadeUpdate_Hook, (LPVOID*)&UPFNpcCameraFadeComponent__FadeUpdate_Orig);

  MH_CreateHook((LPVOID)(mBaseAddress + Addr_APFNpcManager__HandlesDistanceDespawn),
    APFNpcManager__HandlesDistanceDespawn_Hook, (LPVOID*)&APFNpcManager__HandlesDistanceDespawn_Orig);

  MH_EnableHook(MH_ALL_HOOKS);
}

HMODULE ourModule;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
      ourModule = hModule;

      bool Proxy_Attach(); // proxy.cpp
      Proxy_Attach();

      InitPlugin();
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
