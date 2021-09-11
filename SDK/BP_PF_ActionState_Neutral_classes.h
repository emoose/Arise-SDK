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

// BlueprintGeneratedClass BP_PF_ActionState_Neutral.BP_PF_ActionState_Neutral_C
// 0x0018 (0x0048 - 0x0030)
class UBP_PF_ActionState_Neutral_C : public UPFActionStateBlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (Transient, DuplicateTransient)
	struct FString                                     CurrentAnimation;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ActionState_Neutral.BP_PF_ActionState_Neutral_C");
		return ptr;
	}


	void SetEnableIK(bool bEnable);
	struct FPFActionStateTickResult K2_Tick(float DeltaSeconds);
	void K2_Begin(const struct FName& PrevState);
	void K2_End(const struct FName& NextState);
	void CallFreeMotion();
	void ExecuteUbergraph_BP_PF_ActionState_Neutral(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
