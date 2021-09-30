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

// BlueprintGeneratedClass BP_PF_NpcManager.BP_PF_NpcManager_C
// 0x0038 (0x0598 - 0x0560)
class ABP_PF_NpcManager_C : public APFNpcManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bBlockSpawn;                                              // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRemoved;                                                 // 0x0571(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowAlphaFadeCollision;                                  // 0x0572(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0573(0x0005) MISSED OFFSET
	TArray<struct FLinearColor>                        DebugColor;                                               // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bSpawnLock;                                               // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	class AAriseGameMode*                              AriseGameMode;                                            // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NpcManager.BP_PF_NpcManager_C");
		return ptr;
	}


	void GetDebugColor(int Num, struct FLinearColor* Color);
	void IsSpawnable(bool* bEnable);
	void OnMinimapRefresh();
	bool OnBuild(class AActor* Target);
	void UserConstructionScript();
	void ReceiveSpawnAll(EPFNpcSpawnType SpawnType);
	void ReceiveRemoveAll();
	void ReceiveBeginPlay();
	void OnPreMapChange(const struct FString& OldMapName, const struct FString& NewMapName);
	void OnChangeDisplayScene(unsigned char ChangedScene, unsigned char OldScene);
	void ExecuteUbergraph_BP_PF_NpcManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
