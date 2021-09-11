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

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.GetTargetLocation
struct UBP_SCHOBJ_EncBoss_C_GetTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.CheckEnmyNotEnough
struct UBP_SCHOBJ_EncBoss_C_CheckEnmyNotEnough_Params
{
	struct FST_PFSC_QuestTargetData                    Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.IsQuestEnemy
struct UBP_SCHOBJ_EncBoss_C_IsQuestEnemy_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.GetShortChatDatabase
struct UBP_SCHOBJ_EncBoss_C_GetShortChatDatabase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.FindBossSymbol
struct UBP_SCHOBJ_EncBoss_C_FindBossSymbol_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.FindRareSymbol
struct UBP_SCHOBJ_EncBoss_C_FindRareSymbol_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.GetTarget
struct UBP_SCHOBJ_EncBoss_C_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.CanCheck
struct UBP_SCHOBJ_EncBoss_C_CanCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.IsTarget
struct UBP_SCHOBJ_EncBoss_C_IsTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.ReceiveBeginPlay
struct UBP_SCHOBJ_EncBoss_C_ReceiveBeginPlay_Params
{
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.CheckQuest
struct UBP_SCHOBJ_EncBoss_C_CheckQuest_Params
{
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.ReceiveEndPlay
struct UBP_SCHOBJ_EncBoss_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.Update
struct UBP_SCHOBJ_EncBoss_C_Update_Params
{
};

// Function BP_SCHOBJ_EncBoss.BP_SCHOBJ_EncBoss_C.ExecuteUbergraph_BP_SCHOBJ_EncBoss
struct UBP_SCHOBJ_EncBoss_C_ExecuteUbergraph_BP_SCHOBJ_EncBoss_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
