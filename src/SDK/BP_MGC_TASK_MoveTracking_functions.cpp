
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

// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_DebugRender
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_MoveTracking_C::Received_DebugRender(float FrameDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_DebugRender");

	UBP_MGC_TASK_MoveTracking_C_Received_DebugRender_Params params;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_GetTaskName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TASK_MoveTracking_C::Received_GetTaskName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_GetTaskName");

	UBP_MGC_TASK_MoveTracking_C_Received_GetTaskName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.UpdateTrackingEx
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_MoveTracking_C::UpdateTrackingEx(float ElapsedTime, float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.UpdateTrackingEx");

	UBP_MGC_TASK_MoveTracking_C_UpdateTrackingEx_Params params;
	params.ElapsedTime = ElapsedTime;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.UpdateTracking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ElsedTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_MoveTracking_C::UpdateTracking(float Delta, float ElsedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.UpdateTracking");

	UBP_MGC_TASK_MoveTracking_C_UpdateTracking_Params params;
	params.Delta = Delta;
	params.ElsedTime = ElsedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Tracking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_MoveTracking_C::Tracking(float Delta, float ElapsedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Tracking");

	UBP_MGC_TASK_MoveTracking_C_Tracking_Params params;
	params.Delta = Delta;
	params.ElapsedTime = ElapsedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_MoveTracking_C::Received_Tick(float FrameDeltaTime, float ElapsedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_Tick");

	UBP_MGC_TASK_MoveTracking_C_Received_Tick_Params params;
	params.FrameDeltaTime = FrameDeltaTime;
	params.ElapsedTime = ElapsedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_Begin
// (Event, Public, BlueprintEvent)

void UBP_MGC_TASK_MoveTracking_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.Received_Begin");

	UBP_MGC_TASK_MoveTracking_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.ExecuteUbergraph_BP_MGC_TASK_MoveTracking
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_MoveTracking_C::ExecuteUbergraph_BP_MGC_TASK_MoveTracking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_MoveTracking.BP_MGC_TASK_MoveTracking_C.ExecuteUbergraph_BP_MGC_TASK_MoveTracking");

	UBP_MGC_TASK_MoveTracking_C_ExecuteUbergraph_BP_MGC_TASK_MoveTracking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
