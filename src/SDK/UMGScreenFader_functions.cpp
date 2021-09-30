
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

// Function UMGScreenFader.UMGScreenFader_C.MaskInstantly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bMaskOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWhite                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMGScreenFader_C::MaskInstantly(bool bMaskOn, bool bWhite)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGScreenFader.UMGScreenFader_C.MaskInstantly");

	UUMGScreenFader_C_MaskInstantly_Params params;
	params.bMaskOn = bMaskOn;
	params.bWhite = bWhite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGScreenFader.UMGScreenFader_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMGScreenFader_C::SetVisible(bool bNewShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGScreenFader.UMGScreenFader_C.SetVisible");

	UUMGScreenFader_C_SetVisible_Params params;
	params.bNewShow = bNewShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGScreenFader.UMGScreenFader_C.VisibleNowLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMGScreenFader_C::VisibleNowLoading(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGScreenFader.UMGScreenFader_C.VisibleNowLoading");

	UUMGScreenFader_C_VisibleNowLoading_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
