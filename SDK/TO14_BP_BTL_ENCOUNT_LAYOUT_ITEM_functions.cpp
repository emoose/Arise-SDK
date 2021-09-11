
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

// Function TO14_BP_BTL_ENCOUNT_LAYOUT_ITEM.TO14_BP_BTL_ENCOUNT_LAYOUT_ITEM_C.SetModifiedText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           iModText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_BTL_ENCOUNT_LAYOUT_ITEM_C::SetModifiedText(const struct FModifiedText& iModText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ENCOUNT_LAYOUT_ITEM.TO14_BP_BTL_ENCOUNT_LAYOUT_ITEM_C.SetModifiedText");

	UTO14_BP_BTL_ENCOUNT_LAYOUT_ITEM_C_SetModifiedText_Params params;
	params.iModText = iModText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
