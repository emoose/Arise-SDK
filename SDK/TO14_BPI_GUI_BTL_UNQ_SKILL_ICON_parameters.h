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

// Function TO14_BPI_GUI_BTL_UNQ_SKILL_ICON.TO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C.SetIcon_Party
struct UTO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C_SetIcon_Party_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_BTL_UNQ_SKILL_ICON.TO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C.GetTargetImage
struct UTO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C_GetTargetImage_Params
{
	class UImage*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
