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

// AnimBlueprintGeneratedClass ABP_PF_NPC_NMY_000.ABP_PF_NPC_NMY_000_C
// 0x02E0 (0x08D0 - 0x05F0)
class UABP_PF_NPC_NMY_000_C : public UPFNpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_219327454666457D3D116082B289783E;      // 0x05F8(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_847D184A430399647B86949E8403A368;// 0x0640(0x0290)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PF_NPC_NMY_000.ABP_PF_NPC_NMY_000_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PF_NPC_NMY_000_ASAnimGraphNode_StateMachine_847D184A430399647B86949E8403A368();
	void ExecuteUbergraph_ABP_PF_NPC_NMY_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
