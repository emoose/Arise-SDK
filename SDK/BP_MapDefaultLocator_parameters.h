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

// Function BP_MapDefaultLocator.BP_MapDefaultLocator_C.UserConstructionScript
struct ABP_MapDefaultLocator_C_UserConstructionScript_Params
{
};

// Function BP_MapDefaultLocator.BP_MapDefaultLocator_C.ReceiveTick
struct ABP_MapDefaultLocator_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapDefaultLocator.BP_MapDefaultLocator_C.ExecuteUbergraph_BP_MapDefaultLocator
struct ABP_MapDefaultLocator_C_ExecuteUbergraph_BP_MapDefaultLocator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
