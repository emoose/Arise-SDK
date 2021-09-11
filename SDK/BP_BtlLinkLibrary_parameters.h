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

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.ShowLoadInfo
struct UBP_BtlLinkLibrary_C_ShowLoadInfo_Params
{
	struct FString                                     DebugMessage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsLoadingBattleWarAssetsComplated_Implementation
struct UBP_BtlLinkLibrary_C_IsLoadingBattleWarAssetsComplated_Implementation_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLoadComplated;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetMapOrderManagerInterface
struct UBP_BtlLinkLibrary_C_GetMapOrderManagerInterface_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBP_MapOrderManagerInterface_C> MapOrderManager;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetExcludeLevelScenarioCondition
struct UBP_BtlLinkLibrary_C_GetExcludeLevelScenarioCondition_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ExludeLevels;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetBattleLevelNames
struct UBP_BtlLinkLibrary_C_GetBattleLevelNames_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsBattleMap
struct UBP_BtlLinkLibrary_C_IsBattleMap_Params
{
	struct FString                                     MapNames;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetBattleUnnecessaryFieldLevelName
struct UBP_BtlLinkLibrary_C_GetBattleUnnecessaryFieldLevelName_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadRequiredResident
struct UBP_BtlLinkLibrary_C_UnloadRequiredResident_Params
{
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncRequiredResident
struct UBP_BtlLinkLibrary_C_LoadAsyncRequiredResident_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncBattle
struct UBP_BtlLinkLibrary_C_LoadAsyncBattle_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       EncountGroup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SourceContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadBattle
struct UBP_BtlLinkLibrary_C_UnloadBattle_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       EncountGroup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SourceContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadEncountGroup
struct UBP_BtlLinkLibrary_C_UnloadEncountGroup_Params
{
	struct FName                                       EncountGroup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncEncountGroup
struct UBP_BtlLinkLibrary_C_LoadAsyncEncountGroup_Params
{
	struct FName                                       EncountGroup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.HideBattleMap
struct UBP_BtlLinkLibrary_C_HideBattleMap_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsShowBattleLevelComplete
struct UBP_BtlLinkLibrary_C_IsShowBattleLevelComplete_Params
{
	struct FName                                       LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.ChangeVisibleBattleLevel
struct UBP_BtlLinkLibrary_C_ChangeVisibleBattleLevel_Params
{
	struct FName                                       LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.GetOnMemoryBattleMap
struct UBP_BtlLinkLibrary_C_GetOnMemoryBattleMap_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsShowBattleMapComplete
struct UBP_BtlLinkLibrary_C_IsShowBattleMapComplete_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.ShowBattleMap
struct UBP_BtlLinkLibrary_C_ShowBattleMap_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadBattleMapAll
struct UBP_BtlLinkLibrary_C_UnloadBattleMapAll_Params
{
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.UnloadBattleMap
struct UBP_BtlLinkLibrary_C_UnloadBattleMap_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsLoadCompleteBattleMap
struct UBP_BtlLinkLibrary_C_IsLoadCompleteBattleMap_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.LoadAsyncBattleMap
struct UBP_BtlLinkLibrary_C_LoadAsyncBattleMap_Params
{
	struct FString                                     MapDatabaseName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.BattleFinalizeToTitle
struct UBP_BtlLinkLibrary_C_BattleFinalizeToTitle_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLinkLibrary.BP_BtlLinkLibrary_C.IsFieldMapAllHide
struct UBP_BtlLinkLibrary_C_IsFieldMapAllHide_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hide;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
