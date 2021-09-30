
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

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.GetScreenMaskAnimState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUBtlEncountEffectWidgetState  NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountScreenMask_C::GetScreenMaskAnimState(EUBtlEncountEffectWidgetState* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.GetScreenMaskAnimState");

	ABP_EncountScreenMask_C_GetScreenMaskAnimState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.GetDynamicMaterialInstance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ABP_EncountScreenMask_C::GetDynamicMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.GetDynamicMaterialInstance");

	ABP_EncountScreenMask_C_GetDynamicMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.GetEncountEffectWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBtl_EncountEffectWidget* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_EncountScreenMask_C::GetEncountEffectWidget(class UBtl_EncountEffectWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.GetEncountEffectWidget");

	ABP_EncountScreenMask_C_GetEncountEffectWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.IsUnMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnMasked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountScreenMask_C::IsUnMasked(bool* bUnMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.IsUnMasked");

	ABP_EncountScreenMask_C_IsUnMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnMasked != nullptr)
		*bUnMasked = params.bUnMasked;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.IsMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMasked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountScreenMask_C::IsMasked(bool* bMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.IsMasked");

	ABP_EncountScreenMask_C_IsMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMasked != nullptr)
		*bMasked = params.bMasked;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountScreenMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.UserConstructionScript");

	ABP_EncountScreenMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.DoCaptureSceneComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountScreenMask_C::DoCaptureSceneComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.DoCaptureSceneComplete");

	ABP_EncountScreenMask_C_DoCaptureSceneComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.DoScreenMask
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaskOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountScreenMask_C::DoScreenMask(bool MaskOn, bool bInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.DoScreenMask");

	ABP_EncountScreenMask_C_DoScreenMask_Params params;
	params.MaskOn = MaskOn;
	params.bInstantly = bInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnEndAnimFinished_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountScreenMask_C::OnEndAnimFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnEndAnimFinished_Event");

	ABP_EncountScreenMask_C_OnEndAnimFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnAssignCurrent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountScreenMask_C::OnAssignCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnAssignCurrent");

	ABP_EncountScreenMask_C_OnAssignCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnReleaseCurrent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountScreenMask_C::OnReleaseCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnReleaseCurrent");

	ABP_EncountScreenMask_C_OnReleaseCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountScreenMask_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.ReceiveEndPlay");

	ABP_EncountScreenMask_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.SetVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountScreenMask_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.SetVisible");

	ABP_EncountScreenMask_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.BindingStartAnimFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Delegate                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_EncountScreenMask_C::BindingStartAnimFinish(const struct FAriseSimpleEventData& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.BindingStartAnimFinish");

	ABP_EncountScreenMask_C_BindingStartAnimFinish_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.@OnStartAnimFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountScreenMask_C::@OnStartAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.@OnStartAnimFinished");

	ABP_EncountScreenMask_C_@OnStartAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.ExecuteUbergraph_BP_EncountScreenMask
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountScreenMask_C::ExecuteUbergraph_BP_EncountScreenMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.ExecuteUbergraph_BP_EncountScreenMask");

	ABP_EncountScreenMask_C_ExecuteUbergraph_BP_EncountScreenMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnStartAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EncountScreenMask_C::OnStartAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnStartAnimFinished__DelegateSignature");

	ABP_EncountScreenMask_C_OnStartAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
