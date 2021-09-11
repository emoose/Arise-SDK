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

// Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.GetLocation
struct UPFT_EnSym_RandomGroundMoveTo_C_GetLocation_Params
{
	bool                                               AIMoved;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.GetFirstEndPoint
struct UPFT_EnSym_RandomGroundMoveTo_C_GetFirstEndPoint_Params
{
	struct FVector                                     Point;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.GetActorLocation
struct UPFT_EnSym_RandomGroundMoveTo_C_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.OnExecute
struct UPFT_EnSym_RandomGroundMoveTo_C_OnExecute_Params
{
};

// Function PFT_EnSym_RandomGroundMoveTo.PFT_EnSym_RandomGroundMoveTo_C.ExecuteUbergraph_PFT_EnSym_RandomGroundMoveTo
struct UPFT_EnSym_RandomGroundMoveTo_C_ExecuteUbergraph_PFT_EnSym_RandomGroundMoveTo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
