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

// AnimBlueprintGeneratedClass ESAD_ABP_PF_EnSym_WOL_000.ABP_PF_EnSym_WOL_000_C
// 0x02E0 (0x0850 - 0x0570)
class UABP_PF_EnSym_WOL_000_C : public UPFEnSymAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3BEBCEF7455AA935C6E48BB218AA3CA9;      // 0x0578(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_8BF6E116476A5516285A4ABEAD43EFFB;// 0x05C0(0x0290)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ESAD_ABP_PF_EnSym_WOL_000.ABP_PF_EnSym_WOL_000_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_PF_EnSym_WOL_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
