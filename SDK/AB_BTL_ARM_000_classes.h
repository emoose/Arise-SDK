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

// AnimBlueprintGeneratedClass AB_BTL_ARM_000.AB_BTL_ARM_000_C
// 0x02E0 (0x0980 - 0x06A0)
class UAB_BTL_ARM_000_C : public UBtlAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ED4A1DC34C0D9C24D89198847A0EA5D5;      // 0x06A8(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_1AA81C96423FEC96A68F3D9547503074;// 0x06F0(0x0290)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_BTL_ARM_000.AB_BTL_ARM_000_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BTL_ARM_000_ASAnimGraphNode_StateMachine_1AA81C96423FEC96A68F3D9547503074();
	void ExecuteUbergraph_AB_BTL_ARM_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
