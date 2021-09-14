
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

// Function BTT_MoveToPoint.BTT_MoveToPoint_C.GuardEndRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Wait                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToPoint_C::GuardEndRequest(bool* Wait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToPoint.BTT_MoveToPoint_C.GuardEndRequest");

	UBTT_MoveToPoint_C_GuardEndRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wait != nullptr)
		*Wait = params.Wait;
}


// Function BTT_MoveToPoint.BTT_MoveToPoint_C.GuardRequest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Wait                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToPoint_C::GuardRequest(bool* Wait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToPoint.BTT_MoveToPoint_C.GuardRequest");

	UBTT_MoveToPoint_C_GuardRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wait != nullptr)
		*Wait = params.Wait;
}


// Function BTT_MoveToPoint.BTT_MoveToPoint_C.TerminationProcess
// (Public, BlueprintCallable, BlueprintEvent)

void UBTT_MoveToPoint_C::TerminationProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToPoint.BTT_MoveToPoint_C.TerminationProcess");

	UBTT_MoveToPoint_C_TerminationProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToPoint.BTT_MoveToPoint_C.OnFindGoalQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToPoint_C::OnFindGoalQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToPoint.BTT_MoveToPoint_C.OnFindGoalQueryFinished");

	UBTT_MoveToPoint_C_OnFindGoalQueryFinished_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToPoint.BTT_MoveToPoint_C.OnFindPointQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToPoint_C::OnFindPointQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToPoint.BTT_MoveToPoint_C.OnFindPointQueryFinished");

	UBTT_MoveToPoint_C_OnFindPointQueryFinished_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToPoint.BTT_MoveToPoint_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToPoint_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToPoint.BTT_MoveToPoint_C.ReceiveAbortAI");

	UBTT_MoveToPoint_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToPoint.BTT_MoveToPoint_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToPoint_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToPoint.BTT_MoveToPoint_C.ReceiveExecuteAI");

	UBTT_MoveToPoint_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToPoint.BTT_MoveToPoint_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToPoint_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToPoint.BTT_MoveToPoint_C.ReceiveTickAI");

	UBTT_MoveToPoint_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToPoint.BTT_MoveToPoint_C.ExecuteUbergraph_BTT_MoveToPoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToPoint_C::ExecuteUbergraph_BTT_MoveToPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToPoint.BTT_MoveToPoint_C.ExecuteUbergraph_BTT_MoveToPoint");

	UBTT_MoveToPoint_C_ExecuteUbergraph_BTT_MoveToPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
