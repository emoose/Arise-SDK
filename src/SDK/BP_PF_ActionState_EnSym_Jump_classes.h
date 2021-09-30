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

// BlueprintGeneratedClass BP_PF_ActionState_EnSym_Jump.BP_PF_ActionState_EnSym_Jump_C
// 0x0000 (0x0068 - 0x0068)
class UBP_PF_ActionState_EnSym_Jump_C : public UBP_PF_ActionState_EnSym_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ActionState_EnSym_Jump.BP_PF_ActionState_EnSym_Jump_C");
		return ptr;
	}


	struct FPFActionStateTickResult K2_Tick(float DeltaSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
