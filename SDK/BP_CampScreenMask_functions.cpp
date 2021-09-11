
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

// Function BP_CampScreenMask.BP_CampScreenMask_C.SetFadeSpeedType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_CampScreenMask_C::SetFadeSpeedType(const struct FString& Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.SetFadeSpeedType");

	ABP_CampScreenMask_C_SetFadeSpeedType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.BlackOut
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CampScreenMask_C::BlackOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.BlackOut");

	ABP_CampScreenMask_C_BlackOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.IsUnMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnMasked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CampScreenMask_C::IsUnMasked(bool* bUnMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.IsUnMasked");

	ABP_CampScreenMask_C_IsUnMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnMasked != nullptr)
		*bUnMasked = params.bUnMasked;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.IsMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMasked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CampScreenMask_C::IsMasked(bool* bMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.IsMasked");

	ABP_CampScreenMask_C_IsMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMasked != nullptr)
		*bMasked = params.bMasked;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.ChangeVisibleNowLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CampScreenMask_C::ChangeVisibleNowLoading(bool bNewVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.ChangeVisibleNowLoading");

	ABP_CampScreenMask_C_ChangeVisibleNowLoading_Params params;
	params.bNewVisible = bNewVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.DoScreenFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CampScreenMask_C::DoScreenFade(bool FadeWhite, bool FadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.DoScreenFade");

	ABP_CampScreenMask_C_DoScreenFade_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CampScreenMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.UserConstructionScript");

	ABP_CampScreenMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.DoScreenMask
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaskOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CampScreenMask_C::DoScreenMask(bool MaskOn, bool bInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.DoScreenMask");

	ABP_CampScreenMask_C_DoScreenMask_Params params;
	params.MaskOn = MaskOn;
	params.bInstantly = bInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CampScreenMask_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.ReceiveBeginPlay");

	ABP_CampScreenMask_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.OnScreenFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CampScreenMask_C::OnScreenFade(bool FadeWhite, bool FadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.OnScreenFade");

	ABP_CampScreenMask_C_OnScreenFade_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CampScreenMask_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.ReceiveTick");

	ABP_CampScreenMask_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.OnReleaseCurrent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CampScreenMask_C::OnReleaseCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.OnReleaseCurrent");

	ABP_CampScreenMask_C_OnReleaseCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.ExecuteUbergraph_BP_CampScreenMask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CampScreenMask_C::ExecuteUbergraph_BP_CampScreenMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.ExecuteUbergraph_BP_CampScreenMask");

	ABP_CampScreenMask_C_ExecuteUbergraph_BP_CampScreenMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CampScreenMask.BP_CampScreenMask_C.EventScreenFade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CampScreenMask_C::EventScreenFade__DelegateSignature(bool FadeWhite, bool FadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CampScreenMask.BP_CampScreenMask_C.EventScreenFade__DelegateSignature");

	ABP_CampScreenMask_C_EventScreenFade__DelegateSignature_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
