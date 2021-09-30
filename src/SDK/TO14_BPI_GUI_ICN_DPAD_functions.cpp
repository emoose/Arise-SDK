
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

// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.SetStrikeMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewIsStrikeMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_DPAD_C::SetStrikeMode(bool bNewIsStrikeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.SetStrikeMode");

	UTO14_BPI_GUI_ICN_DPAD_C_SetStrikeMode_Params params;
	params.bNewIsStrikeMode = bNewIsStrikeMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.SetFilterStrikeButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_DPAD_C::SetFilterStrikeButtonIcon(EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.SetFilterStrikeButtonIcon");

	UTO14_BPI_GUI_ICN_DPAD_C_SetFilterStrikeButtonIcon_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.OnChangeInputDevice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DeviceType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_DPAD_C::OnChangeInputDevice(int DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.OnChangeInputDevice");

	UTO14_BPI_GUI_ICN_DPAD_C_OnChangeInputDevice_Params params;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.BindRestructEvent
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_DPAD_C::BindRestructEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.BindRestructEvent");

	UTO14_BPI_GUI_ICN_DPAD_C_BindRestructEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.UnbindRestructEvent
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_DPAD_C::UnbindRestructEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.UnbindRestructEvent");

	UTO14_BPI_GUI_ICN_DPAD_C_UnbindRestructEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_DPAD_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.Initialize");

	UTO14_BPI_GUI_ICN_DPAD_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_ICN_DPAD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.Construct");

	UTO14_BPI_GUI_ICN_DPAD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_DPAD_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.PreConstruct");

	UTO14_BPI_GUI_ICN_DPAD_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.ApplyVisualStrike
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_DPAD_C::ApplyVisualStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.ApplyVisualStrike");

	UTO14_BPI_GUI_ICN_DPAD_C_ApplyVisualStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_DPAD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_DPAD_C::ExecuteUbergraph_TO14_BPI_GUI_ICN_DPAD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_DPAD.TO14_BPI_GUI_ICN_DPAD_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_DPAD");

	UTO14_BPI_GUI_ICN_DPAD_C_ExecuteUbergraph_TO14_BPI_GUI_ICN_DPAD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
