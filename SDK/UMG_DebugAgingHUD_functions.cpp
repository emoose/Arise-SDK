
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

// Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.GetTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void UUMG_DebugAgingHUD_C::GetTime(float Time, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.GetTime");

	UUMG_DebugAgingHUD_C_GetTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_DebugAgingHUD_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.OnPaint");

	UUMG_DebugAgingHUD_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_DebugAgingHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.Construct");

	UUMG_DebugAgingHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.ExecuteUbergraph_UMG_DebugAgingHUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DebugAgingHUD_C::ExecuteUbergraph_UMG_DebugAgingHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DebugAgingHUD.UMG_DebugAgingHUD_C.ExecuteUbergraph_UMG_DebugAgingHUD");

	UUMG_DebugAgingHUD_C_ExecuteUbergraph_UMG_DebugAgingHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
