
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

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.LogDelayFadeStateCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InFadeState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_DefaultScreenMask_C::LogDelayFadeStateCheck(const struct FString& InFadeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.LogDelayFadeStateCheck");

	ABP_DefaultScreenMask_C_LogDelayFadeStateCheck_Params params;
	params.InFadeState = InFadeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.LogAnimationRequestCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InFadeState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_DefaultScreenMask_C::LogAnimationRequestCheck(const struct FString& InFadeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.LogAnimationRequestCheck");

	ABP_DefaultScreenMask_C_LogAnimationRequestCheck_Params params;
	params.InFadeState = InFadeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.IsUnMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnMasked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultScreenMask_C::IsUnMasked(bool* bUnMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.IsUnMasked");

	ABP_DefaultScreenMask_C_IsUnMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnMasked != nullptr)
		*bUnMasked = params.bUnMasked;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.IsMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMasked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultScreenMask_C::IsMasked(bool* bMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.IsMasked");

	ABP_DefaultScreenMask_C_IsMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMasked != nullptr)
		*bMasked = params.bMasked;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.ChangeVisibleNowLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultScreenMask_C::ChangeVisibleNowLoading(bool bNewVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.ChangeVisibleNowLoading");

	ABP_DefaultScreenMask_C_ChangeVisibleNowLoading_Params params;
	params.bNewVisible = bNewVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.DoScreenFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantry                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultScreenMask_C::DoScreenFade(bool FadeWhite, bool FadeOut, bool bInstantry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.DoScreenFade");

	ABP_DefaultScreenMask_C_DoScreenFade_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;
	params.bInstantry = bInstantry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DefaultScreenMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.UserConstructionScript");

	ABP_DefaultScreenMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.DoScreenMask
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaskOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultScreenMask_C::DoScreenMask(bool MaskOn, bool bInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.DoScreenMask");

	ABP_DefaultScreenMask_C_DoScreenMask_Params params;
	params.MaskOn = MaskOn;
	params.bInstantly = bInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DefaultScreenMask_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.ReceiveBeginPlay");

	ABP_DefaultScreenMask_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.OnScreenFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantry                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultScreenMask_C::OnScreenFade(bool FadeWhite, bool FadeOut, bool bInstantry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.OnScreenFade");

	ABP_DefaultScreenMask_C_OnScreenFade_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;
	params.bInstantry = bInstantry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.OnReleaseCurrent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DefaultScreenMask_C::OnReleaseCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.OnReleaseCurrent");

	ABP_DefaultScreenMask_C_OnReleaseCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.OnAssignCurrent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DefaultScreenMask_C::OnAssignCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.OnAssignCurrent");

	ABP_DefaultScreenMask_C_OnAssignCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.ExecuteUbergraph_BP_DefaultScreenMask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultScreenMask_C::ExecuteUbergraph_BP_DefaultScreenMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.ExecuteUbergraph_BP_DefaultScreenMask");

	ABP_DefaultScreenMask_C_ExecuteUbergraph_BP_DefaultScreenMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.EventScreenFade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantry                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DefaultScreenMask_C::EventScreenFade__DelegateSignature(bool FadeWhite, bool FadeOut, bool bInstantry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.EventScreenFade__DelegateSignature");

	ABP_DefaultScreenMask_C_EventScreenFade__DelegateSignature_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;
	params.bInstantry = bInstantry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
