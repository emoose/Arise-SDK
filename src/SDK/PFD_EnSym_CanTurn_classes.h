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

// BlueprintGeneratedClass PFD_EnSym_CanTurn.PFD_EnSym_CanTurn_C
// 0x0001 (0x00A1 - 0x00A0)
class UPFD_EnSym_CanTurn_C : public UBTDecorator_BlueprintBase
{
public:
	bool                                               bUseMovePoint;                                            // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFD_EnSym_CanTurn.PFD_EnSym_CanTurn_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
