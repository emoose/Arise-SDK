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

// BlueprintGeneratedClass BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BtlAIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlAIFunctionLibrary.BP_BtlAIFunctionLibrary_C");
		return ptr;
	}


	void STATIC_SetBBRequestItemQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext);
	void STATIC_GetBBRequestItemQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result);
	void STATIC_SetBBIdlePoint(class UBlackboardComponent* Blackboard, const struct FVector& Value, class UObject* __WorldContext);
	void STATIC_GetBBIdlePoint(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, struct FVector* Result);
	void STATIC_ChangeBehaviorTree(const struct FName& UnitID, class UBehaviorTree* NewBehavior, class UObject* __WorldContext);
	void STATIC_SetBBDetectTarget(class UBlackboardComponent* Blackboard, class ABtlCharacterBase* Value, class UObject* __WorldContext);
	void STATIC_GetBBDetectTarget(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class ABtlCharacterBase** Result);
	void STATIC_SetBBNotifyData(class UBlackboardComponent* Blackboard, class UBtlAIBlackboardNotifyData* Value, class UObject* __WorldContext);
	void STATIC_GetBBNotifyData(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlAIBlackboardNotifyData** Result);
	void STATIC_SetBBRandom(class UBlackboardComponent* Blackboard, int Value, class UObject* __WorldContext);
	void STATIC_GetBBRandom(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, int* Result);
	void STATIC_SetBBArtsTarget(class UBlackboardComponent* Blackboard, class ABtlCharacterBase* Value, class UObject* __WorldContext);
	void STATIC_GetBBArtsTarget(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class ABtlCharacterBase** Result);
	void STATIC_SetBBRequestGuardEndQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext);
	void STATIC_GetBBRequestGuardEndQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result);
	void STATIC_SetBBRequestGuardStartQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext);
	void STATIC_GetBBRequestGuardStartQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result);
	void STATIC_SetBBRequestStepQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext);
	void STATIC_GetBBRequestStepQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result);
	void STATIC_SetBBRequestTurnQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext);
	void STATIC_GetBBRequestTurnQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result);
	void STATIC_SetBBRequestMoveQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext);
	void STATIC_GetBBRequestMoveQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result);
	void STATIC_SetBBRequestArtsQuery(class UBlackboardComponent* Blackboard, class UBtlActionQuery* Value, class UObject* __WorldContext);
	void STATIC_GetBBRequestArtsQuery(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, class UBtlActionQuery** Result);
	void STATIC_SetBBRequestArts(class UBlackboardComponent* Blackboard, const struct FName& Value, class UObject* __WorldContext);
	void STATIC_GetBBRequestArts(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, struct FName* Result);
	void STATIC_SetBBTargetGoal(class UBlackboardComponent* Blackboard, const struct FVector& Value, class UObject* __WorldContext);
	void STATIC_GetBBTargetGoal(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, struct FVector* Result);
	void STATIC_SetBBEQSStatusMovePoint(class UBlackboardComponent* Blackboard, TEnumAsByte<EEnvQueryStatus> Value, class UObject* __WorldContext);
	void STATIC_GetBBEQSStatusMovePoint(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, TEnumAsByte<EEnvQueryStatus>* Result);
	void STATIC_SetBBPhase(class UBlackboardComponent* Blackboard, int Value, class UObject* __WorldContext);
	void STATIC_GetBBPhase(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, int* Result);
	void STATIC_SetBBMovePoint(class UBlackboardComponent* Blackboard, const struct FVector& Value, class UObject* __WorldContext);
	void STATIC_GetBBMovePoint(class UBlackboardComponent* Blackboard, class UObject* __WorldContext, struct FVector* Result);
	void STATIC_GetValueAsActor(class UBlackboardComponent* Blackboard, const struct FName& BBKey, class UObject* __WorldContext, class AActor** Actor);
	void STATIC_AIMoveToPath(const struct FVector& MovePoint, class ABtlCharacterBase* AIPawn, class AAIController* AIController, float MoveEndRange, class UObject* __WorldContext, bool* Result, bool* NoPath);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
