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

// BlueprintGeneratedClass BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C
// 0x0080 (0x0481 - 0x0401)
class ABP_PF_MAPOBJ_OwlPoint_C : public ABP_PF_MAPOBJ_BaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class UPFSearchOwlPreviewComponent*                PFSearchOwlPreview;                                       // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     DatabaseID;                                               // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              OwlScale;                                                 // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	class UClass*                                      InteractInfo_1;                                           // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      InteractEvent;                                            // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_PF_SearchOwl_C*                          OwlActor;                                                 // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractionRangeOffset;                                   // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseCollisionSize;                                        // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractRadius;                                           // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractHeight;                                           // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraInteractDistance;                                   // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FScenarioConditionNamed                     SpawnScenarioCondition;                                   // 0x0460(0x0020) (Edit, BlueprintVisible)
	bool                                               bSpawned;                                                 // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_OwlPoint.BP_PF_MAPOBJ_OwlPoint_C");
		return ptr;
	}


	float GetCameraInteractDistance();
	class AActor* GetSpawnedActor();
	struct FVector GetPointLocation();
	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	void UpdateInteractParams();
	void GetLocationName(struct FString* OutLocationName);
	void UserConstructionScript();
	void DiscoverOwlPoint();
	void Event_Post_Map_Chagne(const struct FString& NewMapName, const struct FString& OldMapName);
	void ReceiveBeginPlay();
	void ChangeActive(bool bActive);
	void ReceivePostEditChangeProperty();
	void Event_Change_Location(const struct FString& NewLocationName);
	void ReceiveOnConstruction(const struct FTransform& Transform);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PF_MAPOBJ_OwlPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
