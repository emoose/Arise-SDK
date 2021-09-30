
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

// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.EventOnClose
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_STRIKE_ROOT_C::EventOnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.EventOnClose");

	UBPI_BTL_LAYOUT_STRIKE_ROOT_C_EventOnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UBPI_BTL_LAYOUT_STRIKE_ROOT_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.UnBindEvent");

	UBPI_BTL_LAYOUT_STRIKE_ROOT_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.BindEvent
// (Event, Public, BlueprintEvent)

void UBPI_BTL_LAYOUT_STRIKE_ROOT_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.BindEvent");

	UBPI_BTL_LAYOUT_STRIKE_ROOT_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.OnPreOpen
// (BlueprintCallable, BlueprintEvent)

void UBPI_BTL_LAYOUT_STRIKE_ROOT_C::OnPreOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.OnPreOpen");

	UBPI_BTL_LAYOUT_STRIKE_ROOT_C_OnPreOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.OnChangePreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_STRIKE_ROOT_C::OnChangePreset(const struct FName& Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.OnChangePreset");

	UBPI_BTL_LAYOUT_STRIKE_ROOT_C_OnChangePreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.ExecuteUbergraph_BPI_BTL_LAYOUT_STRIKE_ROOT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_BTL_LAYOUT_STRIKE_ROOT_C::ExecuteUbergraph_BPI_BTL_LAYOUT_STRIKE_ROOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BTL_LAYOUT_STRIKE_ROOT.BPI_BTL_LAYOUT_STRIKE_ROOT_C.ExecuteUbergraph_BPI_BTL_LAYOUT_STRIKE_ROOT");

	UBPI_BTL_LAYOUT_STRIKE_ROOT_C_ExecuteUbergraph_BPI_BTL_LAYOUT_STRIKE_ROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
