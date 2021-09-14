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

// BlueprintGeneratedClass BP_MGC_TSK_AttackCapsule.BP_MGC_TSK_AttackCapsule_C
// 0x0000 (0x0110 - 0x0110)
class UBP_MGC_TSK_AttackCapsule_C : public UBtlMagicTask_AttackCapsuleCollisionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_AttackCapsule.BP_MGC_TSK_AttackCapsule_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
