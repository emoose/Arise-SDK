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

// BlueprintGeneratedClass BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C
// 0x01E1 (0x0D71 - 0x0B90)
class ABP_PF_NpcCharacterStand_C : public APFStandingNpcCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B90(0x0008) (Transient, DuplicateTransient)
	class UBP_SCHOBJ_NPC_C*                            BP_SCHOBJ_NPC;                                            // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bOneTop;                                                  // 0x0BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBuilded;                                                 // 0x0BA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0BA2(0x0006) MISSED OFFSET
	struct FString                                     DefaultActionKey;                                         // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	struct FPFNpcPlacementData                         PlacementInfoMirror;                                      // 0x0BB8(0x0178) (Edit, BlueprintVisible, Transient)
	bool                                               bFixedLip;                                                // 0x0D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D31(0x0003) MISSED OFFSET
	struct FPFNpcDefineFacialData                      CurrentFacialData;                                        // 0x0D34(0x003C) (Edit, BlueprintVisible, Transient)
	bool                                               bEnableFacialDefault;                                     // 0x0D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NpcCharacterStand.BP_PF_NpcCharacterStand_C");
		return ptr;
	}


	void SetFacialEyelid(int No, float Weight);
	void GetFacialPresetSelection(int PresetNo, struct FPFNpcFacialPresetData* PresetData, bool* bValid);
	void SetFacialPreset(int PresetNo);
	void SetFacialEye_LookAt(float Angle, float Rate);
	void SetDefaultFacialData();
	void SetOverrideFacialData(const struct FPFNpcDefineFacialData& OverrideFacialData);
	void SetFacialData(const struct FPFNpcDefineFacialData& FacialData);
	void SetFacialIris(int No, float Weight);
	void SetFacialEye_Highlight(int No, float Weight);
	void SetFacialWrinkle1(int No, float Weight);
	void SetFacialWrinkle0(int No, float Weight);
	void SetFacialEmotion1(int No, float Weight);
	void SetFacialEmotion0(int No, float Weight);
	void BuildCharacter(const struct FPFNpcPlacementData& PlacementInfo, bool bNoCollision, bool bBlockBuild, bool bCameraFade, bool bNeedsFacePoseOnly, bool Use_Render_Culling, bool bLoadImmediate, bool* bEmpty);
	void SetEnableFacialLip(bool bEnable);
	void SetFacialLip(int LipNo);
	void SetFacialAutoLip(bool bEnable, float LimitTime);
	void SetFacialPresetNo(int FacialPresetNo);
	void SetFacialEye(int EyeNo);
	void SetFacialAutoBlink(bool bEnable);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BeginOneTop(class AActor* Listener);
	void EndOneTop();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBuildCharacterInitAnim();
	void OnBuildCharacter();
	void ExecuteUbergraph_BP_PF_NpcCharacterStand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
