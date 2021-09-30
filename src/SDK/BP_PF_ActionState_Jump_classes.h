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

// BlueprintGeneratedClass BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C
// 0x0010 (0x004C - 0x003C)
class UBP_PF_ActionState_Jump_C : public UBP_PF_ActionState_Floating_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)
	float                                              Time;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ActionState_Jump.BP_PF_ActionState_Jump_C");
		return ptr;
	}


	void CheckJumpState(bool* ToDash, bool* ToRun);
	bool NewFunction_1(class ACharacter* self2, float VelocityLength);
	struct FPFActionStateTickResult K2_Tick(float DeltaSeconds);
	void K2_Begin(const struct FName& PrevState);
	void ExecuteUbergraph_BP_PF_ActionState_Jump(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
