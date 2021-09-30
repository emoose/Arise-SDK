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

// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.K2_FinalCheck
struct UBP_PF_SCHTimer_C_K2_FinalCheck_Params
{
	struct FShortChatConditionData                     Condition;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.CollectConditionList
struct UBP_PF_SCHTimer_C_CollectConditionList_Params
{
};

// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.Bind
struct UBP_PF_SCHTimer_C_Bind_Params
{
};

// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.Unbind
struct UBP_PF_SCHTimer_C_Unbind_Params
{
};

// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.OnMapChange
struct UBP_PF_SCHTimer_C_OnMapChange_Params
{
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.OnEndBattleScene
struct UBP_PF_SCHTimer_C_OnEndBattleScene_Params
{
	struct FBtlResultInfo                              ResultInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.K2_Initialize
struct UBP_PF_SCHTimer_C_K2_Initialize_Params
{
};

// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.K2_Terminate
struct UBP_PF_SCHTimer_C_K2_Terminate_Params
{
};

// Function BP_PF_SCHTimer.BP_PF_SCHTimer_C.ExecuteUbergraph_BP_PF_SCHTimer
struct UBP_PF_SCHTimer_C_ExecuteUbergraph_BP_PF_SCHTimer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
