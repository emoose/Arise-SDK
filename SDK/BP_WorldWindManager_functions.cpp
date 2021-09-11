
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

// Function BP_WorldWindManager.BP_WorldWindManager_C.GetWindController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  WindController                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WorldWindManager_C::GetWindController(class AActor** WindController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManager.BP_WorldWindManager_C.GetWindController");

	ABP_WorldWindManager_C_GetWindController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WindController != nullptr)
		*WindController = params.WindController;
}


// Function BP_WorldWindManager.BP_WorldWindManager_C.AddWindEmitter_Implemantal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldWindManager_C::AddWindEmitter_Implemantal(class UParticleSystemComponent* Particle, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManager.BP_WorldWindManager_C.AddWindEmitter_Implemantal");

	ABP_WorldWindManager_C_AddWindEmitter_Implemantal_Params params;
	params.Particle = Particle;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldWindManager.BP_WorldWindManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WorldWindManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManager.BP_WorldWindManager_C.UserConstructionScript");

	ABP_WorldWindManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldWindManager.BP_WorldWindManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WorldWindManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManager.BP_WorldWindManager_C.ReceiveBeginPlay");

	ABP_WorldWindManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldWindManager.BP_WorldWindManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldWindManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManager.BP_WorldWindManager_C.ReceiveTick");

	ABP_WorldWindManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldWindManager.BP_WorldWindManager_C.OnPreMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_WorldWindManager_C::OnPreMapChange(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManager.BP_WorldWindManager_C.OnPreMapChange");

	ABP_WorldWindManager_C_OnPreMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldWindManager.BP_WorldWindManager_C.AddWindEmitter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldWindManager_C::AddWindEmitter(class UParticleSystemComponent* Particle, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManager.BP_WorldWindManager_C.AddWindEmitter");

	ABP_WorldWindManager_C_AddWindEmitter_Params params;
	params.Particle = Particle;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldWindManager.BP_WorldWindManager_C.SetWindController
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WindController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldWindManager_C::SetWindController(class AActor* WindController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManager.BP_WorldWindManager_C.SetWindController");

	ABP_WorldWindManager_C_SetWindController_Params params;
	params.WindController = WindController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldWindManager.BP_WorldWindManager_C.ExecuteUbergraph_BP_WorldWindManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldWindManager_C::ExecuteUbergraph_BP_WorldWindManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManager.BP_WorldWindManager_C.ExecuteUbergraph_BP_WorldWindManager");

	ABP_WorldWindManager_C_ExecuteUbergraph_BP_WorldWindManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
