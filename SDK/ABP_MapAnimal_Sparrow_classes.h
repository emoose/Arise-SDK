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

// AnimBlueprintGeneratedClass ABP_MapAnimal_Sparrow.ABP_MapAnimal_Sparrow_C
// 0x02E0 (0x0770 - 0x0490)
class UABP_MapAnimal_Sparrow_C : public UMapAnimalAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_129D01C84611E2E8BCDAC1ABAFAC71DC;      // 0x0498(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_79DA9BFF473CD66249A9439964E9DC41;// 0x04E0(0x0290)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MapAnimal_Sparrow.ABP_MapAnimal_Sparrow_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapAnimal_Sparrow_ASAnimGraphNode_StateMachine_79DA9BFF473CD66249A9439964E9DC41();
	void ReceiveStateChange(const struct FString& PreviousStateName, const struct FString& NextStateName);
	void ExecuteUbergraph_ABP_MapAnimal_Sparrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
