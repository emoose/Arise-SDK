
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

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ApplyHpBar
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::ApplyHpBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ApplyHpBar");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_ApplyHpBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ReceivedOnRecoveryHp
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RecoveryValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::ReceivedOnRecoveryHp(int RecoveryValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ReceivedOnRecoveryHp");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_ReceivedOnRecoveryHp_Params params;
	params.RecoveryValue = RecoveryValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ReceivedOnDamageHp
// (Protected, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::ReceivedOnDamageHp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ReceivedOnDamageHp");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_ReceivedOnDamageHp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.PlayHealAnim
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::PlayHealAnim(int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.PlayHealAnim");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_PlayHealAnim_Params params;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnChangePreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::OnChangePreset(const struct FName& Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnChangePreset");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnChangePreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.SetHpNumberText
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::SetHpNumberText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.SetHpNumberText");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_SetHpNumberText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetHpNumber
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTO14_BPI_GUI_BTL_RUNE_NUMBER_C* Number                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::GetHpNumber(class UTO14_BPI_GUI_BTL_RUNE_NUMBER_C** Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetHpNumber");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetHpNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Number != nullptr)
		*Number = params.Number;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetOpenAnim
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        Anim                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::GetOpenAnim(class UWidgetAnimation** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetOpenAnim");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetOpenAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetEndChangeAnim
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        Anim                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::GetEndChangeAnim(class UWidgetAnimation** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetEndChangeAnim");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetEndChangeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetBeginChangeAnim
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        Anim                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::GetBeginChangeAnim(class UWidgetAnimation** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetBeginChangeAnim");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetBeginChangeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetSubStatusViewList
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UBtlStatusViewBase*> View                           (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::GetSubStatusViewList(TArray<class UBtlStatusViewBase*>* View)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetSubStatusViewList");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetSubStatusViewList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (View != nullptr)
		*View = params.View;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetCharaName
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTO14_BPI_GUI_BTL_RUNE_FONT_C* NameWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::GetCharaName(class UTO14_BPI_GUI_BTL_RUNE_FONT_C** NameWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetCharaName");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetCharaName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NameWidget != nullptr)
		*NameWidget = params.NameWidget;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetHpBar
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBattleGaugeViewBase*    HpBar                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::GetHpBar(class UBattleGaugeViewBase** HpBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.GetHpBar");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_GetHpBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HpBar != nullptr)
		*HpBar = params.HpBar;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnOpen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::OnOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnOpen");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnDamageHp
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::OnDamageHp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnDamageHp");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnDamageHp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnRecoveryHp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RecoveryValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::OnRecoveryHp(int RecoveryValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnRecoveryHp");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnRecoveryHp_Params params;
	params.RecoveryValue = RecoveryValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.BindEvent");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.UnBindEvent");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.Received_ChangeViewModelRequest
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::Received_ChangeViewModelRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.Received_ChangeViewModelRequest");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_Received_ChangeViewModelRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnApplyViewModel
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::OnApplyViewModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnApplyViewModel");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnApplyViewModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnHpBonusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HandleIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::OnHpBonusChanged(int HandleIndex, float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.OnHpBonusChanged");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_OnHpBonusChanged_Params params;
	params.HandleIndex = HandleIndex;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_BASE.TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_BASE");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
