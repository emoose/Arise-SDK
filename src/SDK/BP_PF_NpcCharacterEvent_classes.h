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

// BlueprintGeneratedClass BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C
// 0x002B (0x0D9C - 0x0D71)
class ABP_PF_NpcCharacterEvent_C : public ABP_PF_NpcCharacterStandNoCollision_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D71(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D78(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EDE_PF_NpcEventCategory>               CaptionCategory;                                          // 0x0D80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D81(0x0003) MISSED OFFSET
	int                                                CaptionNumber;                                            // 0x0D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              LookAtAimTargets;                                         // 0x0D88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                LookAtAimCurrentIndex;                                    // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C");
		return ptr;
	}


	void TermLookAtAim();
	class AActor* SetAutoLookAtAimFromLocation(const struct FVector& Location);
	class AActor* GetAutoLookAtAim();
	int GetLookAtAimNum();
	class AActor* GetLookAtAimTarget(int Index);
	void InitLookAtAim();
	class AActor* SetAutoLookAtAimFromYawPitch(float Yaw, float Pitch, float Distance);
	void UserConstructionScript();
	void ReceiveBuildCharacterInitAnim();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_PF_NpcCharacterEvent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
