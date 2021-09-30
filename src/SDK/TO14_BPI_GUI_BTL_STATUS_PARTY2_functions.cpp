
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

// Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.GetHpNumber
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTO14_BPI_GUI_BTL_RUNE_NUMBER_C* Number                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY2_C::GetHpNumber(class UTO14_BPI_GUI_BTL_RUNE_NUMBER_C** Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.GetHpNumber");

	UTO14_BPI_GUI_BTL_STATUS_PARTY2_C_GetHpNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Number != nullptr)
		*Number = params.Number;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.GetOpenAnim
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        Anim                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY2_C::GetOpenAnim(class UWidgetAnimation** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.GetOpenAnim");

	UTO14_BPI_GUI_BTL_STATUS_PARTY2_C_GetOpenAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.GetHpBar
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBattleGaugeViewBase*    HpBar                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY2_C::GetHpBar(class UBattleGaugeViewBase** HpBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.GetHpBar");

	UTO14_BPI_GUI_BTL_STATUS_PARTY2_C_GetHpBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HpBar != nullptr)
		*HpBar = params.HpBar;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.GetCharaName
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTO14_BPI_GUI_BTL_RUNE_FONT_C* NameWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY2_C::GetCharaName(class UTO14_BPI_GUI_BTL_RUNE_FONT_C** NameWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.GetCharaName");

	UTO14_BPI_GUI_BTL_STATUS_PARTY2_C_GetCharaName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NameWidget != nullptr)
		*NameWidget = params.NameWidget;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.GetSubStatusViewList
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UBtlStatusViewBase*> View                           (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_BTL_STATUS_PARTY2_C::GetSubStatusViewList(TArray<class UBtlStatusViewBase*>* View)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.GetSubStatusViewList");

	UTO14_BPI_GUI_BTL_STATUS_PARTY2_C_GetSubStatusViewList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (View != nullptr)
		*View = params.View;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.BndEvt__Fadein_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY2_C::BndEvt__Fadein_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.BndEvt__Fadein_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_STATUS_PARTY2_C_BndEvt__Fadein_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.PlayHealAnim
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY2_C::PlayHealAnim(int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.PlayHealAnim");

	UTO14_BPI_GUI_BTL_STATUS_PARTY2_C_PlayHealAnim_Params params;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.Construct");

	UTO14_BPI_GUI_BTL_STATUS_PARTY2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY2_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY2.TO14_BPI_GUI_BTL_STATUS_PARTY2_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY2");

	UTO14_BPI_GUI_BTL_STATUS_PARTY2_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
