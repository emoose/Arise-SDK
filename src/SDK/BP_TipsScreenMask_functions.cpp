
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

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.IsShowTips
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::IsShowTips(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.IsShowTips");

	ABP_TipsScreenMask_C_IsShowTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.CreateUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TipsScreenMask_C::CreateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.CreateUI");

	ABP_TipsScreenMask_C_CreateUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.IsUnMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnMasked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::IsUnMasked(bool* bUnMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.IsUnMasked");

	ABP_TipsScreenMask_C_IsUnMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnMasked != nullptr)
		*bUnMasked = params.bUnMasked;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.IsMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMasked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::IsMasked(bool* bMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.IsMasked");

	ABP_TipsScreenMask_C_IsMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMasked != nullptr)
		*bMasked = params.bMasked;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.ChangeVisibleNowLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::ChangeVisibleNowLoading(bool bNewVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.ChangeVisibleNowLoading");

	ABP_TipsScreenMask_C_ChangeVisibleNowLoading_Params params;
	params.bNewVisible = bNewVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.DoScreenFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Instantry                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::DoScreenFade(bool FadeWhite, bool FadeOut, bool Instantry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.DoScreenFade");

	ABP_TipsScreenMask_C_DoScreenFade_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;
	params.Instantry = Instantry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TipsScreenMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.UserConstructionScript");

	ABP_TipsScreenMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.DoScreenMask
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaskOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::DoScreenMask(bool MaskOn, bool bInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.DoScreenMask");

	ABP_TipsScreenMask_C_DoScreenMask_Params params;
	params.MaskOn = MaskOn;
	params.bInstantly = bInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TipsScreenMask_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.ReceiveBeginPlay");

	ABP_TipsScreenMask_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.ReceiveTick");

	ABP_TipsScreenMask_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.OnScreenFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Instantry                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::OnScreenFade(bool FadeWhite, bool FadeOut, bool Instantry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.OnScreenFade");

	ABP_TipsScreenMask_C_OnScreenFade_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;
	params.Instantry = Instantry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.TakeOverFadeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScreenMaskBase*         OldMask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::TakeOverFadeState(class AScreenMaskBase* OldMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.TakeOverFadeState");

	ABP_TipsScreenMask_C_TakeOverFadeState_Params params;
	params.OldMask = OldMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.OnReleaseCurrent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TipsScreenMask_C::OnReleaseCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.OnReleaseCurrent");

	ABP_TipsScreenMask_C_OnReleaseCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.OnAssignCurrent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TipsScreenMask_C::OnAssignCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.OnAssignCurrent");

	ABP_TipsScreenMask_C_OnAssignCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.ReceiveEndPlay");

	ABP_TipsScreenMask_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.ExecuteUbergraph_BP_TipsScreenMask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::ExecuteUbergraph_BP_TipsScreenMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.ExecuteUbergraph_BP_TipsScreenMask");

	ABP_TipsScreenMask_C_ExecuteUbergraph_BP_TipsScreenMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TipsScreenMask.BP_TipsScreenMask_C.EventScreenFade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Instantry                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TipsScreenMask_C::EventScreenFade__DelegateSignature(bool FadeWhite, bool FadeOut, bool Instantry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TipsScreenMask.BP_TipsScreenMask_C.EventScreenFade__DelegateSignature");

	ABP_TipsScreenMask_C_EventScreenFade__DelegateSignature_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;
	params.Instantry = Instantry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
