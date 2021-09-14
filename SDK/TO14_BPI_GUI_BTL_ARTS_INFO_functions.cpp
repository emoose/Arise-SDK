
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

// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.CheckPriority
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleHudNotifyTextPriority   InPriority                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enbale                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::CheckPriority(EBattleHudNotifyTextPriority InPriority, bool* Enbale)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.CheckPriority");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_CheckPriority_Params params;
	params.InPriority = InPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enbale != nullptr)
		*Enbale = params.Enbale;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.InitializeModifyText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// EBtlUnitGroup                  Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::InitializeModifyText(const struct FModifiedText& Text, EBtlUnitGroup Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.InitializeModifyText");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_InitializeModifyText_Params params;
	params.Text = Text;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.InitializeArts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArts_XmlDatatableLabel ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EBtlUnitGroup                  Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInspiration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::InitializeArts(const struct FBtlArts_XmlDatatableLabel& ArtsLabel, EBtlUnitGroup Group, bool IsInspiration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.InitializeArts");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_InitializeArts_Params params;
	params.ArtsLabel = ArtsLabel;
	params.Group = Group;
	params.IsInspiration = IsInspiration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.GetAnimation
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBtlUnitGroup                  Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        PartyBase                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::GetAnimation(EBtlUnitGroup Group, bool IsAir, class UWidgetAnimation** PartyBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.GetAnimation");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_GetAnimation_Params params;
	params.Group = Group;
	params.IsAir = IsAir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyBase != nullptr)
		*PartyBase = params.PartyBase;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BindEvent");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.UnBindEvent");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__LoopAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::BndEvt__LoopAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__LoopAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__LoopAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.PreConstruct");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__StartAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::BndEvt__StartAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__StartAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__StartAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnArtsText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArts_XmlDatatableLabel Arts                           (BlueprintVisible, BlueprintReadOnly, Parm)
// EBtlUnitGroup                  Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudNotifyTextPriority   Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::OnArtsText(const struct FBtlArts_XmlDatatableLabel& Arts, EBtlUnitGroup Group, EBattleHudNotifyTextPriority Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnArtsText");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnArtsText_Params params;
	params.Arts = Arts;
	params.Group = Group;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnModifyNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// EBtlUnitGroup                  Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudNotifyTextPriority   Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::OnModifyNotify(const struct FModifiedText& Text, EBtlUnitGroup Group, EBattleHudNotifyTextPriority Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnModifyNotify");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnModifyNotify_Params params;
	params.Text = Text;
	params.Group = Group;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::BndEvt__StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__StartAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__SpecialAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnInspirationArts_
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArts_XmlDatatableLabel Arts                           (BlueprintVisible, BlueprintReadOnly, Parm)
// EBtlUnitGroup                  Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudNotifyTextPriority   Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::OnInspirationArts_(const struct FBtlArts_XmlDatatableLabel& Arts, EBtlUnitGroup Group, EBattleHudNotifyTextPriority Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnInspirationArts_");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnInspirationArts__Params params;
	params.Arts = Arts;
	params.Group = Group;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.Construct");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnDictionaryText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// EBtlUnitGroup                  Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudNotifyTextPriority   Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::OnDictionaryText(const struct FDictionaryText& Text, EBtlUnitGroup Group, EBattleHudNotifyTextPriority Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnDictionaryText");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnDictionaryText_Params params;
	params.Text = Text;
	params.Group = Group;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnMystickArtsText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArts_XmlDatatableLabel Arts                           (BlueprintVisible, BlueprintReadOnly, Parm)
// EBtlUnitGroup                  Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudNotifyTextPriority   Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::OnMystickArtsText(const struct FBtlArts_XmlDatatableLabel& Arts, EBtlUnitGroup Group, EBattleHudNotifyTextPriority Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnMystickArtsText");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnMystickArtsText_Params params;
	params.Arts = Arts;
	params.Group = Group;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnBeginArtsMystic
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::OnBeginArtsMystic()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnBeginArtsMystic");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnBeginArtsMystic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnMysticDictionaryText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// EBtlUnitGroup                  Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleHudNotifyTextPriority   Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::OnMysticDictionaryText(const struct FDictionaryText& Text, EBtlUnitGroup Group, EBattleHudNotifyTextPriority Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnMysticDictionaryText");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnMysticDictionaryText_Params params;
	params.Text = Text;
	params.Group = Group;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnEndArtsText
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::OnEndArtsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.OnEndArtsText");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_OnEndArtsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__EndAnim_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::BndEvt__EndAnim_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.BndEvt__EndAnim_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_BndEvt__EndAnim_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ARTS_INFO
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_ARTS_INFO_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_ARTS_INFO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_ARTS_INFO.TO14_BPI_GUI_BTL_ARTS_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_ARTS_INFO");

	UTO14_BPI_GUI_BTL_ARTS_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_ARTS_INFO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
