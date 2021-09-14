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

// BlueprintGeneratedClass BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C
// 0x00FC (0x0C7C - 0x0B80)
class ABP_PF_NpcCharacterWalk_C : public APFWalkableNpcCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	struct FPFNpWalkSpawnData                          SpawnDataMirror;                                          // 0x0B88(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPFNpcDefineFacialData                      CurrentFacialData;                                        // 0x0C30(0x003C) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bUsePoolObject;                                           // 0x0C6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C6D(0x0003) MISSED OFFSET
	class ABP_PF_NPC_Walk_System_C*                    Owner_WalkSystem;                                         // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                WalkSystemWaypointIndex;                                  // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C");
		return ptr;
	}


	void Despawn();
	void RemoveSystem();
	void SetOverrideFacialData(const struct FPFNpcDefineFacialData& OverrideFacialData);
	void SetFacialEye_LookAt(float Angle, float Weight);
	void SetFacialEye_Highlight(int No, float Weight);
	void SetFacialAutoBlink(bool bEnable);
	void SetFacialEye(int EyeNo);
	void SetFacialIris(int No, float Weight);
	void SetFacialPreset(int PresetNo);
	void SetFacialData(const struct FPFNpcDefineFacialData& NewFacialData);
	void SetDefaultFacialData();
	void BuildCharacter(const struct FPFNpWalkSpawnData& SpawnData, bool bLoadImmediate);
	void SetCollide();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnBuildCharacter();
	void ReceiveBuildCharacterInitAnim();
	void ExecuteUbergraph_BP_PF_NpcCharacterWalk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
