
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

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestItemQuery
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlActionQuery*         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBRequestItemQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestItemQuery");

	UBP_BtlAIFunctionLibrary_C_SetBBRequestItemQuery_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestItemQuery
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlActionQuery*         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBRequestItemQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestItemQuery");

	UBP_BtlAIFunctionLibrary_C_GetBBRequestItemQuery_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBIdlePoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBIdlePoint(class UBlackboardComponent* Blackboard, const struct FVector& Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBIdlePoint");

	UBP_BtlAIFunctionLibrary_C_SetBBIdlePoint_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBIdlePoint
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBIdlePoint(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBIdlePoint");

	UBP_BtlAIFunctionLibrary_C_GetBBIdlePoint_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.ChangeBehaviorTree
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   UnitID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBehaviorTree*           NewBehavior                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_ChangeBehaviorTree(const struct FName& UnitID, class UBehaviorTree* NewBehavior, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.ChangeBehaviorTree");

	UBP_BtlAIFunctionLibrary_C_ChangeBehaviorTree_Params params;
	params.UnitID = UnitID;
	params.NewBehavior = NewBehavior;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBDetectTarget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBDetectTarget(class UBlackboardComponent* Blackboard, class ABtlCharacterBase* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBDetectTarget");

	UBP_BtlAIFunctionLibrary_C_SetBBDetectTarget_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBDetectTarget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBDetectTarget(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class ABtlCharacterBase** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBDetectTarget");

	UBP_BtlAIFunctionLibrary_C_GetBBDetectTarget_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBNotifyData
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlAIBlackboardNotifyData* Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBNotifyData(class UBlackboardComponent* Blackboard, class UBtlAIBlackboardNotifyData* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBNotifyData");

	UBP_BtlAIFunctionLibrary_C_SetBBNotifyData_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBNotifyData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlAIBlackboardNotifyData* Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBNotifyData(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlAIBlackboardNotifyData** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBNotifyData");

	UBP_BtlAIFunctionLibrary_C_GetBBNotifyData_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRandom
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBRandom(class UBlackboardComponent* Blackboard, int Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRandom");

	UBP_BtlAIFunctionLibrary_C_SetBBRandom_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRandom
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBRandom(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRandom");

	UBP_BtlAIFunctionLibrary_C_GetBBRandom_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBArtsTarget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABtlCharacterBase*       Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBArtsTarget(class UBlackboardComponent* Blackboard, class ABtlCharacterBase* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBArtsTarget");

	UBP_BtlAIFunctionLibrary_C_SetBBArtsTarget_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBArtsTarget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBArtsTarget(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class ABtlCharacterBase** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBArtsTarget");

	UBP_BtlAIFunctionLibrary_C_GetBBArtsTarget_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestGuardEndQuery
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlActionQuery*         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBRequestGuardEndQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestGuardEndQuery");

	UBP_BtlAIFunctionLibrary_C_SetBBRequestGuardEndQuery_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestGuardEndQuery
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlActionQuery*         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBRequestGuardEndQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestGuardEndQuery");

	UBP_BtlAIFunctionLibrary_C_GetBBRequestGuardEndQuery_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestGuardStartQuery
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlActionQuery*         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBRequestGuardStartQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestGuardStartQuery");

	UBP_BtlAIFunctionLibrary_C_SetBBRequestGuardStartQuery_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestGuardStartQuery
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlActionQuery*         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBRequestGuardStartQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestGuardStartQuery");

	UBP_BtlAIFunctionLibrary_C_GetBBRequestGuardStartQuery_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestStepQuery
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlActionQuery*         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBRequestStepQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestStepQuery");

	UBP_BtlAIFunctionLibrary_C_SetBBRequestStepQuery_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestStepQuery
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlActionQuery*         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBRequestStepQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestStepQuery");

	UBP_BtlAIFunctionLibrary_C_GetBBRequestStepQuery_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestTurnQuery
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlActionQuery*         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBRequestTurnQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestTurnQuery");

	UBP_BtlAIFunctionLibrary_C_SetBBRequestTurnQuery_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestTurnQuery
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlActionQuery*         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBRequestTurnQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestTurnQuery");

	UBP_BtlAIFunctionLibrary_C_GetBBRequestTurnQuery_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestMoveQuery
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlActionQuery*         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBRequestMoveQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestMoveQuery");

	UBP_BtlAIFunctionLibrary_C_SetBBRequestMoveQuery_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestMoveQuery
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlActionQuery*         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBRequestMoveQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestMoveQuery");

	UBP_BtlAIFunctionLibrary_C_GetBBRequestMoveQuery_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestArtsQuery
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlActionQuery*         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBRequestArtsQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestArtsQuery");

	UBP_BtlAIFunctionLibrary_C_SetBBRequestArtsQuery_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestArtsQuery
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlActionQuery*         Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBRequestArtsQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestArtsQuery");

	UBP_BtlAIFunctionLibrary_C_GetBBRequestArtsQuery_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestArts
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBRequestArts(class UBlackboardComponent* Blackboard, const struct FName& Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestArts");

	UBP_BtlAIFunctionLibrary_C_SetBBRequestArts_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestArts
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBRequestArts(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestArts");

	UBP_BtlAIFunctionLibrary_C_GetBBRequestArts_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBTargetGoal
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBTargetGoal(class UBlackboardComponent* Blackboard, const struct FVector& Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBTargetGoal");

	UBP_BtlAIFunctionLibrary_C_SetBBTargetGoal_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBTargetGoal
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBTargetGoal(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBTargetGoal");

	UBP_BtlAIFunctionLibrary_C_GetBBTargetGoal_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBEQSStatusMovePoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBEQSStatusMovePoint(class UBlackboardComponent* Blackboard, TEnumAsByte<EEnvQueryStatus> Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBEQSStatusMovePoint");

	UBP_BtlAIFunctionLibrary_C_SetBBEQSStatusMovePoint_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBEQSStatusMovePoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBEQSStatusMovePoint(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, TEnumAsByte<EEnvQueryStatus>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBEQSStatusMovePoint");

	UBP_BtlAIFunctionLibrary_C_GetBBEQSStatusMovePoint_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBPhase
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBPhase(class UBlackboardComponent* Blackboard, int Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBPhase");

	UBP_BtlAIFunctionLibrary_C_SetBBPhase_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBPhase
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBPhase(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBPhase");

	UBP_BtlAIFunctionLibrary_C_GetBBPhase_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBMovePoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_SetBBMovePoint(class UBlackboardComponent* Blackboard, const struct FVector& Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBMovePoint");

	UBP_BtlAIFunctionLibrary_C_SetBBMovePoint_Params params;
	params.Blackboard = Blackboard;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBMovePoint
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetBBMovePoint(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBMovePoint");

	UBP_BtlAIFunctionLibrary_C_GetBBMovePoint_Params params;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetValueAsActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BBKey                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_GetValueAsActor(class UBlackboardComponent* Blackboard, const struct FName& BBKey, class UObject* __WorldContext, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetValueAsActor");

	UBP_BtlAIFunctionLibrary_C_GetValueAsActor_Params params;
	params.Blackboard = Blackboard;
	params.BBKey = BBKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.AIMoveToPath
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 MovePoint                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ABtlCharacterBase*       AIPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MoveEndRange                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NoPath                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlAIFunctionLibrary_C::STATIC_AIMoveToPath(const struct FVector& MovePoint, class ABtlCharacterBase* AIPawn, class AAIController* AIController, float MoveEndRange, class UObject* __WorldContext, bool* Result, bool* NoPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.AIMoveToPath");

	UBP_BtlAIFunctionLibrary_C_AIMoveToPath_Params params;
	params.MovePoint = MovePoint;
	params.AIPawn = AIPawn;
	params.AIController = AIController;
	params.MoveEndRange = MoveEndRange;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (NoPath != nullptr)
		*NoPath = params.NoPath;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
