
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

// Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewPercent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ESCAPE_ROOT_C::SetPercent(float NewPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.SetPercent");

	UTO14_BP_BTL_ESCAPE_ROOT_C_SetPercent_Params params;
	params.NewPercent = NewPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.OnBeginEscape
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ESCAPE_ROOT_C::OnBeginEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.OnBeginEscape");

	UTO14_BP_BTL_ESCAPE_ROOT_C_OnBeginEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.OnEndEscape
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ESCAPE_ROOT_C::OnEndEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.OnEndEscape");

	UTO14_BP_BTL_ESCAPE_ROOT_C_OnEndEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BP_BTL_ESCAPE_ROOT_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.UnBindEvent");

	UTO14_BP_BTL_ESCAPE_ROOT_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.OnInterruptionEscape
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ESCAPE_ROOT_C::OnInterruptionEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.OnInterruptionEscape");

	UTO14_BP_BTL_ESCAPE_ROOT_C_OnInterruptionEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BP_BTL_ESCAPE_ROOT_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.BindEvent");

	UTO14_BP_BTL_ESCAPE_ROOT_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.OnChangeEscapeRate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_ESCAPE_ROOT_C::OnChangeEscapeRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.OnChangeEscapeRate");

	UTO14_BP_BTL_ESCAPE_ROOT_C_OnChangeEscapeRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.ExecuteUbergraph_TO14_BP_BTL_ESCAPE_ROOT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_ESCAPE_ROOT_C::ExecuteUbergraph_TO14_BP_BTL_ESCAPE_ROOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_ESCAPE_ROOT.TO14_BP_BTL_ESCAPE_ROOT_C.ExecuteUbergraph_TO14_BP_BTL_ESCAPE_ROOT");

	UTO14_BP_BTL_ESCAPE_ROOT_C_ExecuteUbergraph_TO14_BP_BTL_ESCAPE_ROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
