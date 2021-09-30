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

// AnimBlueprintGeneratedClass ABP_PF_OWLS_FRU.ABP_PF_OWLS_FRU_C
// 0x02E0 (0x0840 - 0x0560)
class UABP_PF_OWLS_FRU_C : public UAriseAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4BCA5C084626C50A3017B084DAE465EF;      // 0x0568(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_2768BB894306404D349A32B84D6A502E;// 0x05B0(0x0290)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PF_OWLS_FRU.ABP_PF_OWLS_FRU_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_PF_OWLS_FRU(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
