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

// AnimBlueprintGeneratedClass AB_BTL_WOL_000.AB_BTL_WOL_000_C
// 0x02E0 (0x0980 - 0x06A0)
class UAB_BTL_WOL_000_C : public UBtlAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_97945EAF4E54DFCBD4BAA29F8455DC16;      // 0x06A8(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_6A2D887A4A68D6A17617D6858EDC630F;// 0x06F0(0x0290)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_BTL_WOL_000.AB_BTL_WOL_000_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BTL_WOL_000_ASAnimGraphNode_StateMachine_6A2D887A4A68D6A17617D6858EDC630F();
	void ExecuteUbergraph_AB_BTL_WOL_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
