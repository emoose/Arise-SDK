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

// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.PrintDebugLog
struct UPFT_EnSym_GetRandomMovePoint_EQS_C_PrintDebugLog_Params
{
};

// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.IsOutMoveRange
struct UPFT_EnSym_GetRandomMovePoint_EQS_C_IsOutMoveRange_Params
{
	float                                              RotatorZ;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoveLength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.GetMoveDirToLocation
struct UPFT_EnSym_GetRandomMovePoint_EQS_C_GetMoveDirToLocation_Params
{
	float                                              RotatorZ;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoveLength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.GetRotatorZ
struct UPFT_EnSym_GetRandomMovePoint_EQS_C_GetRotatorZ_Params
{
	float                                              Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotatorZ;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.GetMovePoint
struct UPFT_EnSym_GetRandomMovePoint_EQS_C_GetMovePoint_Params
{
};

// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.OnExecute
struct UPFT_EnSym_GetRandomMovePoint_EQS_C_OnExecute_Params
{
};

// Function PFT_EnSym_GetRandomMovePoint_EQS.PFT_EnSym_GetRandomMovePoint_EQS_C.ExecuteUbergraph_PFT_EnSym_GetRandomMovePoint_EQS
struct UPFT_EnSym_GetRandomMovePoint_EQS_C_ExecuteUbergraph_PFT_EnSym_GetRandomMovePoint_EQS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
