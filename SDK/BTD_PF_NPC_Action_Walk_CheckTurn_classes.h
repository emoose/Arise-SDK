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

// BlueprintGeneratedClass BTD_PF_NPC_Action_Walk_CheckTurn.BTD_PF_NPC_Action_Walk_CheckTurn_C
// 0x002C (0x00CC - 0x00A0)
class UBTD_PF_NPC_Action_Walk_CheckTurn_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      BKS_WaypointTurn;                                         // 0x00A0(0x0028) (Edit, BlueprintVisible)
	float                                              MinAngle;                                                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_PF_NPC_Action_Walk_CheckTurn.BTD_PF_NPC_Action_Walk_CheckTurn_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
