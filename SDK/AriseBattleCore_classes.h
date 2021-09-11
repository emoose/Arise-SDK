#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AriseBattleCore.BtlAssetHandleBase
// 0x0028 (0x0050 - 0x0028)
class UBtlAssetHandleBase : public UObject
{
public:
	struct FName                                       AssetID;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLoadComplate;                                           // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                LoadPriorityOffset;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	bool                                               bIsBattleLock;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                LoadCount;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	int                                                LoadTemporaryCount;                                       // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlAssetHandleBase");
		return ptr;
	}

};


// Class AriseBattleCore.BtlAssetHandle
// 0x0030 (0x0080 - 0x0050)
class UBtlAssetHandle : public UBtlAssetHandleBase
{
public:
	struct FSoftObjectPath                             AssetPath;                                                // 0x0050(0x0018) (Transient)
	EBtlAssetCategory                                  Category;                                                 // 0x0068(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UObject*                                     LoadObject;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	bool                                               bIsLoadRequest;                                           // 0x0078(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlAssetHandle");
		return ptr;
	}


	void OnAssetLoadComplate(class UObject* Obj);
	class UObject* GetLoadObject();
};


// Class AriseBattleCore.BtlAssetBundleBase
// 0x0020 (0x0070 - 0x0050)
class UBtlAssetBundleBase : public UBtlAssetHandleBase
{
public:
	EBtlAssetBundleCategory                            Category;                                                 // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<TWeakObjectPtr<class UBtlAssetHandleBase>>  AssetHandleArray;                                         // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	int                                                AsyncLoadPriority;                                        // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlAssetBundleBase");
		return ptr;
	}


	void OnAssetBundleLoadComplate();
};


// Class AriseBattleCore.BtlAssetManagerBase
// 0x0160 (0x0488 - 0x0328)
class ABtlAssetManagerBase : public AInfo
{
public:
	bool                                               bIsBattleMode;                                            // 0x0328(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsNotLoadDataSync;                                        // 0x0329(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x032A(0x0006) MISSED OFFSET
	class UEnum*                                       BtlAssetBundleCategoryEnum;                               // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<EBtlAssetBundleCategory, class UClass*>       GeneratedBundleClass;                                     // 0x0338(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<EBtlAssetBundleCategory, struct FBtlAssetBundleData> AssetBundleCategoryMap;                                   // 0x0388(0x0050) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	class UEnum*                                       BtlAssetCategoryEnum;                                     // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<EBtlAssetCategory, class UClass*>             GeneratedHandleClass;                                     // 0x03E0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<EBtlAssetCategory, struct FBtlAssetHandleData> AssetCategoryMap;                                         // 0x0430(0x0050) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	int                                                AsyncLoadPriority;                                        // 0x0480(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0484(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlAssetManagerBase");
		return ptr;
	}


	void OnLoaded__DelegateSignature();
	void BtlExportResourceSizeExclusiveLog();
	void BtlExportResourceSizeEstimatedTotalLog();
	void BtlExportAssetLog();
};


// Class AriseBattleCore.BtlAsTransition_ElapsedState
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_ElapsedState : public UASTransition_Base
{
public:
	float                                              ElapsedSec;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlAsTransition_ElapsedState");
		return ptr;
	}

};


// Class AriseBattleCore.BtlAsTransition_FallingVelocity
// 0x0000 (0x0030 - 0x0030)
class UBtlAsTransition_FallingVelocity : public UASTransition_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlAsTransition_FallingVelocity");
		return ptr;
	}

};


// Class AriseBattleCore.BtlAsTransition_LoopState
// 0x0008 (0x0038 - 0x0030)
class UBtlAsTransition_LoopState : public UASTransition_Base
{
public:
	int                                                LoopCount;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlAsTransition_LoopState");
		return ptr;
	}

};


// Class AriseBattleCore.BtlBitFlagFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBtlBitFlagFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlBitFlagFunctionLibrary");
		return ptr;
	}


	bool STATIC_IsCheckBitFlagCategory_ByAnyFlag(const struct FBtlBitAnyOfFlags& Flag, EBtlBitFlagCategory Category);
	bool STATIC_IsCheckBitFlagCategory_ByAllFlag(const struct FBtlBitAllOfFlags& Flag, EBtlBitFlagCategory Category);
	bool STATIC_IsAnyCheckBitFlagCategory_ByAnyFlag(const struct FBtlBitAnyOfFlags& Flag, TArray<EBtlBitFlagCategory> Categorys);
	bool STATIC_IsAnyCheckBitFlagCategory_ByAllFlag(const struct FBtlBitAllOfFlags& Flag, TArray<EBtlBitFlagCategory> Categorys);
};


// Class AriseBattleCore.BtlVisualTaskBase
// 0x0010 (0x0038 - 0x0028)
class UBtlVisualTaskBase : public UObject
{
public:
	TWeakObjectPtr<class UBtlVisualTaskComponent>      OwnerComponent;                                           // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UBtlVisualRootTaskBase>       ParentTask;                                               // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlVisualTaskBase");
		return ptr;
	}


	void StopTaskRequest(bool bForce);
};


// Class AriseBattleCore.BtlVisualRootTaskBase
// 0x0058 (0x0090 - 0x0038)
class UBtlVisualRootTaskBase : public UBtlVisualTaskBase
{
public:
	struct FScriptMulticastDelegate                    OnComplated;                                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                Priority;                                                 // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FName                                       TaskName;                                                 // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RunableCategory;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EBtlVisualTaskRunDuplicatePolicy                   RunDuplicatePolicy;                                       // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<class UBtlVisualTaskBase*>                  ChildTaskLists;                                           // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	TArray<class UBtlVisualTaskBase*>                  DelayBeginPlayTasks;                                      // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	bool                                               IsAlwaysTask;                                             // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              TimeMax;                                                  // 0x0084(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Time;                                                     // 0x0088(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsBeginPlayed;                                            // 0x008C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsStopRequest;                                            // 0x008D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x008E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlVisualRootTaskBase");
		return ptr;
	}

};


// Class AriseBattleCore.BtlVisualTaskComponent
// 0x0078 (0x0170 - 0x00F8)
class UBtlVisualTaskComponent : public UActorComponent
{
public:
	TArray<class UBtlVisualTaskBase*>                  TaskLists;                                                // 0x00F8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	TArray<class UBtlVisualRootTaskBase*>              AlwaysTaskLists;                                          // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	TArray<class UBtlVisualRootTaskBase*>              IgnoreAlwaysRootTaskLists;                                // 0x0118(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	TArray<class UBtlVisualRootTaskBase*>              RootTaskLists;                                            // 0x0128(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	TArray<class UBtlVisualRootTaskBase*>              IgnoreRootTaskLists;                                      // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	int                                                RunableCategory;                                          // 0x0148(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	TArray<struct FBtlVisualPriorityLoopSwitch>        LoopSwitchArray;                                          // 0x0150(0x0010) (ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnRebuildingMaterials;                                    // 0x0160(0x0010) (ZeroConstructor, Transient, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlVisualTaskComponent");
		return ptr;
	}


	bool StopTaskWithClass(class UClass* TaskClass, bool bForce);
	bool StopTask(const struct FName& TaskName, bool bForce);
	void SetRunableCategory(EBtlVisualableCategory Category, bool Enable);
	void SendVisualMessage(const struct FString& Message, class UObject* UserData);
	class UBtlVisualRootTaskBase* RunTask(class UClass* TaskClass, float StopTime, bool bSamePriorityTop, int OverridePriority, const struct FName& OverrideTaskName);
	void RebuildingMaterialsSignature__DelegateSignature();
	void RebuildingMaterials();
	void LoopSwitch(int TargetPriority, float Interval);
	bool HasTask(const struct FName& TaskName);
	int GetTaskPriorityWithClass(class UClass* TaskClass);
	int GetTaskPriority(const struct FName& TaskName);
};


// Class AriseBattleCore.BtlVisualTaskFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBtlVisualTaskFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AriseBattleCore.BtlVisualTaskFunctionLibrary");
		return ptr;
	}


	class UBtlVisualRootTaskBase* STATIC_K2_AsyncRunVisualTask(class UBtlVisualTaskComponent* VisualTaskCmp, class UClass* TaskClass, float StopTime, bool bSamePriorityTop, int OverridePriority, const struct FName& OverrideTaskName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
