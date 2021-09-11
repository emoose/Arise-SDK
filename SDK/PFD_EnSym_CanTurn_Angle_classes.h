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

// BlueprintGeneratedClass PFD_EnSym_CanTurn_Angle.PFD_EnSym_CanTurn_Angle_C
// 0x0008 (0x00A8 - 0x00A0)
class UPFD_EnSym_CanTurn_Angle_C : public UBTDecorator_BlueprintBase
{
public:
	bool                                               bUseMovePoint;                                            // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              TurnAngle;                                                // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PFD_EnSym_CanTurn_Angle.PFD_EnSym_CanTurn_Angle_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
