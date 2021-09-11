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

// Function BP_WindControlInterface.BP_WindControlInterface_C.GetWindDirectional
struct UBP_WindControlInterface_C_GetWindDirectional_Params
{
	class UWindDirectionalSourceComponent*             WindDirectional;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WindControlInterface.BP_WindControlInterface_C.GetWindStrengthScale
struct UBP_WindControlInterface_C_GetWindStrengthScale_Params
{
	float                                              StrengthScale;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WindControlInterface.BP_WindControlInterface_C.SetWindStrengthScale
struct UBP_WindControlInterface_C_SetWindStrengthScale_Params
{
	float                                              StrengthScale;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
