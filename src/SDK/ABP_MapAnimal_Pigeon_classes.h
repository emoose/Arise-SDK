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

// AnimBlueprintGeneratedClass ABP_MapAnimal_Pigeon.ABP_MapAnimal_Pigeon_C
// 0x02E0 (0x0770 - 0x0490)
class UABP_MapAnimal_Pigeon_C : public UMapAnimalAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_98A547E445E4A0677D359486E2D518C2;      // 0x0498(0x0048)
	struct FASAnimNode_StateMachine                    ASAnimGraphNode_StateMachine_5AFD197B43343497F3D401993986967C;// 0x04E0(0x0290)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MapAnimal_Pigeon.ABP_MapAnimal_Pigeon_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapAnimal_Pigeon_ASAnimGraphNode_StateMachine_5AFD197B43343497F3D401993986967C();
	void ReceiveStateChange(const struct FString& PreviousStateName, const struct FString& NextStateName);
	void ExecuteUbergraph_ABP_MapAnimal_Pigeon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
