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

// BlueprintGeneratedClass BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C
// 0x008B (0x0DFC - 0x0D71)
class ABP_PF_NPC_CampCharacter_C : public ABP_PF_NpcCharacterStand_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D71(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D78(0x0008) (Transient, DuplicateTransient)
	struct FString                                     InitAction;                                               // 0x0D80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FPFNpcDefineFacialData                      InitOverrideFacial;                                       // 0x0D90(0x003C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0DCC(0x0004) MISSED OFFSET
	struct FPFCampFacialData                           FacialSet;                                                // 0x0DD0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentFacialSetIndex;                                    // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateFacialTimeBase;                                     // 0x0DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateFacialTimeFreq;                                     // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateFacialTick;                                         // 0x0DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateFacialInterval;                                     // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C");
		return ptr;
	}


	void SetInitPlayAction();
	void SetFacialAutoPreset();
	void OnGetUserLoadAsset(TArray<struct FSoftObjectPath>* OutAssetReference);
	void UserConstructionScript();
	void SetFacialPresetNo(int FacialPresetNo);
	void ReceiveBuildCharacterInitAnim();
	void ReceiveTick(float DeltaSeconds);
	void OnBuildCharacter();
	void SetFacialEye_LookAt(float Angle, float Rate);
	void ExecuteUbergraph_BP_PF_NPC_CampCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
