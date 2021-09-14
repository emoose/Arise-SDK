
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

// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnPreOpen
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_ROOT_2_C::OnPreOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnPreOpen");

	UBPI_BTL_LAYOUT_ROOT_2_C_OnPreOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.EventOnClose
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_ROOT_2_C::EventOnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.EventOnClose");

	UBPI_BTL_LAYOUT_ROOT_2_C_EventOnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UBPI_BTL_LAYOUT_ROOT_2_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.UnBindEvent");

	UBPI_BTL_LAYOUT_ROOT_2_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.BindEvent
// (Event, Public, BlueprintEvent)

void UBPI_BTL_LAYOUT_ROOT_2_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.BindEvent");

	UBPI_BTL_LAYOUT_ROOT_2_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnBattleShortChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageData*            MessageData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OverrideIconName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_ROOT_2_C::OnBattleShortChat(class UMessageData* MessageData, const struct FName& OverrideIconName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnBattleShortChat");

	UBPI_BTL_LAYOUT_ROOT_2_C_OnBattleShortChat_Params params;
	params.MessageData = MessageData;
	params.OverrideIconName = OverrideIconName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnCloseBattleShortChat
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_ROOT_2_C::OnCloseBattleShortChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnCloseBattleShortChat");

	UBPI_BTL_LAYOUT_ROOT_2_C_OnCloseBattleShortChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnAbortShortChat
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_ROOT_2_C::OnAbortShortChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnAbortShortChat");

	UBPI_BTL_LAYOUT_ROOT_2_C_OnAbortShortChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnChangePreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_ROOT_2_C::OnChangePreset(const struct FName& Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.OnChangePreset");

	UBPI_BTL_LAYOUT_ROOT_2_C_OnChangePreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.ExecuteUbergraph_BPI_BTL_LAYOUT_ROOT_3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_ROOT_2_C::ExecuteUbergraph_BPI_BTL_LAYOUT_ROOT_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_ROOT_3.BPI_BTL_LAYOUT_ROOT_2_C.ExecuteUbergraph_BPI_BTL_LAYOUT_ROOT_3");

	UBPI_BTL_LAYOUT_ROOT_2_C_ExecuteUbergraph_BPI_BTL_LAYOUT_ROOT_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
