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

// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.IsAtLocation
struct UPFT_EnSym_UpdateNextSplinePoint_C_IsAtLocation_Params
{
	float                                              AcceptDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.GetSplineData
struct UPFT_EnSym_UpdateNextSplinePoint_C_GetSplineData_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.GetNextPoint
struct UPFT_EnSym_UpdateNextSplinePoint_C_GetNextPoint_Params
{
	bool                                               Lazy;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.GetNextMovePoint
struct UPFT_EnSym_UpdateNextSplinePoint_C_GetNextMovePoint_Params
{
};

// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.InitSpline
struct UPFT_EnSym_UpdateNextSplinePoint_C_InitSpline_Params
{
};

// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.OnTick
struct UPFT_EnSym_UpdateNextSplinePoint_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.OnExecute
struct UPFT_EnSym_UpdateNextSplinePoint_C_OnExecute_Params
{
};

// Function PFT_EnSym_UpdateNextSplinePoint.PFT_EnSym_UpdateNextSplinePoint_C.ExecuteUbergraph_PFT_EnSym_UpdateNextSplinePoint
struct UPFT_EnSym_UpdateNextSplinePoint_C_ExecuteUbergraph_PFT_EnSym_UpdateNextSplinePoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
