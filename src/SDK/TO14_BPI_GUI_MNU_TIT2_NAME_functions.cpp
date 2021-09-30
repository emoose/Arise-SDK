
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

// Function TO14_BPI_GUI_MNU_TIT2_NAME.TO14_BPI_GUI_MNU_TIT2_NAME_C.OnRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_NAME_C::OnRefresh(EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_NAME.TO14_BPI_GUI_MNU_TIT2_NAME_C.OnRefresh");

	UTO14_BPI_GUI_MNU_TIT2_NAME_C_OnRefresh_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_NAME.TO14_BPI_GUI_MNU_TIT2_NAME_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_NAME
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_NAME_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_NAME(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_NAME.TO14_BPI_GUI_MNU_TIT2_NAME_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_NAME");

	UTO14_BPI_GUI_MNU_TIT2_NAME_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_NAME_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
