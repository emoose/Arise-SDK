
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

// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.ChnageTargetRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_BtlStatusViewModel_C* NewViewModel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::ChnageTargetRequest(class UBP_BtlStatusViewModel_C* NewViewModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.ChnageTargetRequest");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_ChnageTargetRequest_Params params;
	params.NewViewModel = NewViewModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.SetHpBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             ParentWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBattleGaugeViewBase*    GaugeViewArray                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UWidgetAnimation*> GaugeAnim                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C* RecoilNotifyText               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::SetHpBar(class UUserWidget* ParentWidget, class UBattleGaugeViewBase* GaugeViewArray, class UTO14_BPI_GUI_BTL_ENEMY_HP_BREAK_C* RecoilNotifyText, TArray<class UWidgetAnimation*>* GaugeAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.SetHpBar");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_SetHpBar_Params params;
	params.ParentWidget = ParentWidget;
	params.GaugeViewArray = GaugeViewArray;
	params.RecoilNotifyText = RecoilNotifyText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GaugeAnim != nullptr)
		*GaugeAnim = params.GaugeAnim;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OpenHpbar
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::OpenHpbar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OpenHpbar");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OpenHpbar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.LoadStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::LoadStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.LoadStatus");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_LoadStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.EventOnReccoveryHp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RecoveryValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::EventOnReccoveryHp(int RecoveryValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.EventOnReccoveryHp");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_EventOnReccoveryHp_Params params;
	params.RecoveryValue = RecoveryValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnDamageHp
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::OnDamageHp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnDamageHp");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnDamageHp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.EventOnOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::EventOnOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.EventOnOpen");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_EventOnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnChangeSmashConditionRate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PrevRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::OnChangeSmashConditionRate(float PrevRate, float NewRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnChangeSmashConditionRate");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnChangeSmashConditionRate_Params params;
	params.PrevRate = PrevRate;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.UnBindEvent");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.Received_ChangeViewModelRequest
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::Received_ChangeViewModelRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.Received_ChangeViewModelRequest");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_Received_ChangeViewModelRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.BindEvent");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnChangeStrikeSmash
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::OnChangeStrikeSmash()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnChangeStrikeSmash");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnChangeStrikeSmash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnBeginSpecialStrike
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::OnBeginSpecialStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnBeginSpecialStrike");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnBeginSpecialStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnEndSpecialStrike
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::OnEndSpecialStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnEndSpecialStrike");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnEndSpecialStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnRecoilNotify
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::OnRecoilNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnRecoilNotify");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnRecoilNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnUseStrike
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::OnUseStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.OnUseStrike");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_OnUseStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK.TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK");

	UTO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_HP_QUARTE_LOCK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
