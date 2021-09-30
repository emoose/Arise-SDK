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

// BlueprintGeneratedClass BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C
// 0x0042 (0x0443 - 0x0401)
class ABP_PF_MAPOBJ_CampPoint_C : public ABP_PF_MAPOBJ_BaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class UBP_SCHOBJ_CampPoint_C*                      BP_SCHOBJ_CampPoint;                                      // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               PreloadTrap;                                              // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      InteractEvent;                                            // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InteractSymbol;                                           // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     CampMapName;                                              // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bPreloadAreaOverlap;                                      // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreloadAreaOverlapChanged;                               // 0x0441(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreloaded;                                               // 0x0442(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_MAPOBJ_CampPoint.BP_PF_MAPOBJ_CampPoint_C");
		return ptr;
	}


	struct FName GetOutlinerFolderPath();
	struct FString GetOutlinerLabelName();
	bool Received_OnChangeState(float DeltaSeconds);
	void SetDiscover();
	void IsDiscover(bool* bCleared);
	void Unload(bool bAtActorFinalize);
	void Preload();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Preload_Begin_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveOnConstruction(const struct FTransform& Transform);
	void Preload_End_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnFoundTrapIn();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnLockCampPont();
	void ExecuteUbergraph_BP_PF_MAPOBJ_CampPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
