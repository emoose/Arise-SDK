
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

// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetButtonArtsLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C::SetButtonArtsLabel(const struct FName& ButtonLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetButtonArtsLabel");

	UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_SetButtonArtsLabel_Params params;
	params.ButtonLabel = ButtonLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetNormalAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C::SetNormalAttack(bool IsAir)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetNormalAttack");

	UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_SetNormalAttack_Params params;
	params.IsAir = IsAir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetMystic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   UnitID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C::SetMystic(const struct FName& UnitID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetMystic");

	UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_SetMystic_Params params;
	params.UnitID = UnitID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetEnableArts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUseable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C::SetEnableArts(bool IsAir, bool IsUseable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetEnableArts");

	UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_SetEnableArts_Params params;
	params.IsAir = IsAir;
	params.IsUseable = IsUseable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.PlayNotUseAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C::PlayNotUseAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.PlayNotUseAnim");

	UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_PlayNotUseAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetArts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAir                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUseable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C::SetArts(const struct FName& ArtsLabel, bool IsAir, bool IsUseable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.SetArts");

	UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_SetArts_Params params;
	params.ArtsLabel = ArtsLabel;
	params.IsAir = IsAir;
	params.IsUseable = IsUseable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.PlayStartKeyAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C::PlayStartKeyAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_HUD_BTL_KEY_ITEM_INTERFACE.TO14_HUD_BTL_KEY_ITEM_INTERFACE_C.PlayStartKeyAnim");

	UTO14_HUD_BTL_KEY_ITEM_INTERFACE_C_PlayStartKeyAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
