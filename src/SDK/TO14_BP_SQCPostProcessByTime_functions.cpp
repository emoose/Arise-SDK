
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

// Function TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_SQCPostProcessByTime_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C.UserConstructionScript");

	ATO14_BP_SQCPostProcessByTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATO14_BP_SQCPostProcessByTime_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C.ReceiveBeginPlay");

	ATO14_BP_SQCPostProcessByTime_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C.K2_OnReset
// (Event, Public, BlueprintEvent)

void ATO14_BP_SQCPostProcessByTime_C::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C.K2_OnReset");

	ATO14_BP_SQCPostProcessByTime_C_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_SQCPostProcessByTime_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C.ReceiveTick");

	ATO14_BP_SQCPostProcessByTime_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C.ExecuteUbergraph_TO14_BP_SQCPostProcessByTime
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_SQCPostProcessByTime_C::ExecuteUbergraph_TO14_BP_SQCPostProcessByTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_SQCPostProcessByTime.TO14_BP_SQCPostProcessByTime_C.ExecuteUbergraph_TO14_BP_SQCPostProcessByTime");

	ATO14_BP_SQCPostProcessByTime_C_ExecuteUbergraph_TO14_BP_SQCPostProcessByTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
