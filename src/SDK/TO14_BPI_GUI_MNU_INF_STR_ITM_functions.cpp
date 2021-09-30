
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

// Function TO14_BPI_GUI_MNU_INF_STR_ITM.TO14_BPI_GUI_MNU_INF_STR_ITM_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_INF_STR_ITM_C::SetItem(const struct FString& ItemLabel, int ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_INF_STR_ITM.TO14_BPI_GUI_MNU_INF_STR_ITM_C.SetItem");

	UTO14_BPI_GUI_MNU_INF_STR_ITM_C_SetItem_Params params;
	params.ItemLabel = ItemLabel;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
