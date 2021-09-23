#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#include "MinHook/MinHook.h"

extern uintptr_t mBaseAddress;

#include "SDK.h"
using namespace SDK;
#include "IConsoleManager.h"

struct __declspec(align(8)) FOutputDevice
{
  void* __vftable; /*VFT*/
  bool bSuppressEventTag;
  bool bAutoEmitLineTerminator;
};

struct __declspec(align(8)) FFrame : public FOutputDevice
{
  UFunction* Node;
  UObject* Object;
  unsigned __int8* Code;
  unsigned __int8* Locals;
  UProperty* MostRecentProperty;
  unsigned __int8* MostRecentPropertyAddress;
  TArray<unsigned int> FlowStack;
  FFrame* PreviousFrame;
  void* OutParms; /* FOutParmRec* */
  UField* PropertyChainForCompiledIn;
  UFunction* CurrentNativeFunction;
  bool bArrayContextFailed;
};

#define MH_Hook(addr, hook, orig) MH_CreateHook((LPVOID)(mBaseAddress + addr), hook, (LPVOID*)orig)

// Creates a hook for function defined in GameAddresses, requires _Hook function & _Orig variable
#define MH_GameHook(func) MH_Hook(Addr_##func, func##_Hook, &func##_Orig)

// dllmain.cpp
extern HMODULE DllHModule;
extern HMODULE GameHModule;
extern uintptr_t mBaseAddress;
void InitPlugin();

// proxy.cpp
void Proxy_InitSteamStub();

// UE4Hook.cpp
typedef UObject* (*StaticConstructObject_InternalFn)(UClass* Class, UObject* InOuter, FName Name, void* SetFlags, void* InternalSetFlags, UObject* Template, bool bCopyTransientsFromClassDefaults, struct FObjectInstancingGraph* InstanceGraph, bool bAssumeTemplateIsArchetype);
extern StaticConstructObject_InternalFn StaticConstructObject_Internal;
void Init_UE4Hook();

// Utility.cpp
bool FileExists(const WCHAR* Filename);
bool DirExists(const WCHAR* DirPath);
HWND FindMainWindow(DWORD process_id);
bool INI_GetBool(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, bool DefaultValue);
float INI_GetFloat(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, float DefaultValue);

template <typename T>
void SafeWrite(uintptr_t address, T value)
{
  DWORD oldProtect = 0;
  VirtualProtect((LPVOID)address, sizeof(T), PAGE_READWRITE, &oldProtect);
  *reinterpret_cast<T*>(address) = value;
  VirtualProtect((LPVOID)address, sizeof(T), oldProtect, &oldProtect);
}

template <typename T>
void SafeWrite(uintptr_t address, T value, int count)
{
  DWORD oldProtect = 0;
  VirtualProtect((LPVOID)address, sizeof(T) * count, PAGE_READWRITE, &oldProtect);
  for(int i = 0; i < count; i++)
    *reinterpret_cast<T*>(address + (sizeof(T) * i)) = value;
  VirtualProtect((LPVOID)address, sizeof(T) * count, oldProtect, &oldProtect);
}

template <typename T>
void SafeWrite(uintptr_t address, T* value, int count)
{
  DWORD oldProtect = 0;
  VirtualProtect((LPVOID)address, sizeof(T) * count, PAGE_READWRITE, &oldProtect);
  for (int i = 0; i < count; i++)
    *reinterpret_cast<T*>(address + (sizeof(T) * i)) = value[i];
  VirtualProtect((LPVOID)address, sizeof(T) * count, oldProtect, &oldProtect);
}

template <typename T>
void SafeWriteModule(uintptr_t offset, T value)
{
  SafeWrite<T>(mBaseAddress + offset, value);
}

template <typename T>
void SafeWriteModule(uintptr_t offset, T value, int count)
{
  SafeWrite<T>(mBaseAddress + offset, value, count);
}

template <typename T>
void SafeWriteModule(uintptr_t offset, T* value, int count)
{
  SafeWrite<T>(mBaseAddress + offset, value, count);
}

// Same as SafeWrite but doesn't VirtualProtect first, more efficient if you already know the memory is writable!
template <typename T>
inline void UnsafeWriteModule(uintptr_t offset, T value)
{
  *reinterpret_cast<T*>(mBaseAddress + offset) = value;
}

inline void PatchCall(uintptr_t callAddr, uintptr_t callDest)
{
  uint8_t callBuf[] = { 0xE8, 0x00, 0x00, 0x00, 0x00 };
  uint32_t diff = uint32_t(callDest - (callAddr + 5));
  *(uint32_t*)&callBuf[1] = diff;

  SafeWrite(callAddr, callBuf, 5);
}
