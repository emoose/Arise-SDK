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

// Function BP_BattleScreenMaskInterface.BP_BattleScreenMaskInterface_C.GetScreenMaskAnimState
struct UBP_BattleScreenMaskInterface_C_GetScreenMaskAnimState_Params
{
	EUBtlEncountEffectWidgetState                      NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleScreenMaskInterface.BP_BattleScreenMaskInterface_C.BindingStartAnimFinish
struct UBP_BattleScreenMaskInterface_C_BindingStartAnimFinish_Params
{
	struct FAriseSimpleEventData                       Delegate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
