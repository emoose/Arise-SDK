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

// BlueprintGeneratedClass BP_BattleLocation.BP_BattleLocation_C
// 0x0098 (0x0498 - 0x0400)
class ABP_BattleLocation_C : public ABtl_Location
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class UBtlFloorComponent*                          BtlFloor;                                                 // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             CenterArrow;                                              // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        CenterText;                                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               EnableAreaCollision;                                      // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              AreaWidth;                                                // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaHeight;                                               // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseCollisionWidth;                                       // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseCollisionHeight;                                      // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugShowAreaCollision;                                   // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	TArray<struct FTransform>                          PartyTransform;                                           // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTransform>                          EnemyTransform;                                           // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class ABP_BattleUnitSpawner_C*>             PartySpawner;                                             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_BattleUnitSpawner_C*>             EnemySpawner;                                             // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FPFEncountSymbolGroupID                     EncountGroupID;                                           // 0x0480(0x0010) (Edit, BlueprintVisible)
	class ABP_BattleUnitSpawner_C*                     SmashPointSpawner;                                        // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleLocation.BP_BattleLocation_C");
		return ptr;
	}


	class UBtlFloorComponent* GetFloorComponent();
	float GetAreaWidth();
	struct FTransform GetSmashPointTransform();
	int GetEnemySpawnerMax();
	struct FTransform GetEnemySpawnerTransform(int Index);
	int GetPartySpawnerMax();
	struct FTransform GetPartySpawnerTransform(int Index);
	void SnapOnGround(class AActor* Actor, class AActor** Result);
	void UserConstructionScript();
	void CreateSpawnPoints();
	void ExecuteUbergraph_BP_BattleLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
