
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

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.IsUnMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnMasked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureScreenMask_C::IsUnMasked(bool* bUnMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.IsUnMasked");

	ABP_CaptureScreenMask_C_IsUnMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnMasked != nullptr)
		*bUnMasked = params.bUnMasked;
}


// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.IsMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMasked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureScreenMask_C::IsMasked(bool* bMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.IsMasked");

	ABP_CaptureScreenMask_C_IsMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMasked != nullptr)
		*bMasked = params.bMasked;
}


// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.DoScreenFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureScreenMask_C::DoScreenFade(bool FadeWhite, bool FadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.DoScreenFade");

	ABP_CaptureScreenMask_C_DoScreenFade_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CaptureScreenMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.UserConstructionScript");

	ABP_CaptureScreenMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.DoScreenMask
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaskOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureScreenMask_C::DoScreenMask(bool MaskOn, bool bInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.DoScreenMask");

	ABP_CaptureScreenMask_C_DoScreenMask_Params params;
	params.MaskOn = MaskOn;
	params.bInstantly = bInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CaptureScreenMask_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ReceiveBeginPlay");

	ABP_CaptureScreenMask_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureScreenMask_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ReceiveTick");

	ABP_CaptureScreenMask_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.OnScreenFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ZeroTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureScreenMask_C::OnScreenFade(bool FadeOut, bool ZeroTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.OnScreenFade");

	ABP_CaptureScreenMask_C_OnScreenFade_Params params;
	params.FadeOut = FadeOut;
	params.ZeroTime = ZeroTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureScreenMask_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ReceiveEndPlay");

	ABP_CaptureScreenMask_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ExecuteUbergraph_BP_CaptureScreenMask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureScreenMask_C::ExecuteUbergraph_BP_CaptureScreenMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ExecuteUbergraph_BP_CaptureScreenMask");

	ABP_CaptureScreenMask_C_ExecuteUbergraph_BP_CaptureScreenMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.EventScreenFade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ZeroTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CaptureScreenMask_C::EventScreenFade__DelegateSignature(bool FadeOut, bool ZeroTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.EventScreenFade__DelegateSignature");

	ABP_CaptureScreenMask_C_EventScreenFade__DelegateSignature_Params params;
	params.FadeOut = FadeOut;
	params.ZeroTime = ZeroTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
