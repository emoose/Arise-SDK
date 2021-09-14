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

// BlueprintGeneratedClass BTD_PF_NPC_Action_Walk_PerformWaypointAction.BTD_PF_NPC_Action_Walk_PerformWaypointAction_C
// 0x0168 (0x0208 - 0x00A0)
class UBTD_PF_NPC_Action_Walk_PerformWaypointAction_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      BKS_WaypointAction;                                       // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_WaypointWaitParam;                                    // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_ActionKey;                                            // 0x00F0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_WaypointTurn;                                         // 0x0118(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_WaypointLook;                                         // 0x0140(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_Effect;                                               // 0x0168(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_EffectSocket;                                         // 0x0190(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_ScenarioFlagName;                                     // 0x01B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BKS_ScenarioFlagValue;                                    // 0x01E0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_PF_NPC_Action_Walk_PerformWaypointAction.BTD_PF_NPC_Action_Walk_PerformWaypointAction_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
