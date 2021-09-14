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

// AnimBlueprintGeneratedClass AB_BTL_INS_000.AB_BTL_INS_000_C
// 0x02E0 (0x0980 - 0x06A0)
class UAB_BTL_INS_000_C : public UBtlAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CC7DF81648D9F862B64D8682D9BA2D5A;      // 0x06A8(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_89E18EE64C73E355E20FB18A0BFEFFA3;// 0x06F0(0x0290)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_BTL_INS_000.AB_BTL_INS_000_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BTL_INS_000_ASAnimGraphNode_StateMachine_89E18EE64C73E355E20FB18A0BFEFFA3();
	void ExecuteUbergraph_AB_BTL_INS_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
