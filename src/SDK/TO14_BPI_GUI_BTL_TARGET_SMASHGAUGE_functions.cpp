
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

// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.IsFullMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFull                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::IsFullMode(bool* IsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.IsFullMode");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_IsFullMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFull != nullptr)
		*IsFull = params.IsFull;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.ChangeStrikeMode
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewStrikeGaugeMode             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewIsStrikeMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWidgetAnimation*> StopAnimArray                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::ChangeStrikeMode(const struct FName& NewStrikeGaugeMode, bool NewIsStrikeMode, TArray<class UWidgetAnimation*>* StopAnimArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.ChangeStrikeMode");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_ChangeStrikeMode_Params params;
	params.NewStrikeGaugeMode = NewStrikeGaugeMode;
	params.NewIsStrikeMode = NewIsStrikeMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StopAnimArray != nullptr)
		*StopAnimArray = params.StopAnimArray;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.PlayStrikeClick
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::PlayStrikeClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.PlayStrikeClick");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_PlayStrikeClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.CancelStrike
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::CancelStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.CancelStrike");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_CancelStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.BndEvt__STRIKE_SMASH_GAUGE_FULL_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::BndEvt__STRIKE_SMASH_GAUGE_FULL_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.BndEvt__STRIKE_SMASH_GAUGE_FULL_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_BndEvt__STRIKE_SMASH_GAUGE_FULL_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.StrikeFull
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::StrikeFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.StrikeFull");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_StrikeFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.PreConstruct");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.Set_Percent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::Set_Percent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.Set_Percent");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_Set_Percent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.Construct");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.Destruct");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.SetFilterStrikeButtonIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::SetFilterStrikeButtonIcon(EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.SetFilterStrikeButtonIcon");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_SetFilterStrikeButtonIcon_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.BndEvt__STRIKE_SMASH_GAUGE_OFF_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::BndEvt__STRIKE_SMASH_GAUGE_OFF_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.BndEvt__STRIKE_SMASH_GAUGE_OFF_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_BndEvt__STRIKE_SMASH_GAUGE_OFF_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.BndEvt__STRIKE_SMASH_ON_CLICK_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::BndEvt__STRIKE_SMASH_ON_CLICK_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.BndEvt__STRIKE_SMASH_ON_CLICK_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_BndEvt__STRIKE_SMASH_ON_CLICK_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.StrikeEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::StrikeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.StrikeEnd");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_StrikeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE.TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE");

	UTO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_TARGET_SMASHGAUGE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
