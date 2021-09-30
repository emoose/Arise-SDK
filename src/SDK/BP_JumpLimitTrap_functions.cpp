
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

// Function BP_JumpLimitTrap.BP_JumpLimitTrap_C.BeginOvelapped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     NewParam2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            NewParam3                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam4                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              NewParam5                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_JumpLimitTrap_C::BeginOvelapped(class UPrimitiveComponent* NewParam, class AActor* NewParam1, class UPrimitiveComponent* NewParam2, int NewParam3, bool NewParam4, struct FHitResult* NewParam5)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpLimitTrap.BP_JumpLimitTrap_C.BeginOvelapped");

	ABP_JumpLimitTrap_C_BeginOvelapped_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;
	params.NewParam4 = NewParam4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam5 != nullptr)
		*NewParam5 = params.NewParam5;
}


// Function BP_JumpLimitTrap.BP_JumpLimitTrap_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_JumpLimitTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpLimitTrap.BP_JumpLimitTrap_C.UserConstructionScript");

	ABP_JumpLimitTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JumpLimitTrap.BP_JumpLimitTrap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_JumpLimitTrap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpLimitTrap.BP_JumpLimitTrap_C.ReceiveBeginPlay");

	ABP_JumpLimitTrap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JumpLimitTrap.BP_JumpLimitTrap_C.CustomEvent_2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_JumpLimitTrap_C::CustomEvent_2(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpLimitTrap.BP_JumpLimitTrap_C.CustomEvent_2");

	ABP_JumpLimitTrap_C_CustomEvent_2_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JumpLimitTrap.BP_JumpLimitTrap_C.ExecuteUbergraph_BP_JumpLimitTrap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_JumpLimitTrap_C::ExecuteUbergraph_BP_JumpLimitTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpLimitTrap.BP_JumpLimitTrap_C.ExecuteUbergraph_BP_JumpLimitTrap");

	ABP_JumpLimitTrap_C_ExecuteUbergraph_BP_JumpLimitTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
