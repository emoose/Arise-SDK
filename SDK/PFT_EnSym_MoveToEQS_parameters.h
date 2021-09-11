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

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.GetPathEnd
struct UPFT_EnSym_MoveToEQS_C_GetPathEnd_Params
{
	struct FVector                                     Retrun_Value;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.FindPath
struct UPFT_EnSym_MoveToEQS_C_FindPath_Params
{
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.ShowLog
struct UPFT_EnSym_MoveToEQS_C_ShowLog_Params
{
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.GetPathStart
struct UPFT_EnSym_MoveToEQS_C_GetPathStart_Params
{
	struct FVector                                     Retrun_Value;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.DrawDebugPath
struct UPFT_EnSym_MoveToEQS_C_DrawDebugPath_Params
{
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.UpdatePathPointIndex
struct UPFT_EnSym_MoveToEQS_C_UpdatePathPointIndex_Params
{
	bool                                               ReachedDestination;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.IsAtLocation
struct UPFT_EnSym_MoveToEQS_C_IsAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              AcceptDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.GetCurrentPathPoint
struct UPFT_EnSym_MoveToEQS_C_GetCurrentPathPoint_Params
{
	struct FVector                                     Point;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.OnQueryFinished
struct UPFT_EnSym_MoveToEQS_C_OnQueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.ExecuteEQS
struct UPFT_EnSym_MoveToEQS_C_ExecuteEQS_Params
{
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.OnExecute
struct UPFT_EnSym_MoveToEQS_C_OnExecute_Params
{
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.OnTick
struct UPFT_EnSym_MoveToEQS_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.OnExecEQS
struct UPFT_EnSym_MoveToEQS_C_OnExecEQS_Params
{
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.OnAbort
struct UPFT_EnSym_MoveToEQS_C_OnAbort_Params
{
};

// Function PFT_EnSym_MoveToEQS.PFT_EnSym_MoveToEQS_C.ExecuteUbergraph_PFT_EnSym_MoveToEQS
struct UPFT_EnSym_MoveToEQS_C_ExecuteUbergraph_PFT_EnSym_MoveToEQS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
