#include "pch.h"

// How much difference between the FadeOut & the FadeIn variables
extern const int FadeInDelta = 500;

AutoGameAddress Addr_FAchCharacterLODData__ReadsData_Hook( // patch0: 0x1406D46A7
  "FAchCharacterLODData::ReadsData_Hook",
  { 0x4C, 0x8B, 0xC7, 0x49, 0xC1, 0xE0, 0x02, 0x48, 0x8B, 0xD5, 0x48, 0x8B, 0xCE },
  +0xD
);
AutoGameAddress Addr_FAchCharacterLODData__ReadsData_Trampoline( // patch0: 0x1406D4963
  "FAchCharacterLODData::ReadsData_Trampoline",
  { 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC },
  0,
  AutoGameAddressType::Pointer,
  & Addr_FAchCharacterLODData__ReadsData_Hook // searches for 12 0xCC bytes after wherever we found ::ReadsData_Hook
);
AutoGameAddress Addr_GetCSMMaxDistance_Patch( // patch0: 0x142382021
  "GetCSMMaxDistance_Patch",
  { 0xF3, 0x0F, 0x10, 0x40, 0x04, 0x0F, 0x2F, 0xC6, 0x72, 0x0B, 0x0F, 0x28, 0xF0, 0xF3, 0x0F, 0x5D, 0x35 },
  +0xD
);
AutoGameAddress Addr_CharacterSkipLODs_Patch( // patch0: 0x1406D46C1
  "CharacterSkipLODs_Patch",
  { 0x7E, 0x27, 0x48, 0x8B, 0xC6, 0x66, 0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
  +0
);
AutoGameAddress Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_CameraFarFadeInDistance( // patch0: 0x14116BD4D
  "UPFNpcCameraFadeComponent::UPFNpcCameraFadeComponent_CameraFarFadeInDistance",
  { 0xC7, 0x83, 0x18, 0x02, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x45 },
  +0x6
);
AutoGameAddress Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_CameraFarFadeOutDistance( // patch0: 0x14116BD57
  "UPFNpcCameraFadeComponent::UPFNpcCameraFadeComponent_CameraFarFadeOutDistance",
  { 0xC7, 0x83, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x35, 0x45 },
  +0x6
);
AutoGameAddress Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_FarFadeInDistance( // patch0: 0x14116BD89
  "UPFNpcCameraFadeComponent::UPFNpcCameraFadeComponent_FarFadeInDistance",
  { 0xC7, 0x83, 0x38, 0x02, 0x00, 0x00, 0x00, 0x00, 0x61, 0x45 },
  +0x6
);
AutoGameAddress Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_FarFadeOutDistance( // patch0: 0x14116BD93
  "UPFNpcCameraFadeComponent::UPFNpcCameraFadeComponent_FarFadeOutDistance",
  { 0xC7, 0x83, 0x3C, 0x02, 0x00, 0x00, 0x00, 0x00, 0x6D, 0x45 },
  +0x6
);
AutoGameAddress Addr_FPFNpcCameraSettingsData__ICppStructOps__Construct_CameraFarFadeInDistance( // patch0: 0x141180598
  "FPFNpcCameraSettingsData::ICppStructOps::Construct_CameraFarFadeInDistance",
  { 0xC7, 0x42, 0x1C, 0x00, 0x00, 0x2F, 0x45 },
  +0x3
);
AutoGameAddress Addr_FPFNpcCameraSettingsData__ICppStructOps__Construct_CameraFarFadeOutDistance( // patch0: 0x14118059F
  "FPFNpcCameraSettingsData::ICppStructOps::Construct_CameraFarFadeOutDistance",
  { 0xC7, 0x42, 0x24, 0x00, 0x40, 0x35, 0x45 },
  +0x3
);
AutoGameAddress Addr_CVarUROEnable( // patch0: 0x1408ECD26
  "CVarUROEnable",
  { 0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x83, 0x38, 0x00, 0x0F },
  +0x3,
  AutoGameAddressType::Offset4
);

void FAchCharacterLODData_Reader_Hook(void* Dst, void* Src, size_t Size)
{
  // this func copies some floats from FAchCharacterLODData.LODDistances into some stack var
  // we just hook the memcpy call it uses and modify the floats after :)
  // TODO: would be better if we could hook the code that actually reads this data into FAchCharacterLODData in the first place, and modify FAchCharacterLODData directly instead...

  memcpy(Dst, Src, Size);

  if (Options.CharaLODMultiplier >= 0 && Options.CharaLODMultiplier != 1 && Size >= 4)
  {
    uint32_t NumLods = Size / sizeof(float);
    float* DstFloats = reinterpret_cast<float*>(Dst);

    // multiply the first LOD level by multiplier, then add the difference to the other LODs
    // should make the LOD change work better this way, using multiplier on all the LOD levels could result in some crazy high distances that aren't good for perf
    float OrigLOD0 = DstFloats[0];
    float NewLOD0 = OrigLOD0 * Options.CharaLODMultiplier;
    for (uint32_t i = 0; i < NumLods; i++)
    {
      DstFloats[i] = (DstFloats[i] + NewLOD0) - OrigLOD0;
    }
  }

  // the copied floats seem to get read by
  // 1406D46D0 - F3 0F10 00  - movss xmm0,[rax] <<
  // 141253C47 - 48 89 03  - mov [rbx],rax <<
  // 141253B2E - 48 8B 06  - mov rax,[rsi] <<
}
AutoGameAddress Addr_APFNpcManager__InitsDistances( // patch0: 0x140E1C860
  "APFNpcManager::InitsDistances",
  { 0xC7, 0x45, 0x00, 0x00, 0x80, 0x3B, 0x45, 0xC7, 0x45, 0x00, 0x00, 0xC0, 0x41, 0x45, 0xC7, 0x45, 0x00, 0x00, 0x00, 0xF0, 0x41 },
  -0x31
);
typedef void(*APFNpcManager__InitsDistances_Fn)(APFNpcManager* a1, bool a2);
APFNpcManager__InitsDistances_Fn APFNpcManager__InitsDistances_Orig;
void APFNpcManager__InitsDistances_Hook(APFNpcManager* a1, bool a2)
{
  // Seems to only be called once during scene load, should be perfect place to hook!
  APFNpcManager__InitsDistances_Orig(a1, a2);
  if (Options.MinNPCDistance > a1->SpawnSettings.DespawnDistance)
  {
    a1->SpawnSettings.DespawnDistance = Options.MinNPCDistance;
    a1->SpawnSettings.SpawnDistance = Options.MinNPCDistance - FadeInDelta;
  }
  if (Options.MinNPCDistance > a1->SpawnSettingsHigh.DespawnDistance)
  {
    a1->SpawnSettingsHigh.DespawnDistance = Options.MinNPCDistance;
    a1->SpawnSettingsHigh.SpawnDistance = Options.MinNPCDistance - FadeInDelta;
  }
  if (Options.MinNPCDistance > a1->CameraSettings.CameraFarFadeOutDistance)
  {
    a1->CameraSettings.CameraFarFadeOutDistance = Options.MinNPCDistance;
    a1->CameraSettings.CameraFarFadeInDistance = Options.MinNPCDistance - FadeInDelta;
  }
  if (Options.MinNPCDistance > a1->CameraSettingsHigh.CameraFarFadeOutDistance)
  {
    a1->CameraSettingsHigh.CameraFarFadeOutDistance = Options.MinNPCDistance;
    a1->CameraSettingsHigh.CameraFarFadeInDistance = Options.MinNPCDistance - FadeInDelta;
  }
}

// APFNpcWalkSystem::CreateSpawnData handles spawn/despawn of walking NPCs
AutoGameAddress Addr_APFNpcWalkSystem__CreateSpawnData( // patch0: 0x140E2B980
  "APFNpcWalkSystem::CreateSpawnData",
  { 0x4C, 0x8D, 0xA9, 0xA0, 0x03, 0x00, 0x00, 0xF2, 0x0F, 0x11, 0x81, 0x80, 0x03, 0x00, 0x00 },
  -0x22
);
typedef void(*APFNpcWalkSystem__CreateSpawnData_Fn)(APFNpcWalkSystem* thisptr, const struct FPFNpcDefineID& DefineID, const struct FPFNpcWalkSpawnParams& Params);
APFNpcWalkSystem__CreateSpawnData_Fn APFNpcWalkSystem__CreateSpawnData_Orig;
void APFNpcWalkSystem__CreateSpawnData_Hook(APFNpcWalkSystem* thisptr, const struct FPFNpcDefineID& DefineID, const struct FPFNpcWalkSpawnParams& Params)
{
  FPFNpcWalkSpawnParams params = Params;
  params.DespawnMaxDistance = Options.MinNPCDistance;
  APFNpcWalkSystem__CreateSpawnData_Orig(thisptr, DefineID, params);
  // ^ updates a1 + 0x388 with the distance
  // which is then checked at 0x140E2AC96 to see if NPC should be deleted or not
}

AutoGameAddress Addr_AEncountGroup__IsSpawnRangePlayer( // patch0: 0x140DE6AE0
  "AEncountGroup::IsSpawnRangePlayer",
  { 0x48, 0x8B, 0x83, 0x58, 0x01, 0x00, 0x00, 0x0F, 0x28, 0xE8 },
  -0x46
);
typedef bool(*AEncountGroup__IsSpawnRangePlayer_Fn)(AEncountGroup* thisptr, struct FEncountAreaInfo* AreaInfo);
AEncountGroup__IsSpawnRangePlayer_Fn AEncountGroup__IsSpawnRangePlayer_Orig;
bool AEncountGroup__IsSpawnRangePlayer_Hook(AEncountGroup* thisptr, struct FEncountAreaInfo* AreaInfo)
{
  // Only mess with SpawnAreaInfo - seems BattleAreaInfo also goes through this func
  if (AreaInfo != &thisptr->SpawnAreaInfo)
    return AEncountGroup__IsSpawnRangePlayer_Orig(thisptr, AreaInfo);

  FEncountAreaInfo NewAreaInfo;
  NewAreaInfo.Range = AreaInfo->Range * Options.MonsterDistanceMultiplier;
  NewAreaInfo.HalfHeight = AreaInfo->HalfHeight * Options.MonsterDistanceMultiplier;

  return AEncountGroup__IsSpawnRangePlayer_Orig(thisptr, &NewAreaInfo);
}

AutoGameAddress Addr_UAchCharacterBuildComponent__SetCulling( // patch0: 0x1406B11B0
  "UAchCharacterBuildComponent::SetCulling",
  { 0x49, 0x8B, 0x9D, 0xE0, 0x00, 0x00, 0x00, 0x44, 0x0F, 0x44, 0xF1 },
  -0x2F
);
typedef void(*UAchCharacterBuildComponent__SetCulling_Fn)(UAchCharacterBuildComponent* thisptr, bool bCulling);
UAchCharacterBuildComponent__SetCulling_Fn UAchCharacterBuildComponent__SetCulling_Orig;
void UAchCharacterBuildComponent__SetCulling_Hook(UAchCharacterBuildComponent* thisptr, bool bCulling)
{
  // TODO: find the code that's actually reading from whatever this is setting & hook that instead, so this could be toggled at runtime
  // seems to call 2 funcs inside thisptr->PFPlayerCharacter->CapsuleComponent's vftable, one for frustum culling & one for occlusion (if PFPlayerCharacter is the correct class that is...)
  // most likely the bApplyFrustumCull / bApplyOcclusionCull fields, but didn't have any luck setting those directly, seems SetCulling might be creating a CapsuleComponent if it doesn't exist

  UAchCharacterBuildComponent__SetCulling_Orig(thisptr, Options.CharaDisableCull ? false : bCulling);
}

AutoGameAddress Addr_FRelevancePacket__FRelevancePacket( // patch0: 0x141A3F7F0
  "FRelevancePacket::FRelevancePacket",
  { 0x44, 0x89, 0x81, 0x48, 0x04, 0x00, 0x00, 0x44, 0x89, 0x81, 0x48, 0x06, 0x00, 0x00 },
  -0x67
);
typedef void (*FRelevancePacket__FRelevancePacket_Fn)(
  void* thisptr,
  void* InRHICmdList,
  void* InScene,
  void* InView,
  uint8_t InViewBit,
  FMarkRelevantStaticMeshesForViewData& InViewData,
  void* InOutHasDynamicMeshElementsMasks, void* InOutHasDynamicEditorMeshElementsMasks,
  uint8_t* InMarkMasks, void* InPrimitiveCustomDataMemStack, void* InOutHasViewCustomDataMasks);
FRelevancePacket__FRelevancePacket_Fn FRelevancePacket__FRelevancePacket_Orig;
void FRelevancePacket__FRelevancePacket_Hook(
  void* thisptr,
  void* InRHICmdList,
  void* InScene,
  void* InView,
  uint8_t InViewBit,
  FMarkRelevantStaticMeshesForViewData& InViewData,
  void* InOutHasDynamicMeshElementsMasks, void* InOutHasDynamicEditorMeshElementsMasks,
  uint8_t* InMarkMasks, void* InPrimitiveCustomDataMemStack, void* InOutHasViewCustomDataMasks)
{
  if (Options.ForcedLODLevel >= 0)
    InViewData.ForcedLODLevel = Options.ForcedLODLevel;

  FRelevancePacket__FRelevancePacket_Orig(thisptr, InRHICmdList, InScene, InView, InViewBit, InViewData, InOutHasDynamicMeshElementsMasks, InOutHasDynamicEditorMeshElementsMasks,
    InMarkMasks, InPrimitiveCustomDataMemStack, InOutHasViewCustomDataMasks);
}

void Fixes_Distance_Refresh()
{
  // Keep trying to update URO cvar if we haven't already - cvar itself might not have been inited yet
  static bool UpdatedUROEnable = false;
  if (Options.DisableUpdateRateOptimization && (!inited || !UpdatedUROEnable))
  {
    // TODO:
    // Change a.URO.Enable default to 0, instead of needing to run this code more than once...
    // const uint32_t PatchAddr_UROEnable_Default = 0x4FA446 + 2;
    // SafeWriteModule(PatchAddr_UROEnable_Default, uint32_t(0));

    // TODO: change this to use IConsoleManager, instead of finding a.URO.Enable pointer directly?

    // Update a.URO.Enable value if CVar has already been created
    uint32_t* CVarUROEnable = *Addr_CVarUROEnable.Get<uint32_t**>();
    if (CVarUROEnable)
    {
      CVarUROEnable[0] = CVarUROEnable[1] = 0;
      UpdatedUROEnable = true;
    }
  }

  // Disable CharaLODs if CharaLODMultiplier == -1, else make sure they're enabled
  static float PrevCharaLODMultiplier = -2;
  if (!inited || PrevCharaLODMultiplier != Options.CharaLODMultiplier)
  {
    // change JLE to JMP if we're skipping them
    SafeWrite(Addr_CharacterSkipLODs_Patch.Get(), Options.CharaLODMultiplier == -1 ? uint8_t(0xEB) : uint8_t(0x7E));

    PrevCharaLODMultiplier = Options.CharaLODMultiplier;
  }
}

void Fixes_Distance_Init()
{
  if (true)
  {
    uint8_t* trampolineAddr = Addr_FAchCharacterLODData__ReadsData_Trampoline.Get();

    // Have to write a trampoline somewhere near the hooked addr, needs 12 bytes...
    uint8_t trampoline[] = { 0x48, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xE0 };
    *(uintptr_t*)&trampoline[2] = (uintptr_t)&FAchCharacterLODData_Reader_Hook;

    SafeWrite(trampolineAddr, trampoline, 12);
    PatchCall(Addr_FAchCharacterLODData__ReadsData_Hook.Get(), trampolineAddr);
  }

  if (Options.MinNPCDistance >= 0)
  {
    MH_GameHook(APFNpcManager__InitsDistances);
    MH_GameHook(APFNpcWalkSystem__CreateSpawnData);

    // UPFNpcCameraFadeComponent fade distances
    // (used by BP_PF_NPC_Walk_System / BP_PF_NPC_Walk_AIController)
    SafeWrite(Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_CameraFarFadeInDistance.Get(), Options.MinNPCDistance - FadeInDelta);
    SafeWrite(Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_CameraFarFadeOutDistance.Get(), Options.MinNPCDistance);
    SafeWrite(Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_FarFadeInDistance.Get(), Options.MinNPCDistance - FadeInDelta);
    SafeWrite(Addr_UPFNpcCameraFadeComponent__UPFNpcCameraFadeComponent_FarFadeOutDistance.Get(), Options.MinNPCDistance);

    // FPFNpcCameraSettingsData ICppStructOps::Construct
    SafeWrite(Addr_FPFNpcCameraSettingsData__ICppStructOps__Construct_CameraFarFadeInDistance.Get(), Options.MinNPCDistance - FadeInDelta);
    SafeWrite(Addr_FPFNpcCameraSettingsData__ICppStructOps__Construct_CameraFarFadeOutDistance.Get(), Options.MinNPCDistance);
  }

  MH_GameHook(AEncountGroup__IsSpawnRangePlayer);
  MH_GameHook(UAchCharacterBuildComponent__SetCulling);

  // Add support for r.ForceLOD
  MH_GameHook(FRelevancePacket__FRelevancePacket);

  // Remove limit from r.Shadow.DistanceScale
  SafeWrite(Addr_GetCSMMaxDistance_Patch.Get(), uint8_t(0x90), 8);
}
