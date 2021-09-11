
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

// Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlLaunchWorkerActor_LightWeight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.UserConstructionScript");

	ABP_BtlLaunchWorkerActor_LightWeight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.SetupParameter
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 InBattleMap                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FBtlEncountGroupParam> InEncountParams                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InBattleDelayTime              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InAutoStart                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InUseOutsideCapture            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InBattleLoadContext            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_BtlLaunchWorkerActor_LightWeight_C::SetupParameter(const struct FString& InBattleMap, TArray<struct FBtlEncountGroupParam> InEncountParams, float InBattleDelayTime, bool InAutoStart, bool InUseOutsideCapture, const struct FString& InBattleLoadContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.SetupParameter");

	ABP_BtlLaunchWorkerActor_LightWeight_C_SetupParameter_Params params;
	params.InBattleMap = InBattleMap;
	params.InEncountParams = InEncountParams;
	params.InBattleDelayTime = InBattleDelayTime;
	params.InAutoStart = InAutoStart;
	params.InUseOutsideCapture = InUseOutsideCapture;
	params.InBattleLoadContext = InBattleLoadContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BtlLaunchWorkerActor_LightWeight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.ReceiveBeginPlay");

	ABP_BtlLaunchWorkerActor_LightWeight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlLaunchWorkerActor_LightWeight_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.ReceiveTick");

	ABP_BtlLaunchWorkerActor_LightWeight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.ExecuteUbergraph_BP_BtlLaunchWorkerActor_LightWeight
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlLaunchWorkerActor_LightWeight_C::ExecuteUbergraph_BP_BtlLaunchWorkerActor_LightWeight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.ExecuteUbergraph_BP_BtlLaunchWorkerActor_LightWeight");

	ABP_BtlLaunchWorkerActor_LightWeight_C_ExecuteUbergraph_BP_BtlLaunchWorkerActor_LightWeight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
