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

// AnimBlueprintGeneratedClass ABP_PF_NPC_NFY_000.ABP_PF_NPC_NFY_000_C
// 0x0390 (0x0980 - 0x05F0)
class UABP_PF_NPC_NFY_000_C : public UPFNpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1B2DE77C4E2CD75D74C3B79BAA0D4EFA;      // 0x05F8(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_CDB365B3432CAA669D4C11BFB89219FD;// 0x0640(0x0290)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_977D763E4AE8511274BF67A61307D1BA;// 0x08D0(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PF_NPC_NFY_000.ABP_PF_NPC_NFY_000_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PF_NPC_NFY_000_ASAnimGraphNode_StateMachine_CDB365B3432CAA669D4C11BFB89219FD();
	void ExecuteUbergraph_ABP_PF_NPC_NFY_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
