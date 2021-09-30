#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestItemQuery
struct UBP_BtlAIFunctionLibrary_C_SetBBRequestItemQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlActionQuery*                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestItemQuery
struct UBP_BtlAIFunctionLibrary_C_GetBBRequestItemQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlActionQuery*                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBIdlePoint
struct UBP_BtlAIFunctionLibrary_C_SetBBIdlePoint_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBIdlePoint
struct UBP_BtlAIFunctionLibrary_C_GetBBIdlePoint_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.ChangeBehaviorTree
struct UBP_BtlAIFunctionLibrary_C_ChangeBehaviorTree_Params
{
	struct FName                                       UnitID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               NewBehavior;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBDetectTarget
struct UBP_BtlAIFunctionLibrary_C_SetBBDetectTarget_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBDetectTarget
struct UBP_BtlAIFunctionLibrary_C_GetBBDetectTarget_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBNotifyData
struct UBP_BtlAIFunctionLibrary_C_SetBBNotifyData_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlAIBlackboardNotifyData*                  Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBNotifyData
struct UBP_BtlAIFunctionLibrary_C_GetBBNotifyData_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlAIBlackboardNotifyData*                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRandom
struct UBP_BtlAIFunctionLibrary_C_SetBBRandom_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRandom
struct UBP_BtlAIFunctionLibrary_C_GetBBRandom_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBArtsTarget
struct UBP_BtlAIFunctionLibrary_C_SetBBArtsTarget_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBArtsTarget
struct UBP_BtlAIFunctionLibrary_C_GetBBArtsTarget_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestGuardEndQuery
struct UBP_BtlAIFunctionLibrary_C_SetBBRequestGuardEndQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlActionQuery*                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestGuardEndQuery
struct UBP_BtlAIFunctionLibrary_C_GetBBRequestGuardEndQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlActionQuery*                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestGuardStartQuery
struct UBP_BtlAIFunctionLibrary_C_SetBBRequestGuardStartQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlActionQuery*                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestGuardStartQuery
struct UBP_BtlAIFunctionLibrary_C_GetBBRequestGuardStartQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlActionQuery*                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestStepQuery
struct UBP_BtlAIFunctionLibrary_C_SetBBRequestStepQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlActionQuery*                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestStepQuery
struct UBP_BtlAIFunctionLibrary_C_GetBBRequestStepQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlActionQuery*                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestTurnQuery
struct UBP_BtlAIFunctionLibrary_C_SetBBRequestTurnQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlActionQuery*                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestTurnQuery
struct UBP_BtlAIFunctionLibrary_C_GetBBRequestTurnQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlActionQuery*                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestMoveQuery
struct UBP_BtlAIFunctionLibrary_C_SetBBRequestMoveQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlActionQuery*                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestMoveQuery
struct UBP_BtlAIFunctionLibrary_C_GetBBRequestMoveQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlActionQuery*                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestArtsQuery
struct UBP_BtlAIFunctionLibrary_C_SetBBRequestArtsQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlActionQuery*                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestArtsQuery
struct UBP_BtlAIFunctionLibrary_C_GetBBRequestArtsQuery_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlActionQuery*                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBRequestArts
struct UBP_BtlAIFunctionLibrary_C_SetBBRequestArts_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBRequestArts
struct UBP_BtlAIFunctionLibrary_C_GetBBRequestArts_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBTargetGoal
struct UBP_BtlAIFunctionLibrary_C_SetBBTargetGoal_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBTargetGoal
struct UBP_BtlAIFunctionLibrary_C_GetBBTargetGoal_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBEQSStatusMovePoint
struct UBP_BtlAIFunctionLibrary_C_SetBBEQSStatusMovePoint_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBEQSStatusMovePoint
struct UBP_BtlAIFunctionLibrary_C_GetBBEQSStatusMovePoint_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBPhase
struct UBP_BtlAIFunctionLibrary_C_SetBBPhase_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBPhase
struct UBP_BtlAIFunctionLibrary_C_GetBBPhase_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.SetBBMovePoint
struct UBP_BtlAIFunctionLibrary_C_SetBBMovePoint_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetBBMovePoint
struct UBP_BtlAIFunctionLibrary_C_GetBBMovePoint_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.GetValueAsActor
struct UBP_BtlAIFunctionLibrary_C_GetValueAsActor_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BBKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C.AIMoveToPath
struct UBP_BtlAIFunctionLibrary_C_AIMoveToPath_Params
{
	struct FVector                                     MovePoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ABtlCharacterBase*                           AIPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoveEndRange;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               NoPath;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
