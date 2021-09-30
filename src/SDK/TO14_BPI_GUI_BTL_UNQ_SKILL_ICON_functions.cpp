
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TO14_BPI_GUI_BTL_UNQ_SKILL_ICON.TO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C.SetIcon_Party
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C::SetIcon_Party(EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_UNQ_SKILL_ICON.TO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C.SetIcon_Party");

	UTO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C_SetIcon_Party_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_UNQ_SKILL_ICON.TO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C.GetTargetImage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UImage*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UImage* UTO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C::GetTargetImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_UNQ_SKILL_ICON.TO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C.GetTargetImage");

	UTO14_BPI_GUI_BTL_UNQ_SKILL_ICON_C_GetTargetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
