
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

// Function BP_MenuManagerFinalize.BP_MenuManagerFinalize_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuManagerFinalize_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuManagerFinalize.BP_MenuManagerFinalize_C.BPE_Tick");

	UBP_MenuManagerFinalize_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuManagerFinalize.BP_MenuManagerFinalize_C.BPE_Initialize
// (Event, Public, BlueprintEvent)

void UBP_MenuManagerFinalize_C::BPE_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuManagerFinalize.BP_MenuManagerFinalize_C.BPE_Initialize");

	UBP_MenuManagerFinalize_C_BPE_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuManagerFinalize.BP_MenuManagerFinalize_C.ExecuteUbergraph_BP_MenuManagerFinalize
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuManagerFinalize_C::ExecuteUbergraph_BP_MenuManagerFinalize(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuManagerFinalize.BP_MenuManagerFinalize_C.ExecuteUbergraph_BP_MenuManagerFinalize");

	UBP_MenuManagerFinalize_C_ExecuteUbergraph_BP_MenuManagerFinalize_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
