#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInHideMenuScene
struct ABP_MapOrderManager_C_GetLevelNamesInHideMenuScene_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bValidMap;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetMapUser
struct ABP_MapOrderManager_C_GetMapUser_Params
{
	TMap<struct FString, int>                          MapUser;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetEnvLevel
struct ABP_MapOrderManager_C_GetEnvLevel_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EnvLevel;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetExcludeLevelsWithScenarioCondtion
struct ABP_MapOrderManager_C_GetExcludeLevelsWithScenarioCondtion_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapHide
struct ABP_MapOrderManager_C_IsMapHide_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bBattleScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHide;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInRequired
struct ABP_MapOrderManager_C_GetLevelNamesInRequired_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	ELevelRequiredSetting                              InRequired;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInType
struct ABP_MapOrderManager_C_GetLevelNamesInType_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EMapOrderType                                      InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapUnloaded
struct ABP_MapOrderManager_C_IsMapUnloaded_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bUnloaded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsVisibled
struct ABP_MapOrderManager_C_IsLevelsVisibled_Params
{
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bVisibled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapVisibledWithExclude
struct ABP_MapOrderManager_C_IsMapVisibledWithExclude_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               BattleScene;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsLoaded
struct ABP_MapOrderManager_C_IsLevelsLoaded_Params
{
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapLoadedWithExclude
struct ABP_MapOrderManager_C_IsMapLoadedWithExclude_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNames
struct ABP_MapOrderManager_C_GetLevelNames_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsValidMapUser?
struct ABP_MapOrderManager_C_IsValidMapUser__Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.CleanupValues
struct ABP_MapOrderManager_C_CleanupValues_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInHideMenuScene_Implementation
struct ABP_MapOrderManager_C_GetLevelNamesInHideMenuScene_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsSameVisible
struct ABP_MapOrderManager_C_IsSameVisible_Params
{
	TArray<bool>                                       Array0;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       Array1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bSame;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetUserCount
struct ABP_MapOrderManager_C_GetUserCount_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Users;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.SnapTerrainLocation
struct ABP_MapOrderManager_C_SnapTerrainLocation_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.FindMapOrderUserWithCache
struct ABP_MapOrderManager_C_FindMapOrderUserWithCache_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMapOrderUser                               User;                                                     // (Parm, OutParm)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ChangePlayerVisibilty
struct ABP_MapOrderManager_C_ChangePlayerVisibilty_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.HidePlayer
struct ABP_MapOrderManager_C_HidePlayer_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetEnvLevel_Implementation
struct ABP_MapOrderManager_C_GetEnvLevel_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EnvLevel;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ChangeMapUserCount
struct ABP_MapOrderManager_C_ChangeMapUserCount_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                oNewUserCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetExcludeLevelsWithScenarioCondtion_Implementation
struct ABP_MapOrderManager_C_GetExcludeLevelsWithScenarioCondtion_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadQueManagement
struct ABP_MapOrderManager_C_UnloadQueManagement_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.LoadQueManagement
struct ABP_MapOrderManager_C_LoadQueManagement_Params
{
	bool                                               bLoadingStart;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.DoUnloadMap
struct ABP_MapOrderManager_C_DoUnloadMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.DoPreloadMap
struct ABP_MapOrderManager_C_DoPreloadMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapHide_Implementation
struct ABP_MapOrderManager_C_IsMapHide_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bBattleScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHide;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInRequired_Implementation
struct ABP_MapOrderManager_C_GetLevelNamesInRequired_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	ELevelRequiredSetting                              InRequired;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNamesInType_Implementation
struct ABP_MapOrderManager_C_GetLevelNamesInType_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EMapOrderType                                      InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsVisibled_Implementation
struct ABP_MapOrderManager_C_IsLevelsVisibled_Implementation_Params
{
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bVisibled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapVisibledWithExclude_Implementation
struct ABP_MapOrderManager_C_IsMapVisibledWithExclude_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               BattleScene;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowLevels_Implementation
struct ABP_MapOrderManager_C_ShowLevels_Implementation_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowMapWithExlude_Implementation
struct ABP_MapOrderManager_C_ShowMapWithExlude_Implementation_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsLevelsLoaded_Implementation
struct ABP_MapOrderManager_C_IsLevelsLoaded_Implementation_Params
{
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapLoadedWithExclude_Implementation
struct ABP_MapOrderManager_C_IsMapLoadedWithExclude_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetLevelNames_Implementation
struct ABP_MapOrderManager_C_GetLevelNames_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.MaskMap
struct ABP_MapOrderManager_C_MaskMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bMask;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MaskReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsValidMapname?
struct ABP_MapOrderManager_C_IsValidMapname__Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetMapLocators
struct ABP_MapOrderManager_C_GetMapLocators_Params
{
	TArray<class ABP_MapLocatorBase_C*>                OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.RemoveSoundLevel
struct ABP_MapOrderManager_C_RemoveSoundLevel_Params
{
	TArray<struct FName>                               SoundLevels;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.AddSoundLevel
struct ABP_MapOrderManager_C_AddSoundLevel_Params
{
	struct FString                                     SoundLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ClearSoundLevels
struct ABP_MapOrderManager_C_ClearSoundLevels_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsSoundBankAvailable
struct ABP_MapOrderManager_C_IsSoundBankAvailable_Params
{
	struct FName                                       BankName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Available;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.LoadSoundBank
struct ABP_MapOrderManager_C_LoadSoundBank_Params
{
	TArray<struct FName>                               SoundLevels;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadSoundBank
struct ABP_MapOrderManager_C_UnloadSoundBank_Params
{
	TArray<struct FName>                               SoundLevels;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.GetMapOrderDatabasePath
struct ABP_MapOrderManager_C_GetMapOrderDatabasePath_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Full;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsAllMapsUnloaded
struct ABP_MapOrderManager_C_IsAllMapsUnloaded_Params
{
	bool                                               bUnloaded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadMap_Implementation
struct ABP_MapOrderManager_C_UnloadMap_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.RemoveMap
struct ABP_MapOrderManager_C_RemoveMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapVisibled
struct ABP_MapOrderManager_C_IsMapVisibled_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bBattleScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapUnloaded_Implementation
struct ABP_MapOrderManager_C_IsMapUnloaded_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bUnloaded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.RemoveAllMaps
struct ABP_MapOrderManager_C_RemoveAllMaps_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadAllMaps
struct ABP_MapOrderManager_C_UnloadAllMaps_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowPlayer
struct ABP_MapOrderManager_C_ShowPlayer_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     AssignLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bLocationFromPartyProfile;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyLocationChange;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ChangeLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowMap
struct ABP_MapOrderManager_C_ShowMap_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bBattleScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAlwaysShow;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.IsMapLoaded
struct ABP_MapOrderManager_C_IsMapLoaded_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.PreloadMap_Implementation
struct ABP_MapOrderManager_C_PreloadMap_Implementation_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bReload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.UserConstructionScript
struct ABP_MapOrderManager_C_UserConstructionScript_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.OnUnloadFinished
struct ABP_MapOrderManager_C_OnUnloadFinished_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.OnLoadFinished
struct ABP_MapOrderManager_C_OnLoadFinished_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ReceiveBeginPlay
struct ABP_MapOrderManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ReceiveTick
struct ABP_MapOrderManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.OnMapGabage
struct ABP_MapOrderManager_C_OnMapGabage_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.PreloadMap
struct ABP_MapOrderManager_C_PreloadMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bReload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowMapWithExlude
struct ABP_MapOrderManager_C_ShowMapWithExlude_Params
{
	bool                                               bShow;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ShowLevels
struct ABP_MapOrderManager_C_ShowLevels_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Levels;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.UnloadMap
struct ABP_MapOrderManager_C_UnloadMap_Params
{
	struct FString                                     MapName;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.BPE_DoCleanup
struct ABP_MapOrderManager_C_BPE_DoCleanup_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.ExecuteUbergraph_BP_MapOrderManager
struct ABP_MapOrderManager_C_ExecuteUbergraph_BP_MapOrderManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.EventMapGabage__DelegateSignature
struct ABP_MapOrderManager_C_EventMapGabage__DelegateSignature_Params
{
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.EventUnloadFinished__DelegateSignature
struct ABP_MapOrderManager_C_EventUnloadFinished__DelegateSignature_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapOrderManager.BP_MapOrderManager_C.EventLoadFinished__DelegateSignature
struct ABP_MapOrderManager_C_EventLoadFinished__DelegateSignature_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
