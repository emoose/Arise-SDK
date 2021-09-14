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

// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.CanCheck
struct UBP_SCHOBJ_CampPoint_C_CanCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.GetTarget
struct UBP_SCHOBJ_CampPoint_C_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.IsTarget
struct UBP_SCHOBJ_CampPoint_C_IsTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.ReceiveEndPlay
struct UBP_SCHOBJ_CampPoint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.ReceiveBeginPlay
struct UBP_SCHOBJ_CampPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.OnChangeScene
struct UBP_SCHOBJ_CampPoint_C_OnChangeScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCHOBJ_CampPoint.BP_SCHOBJ_CampPoint_C.ExecuteUbergraph_BP_SCHOBJ_CampPoint
struct UBP_SCHOBJ_CampPoint_C_ExecuteUbergraph_BP_SCHOBJ_CampPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
