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

// AnimBlueprintGeneratedClass AB_BTL_ARI_000.AB_BTL_ARI_000_C
// 0x02E1 (0x0981 - 0x06A0)
class UAB_BTL_ARI_000_C : public UBtlAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (Transient, DuplicateTransient)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_F0335B6243A400999453A093C5340FDA;// 0x06A8(0x0290)
	struct FAnimNode_Root                              AnimGraphNode_Root_04AD5EE24DAC3DE70F4CAEACB2AF84DD;      // 0x0938(0x0048)
	bool                                               NewVar_1;                                                 // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_BTL_ARI_000.AB_BTL_ARI_000_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BTL_ARI_000_ASAnimGraphNode_StateMachine_F0335B6243A400999453A093C5340FDA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_BTL_ARI_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
