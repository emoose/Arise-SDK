#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AriseBattleCore.BtlAssetHandle.OnAssetLoadComplate
struct UBtlAssetHandle_OnAssetLoadComplate_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseBattleCore.BtlAssetHandle.GetLoadObject
struct UBtlAssetHandle_GetLoadObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleCore.BtlAssetBundleBase.OnAssetBundleLoadComplate
struct UBtlAssetBundleBase_OnAssetBundleLoadComplate_Params
{
};

// DelegateFunction AriseBattleCore.BtlAssetManagerBase.OnLoaded__DelegateSignature
struct ABtlAssetManagerBase_OnLoaded__DelegateSignature_Params
{
};

// Function AriseBattleCore.BtlAssetManagerBase.BtlExportResourceSizeExclusiveLog
struct ABtlAssetManagerBase_BtlExportResourceSizeExclusiveLog_Params
{
};

// Function AriseBattleCore.BtlAssetManagerBase.BtlExportResourceSizeEstimatedTotalLog
struct ABtlAssetManagerBase_BtlExportResourceSizeEstimatedTotalLog_Params
{
};

// Function AriseBattleCore.BtlAssetManagerBase.BtlExportAssetLog
struct ABtlAssetManagerBase_BtlExportAssetLog_Params
{
};

// Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsCheckBitFlagCategory_ByAnyFlag
struct UBtlBitFlagFunctionLibrary_IsCheckBitFlagCategory_ByAnyFlag_Params
{
	struct FBtlBitAnyOfFlags                           Flag;                                                     // (Parm)
	EBtlBitFlagCategory                                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsCheckBitFlagCategory_ByAllFlag
struct UBtlBitFlagFunctionLibrary_IsCheckBitFlagCategory_ByAllFlag_Params
{
	struct FBtlBitAllOfFlags                           Flag;                                                     // (Parm)
	EBtlBitFlagCategory                                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsAnyCheckBitFlagCategory_ByAnyFlag
struct UBtlBitFlagFunctionLibrary_IsAnyCheckBitFlagCategory_ByAnyFlag_Params
{
	struct FBtlBitAnyOfFlags                           Flag;                                                     // (Parm)
	TArray<EBtlBitFlagCategory>                        Categorys;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleCore.BtlBitFlagFunctionLibrary.IsAnyCheckBitFlagCategory_ByAllFlag
struct UBtlBitFlagFunctionLibrary_IsAnyCheckBitFlagCategory_ByAllFlag_Params
{
	struct FBtlBitAllOfFlags                           Flag;                                                     // (Parm)
	TArray<EBtlBitFlagCategory>                        Categorys;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleCore.BtlVisualTaskBase.StopTaskRequest
struct UBtlVisualTaskBase_StopTaskRequest_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseBattleCore.BtlVisualTaskComponent.StopTaskWithClass
struct UBtlVisualTaskComponent_StopTaskWithClass_Params
{
	class UClass*                                      TaskClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleCore.BtlVisualTaskComponent.StopTask
struct UBtlVisualTaskComponent_StopTask_Params
{
	struct FName                                       TaskName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleCore.BtlVisualTaskComponent.SetRunableCategory
struct UBtlVisualTaskComponent_SetRunableCategory_Params
{
	EBtlVisualableCategory                             Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseBattleCore.BtlVisualTaskComponent.SendVisualMessage
struct UBtlVisualTaskComponent_SendVisualMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     UserData;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseBattleCore.BtlVisualTaskComponent.RunTask
struct UBtlVisualTaskComponent_RunTask_Params
{
	class UClass*                                      TaskClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StopTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSamePriorityTop;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OverridePriority;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideTaskName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UBtlVisualRootTaskBase*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction AriseBattleCore.BtlVisualTaskComponent.RebuildingMaterialsSignature__DelegateSignature
struct UBtlVisualTaskComponent_RebuildingMaterialsSignature__DelegateSignature_Params
{
};

// Function AriseBattleCore.BtlVisualTaskComponent.RebuildingMaterials
struct UBtlVisualTaskComponent_RebuildingMaterials_Params
{
};

// Function AriseBattleCore.BtlVisualTaskComponent.LoopSwitch
struct UBtlVisualTaskComponent_LoopSwitch_Params
{
	int                                                TargetPriority;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseBattleCore.BtlVisualTaskComponent.HasTask
struct UBtlVisualTaskComponent_HasTask_Params
{
	struct FName                                       TaskName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleCore.BtlVisualTaskComponent.GetTaskPriorityWithClass
struct UBtlVisualTaskComponent_GetTaskPriorityWithClass_Params
{
	class UClass*                                      TaskClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleCore.BtlVisualTaskComponent.GetTaskPriority
struct UBtlVisualTaskComponent_GetTaskPriority_Params
{
	struct FName                                       TaskName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseBattleCore.BtlVisualTaskFunctionLibrary.K2_AsyncRunVisualTask
struct UBtlVisualTaskFunctionLibrary_K2_AsyncRunVisualTask_Params
{
	class UBtlVisualTaskComponent*                     VisualTaskCmp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      TaskClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StopTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSamePriorityTop;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OverridePriority;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideTaskName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UBtlVisualRootTaskBase*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
