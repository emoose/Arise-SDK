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

// Function PFT_EnSym_MoveTo.PFT_EnSym_MoveTo_C.ShowLog
struct UPFT_EnSym_MoveTo_C_ShowLog_Params
{
};

// Function PFT_EnSym_MoveTo.PFT_EnSym_MoveTo_C.GetPathStart
struct UPFT_EnSym_MoveTo_C_GetPathStart_Params
{
	struct FVector                                     Retrun_Value;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function PFT_EnSym_MoveTo.PFT_EnSym_MoveTo_C.DrawDebugPath
struct UPFT_EnSym_MoveTo_C_DrawDebugPath_Params
{
};

// Function PFT_EnSym_MoveTo.PFT_EnSym_MoveTo_C.UpdatePathPointIndex
struct UPFT_EnSym_MoveTo_C_UpdatePathPointIndex_Params
{
	bool                                               ReachedDestination;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_MoveTo.PFT_EnSym_MoveTo_C.IsAtLocation
struct UPFT_EnSym_MoveTo_C_IsAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              AcceptDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_MoveTo.PFT_EnSym_MoveTo_C.GetCurrentPathPoint
struct UPFT_EnSym_MoveTo_C_GetCurrentPathPoint_Params
{
	struct FVector                                     Point;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function PFT_EnSym_MoveTo.PFT_EnSym_MoveTo_C.OnExecute
struct UPFT_EnSym_MoveTo_C_OnExecute_Params
{
};

// Function PFT_EnSym_MoveTo.PFT_EnSym_MoveTo_C.OnTick
struct UPFT_EnSym_MoveTo_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_MoveTo.PFT_EnSym_MoveTo_C.ExecuteUbergraph_PFT_EnSym_MoveTo
struct UPFT_EnSym_MoveTo_C_ExecuteUbergraph_PFT_EnSym_MoveTo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
