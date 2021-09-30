
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

// Function BP_ScreenMaskBase.BP_ScreenMaskBase_C.TakeOverFadeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScreenMaskBase*         OldMask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScreenMaskBase_C::TakeOverFadeState(class AScreenMaskBase* OldMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenMaskBase.BP_ScreenMaskBase_C.TakeOverFadeState");

	ABP_ScreenMaskBase_C_TakeOverFadeState_Params params;
	params.OldMask = OldMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenMaskBase.BP_ScreenMaskBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ScreenMaskBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenMaskBase.BP_ScreenMaskBase_C.UserConstructionScript");

	ABP_ScreenMaskBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
