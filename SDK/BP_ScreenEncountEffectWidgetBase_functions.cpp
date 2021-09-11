
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

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.GetScreenMaskAnimState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUBtlEncountEffectWidgetState  NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScreenEncountEffectWidgetBase_C::GetScreenMaskAnimState(EUBtlEncountEffectWidgetState* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.GetScreenMaskAnimState");

	ABP_ScreenEncountEffectWidgetBase_C_GetScreenMaskAnimState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.SetCreateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  CrateWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScreenEncountEffectWidgetBase_C::SetCreateWidget(class UClass* CrateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.SetCreateWidget");

	ABP_ScreenEncountEffectWidgetBase_C_SetCreateWidget_Params params;
	params.CrateWidget = CrateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.PlayStartAnim
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_ScreenEncountEffectWidgetBase_C::PlayStartAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.PlayStartAnim");

	ABP_ScreenEncountEffectWidgetBase_C_PlayStartAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.SafeReleaseWidget
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_ScreenEncountEffectWidgetBase_C::SafeReleaseWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.SafeReleaseWidget");

	ABP_ScreenEncountEffectWidgetBase_C_SafeReleaseWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.DoMaskOn
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_ScreenEncountEffectWidgetBase_C::DoMaskOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.DoMaskOn");

	ABP_ScreenEncountEffectWidgetBase_C_DoMaskOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.GetEncountEffectAnimState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EUBtlEncountEffectWidgetState  AnimState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScreenEncountEffectWidgetBase_C::GetEncountEffectAnimState(EUBtlEncountEffectWidgetState* AnimState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.GetEncountEffectAnimState");

	ABP_ScreenEncountEffectWidgetBase_C_GetEncountEffectAnimState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimState != nullptr)
		*AnimState = params.AnimState;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.GetEncountEffectWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBtl_EncountEffectWidget* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ScreenEncountEffectWidgetBase_C::GetEncountEffectWidget(class UBtl_EncountEffectWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.GetEncountEffectWidget");

	ABP_ScreenEncountEffectWidgetBase_C_GetEncountEffectWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.IsUnMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnMasked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScreenEncountEffectWidgetBase_C::IsUnMasked(bool* bUnMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.IsUnMasked");

	ABP_ScreenEncountEffectWidgetBase_C_IsUnMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUnMasked != nullptr)
		*bUnMasked = params.bUnMasked;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.IsMasked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMasked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ScreenEncountEffectWidgetBase_C::IsMasked(bool* bMasked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.IsMasked");

	ABP_ScreenEncountEffectWidgetBase_C_IsMasked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMasked != nullptr)
		*bMasked = params.bMasked;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ScreenEncountEffectWidgetBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.UserConstructionScript");

	ABP_ScreenEncountEffectWidgetBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.DoScreenMask
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaskOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScreenEncountEffectWidgetBase_C::DoScreenMask(bool MaskOn, bool bInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.DoScreenMask");

	ABP_ScreenEncountEffectWidgetBase_C_DoScreenMask_Params params;
	params.MaskOn = MaskOn;
	params.bInstantly = bInstantly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnReleaseCurrent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ScreenEncountEffectWidgetBase_C::OnReleaseCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnReleaseCurrent");

	ABP_ScreenEncountEffectWidgetBase_C_OnReleaseCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnAssignCurrent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ScreenEncountEffectWidgetBase_C::OnAssignCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnAssignCurrent");

	ABP_ScreenEncountEffectWidgetBase_C_OnAssignCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScreenEncountEffectWidgetBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.ReceiveEndPlay");

	ABP_ScreenEncountEffectWidgetBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnEndAnimFinished_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_ScreenEncountEffectWidgetBase_C::OnEndAnimFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnEndAnimFinished_Event");

	ABP_ScreenEncountEffectWidgetBase_C_OnEndAnimFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnStartAnimFinish_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_ScreenEncountEffectWidgetBase_C::OnStartAnimFinish_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnStartAnimFinish_Event");

	ABP_ScreenEncountEffectWidgetBase_C_OnStartAnimFinish_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.BindingStartAnimFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Delegate                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ScreenEncountEffectWidgetBase_C::BindingStartAnimFinish(const struct FAriseSimpleEventData& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.BindingStartAnimFinish");

	ABP_ScreenEncountEffectWidgetBase_C_BindingStartAnimFinish_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.ExecuteUbergraph_BP_ScreenEncountEffectWidgetBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScreenEncountEffectWidgetBase_C::ExecuteUbergraph_BP_ScreenEncountEffectWidgetBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.ExecuteUbergraph_BP_ScreenEncountEffectWidgetBase");

	ABP_ScreenEncountEffectWidgetBase_C_ExecuteUbergraph_BP_ScreenEncountEffectWidgetBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnStartAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScreenEncountEffectWidgetBase_C::OnStartAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnStartAnimFinished__DelegateSignature");

	ABP_ScreenEncountEffectWidgetBase_C_OnStartAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
