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

// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.CanCheck
struct UBP_SCHOBJ_TreasurePoint_C_CanCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.GetTarget
struct UBP_SCHOBJ_TreasurePoint_C_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.IsTarget
struct UBP_SCHOBJ_TreasurePoint_C_IsTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.ReceiveBeginPlay
struct UBP_SCHOBJ_TreasurePoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.ReceiveEndPlay
struct UBP_SCHOBJ_TreasurePoint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_TreasurePoint.BP_SCHOBJ_TreasurePoint_C.ExecuteUbergraph_BP_SCHOBJ_TreasurePoint
struct UBP_SCHOBJ_TreasurePoint_C_ExecuteUbergraph_BP_SCHOBJ_TreasurePoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
