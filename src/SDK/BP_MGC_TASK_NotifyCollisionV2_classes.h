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

// BlueprintGeneratedClass BP_MGC_TASK_NotifyCollisionV2.BP_MGC_TASK_NotifyCollisionV2_C
// 0x0000 (0x00B8 - 0x00B8)
class UBP_MGC_TASK_NotifyCollisionV2_C : public UBtlMagicTask_NotifyCollisionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TASK_NotifyCollisionV2.BP_MGC_TASK_NotifyCollisionV2_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
