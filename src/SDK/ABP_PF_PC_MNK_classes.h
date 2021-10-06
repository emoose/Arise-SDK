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

// AnimBlueprintGeneratedClass ABP_PF_PC_MNK.ABP_PF_PC_MNK_C
// 0x0524 (0x0AC4 - 0x05A0)
class UABP_PF_PC_MNK_C : public UPFPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9E7DEF9D4F34B91E32B0EDB340D80450;      // 0x05A8(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_E1D3F9B542CBFFF3BD2F30A784C2B1E3;// 0x05F0(0x0290)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8C260918465606DEFCE107A8435E0537;// 0x0880(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E45B446B49D549A3751AEEA5A6C96430;// 0x0998(0x0128)
	float                                              WarpingValue;                                             // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PF_PC_MNK.ABP_PF_PC_MNK_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PF_PC_MNK_ASAnimGraphNode_StateMachine_E1D3F9B542CBFFF3BD2F30A784C2B1E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PF_PC_MNK_AnimGraphNode_ApplyAdditive_8C260918465606DEFCE107A8435E0537();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PF_PC_MNK_AnimGraphNode_BlendSpacePlayer_E45B446B49D549A3751AEEA5A6C96430();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_PF_PC_MNK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
