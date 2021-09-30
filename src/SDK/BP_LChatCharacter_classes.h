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

// BlueprintGeneratedClass BP_LChatCharacter.BP_LChatCharacter_C
// 0x0030 (0x0950 - 0x0920)
class ABP_LChatCharacter_C : public ALongChatCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	class ABP_LChatCharacter_C*                        AttachedCharacter;                                        // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     BoneName;                                                 // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CurBrinkMode;                                             // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LChatCharacter.BP_LChatCharacter_C");
		return ptr;
	}


	void DestroyAniminstance();
	void SetPhysicsRestTime();
	void GetPhysicsRestTime(int* Times);
	void SetCharacterTickableWhenPaused(bool TickableWhenPaused);
	void ResetFacial();
	void RefreshCharacter();
	void StopEyeBlink();
	void RequestOpenEye();
	void SetEyeHighlight(const struct FString& PoseName, float PoseRate);
	void GetFacialComponent(class UAriseCharacterFacialComponent** FacialComponent);
	void SetFaicalPose(const struct FString& EyePose, const struct FString& MouthPose, const struct FString& EyelidPose);
	void SetFaicalByDatabase(const struct FString& charId, const struct FString& FacialName, struct FString* EyePoseName, struct FString* MouthPoseName, struct FAchCharacterFacialPresetData* FacialDatabaseItem);
	void UpdateTransform(const struct FTransform& NewTransform, const struct FVector& Location, float Yaw);
	void AttachToCharacter(class ABP_LChatCharacter_C* ParentChara, const struct FString& BoneName);
	void SetEyeBlinkMode(const struct FString& BlinkMode);
	void UserConstructionScript();
	void OnForceTeleport_(bool bEnable);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LChatCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
