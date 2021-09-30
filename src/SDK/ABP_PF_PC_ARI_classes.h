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

// AnimBlueprintGeneratedClass ABP_PF_PC_ARI.ABP_PF_PC_ARI_C
// 0x0520 (0x0AC0 - 0x05A0)
class UABP_PF_PC_ARI_C : public UPFPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (Transient, DuplicateTransient)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_4EDFB7E7489A784B9604C1B5AE6B98BD;// 0x05A8(0x0290)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_147DF36C4B866671B306A0BD3161FCAE;// 0x0838(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5F1CAC004D87A81530D9D391C1008B02;// 0x0950(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_Root_FC0174BE4B8AC7853F2102BD3E13F4BC;      // 0x0A78(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PF_PC_ARI.ABP_PF_PC_ARI_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PF_PC_ARI_AnimGraphNode_ApplyAdditive_147DF36C4B866671B306A0BD3161FCAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PF_PC_ARI_AnimGraphNode_BlendSpacePlayer_5F1CAC004D87A81530D9D391C1008B02();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PF_PC_ARI_ASAnimGraphNode_StateMachine_4EDFB7E7489A784B9604C1B5AE6B98BD();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_PF_PC_ARI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
