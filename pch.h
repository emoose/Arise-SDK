#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#include "MinHook/MinHook.h"

extern uintptr_t mBaseAddress;

#include "SDK.h"
using namespace SDK;

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
