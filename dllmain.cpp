// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <fstream>
#include <sstream>
#include <Shlobj.h>
#include <filesystem>

const uint32_t Addr_ProcessEvent = 0x14CBA50;
const uint32_t Addr_GUObjectArray = 0x44DC350;
const uint32_t Addr_Names = 0x4C6DE10;

using namespace SDK;

HMODULE GameHModule;
uintptr_t mBaseAddress;

const int NewNPCDistance = 10000;

DWORD updateThreadId = 0;
HANDLE updateThreadHandle = 0;
DWORD WINAPI UpdateThread(LPVOID lpParam)
{
  while (true)
  {
    Sleep(1000);

    bool performAction = (GetKeyState(VK_HOME) & 0x8000) && (GetKeyState(VK_END) & 0x8000);
    if (!performAction)
      continue;

    auto test = UObject::FindObjects<UPFNpcCameraFadeComponent>();
    for (auto& obj : test)
    {
      if (NewNPCDistance > obj->CameraSettings.CameraFarFadeOutDistance)
      {
        obj->CameraSettings.CameraFarFadeOutDistance = NewNPCDistance;
        obj->CameraSettings.CameraFarFadeInDistance = NewNPCDistance;
      }
    }

    // Doesn't seem that these need to be updated:
    /*auto test2 = UObject::FindObjects<APFNpcManager>();
    for (auto& obj : test2)
    {
      if (NewNPCDistance > obj->CameraSettings.CameraFarFadeOutDistance)
      {
        obj->CameraSettings.CameraFarFadeOutDistance = NewNPCDistance;
        obj->CameraSettings.CameraFarFadeInDistance = NewNPCDistance;
      }
      if (NewNPCDistance > obj->CameraSettingsHigh.CameraFarFadeOutDistance)
      {
        obj->CameraSettingsHigh.CameraFarFadeOutDistance = NewNPCDistance;
        obj->CameraSettingsHigh.CameraFarFadeInDistance = NewNPCDistance;
      }
    }
    auto test3 = UObject::FindObjects<UPFNpcSettingMetaData>();
    for (auto& obj : test3)
    {
      if (NewNPCDistance > obj->CameraSettings.CameraFarFadeOutDistance)
      {
        obj->CameraSettings.CameraFarFadeOutDistance = NewNPCDistance;
        obj->CameraSettings.CameraFarFadeInDistance = NewNPCDistance;
      }
    }
    auto test4 = UObject::FindObjects<UPFNpcSettingsBase>();
    for (auto& obj : test4)
    {
      if (NewNPCDistance > obj->CameraSettings.CameraFarFadeOutDistance)
      {
        obj->CameraSettings.CameraFarFadeOutDistance = NewNPCDistance;
        obj->CameraSettings.CameraFarFadeInDistance = NewNPCDistance;
      }
    }*/
  }
}

void InitPlugin()
{
  GameHModule = GetModuleHandleA("Tales of Arise.exe");

  if (!GameHModule)
    return;

  mBaseAddress = reinterpret_cast<uintptr_t>(GameHModule);

  UObject::ProcessEventPtr = reinterpret_cast<ProcessEventFn>(mBaseAddress + Addr_ProcessEvent);
  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + Addr_GUObjectArray);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + Addr_Names);

  updateThreadHandle = CreateThread(
    NULL,                   // default security attributes
    0,                      // use default stack size  
    UpdateThread,       // thread function name
    NULL,          // argument to thread function 
    0,                      // use default creation flags 
    &updateThreadId);   // returns the thread identifier 

  //MH_Initialize();
  //MH_EnableHook(MH_ALL_HOOKS);
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
