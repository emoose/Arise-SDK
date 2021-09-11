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

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.IsRequestEvent_EnableControl
struct ABP_PF_DelegateManager_C_IsRequestEvent_EnableControl_Params
{
	EAriseGameState                                    InChangedState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInNextIs;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInCheckIs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOut;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.UserConstructionScript
struct ABP_PF_DelegateManager_C_UserConstructionScript_Params
{
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ReceiveBeginPlay
struct ABP_PF_DelegateManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteBroadcast_EnableControl
struct ABP_PF_DelegateManager_C_ExecuteBroadcast_EnableControl_Params
{
	int                                                InDelegateNum;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteBroadcast_DisableControl
struct ABP_PF_DelegateManager_C_ExecuteBroadcast_DisableControl_Params
{
	int                                                InDelegateNum;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.SetFishingResult
struct ABP_PF_DelegateManager_C_SetFishingResult_Params
{
	struct FString                                     InPointName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             InTypes;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnChageGameState
struct ABP_PF_DelegateManager_C_OnChageGameState_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnChangeDisplayScene
struct ABP_PF_DelegateManager_C_OnChangeDisplayScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteCheckCP
struct ABP_PF_DelegateManager_C_ExecuteCheckCP_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnShowTutorial_PF_PROFICIENCY
struct ABP_PF_DelegateManager_C_OnShowTutorial_PF_PROFICIENCY_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.CustomEvent_1
struct ABP_PF_DelegateManager_C_CustomEvent_1_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnLearnSpArts
struct ABP_PF_DelegateManager_C_OnLearnSpArts_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnPlayFishingLC
struct ABP_PF_DelegateManager_C_OnPlayFishingLC_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.OnCooking
struct ABP_PF_DelegateManager_C_OnCooking_Params
{
	EArisePartyID                                      InPartyID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InRecipeID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.Event Check Item Rate
struct ABP_PF_DelegateManager_C_Event_Check_Item_Rate_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.Event Check Monster Complete Rate
struct ABP_PF_DelegateManager_C_Event_Check_Monster_Complete_Rate_Params
{
	class UPFDelegateArgs_EnableControl*               InArgs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_DelegateManager.BP_PF_DelegateManager_C.ExecuteUbergraph_BP_PF_DelegateManager
struct ABP_PF_DelegateManager_C_ExecuteUbergraph_BP_PF_DelegateManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
