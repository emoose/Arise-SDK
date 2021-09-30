
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

// Function TO14_BPI_GUI_MNU_ITM_USE_INFO.TO14_BPI_GUI_MNU_ITM_USE_INFO_C.OpenAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_USE_INFO_C::OpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE_INFO.TO14_BPI_GUI_MNU_ITM_USE_INFO_C.OpenAnimation");

	UTO14_BPI_GUI_MNU_ITM_USE_INFO_C_OpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_USE_INFO.TO14_BPI_GUI_MNU_ITM_USE_INFO_C.SetItemID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_USE_INFO_C::SetItemID(int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_USE_INFO.TO14_BPI_GUI_MNU_ITM_USE_INFO_C.SetItemID");

	UTO14_BPI_GUI_MNU_ITM_USE_INFO_C_SetItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
