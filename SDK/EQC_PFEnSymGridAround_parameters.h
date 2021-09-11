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

// Function EQC_PFEnSymGridAround.EQC_PFEnSymGridAround_C.GetGroundLocation
struct UEQC_PFEnSymGridAround_C_GetGroundLocation_Params
{
	class ABP_EncountSymbolBase_C*                     InPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function EQC_PFEnSymGridAround.EQC_PFEnSymGridAround_C.ProvideSingleLocation
struct UEQC_PFEnSymGridAround_C_ProvideSingleLocation_Params
{
	class UObject*                                     QuerierObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      QuerierActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultingLocation;                                        // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
