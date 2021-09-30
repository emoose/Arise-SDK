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

// BlueprintGeneratedClass BP_MGC_TSK_BoostAttackDown.BP_MGC_TSK_BoostAttackDown_C
// 0x0008 (0x0048 - 0x0040)
class UBP_MGC_TSK_BoostAttackDown_C : public UBtlMagicTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MGC_TSK_BoostAttackDown.BP_MGC_TSK_BoostAttackDown_C");
		return ptr;
	}


	struct FString Received_GetTaskName();
	void Received_Begin();
	void ExecuteUbergraph_BP_MGC_TSK_BoostAttackDown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
