
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

// Function UMGCampScreenFader.UMGCampScreenFader_C.BlackOut
// (Public, BlueprintCallable, BlueprintEvent)

void UUMGCampScreenFader_C::BlackOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGCampScreenFader.UMGCampScreenFader_C.BlackOut");

	UUMGCampScreenFader_C_BlackOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMGCampScreenFader.UMGCampScreenFader_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMGCampScreenFader_C::SetVisible(bool NewShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMGCampScreenFader.UMGCampScreenFader_C.SetVisible");

	UUMGCampScreenFader_C_SetVisible_Params params;
	params.NewShow = NewShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
