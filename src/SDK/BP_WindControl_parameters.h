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

// Function BP_WindControl.BP_WindControl_C.GetWindDirectional
struct ABP_WindControl_C_GetWindDirectional_Params
{
	class UWindDirectionalSourceComponent*             WindDirectional;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WindControl.BP_WindControl_C.GetWindStrengthScale
struct ABP_WindControl_C_GetWindStrengthScale_Params
{
	float                                              StrengthScale;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WindControl.BP_WindControl_C.UserConstructionScript
struct ABP_WindControl_C_UserConstructionScript_Params
{
};

// Function BP_WindControl.BP_WindControl_C.SetWindStrengthScale
struct ABP_WindControl_C_SetWindStrengthScale_Params
{
	float                                              StrengthScale;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WindControl.BP_WindControl_C.ReceiveBeginPlay
struct ABP_WindControl_C_ReceiveBeginPlay_Params
{
};

// Function BP_WindControl.BP_WindControl_C.ReceiveTick
struct ABP_WindControl_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WindControl.BP_WindControl_C.ExecuteUbergraph_BP_WindControl
struct ABP_WindControl_C_ExecuteUbergraph_BP_WindControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
