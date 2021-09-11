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

// BlueprintGeneratedClass BP_PF_ActionState_EnSym_Wandering.BP_PF_ActionState_EnSym_Wandering_C
// 0x0008 (0x0070 - 0x0068)
class UBP_PF_ActionState_EnSym_Wandering_C : public UBP_PF_ActionState_EnSym_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ActionState_EnSym_Wandering.BP_PF_ActionState_EnSym_Wandering_C");
		return ptr;
	}


	struct FPFActionStateTickResult K2_Tick(float DeltaSeconds);
	void K2_Begin(const struct FName& PrevState);
	void ExecuteUbergraph_BP_PF_ActionState_EnSym_Wandering(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
