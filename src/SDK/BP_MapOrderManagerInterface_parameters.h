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

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNamesInHideMenuScene
struct UBP_MapOrderManagerInterface_C_GetLevelNamesInHideMenuScene_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bValidMap;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetMapUser
struct UBP_MapOrderManagerInterface_C_GetMapUser_Params
{
	TMap<struct FString, int>                          MapUser;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetEnvLevel
struct UBP_MapOrderManagerInterface_C_GetEnvLevel_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EnvLevel;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetExcludeLevelsWithScenarioCondtion
struct UBP_MapOrderManagerInterface_C_GetExcludeLevelsWithScenarioCondtion_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapHide
struct UBP_MapOrderManagerInterface_C_IsMapHide_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bBattleScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHide;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNamesInRequired
struct UBP_MapOrderManagerInterface_C_GetLevelNamesInRequired_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	ELevelRequiredSetting                              InRequired;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNamesInType
struct UBP_MapOrderManagerInterface_C_GetLevelNamesInType_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EMapOrderType                                      InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapUnloaded
struct UBP_MapOrderManagerInterface_C_IsMapUnloaded_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bUnloaded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.UnloadMap
struct UBP_MapOrderManagerInterface_C_UnloadMap_Params
{
	struct FString                                     MapName;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsLevelsVisibled
struct UBP_MapOrderManagerInterface_C_IsLevelsVisibled_Params
{
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bVisibled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapVisibledWithExclude
struct UBP_MapOrderManagerInterface_C_IsMapVisibledWithExclude_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               BattleScene;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.ShowLevels
struct UBP_MapOrderManagerInterface_C_ShowLevels_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Levels;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.ShowMapWithExlude
struct UBP_MapOrderManagerInterface_C_ShowMapWithExlude_Params
{
	bool                                               bShow;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsLevelsLoaded
struct UBP_MapOrderManagerInterface_C_IsLevelsLoaded_Params
{
	TArray<struct FName>                               Levels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.IsMapLoadedWithExclude
struct UBP_MapOrderManagerInterface_C_IsMapLoadedWithExclude_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               ExcludeLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.GetLevelNames
struct UBP_MapOrderManagerInterface_C_GetLevelNames_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LevelNames;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MapOrderManagerInterface.BP_MapOrderManagerInterface_C.PreloadMap
struct UBP_MapOrderManagerInterface_C_PreloadMap_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bReload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
