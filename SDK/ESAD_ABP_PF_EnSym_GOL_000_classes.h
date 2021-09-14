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

// AnimBlueprintGeneratedClass ESAD_ABP_PF_EnSym_GOL_000.ABP_PF_EnSym_GOL_000_C
// 0x02E0 (0x0850 - 0x0570)
class UABP_PF_EnSym_GOL_000_C : public UPFEnSymAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_192C5BA54B3E1E571F042EAAF43135DA;      // 0x0578(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_8C561A0D4BFE9EB9FBC3E8B4A678B042;// 0x05C0(0x0290)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ESAD_ABP_PF_EnSym_GOL_000.ABP_PF_EnSym_GOL_000_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_PF_EnSym_GOL_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
