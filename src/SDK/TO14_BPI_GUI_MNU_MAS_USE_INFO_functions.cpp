
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

// Function TO14_BPI_GUI_MNU_MAS_USE_INFO.TO14_BPI_GUI_MNU_MAS_USE_INFO_C.SetArtsLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  UseChara                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_USE_INFO_C::SetArtsLabel(const struct FName& Label, EArisePartyID UseChara)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_USE_INFO.TO14_BPI_GUI_MNU_MAS_USE_INFO_C.SetArtsLabel");

	UTO14_BPI_GUI_MNU_MAS_USE_INFO_C_SetArtsLabel_Params params;
	params.Label = Label;
	params.UseChara = UseChara;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
