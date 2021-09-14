
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

// Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.SetMystic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   UnitID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C::SetMystic(const struct FName& UnitID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.SetMystic");

	UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C_SetMystic_Params params;
	params.UnitID = UnitID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.SetNormalAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C::SetNormalAttack(bool IsAir)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.SetNormalAttack");

	UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C_SetNormalAttack_Params params;
	params.IsAir = IsAir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.PlayStartKeyAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C::PlayStartKeyAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.PlayStartKeyAnim");

	UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C_PlayStartKeyAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.SetArts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUseable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C::SetArts(const struct FName& ArtsLabel, bool IsAir, bool IsUseable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.SetArts");

	UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C_SetArts_Params params;
	params.ArtsLabel = ArtsLabel;
	params.IsAir = IsAir;
	params.IsUseable = IsUseable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.SetEnableArts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUseable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C::SetEnableArts(bool IsAir, bool IsUseable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.SetEnableArts");

	UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C_SetEnableArts_Params params;
	params.IsAir = IsAir;
	params.IsUseable = IsUseable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.PlayNotUseAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C::PlayNotUseAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.PlayNotUseAnim");

	UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C_PlayNotUseAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.BndEvt__NotUseArts_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C::BndEvt__NotUseArts_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.BndEvt__NotUseArts_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C_BndEvt__NotUseArts_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.BndEvt__NotUseArts_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C::BndEvt__NotUseArts_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.BndEvt__NotUseArts_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C_BndEvt__NotUseArts_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.SetButtonArtsLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C::SetButtonArtsLabel(const struct FName& ButtonLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.SetButtonArtsLabel");

	UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C_SetButtonArtsLabel_Params params;
	params.ButtonLabel = ButtonLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_KEY_ITEM_DOWN
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C::ExecuteUbergraph_TO14_BPI_GUI_BTL_KEY_ITEM_DOWN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_BTL_KEY_ITEM_DOWN.TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C.ExecuteUbergraph_TO14_BPI_GUI_BTL_KEY_ITEM_DOWN");

	UTO14_BPI_GUI_BTL_KEY_ITEM_DOWN_C_ExecuteUbergraph_TO14_BPI_GUI_BTL_KEY_ITEM_DOWN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
