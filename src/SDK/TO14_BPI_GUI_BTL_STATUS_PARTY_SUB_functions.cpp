
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

// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetOpenAnim
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        Anim                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C::GetOpenAnim(class UWidgetAnimation** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetOpenAnim");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_GetOpenAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetCharaName
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTO14_BPI_GUI_BTL_RUNE_FONT_C* NameWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C::GetCharaName(class UTO14_BPI_GUI_BTL_RUNE_FONT_C** NameWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetCharaName");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_GetCharaName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NameWidget != nullptr)
		*NameWidget = params.NameWidget;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetHpBar
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBattleGaugeViewBase*    HpBar                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C::GetHpBar(class UBattleGaugeViewBase** HpBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetHpBar");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_GetHpBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HpBar != nullptr)
		*HpBar = params.HpBar;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetSubStatusViewList
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UBtlStatusViewBase*> View                           (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C::GetSubStatusViewList(TArray<class UBtlStatusViewBase*>* View)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.GetSubStatusViewList");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_GetSubStatusViewList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (View != nullptr)
		*View = params.View;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.BndEvt__Fadein_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C::BndEvt__Fadein_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.BndEvt__Fadein_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_BndEvt__Fadein_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_SUB
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_SUB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_STATUS_PARTY_SUB.TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_SUB");

	UTO14_BPI_GUI_BTL_STATUS_PARTY_SUB_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_STATUS_PARTY_SUB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
