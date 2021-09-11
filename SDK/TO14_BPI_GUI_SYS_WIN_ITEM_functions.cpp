
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

// Function TO14_BPI_GUI_SYS_WIN_ITEM.TO14_BPI_GUI_SYS_WIN_ITEM_C.SetItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StrikeThrough                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasStrikeThrough               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_ITEM_C::SetItemData(const struct FString& ItemLabel, int ItemNum, bool StrikeThrough, bool HasStrikeThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_ITEM.TO14_BPI_GUI_SYS_WIN_ITEM_C.SetItemData");

	UTO14_BPI_GUI_SYS_WIN_ITEM_C_SetItemData_Params params;
	params.ItemLabel = ItemLabel;
	params.ItemNum = ItemNum;
	params.StrikeThrough = StrikeThrough;
	params.HasStrikeThrough = HasStrikeThrough;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
