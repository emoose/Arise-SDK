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

// Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.GetMoveRotationFromMaplinkRot
struct UBP_PreMJ_MoveAction_C_GetMoveRotationFromMaplinkRot_Params
{
	struct FVector                                     MaplinkLoc;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    MoveRotator;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.GetMoveRotationFromMaplinkDB
struct UBP_PreMJ_MoveAction_C_GetMoveRotationFromMaplinkDB_Params
{
	struct FString                                     MapLinkName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FRotator                                    MoveRotator;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.Main
struct UBP_PreMJ_MoveAction_C_Main_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PreMJ_MoveAction.BP_PreMJ_MoveAction_C.ExecuteUbergraph_BP_PreMJ_MoveAction
struct UBP_PreMJ_MoveAction_C_ExecuteUbergraph_BP_PreMJ_MoveAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
