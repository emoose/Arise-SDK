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

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetSnapTerrainCharacterLocation
struct UBP_MapFunctionLib_C_GetSnapTerrainCharacterLocation_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SnapLocation;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.UnloadMap
struct UBP_MapFunctionLib_C_UnloadMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bAtActorFinalize;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnloadAccept;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetMapOrderManagerInterface
struct UBP_MapFunctionLib_C_GetMapOrderManagerInterface_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBP_MapOrderManagerInterface_C> MapOrderManager;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.MapJump
struct UBP_MapFunctionLib_C_MapJump_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ChangeScenarioFlag;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.PreloadMap
struct UBP_MapFunctionLib_C_PreloadMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAccept;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreloaded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.HideSubLevelAtEvent
struct UBP_MapFunctionLib_C_HideSubLevelAtEvent_Params
{
	TArray<EMapOrderType>                              HideType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HideMapNames;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetMapOrderManagerNative
struct UBP_MapFunctionLib_C_GetMapOrderManagerNative_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMapOrderManager*                            MapOrderManager;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetChangeMapReason
struct UBP_MapFunctionLib_C_GetChangeMapReason_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMapChangeReason                                   MapChangeReason;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetLongChatGamma
struct UBP_MapFunctionLib_C_GetLongChatGamma_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gamma;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetBattleUnnecessaryFieldLevelName
struct UBP_MapFunctionLib_C_GetBattleUnnecessaryFieldLevelName_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowMapEnvironment
struct UBP_MapFunctionLib_C_ShowMapEnvironment_Params
{
	bool                                               bNewShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.CurrentTimeZoneShift
struct UBP_MapFunctionLib_C_CurrentTimeZoneShift_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWorldTimeZone                                     TimeZone;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowSubLevel
struct UBP_MapFunctionLib_C_ShowSubLevel_Params
{
	EMapOrderType                                      MapOrderType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuc;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOldVisible;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetPrevLevelName
struct UBP_MapFunctionLib_C_GetPrevLevelName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LevelName;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetCurrentLevelName
struct UBP_MapFunctionLib_C_GetCurrentLevelName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LevelName;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ReloadCurrentMap
struct UBP_MapFunctionLib_C_ReloadCurrentMap_Params
{
	bool                                               bChangeMap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetExcludeLevelScenarioCondition
struct UBP_MapFunctionLib_C_GetExcludeLevelScenarioCondition_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ExludeLevels;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapAllHide
struct UBP_MapFunctionLib_C_IsMapAllHide_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHide;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowFieldMap
struct UBP_MapFunctionLib_C_ShowFieldMap_Params
{
	bool                                               NewShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsFieldMapAllHide
struct UBP_MapFunctionLib_C_IsFieldMapAllHide_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHide;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsBattleMap
struct UBP_MapFunctionLib_C_IsBattleMap_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBattleMap;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetLevelNamesInRequired
struct UBP_MapFunctionLib_C_GetLevelNamesInRequired_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	ELevelRequiredSetting                              InRequired;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetBattleLevelNames
struct UBP_MapFunctionLib_C_GetBattleLevelNames_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapUnloaded
struct UBP_MapFunctionLib_C_IsMapUnloaded_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnloaded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.UnloadAnsyncMap
struct UBP_MapFunctionLib_C_UnloadAnsyncMap_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsLevelsVisibled
struct UBP_MapFunctionLib_C_IsLevelsVisibled_Params
{
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapVisibled
struct UBP_MapFunctionLib_C_IsMapVisibled_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               BattleScene;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowLevels
struct UBP_MapFunctionLib_C_ShowLevels_Params
{
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               NewShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.ShowMap
struct UBP_MapFunctionLib_C_ShowMap_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               NewShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsLevelsLoaded
struct UBP_MapFunctionLib_C_IsLevelsLoaded_Params
{
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.IsMapLoaded
struct UBP_MapFunctionLib_C_IsMapLoaded_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.GetLevelNames
struct UBP_MapFunctionLib_C_GetLevelNames_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapFunctionLib.BP_MapFunctionLib_C.LoadAsyncMap
struct UBP_MapFunctionLib_C_LoadAsyncMap_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAaccept;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
