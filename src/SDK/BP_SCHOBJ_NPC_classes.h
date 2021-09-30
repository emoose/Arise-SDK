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

// BlueprintGeneratedClass BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C
// 0x0037 (0x0268 - 0x0231)
class UBP_SCHOBJ_NPC_C : public UBP_SCHOBJ_BaseComponent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class ABP_PF_NpcCharacterStand_C*                  Target;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ModelID;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EAchScenarioCharSexType                            SexType;                                                  // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAchScenarioCharAgeType                            AgeType;                                                  // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	class APFNpcCharacterMeshActor*                    MeshActor;                                                // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SCHOBJ_NPC.BP_SCHOBJ_NPC_C");
		return ptr;
	}


	void IsQuest(bool* Result);
	void IsModelID(const struct FString& InModelID, bool* Result);
	void IsSexAgeType(EAchScenarioCharSexType Sex, EAchScenarioCharAgeType Age, bool* Result);
	void GetInteractiveSize(float* Field, float* Dungeon, float* Town);
	void GetType(EPFSCHObjDefine* Result);
	bool GetShortChatDatabase();
	bool CanCheck();
	class AActor* GetTarget();
	bool IsTarget();
	void ReceiveBeginPlay();
	void UpdateNPC();
	void ExecuteUbergraph_BP_SCHOBJ_NPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
