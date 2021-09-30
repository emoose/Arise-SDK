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

// BlueprintGeneratedClass BP_PF_ActionState_NPC_Walk.BP_PF_ActionState_NPC_Walk_C
// 0x0000 (0x0030 - 0x0030)
class UBP_PF_ActionState_NPC_Walk_C : public UBP_PF_ActionState_NPC_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PF_ActionState_NPC_Walk.BP_PF_ActionState_NPC_Walk_C");
		return ptr;
	}


	struct FPFActionStateTickResult K2_Tick(float DeltaSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
