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

// BlueprintGeneratedClass PFAIC_EnSym_Common.PFAIC_EnSym_Common_C
// 0x0019 (0x04C9 - 0x04B0)
class APFAIC_EnSym_Common_C : public APFEnSym_AIController
{
public:
	class UBehaviorTree*                               BTAsset;                                                  // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlackboardComponent*                        BBComp;                                                   // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBehaviorTreeComponent*                      BehaviorComponent;                                        // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<EPFEN_EnSym_State>                     State;                                                    // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFAIC_EnSym_Common.PFAIC_EnSym_Common_C");
		return ptr;
	}


	void SetBehavior(const struct FGameplayTag& Tag, class UBehaviorTree* BehaviorAsset);
	void Terminate();
	void StartAI();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
