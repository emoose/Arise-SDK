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

// BlueprintGeneratedClass BTT_SetBehaviorAsset.BTT_SetBehaviorAsset_C
// 0x0018 (0x00D8 - 0x00C0)
class UBTT_SetBehaviorAsset_C : public UBTT_BtlBP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                injection_tag;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible)
	class UBehaviorTree*                               behavior_asset;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_SetBehaviorAsset.BTT_SetBehaviorAsset_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_SetBehaviorAsset(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
