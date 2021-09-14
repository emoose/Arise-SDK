
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

// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.GetIdentifier
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBP_MGC_TASK_NotifyCollision_C::GetIdentifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.GetIdentifier");

	UBP_MGC_TASK_NotifyCollision_C_GetIdentifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_ReplaceTask
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlMagicTask*           NewTask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_MGC_TASK_NotifyCollision_C::Received_ReplaceTask(class UBtlMagicTask* NewTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_ReplaceTask");

	UBP_MGC_TASK_NotifyCollision_C_Received_ReplaceTask_Params params;
	params.NewTask = NewTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_GetNotesInfomation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TASK_NotifyCollision_C::Received_GetNotesInfomation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_GetNotesInfomation");

	UBP_MGC_TASK_NotifyCollision_C_Received_GetNotesInfomation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_DebugRender
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_NotifyCollision_C::Received_DebugRender(float FrameDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_DebugRender");

	UBP_MGC_TASK_NotifyCollision_C_Received_DebugRender_Params params;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.IsSomeGroup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBtlUnitGroup                  SelfGroup                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlUnitGroup                  TargetGroup                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SameGroup                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_NotifyCollision_C::IsSomeGroup(EBtlUnitGroup SelfGroup, EBtlUnitGroup TargetGroup, bool* SameGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.IsSomeGroup");

	UBP_MGC_TASK_NotifyCollision_C_IsSomeGroup_Params params;
	params.SelfGroup = SelfGroup;
	params.TargetGroup = TargetGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SameGroup != nullptr)
		*SameGroup = params.SameGroup;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.IsFilterActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> CollisionObjectType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_NotifyCollision_C::IsFilterActor(class AActor* Actor, TEnumAsByte<ECollisionChannel> CollisionObjectType, bool* AddActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.IsFilterActor");

	UBP_MGC_TASK_NotifyCollision_C_IsFilterActor_Params params;
	params.Actor = Actor;
	params.CollisionObjectType = CollisionObjectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AddActor != nullptr)
		*AddActor = params.AddActor;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_GetErrorMessage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBtlMagicAsset*          Asset                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TASK_NotifyCollision_C::Received_GetErrorMessage(class UBtlMagicAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_GetErrorMessage");

	UBP_MGC_TASK_NotifyCollision_C_Received_GetErrorMessage_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.TickFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPrimitiveComponent*> Current                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MGC_TASK_NotifyCollision_C::TickFinish(TArray<class UPrimitiveComponent*>* Prev, TArray<class UPrimitiveComponent*>* Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.TickFinish");

	UBP_MGC_TASK_NotifyCollision_C_TickFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prev != nullptr)
		*Prev = params.Prev;
	if (Current != nullptr)
		*Current = params.Current;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.TickHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPrimitiveComponent*> Current                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MGC_TASK_NotifyCollision_C::TickHit(class AActor* HitActor, class UPrimitiveComponent* HitComponent, TArray<class UPrimitiveComponent*>* Prev, TArray<class UPrimitiveComponent*>* Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.TickHit");

	UBP_MGC_TASK_NotifyCollision_C_TickHit_Params params;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prev != nullptr)
		*Prev = params.Prev;
	if (Current != nullptr)
		*Current = params.Current;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_GetTaskName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBP_MGC_TASK_NotifyCollision_C::Received_GetTaskName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_GetTaskName");

	UBP_MGC_TASK_NotifyCollision_C_Received_GetTaskName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.UpdateParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_NotifyCollision_C::UpdateParam(float ElapsedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.UpdateParam");

	UBP_MGC_TASK_NotifyCollision_C_UpdateParam_Params params;
	params.ElapsedTime = ElapsedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_Begin
// (Event, Public, BlueprintEvent)

void UBP_MGC_TASK_NotifyCollision_C::Received_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_Begin");

	UBP_MGC_TASK_NotifyCollision_C_Received_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_NotifyCollision_C::Received_Tick(float FrameDeltaTime, float ElapsedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.Received_Tick");

	UBP_MGC_TASK_NotifyCollision_C_Received_Tick_Params params;
	params.FrameDeltaTime = FrameDeltaTime;
	params.ElapsedTime = ElapsedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.ExecuteUbergraph_BP_MGC_TASK_NotifyCollision
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MGC_TASK_NotifyCollision_C::ExecuteUbergraph_BP_MGC_TASK_NotifyCollision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.ExecuteUbergraph_BP_MGC_TASK_NotifyCollision");

	UBP_MGC_TASK_NotifyCollision_C_ExecuteUbergraph_BP_MGC_TASK_NotifyCollision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.OnEndOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Collision                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MGC_TASK_NotifyCollision_C::OnEndOverlap__DelegateSignature(class UPrimitiveComponent* Collision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.OnEndOverlap__DelegateSignature");

	UBP_MGC_TASK_NotifyCollision_C_OnEndOverlap__DelegateSignature_Params params;
	params.Collision = Collision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.OnBeginOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Collision                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MGC_TASK_NotifyCollision_C::OnBeginOverlap__DelegateSignature(class UPrimitiveComponent* Collision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MGC_TASK_NotifyCollision.BP_MGC_TASK_NotifyCollision_C.OnBeginOverlap__DelegateSignature");

	UBP_MGC_TASK_NotifyCollision_C_OnBeginOverlap__DelegateSignature_Params params;
	params.Collision = Collision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
