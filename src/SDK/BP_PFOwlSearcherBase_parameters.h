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

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetCurrentLevelName
struct ABP_PFOwlSearcherBase_C_GetCurrentLevelName_Params
{
	struct FString                                     LevelName;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetCurrentLocation
struct ABP_PFOwlSearcherBase_C_GetCurrentLocation_Params
{
	struct FString                                     CurrentMapLocation;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetFoundVoiceLabels
struct ABP_PFOwlSearcherBase_C_GetFoundVoiceLabels_Params
{
	TArray<struct FString>                             FoundVoiceLabels;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.UpdateFoundVoiceLabel
struct ABP_PFOwlSearcherBase_C_UpdateFoundVoiceLabel_Params
{
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.GetFoundVoiceLabel
struct ABP_PFOwlSearcherBase_C_GetFoundVoiceLabel_Params
{
	struct FString                                     FoundVoiceLabel;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.IsInTownOrDungeon
struct ABP_PFOwlSearcherBase_C_IsInTownOrDungeon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.RequestShortChat
struct ABP_PFOwlSearcherBase_C_RequestShortChat_Params
{
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.SendCommand
struct ABP_PFOwlSearcherBase_C_SendCommand_Params
{
	struct FName                                       Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.UserConstructionScript
struct ABP_PFOwlSearcherBase_C_UserConstructionScript_Params
{
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ChangeSearchState
struct ABP_PFOwlSearcherBase_C_ChangeSearchState_Params
{
	EPFOwlSearchState                                  InPrevState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPFOwlSearchState                                  InNextState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ReceiveBeginPlay
struct ABP_PFOwlSearcherBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ChangeAvailable
struct ABP_PFOwlSearcherBase_C_ChangeAvailable_Params
{
	bool                                               bInAvailable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnStartToFly
struct ABP_PFOwlSearcherBase_C_OnStartToFly_Params
{
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnEndToIdle
struct ABP_PFOwlSearcherBase_C_OnEndToIdle_Params
{
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnPostMapChange
struct ABP_PFOwlSearcherBase_C_OnPostMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.OnBuild
struct ABP_PFOwlSearcherBase_C_OnBuild_Params
{
};

// Function BP_PFOwlSearcherBase.BP_PFOwlSearcherBase_C.ExecuteUbergraph_BP_PFOwlSearcherBase
struct ABP_PFOwlSearcherBase_C_ExecuteUbergraph_BP_PFOwlSearcherBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
