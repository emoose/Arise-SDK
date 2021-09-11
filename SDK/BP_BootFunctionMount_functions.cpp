
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

// Function BP_BootFunctionMount.BP_BootFunctionMount_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BootFunctionMount_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BootFunctionMount.BP_BootFunctionMount_C.UserConstructionScript");

	ABP_BootFunctionMount_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BootFunctionMount.BP_BootFunctionMount_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BootFunctionMount_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BootFunctionMount.BP_BootFunctionMount_C.ReceiveTick");

	ABP_BootFunctionMount_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BootFunctionMount.BP_BootFunctionMount_C.DoMount
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BootFunctionMount_C::DoMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BootFunctionMount.BP_BootFunctionMount_C.DoMount");

	ABP_BootFunctionMount_C_DoMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BootFunctionMount.BP_BootFunctionMount_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_BootFunctionMount_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BootFunctionMount.BP_BootFunctionMount_C.ReceiveDestroyed");

	ABP_BootFunctionMount_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BootFunctionMount.BP_BootFunctionMount_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BootFunctionMount_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BootFunctionMount.BP_BootFunctionMount_C.ReceiveBeginPlay");

	ABP_BootFunctionMount_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BootFunctionMount.BP_BootFunctionMount_C.ExecuteUbergraph_BP_BootFunctionMount
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BootFunctionMount_C::ExecuteUbergraph_BP_BootFunctionMount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BootFunctionMount.BP_BootFunctionMount_C.ExecuteUbergraph_BP_BootFunctionMount");

	ABP_BootFunctionMount_C_ExecuteUbergraph_BP_BootFunctionMount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
