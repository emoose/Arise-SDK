
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

// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_DebugRender
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_MoveCircle_C::Received_DebugRender(float FrameDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_DebugRender");

	UBP_MGC_TSK_MoveCircle_C_Received_DebugRender_Params params;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_GetTaskName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TSK_MoveCircle_C::Received_GetTaskName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_GetTaskName");

	UBP_MGC_TSK_MoveCircle_C_Received_GetTaskName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.GetLerpAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Elapsed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_MoveCircle_C::GetLerpAlpha(float Elapsed, float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.GetLerpAlpha");

	UBP_MGC_TSK_MoveCircle_C_GetLerpAlpha_Params params;
	params.Elapsed = Elapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_Begin
// (Event, Public, BlueprintEvent)

void UBP_MGC_TSK_MoveCircle_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_Begin");

	UBP_MGC_TSK_MoveCircle_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_MoveCircle_C::Received_Tick(float FrameDeltaTime, float ElapsedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.Received_Tick");

	UBP_MGC_TSK_MoveCircle_C_Received_Tick_Params params;
	params.FrameDeltaTime = FrameDeltaTime;
	params.ElapsedTime = ElapsedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.ExecuteUbergraph_BP_MGC_TSK_MoveCircle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TSK_MoveCircle_C::ExecuteUbergraph_BP_MGC_TSK_MoveCircle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TSK_MoveCircle.BP_MGC_TSK_MoveCircle_C.ExecuteUbergraph_BP_MGC_TSK_MoveCircle");

	UBP_MGC_TSK_MoveCircle_C_ExecuteUbergraph_BP_MGC_TSK_MoveCircle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
