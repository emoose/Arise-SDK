
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

// Function BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleCaptchaScreenMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C.UserConstructionScript");

	ABP_BattleCaptchaScreenMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C.OnReleaseCurrent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleCaptchaScreenMask_C::OnReleaseCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C.OnReleaseCurrent");

	ABP_BattleCaptchaScreenMask_C_OnReleaseCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C.DoMaskOn
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_BattleCaptchaScreenMask_C::DoMaskOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C.DoMaskOn");

	ABP_BattleCaptchaScreenMask_C_DoMaskOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C.DoCaptureSceneComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleCaptchaScreenMask_C::DoCaptureSceneComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C.DoCaptureSceneComplete");

	ABP_BattleCaptchaScreenMask_C_DoCaptureSceneComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C.ExecuteUbergraph_BP_BattleCaptchaScreenMask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleCaptchaScreenMask_C::ExecuteUbergraph_BP_BattleCaptchaScreenMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleCaptchaScreenMask.BP_BattleCaptchaScreenMask_C.ExecuteUbergraph_BP_BattleCaptchaScreenMask");

	ABP_BattleCaptchaScreenMask_C_ExecuteUbergraph_BP_BattleCaptchaScreenMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
