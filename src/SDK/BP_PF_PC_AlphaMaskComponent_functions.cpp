
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

// Function BP_PF_PC_AlphaMaskComponent.BP_PF_PC_AlphaMaskComponent_C.TestSphere
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIntersect                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_PC_AlphaMaskComponent_C::TestSphere(float Distance, bool* bIntersect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_PC_AlphaMaskComponent.BP_PF_PC_AlphaMaskComponent_C.TestSphere");

	UBP_PF_PC_AlphaMaskComponent_C_TestSphere_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIntersect != nullptr)
		*bIntersect = params.bIntersect;
}


// Function BP_PF_PC_AlphaMaskComponent.BP_PF_PC_AlphaMaskComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_PC_AlphaMaskComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_PC_AlphaMaskComponent.BP_PF_PC_AlphaMaskComponent_C.ReceiveTick");

	UBP_PF_PC_AlphaMaskComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_PC_AlphaMaskComponent.BP_PF_PC_AlphaMaskComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PF_PC_AlphaMaskComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_PC_AlphaMaskComponent.BP_PF_PC_AlphaMaskComponent_C.ReceiveBeginPlay");

	UBP_PF_PC_AlphaMaskComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_PC_AlphaMaskComponent.BP_PF_PC_AlphaMaskComponent_C.ExecuteUbergraph_BP_PF_PC_AlphaMaskComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_PC_AlphaMaskComponent_C::ExecuteUbergraph_BP_PF_PC_AlphaMaskComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_PC_AlphaMaskComponent.BP_PF_PC_AlphaMaskComponent_C.ExecuteUbergraph_BP_PF_PC_AlphaMaskComponent");

	UBP_PF_PC_AlphaMaskComponent_C_ExecuteUbergraph_BP_PF_PC_AlphaMaskComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
