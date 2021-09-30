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

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsQuest
struct UBP_SCHOBJ_NPC_C_IsQuest_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsModelID
struct UBP_SCHOBJ_NPC_C_IsModelID_Params
{
	struct FString                                     InModelID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsSexAgeType
struct UBP_SCHOBJ_NPC_C_IsSexAgeType_Params
{
	EAchScenarioCharSexType                            Sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAchScenarioCharAgeType                            Age;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetInteractiveSize
struct UBP_SCHOBJ_NPC_C_GetInteractiveSize_Params
{
	float                                              Field;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Dungeon;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Town;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetType
struct UBP_SCHOBJ_NPC_C_GetType_Params
{
	EPFSCHObjDefine                                    Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetShortChatDatabase
struct UBP_SCHOBJ_NPC_C_GetShortChatDatabase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.CanCheck
struct UBP_SCHOBJ_NPC_C_CanCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.GetTarget
struct UBP_SCHOBJ_NPC_C_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.IsTarget
struct UBP_SCHOBJ_NPC_C_IsTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.ReceiveBeginPlay
struct UBP_SCHOBJ_NPC_C_ReceiveBeginPlay_Params
{
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.UpdateNPC
struct UBP_SCHOBJ_NPC_C_UpdateNPC_Params
{
};

// Function BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C.ExecuteUbergraph_BP_SCHOBJ_NPC
struct UBP_SCHOBJ_NPC_C_ExecuteUbergraph_BP_SCHOBJ_NPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
