
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

// Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C._SpawnBlueprints
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_GameMainFunctionMount_C::_SpawnBlueprints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C._SpawnBlueprints");

	ABP_GameMainFunctionMount_C__SpawnBlueprints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C._IsLoadedBlueprints
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bLoaded                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GameMainFunctionMount_C::_IsLoadedBlueprints(bool* bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C._IsLoadedBlueprints");

	ABP_GameMainFunctionMount_C__IsLoadedBlueprints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLoaded != nullptr)
		*bLoaded = params.bLoaded;
}


// Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C._LoadBlueprints
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_GameMainFunctionMount_C::_LoadBlueprints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C._LoadBlueprints");

	ABP_GameMainFunctionMount_C__LoadBlueprints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameMainFunctionMount_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.UserConstructionScript");

	ABP_GameMainFunctionMount_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_GameMainFunctionMount_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.ReceiveDestroyed");

	ABP_GameMainFunctionMount_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.DoMount
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameMainFunctionMount_C::DoMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.DoMount");

	ABP_GameMainFunctionMount_C_DoMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameMainFunctionMount_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.ReceiveBeginPlay");

	ABP_GameMainFunctionMount_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameMainFunctionMount_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.ReceiveTick");

	ABP_GameMainFunctionMount_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.ExecuteUbergraph_BP_GameMainFunctionMount
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameMainFunctionMount_C::ExecuteUbergraph_BP_GameMainFunctionMount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMainFunctionMount.BP_GameMainFunctionMount_C.ExecuteUbergraph_BP_GameMainFunctionMount");

	ABP_GameMainFunctionMount_C_ExecuteUbergraph_BP_GameMainFunctionMount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
