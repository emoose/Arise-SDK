
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

// Function BP_LongChatMask.BP_LongChatMask_C.CreateUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatMask_C::CreateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.CreateUI");

	ABP_LongChatMask_C_CreateUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.DoMasked
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatMask_C::DoMasked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.DoMasked");

	ABP_LongChatMask_C_DoMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.ChangeVisibleDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatMask_C::ChangeVisibleDebug(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.ChangeVisibleDebug");

	ABP_LongChatMask_C_ChangeVisibleDebug_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.IsUnMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnMasked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatMask_C::IsUnMasked(bool* bUnMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.IsUnMasked");

	ABP_LongChatMask_C_IsUnMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnMasked != nullptr)
		*bUnMasked = params.bUnMasked;
}


// Function BP_LongChatMask.BP_LongChatMask_C.IsMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMasked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatMask_C::IsMasked(bool* bMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.IsMasked");

	ABP_LongChatMask_C_IsMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMasked != nullptr)
		*bMasked = params.bMasked;
}


// Function BP_LongChatMask.BP_LongChatMask_C.DoScreenFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeWhite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatMask_C::DoScreenFade(bool FadeWhite, bool FadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.DoScreenFade");

	ABP_LongChatMask_C_DoScreenFade_Params params;
	params.FadeWhite = FadeWhite;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LongChatMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.UserConstructionScript");

	ABP_LongChatMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.DoScreenMask
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaskOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatMask_C::DoScreenMask(bool MaskOn, bool bInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.DoScreenMask");

	ABP_LongChatMask_C_DoScreenMask_Params params;
	params.MaskOn = MaskOn;
	params.bInstantly = bInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LongChatMask_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.ReceiveBeginPlay");

	ABP_LongChatMask_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.OnScreenFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatMask_C::OnScreenFade(bool FadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.OnScreenFade");

	ABP_LongChatMask_C_OnScreenFade_Params params;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatMask_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.ReceiveTick");

	ABP_LongChatMask_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.DoCaptureScene
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              CameraTransform                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UCameraComponent*        BaseCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LongChatMask_C::DoCaptureScene(const struct FTransform& CameraTransform, class UCameraComponent* BaseCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.DoCaptureScene");

	ABP_LongChatMask_C_DoCaptureScene_Params params;
	params.CameraTransform = CameraTransform;
	params.BaseCamera = BaseCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatMask_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.ReceiveEndPlay");

	ABP_LongChatMask_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.ExecuteUbergraph_BP_LongChatMask
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatMask_C::ExecuteUbergraph_BP_LongChatMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.ExecuteUbergraph_BP_LongChatMask");

	ABP_LongChatMask_C_ExecuteUbergraph_BP_LongChatMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LongChatMask.BP_LongChatMask_C.EventScreenFade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LongChatMask_C::EventScreenFade__DelegateSignature(bool FadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LongChatMask.BP_LongChatMask_C.EventScreenFade__DelegateSignature");

	ABP_LongChatMask_C_EventScreenFade__DelegateSignature_Params params;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
