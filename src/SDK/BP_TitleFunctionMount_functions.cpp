
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

// Function BP_TitleFunctionMount.BP_TitleFunctionMount_C._SpawnBlueprints
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_TitleFunctionMount_C::_SpawnBlueprints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TitleFunctionMount.BP_TitleFunctionMount_C._SpawnBlueprints");

	ABP_TitleFunctionMount_C__SpawnBlueprints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TitleFunctionMount_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.UserConstructionScript");

	ABP_TitleFunctionMount_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TitleFunctionMount_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.ReceiveBeginPlay");

	ABP_TitleFunctionMount_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TitleFunctionMount_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.ReceiveTick");

	ABP_TitleFunctionMount_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.DoMount
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TitleFunctionMount_C::DoMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.DoMount");

	ABP_TitleFunctionMount_C_DoMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_TitleFunctionMount_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.ReceiveDestroyed");

	ABP_TitleFunctionMount_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.ExecuteUbergraph_BP_TitleFunctionMount
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TitleFunctionMount_C::ExecuteUbergraph_BP_TitleFunctionMount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TitleFunctionMount.BP_TitleFunctionMount_C.ExecuteUbergraph_BP_TitleFunctionMount");

	ABP_TitleFunctionMount_C_ExecuteUbergraph_BP_TitleFunctionMount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
