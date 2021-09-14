
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

// Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.UnBindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BP_BTL_BG_ROOT_C::UnBindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.UnBindEvent");

	UTO14_BP_BTL_BG_ROOT_C_UnBindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.OnPreOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_BG_ROOT_C::OnPreOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.OnPreOpen");

	UTO14_BP_BTL_BG_ROOT_C_OnPreOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.BindEvent
// (Event, Public, BlueprintEvent)

void UTO14_BP_BTL_BG_ROOT_C::BindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.BindEvent");

	UTO14_BP_BTL_BG_ROOT_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.OnChangePreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_BG_ROOT_C::OnChangePreset(const struct FName& Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.OnChangePreset");

	UTO14_BP_BTL_BG_ROOT_C_OnChangePreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.OnBattleMenuStart
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_BG_ROOT_C::OnBattleMenuStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.OnBattleMenuStart");

	UTO14_BP_BTL_BG_ROOT_C_OnBattleMenuStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.OnBattleMenuEnd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BP_BTL_BG_ROOT_C::OnBattleMenuEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.OnBattleMenuEnd");

	UTO14_BP_BTL_BG_ROOT_C_OnBattleMenuEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.ExecuteUbergraph_TO14_BP_BTL_BG_ROOT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_BTL_BG_ROOT_C::ExecuteUbergraph_TO14_BP_BTL_BG_ROOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_BTL_BG_ROOT.TO14_BP_BTL_BG_ROOT_C.ExecuteUbergraph_TO14_BP_BTL_BG_ROOT");

	UTO14_BP_BTL_BG_ROOT_C_ExecuteUbergraph_TO14_BP_BTL_BG_ROOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
