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

// BlueprintGeneratedClass BP_PF_SearchOwl.BP_PF_SearchOwl_C
// 0x010A (0x09AA - 0x08A0)
class ABP_PF_SearchOwl_C : public AAriseCharacterBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A0(0x0008) (Transient, DuplicateTransient)
	class UAriseCharacterBuildComponent*               CharacterBuilder;                                         // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPFInteractionActorComponent*                PFActorComponent;                                         // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_PF_AlphaMaskComponent_C*                 BP_PF_AlphaMaskComponent;                                 // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSearchOwlData                              DatabaseCache;                                            // 0x08C0(0x00D8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BaseCollisionRadius;                                      // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseInteractRadius;                                       // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseInteractHeight;                                       // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleVoiceTimer;                                           // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayIdleVoice;                                           // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayIdleMotion;                                          // 0x09A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_SearchOwl.BP_PF_SearchOwl_C");
		return ptr;
	}


	void GetLocationName(struct FString* OutLocationName);
	void GetVisibility(bool* OutVisibility);
	void ResetIdleVoiceTimer();
	void SetVisibility(bool InNewVisibility);
	void BuildCharacter2(const struct FString& InDatabaseID);
	void BuildCharacterInternal(ESearchOwlType InType, const struct FString& InModelID, const struct FString& InAttachmentID, float InScale, float InCollisionSize);
	void UserConstructionScript();
	void OnBuildCharacter();
	void FadeIn(float InTime);
	void FadeOut(float InTime);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PF_SearchOwl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
