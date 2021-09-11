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

// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.CheckItemNotEnough
struct UBP_SCHOBJ_SearchPoint_C_CheckItemNotEnough_Params
{
	struct FST_PFSC_QuestTargetData                    Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.IsQuestItem
struct UBP_SCHOBJ_SearchPoint_C_IsQuestItem_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.GetShortChatDatabase
struct UBP_SCHOBJ_SearchPoint_C_GetShortChatDatabase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.CanCheck
struct UBP_SCHOBJ_SearchPoint_C_CanCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.GetTarget
struct UBP_SCHOBJ_SearchPoint_C_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.IsTarget
struct UBP_SCHOBJ_SearchPoint_C_IsTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.ReceiveBeginPlay
struct UBP_SCHOBJ_SearchPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.CheckQuest
struct UBP_SCHOBJ_SearchPoint_C_CheckQuest_Params
{
};

// Function BP_SCHOBJ_SearchPoint.BP_SCHOBJ_SearchPoint_C.ExecuteUbergraph_BP_SCHOBJ_SearchPoint
struct UBP_SCHOBJ_SearchPoint_C_ExecuteUbergraph_BP_SCHOBJ_SearchPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
