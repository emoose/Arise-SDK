
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

// Function AriseBattleCore.BtlAssetHandle.OnAssetLoadComplate
// (Final, Native, Private)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)

void UBtlAssetHandle::OnAssetLoadComplate(class UObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlAssetHandle.OnAssetLoadComplate");

	UBtlAssetHandle_OnAssetLoadComplate_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlAssetHandle.GetLoadObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBtlAssetHandle::GetLoadObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlAssetHandle.GetLoadObject");

	UBtlAssetHandle_GetLoadObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleCore.BtlAssetBundleBase.OnAssetBundleLoadComplate
// (Final, Native, Private)

void UBtlAssetBundleBase::OnAssetBundleLoadComplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlAssetBundleBase.OnAssetBundleLoadComplate");

	UBtlAssetBundleBase_OnAssetBundleLoadComplate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AriseBattleCore.BtlAssetManagerBase.OnLoaded__DelegateSignature
// (Public, Delegate)

void ABtlAssetManagerBase::OnLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AriseBattleCore.BtlAssetManagerBase.OnLoaded__DelegateSignature");

	ABtlAssetManagerBase_OnLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlAssetManagerBase.BtlExportResourceSizeExclusiveLog
// (Final, Exec, Native, Public, BlueprintCallable, Const)

void ABtlAssetManagerBase::BtlExportResourceSizeExclusiveLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlAssetManagerBase.BtlExportResourceSizeExclusiveLog");

	ABtlAssetManagerBase_BtlExportResourceSizeExclusiveLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlAssetManagerBase.BtlExportResourceSizeEstimatedTotalLog
// (Final, Exec, Native, Public, BlueprintCallable, Const)

void ABtlAssetManagerBase::BtlExportResourceSizeEstimatedTotalLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlAssetManagerBase.BtlExportResourceSizeEstimatedTotalLog");

	ABtlAssetManagerBase_BtlExportResourceSizeEstimatedTotalLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlAssetManagerBase.BtlExportAssetLog
// (Exec, Native, Public, BlueprintCallable, Const)

void ABtlAssetManagerBase::BtlExportAssetLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlAssetManagerBase.BtlExportAssetLog");

	ABtlAssetManagerBase_BtlExportAssetLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsCheckBitFlagCategory_ByAnyFlag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBtlBitAnyOfFlags       Flag                           (Parm)
// EBtlBitFlagCategory            Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBtlBitFlagFunctionLibrary::STATIC_IsCheckBitFlagCategory_ByAnyFlag(const struct FBtlBitAnyOfFlags& Flag, EBtlBitFlagCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsCheckBitFlagCategory_ByAnyFlag");

	UBtlBitFlagFunctionLibrary_IsCheckBitFlagCategory_ByAnyFlag_Params params;
	params.Flag = Flag;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsCheckBitFlagCategory_ByAllFlag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBtlBitAllOfFlags       Flag                           (Parm)
// EBtlBitFlagCategory            Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBtlBitFlagFunctionLibrary::STATIC_IsCheckBitFlagCategory_ByAllFlag(const struct FBtlBitAllOfFlags& Flag, EBtlBitFlagCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsCheckBitFlagCategory_ByAllFlag");

	UBtlBitFlagFunctionLibrary_IsCheckBitFlagCategory_ByAllFlag_Params params;
	params.Flag = Flag;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsAnyCheckBitFlagCategory_ByAnyFlag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBtlBitAnyOfFlags       Flag                           (Parm)
// TArray<EBtlBitFlagCategory>    Categorys                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBtlBitFlagFunctionLibrary::STATIC_IsAnyCheckBitFlagCategory_ByAnyFlag(const struct FBtlBitAnyOfFlags& Flag, TArray<EBtlBitFlagCategory> Categorys)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsAnyCheckBitFlagCategory_ByAnyFlag");

	UBtlBitFlagFunctionLibrary_IsAnyCheckBitFlagCategory_ByAnyFlag_Params params;
	params.Flag = Flag;
	params.Categorys = Categorys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsAnyCheckBitFlagCategory_ByAllFlag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBtlBitAllOfFlags       Flag                           (Parm)
// TArray<EBtlBitFlagCategory>    Categorys                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBtlBitFlagFunctionLibrary::STATIC_IsAnyCheckBitFlagCategory_ByAllFlag(const struct FBtlBitAllOfFlags& Flag, TArray<EBtlBitFlagCategory> Categorys)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsAnyCheckBitFlagCategory_ByAllFlag");

	UBtlBitFlagFunctionLibrary_IsAnyCheckBitFlagCategory_ByAllFlag_Params params;
	params.Flag = Flag;
	params.Categorys = Categorys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleCore.BtlVisualTaskBase.StopTaskRequest
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UBtlVisualTaskBase::StopTaskRequest(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskBase.StopTaskRequest");

	UBtlVisualTaskBase_StopTaskRequest_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlVisualTaskComponent.StopTaskWithClass
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  TaskClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBtlVisualTaskComponent::StopTaskWithClass(class UClass* TaskClass, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskComponent.StopTaskWithClass");

	UBtlVisualTaskComponent_StopTaskWithClass_Params params;
	params.TaskClass = TaskClass;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleCore.BtlVisualTaskComponent.StopTask
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TaskName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBtlVisualTaskComponent::StopTask(const struct FName& TaskName, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskComponent.StopTask");

	UBtlVisualTaskComponent_StopTask_Params params;
	params.TaskName = TaskName;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleCore.BtlVisualTaskComponent.SetRunableCategory
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// EBtlVisualableCategory         Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UBtlVisualTaskComponent::SetRunableCategory(EBtlVisualableCategory Category, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskComponent.SetRunableCategory");

	UBtlVisualTaskComponent_SetRunableCategory_Params params;
	params.Category = Category;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlVisualTaskComponent.SendVisualMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// class UObject*                 UserData                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBtlVisualTaskComponent::SendVisualMessage(const struct FString& Message, class UObject* UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskComponent.SendVisualMessage");

	UBtlVisualTaskComponent_SendVisualMessage_Params params;
	params.Message = Message;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlVisualTaskComponent.RunTask
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  TaskClass                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          StopTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSamePriorityTop               (Parm, ZeroConstructor, IsPlainOldData)
// int                            OverridePriority               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OverrideTaskName               (Parm, ZeroConstructor, IsPlainOldData)
// class UBtlVisualRootTaskBase*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBtlVisualRootTaskBase* UBtlVisualTaskComponent::RunTask(class UClass* TaskClass, float StopTime, bool bSamePriorityTop, int OverridePriority, const struct FName& OverrideTaskName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskComponent.RunTask");

	UBtlVisualTaskComponent_RunTask_Params params;
	params.TaskClass = TaskClass;
	params.StopTime = StopTime;
	params.bSamePriorityTop = bSamePriorityTop;
	params.OverridePriority = OverridePriority;
	params.OverrideTaskName = OverrideTaskName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction AriseBattleCore.BtlVisualTaskComponent.RebuildingMaterialsSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UBtlVisualTaskComponent::RebuildingMaterialsSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AriseBattleCore.BtlVisualTaskComponent.RebuildingMaterialsSignature__DelegateSignature");

	UBtlVisualTaskComponent_RebuildingMaterialsSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlVisualTaskComponent.RebuildingMaterials
// (Final, RequiredAPI, Native, Public, BlueprintCallable)

void UBtlVisualTaskComponent::RebuildingMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskComponent.RebuildingMaterials");

	UBtlVisualTaskComponent_RebuildingMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlVisualTaskComponent.LoopSwitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TargetPriority                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Interval                       (Parm, ZeroConstructor, IsPlainOldData)

void UBtlVisualTaskComponent::LoopSwitch(int TargetPriority, float Interval)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskComponent.LoopSwitch");

	UBtlVisualTaskComponent_LoopSwitch_Params params;
	params.TargetPriority = TargetPriority;
	params.Interval = Interval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseBattleCore.BtlVisualTaskComponent.HasTask
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   TaskName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBtlVisualTaskComponent::HasTask(const struct FName& TaskName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskComponent.HasTask");

	UBtlVisualTaskComponent_HasTask_Params params;
	params.TaskName = TaskName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleCore.BtlVisualTaskComponent.GetTaskPriorityWithClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  TaskClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBtlVisualTaskComponent::GetTaskPriorityWithClass(class UClass* TaskClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskComponent.GetTaskPriorityWithClass");

	UBtlVisualTaskComponent_GetTaskPriorityWithClass_Params params;
	params.TaskClass = TaskClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleCore.BtlVisualTaskComponent.GetTaskPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   TaskName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBtlVisualTaskComponent::GetTaskPriority(const struct FName& TaskName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskComponent.GetTaskPriority");

	UBtlVisualTaskComponent_GetTaskPriority_Params params;
	params.TaskName = TaskName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseBattleCore.BtlVisualTaskFunctionLibrary.K2_AsyncRunVisualTask
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBtlVisualTaskComponent* VisualTaskCmp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  TaskClass                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          StopTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSamePriorityTop               (Parm, ZeroConstructor, IsPlainOldData)
// int                            OverridePriority               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OverrideTaskName               (Parm, ZeroConstructor, IsPlainOldData)
// class UBtlVisualRootTaskBase*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBtlVisualRootTaskBase* UBtlVisualTaskFunctionLibrary::STATIC_K2_AsyncRunVisualTask(class UBtlVisualTaskComponent* VisualTaskCmp, class UClass* TaskClass, float StopTime, bool bSamePriorityTop, int OverridePriority, const struct FName& OverrideTaskName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseBattleCore.BtlVisualTaskFunctionLibrary.K2_AsyncRunVisualTask");

	UBtlVisualTaskFunctionLibrary_K2_AsyncRunVisualTask_Params params;
	params.VisualTaskCmp = VisualTaskCmp;
	params.TaskClass = TaskClass;
	params.StopTime = StopTime;
	params.bSamePriorityTop = bSamePriorityTop;
	params.OverridePriority = OverridePriority;
	params.OverrideTaskName = OverrideTaskName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
