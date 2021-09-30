
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

// Function BP_GSC_TitleBack.BP_GSC_TitleBack_C.BPE_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_TitleBack_C::BPE_Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_TitleBack.BP_GSC_TitleBack_C.BPE_Tick");

	UBP_GSC_TitleBack_C_BPE_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_TitleBack.BP_GSC_TitleBack_C.BPE_Initialize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneInitializeMode           initMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_TitleBack_C::BPE_Initialize(ESceneInitializeMode initMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_TitleBack.BP_GSC_TitleBack_C.BPE_Initialize");

	UBP_GSC_TitleBack_C_BPE_Initialize_Params params;
	params.initMode = initMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_TitleBack.BP_GSC_TitleBack_C.BPE_Finalize
// (Event, Public, BlueprintEvent)
// Parameters:
// ESceneFinalizeReason           finalizeReason                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_TitleBack_C::BPE_Finalize(ESceneFinalizeReason finalizeReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_TitleBack.BP_GSC_TitleBack_C.BPE_Finalize");

	UBP_GSC_TitleBack_C_BPE_Finalize_Params params;
	params.finalizeReason = finalizeReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GSC_TitleBack.BP_GSC_TitleBack_C.ExecuteUbergraph_BP_GSC_TitleBack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GSC_TitleBack_C::ExecuteUbergraph_BP_GSC_TitleBack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GSC_TitleBack.BP_GSC_TitleBack_C.ExecuteUbergraph_BP_GSC_TitleBack");

	UBP_GSC_TitleBack_C_ExecuteUbergraph_BP_GSC_TitleBack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
