
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Forword                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Obstructed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_Move_C::CheckObstruction(const struct FVector& Location, const struct FVector& Forword, float DeltaSeconds, bool* Obstructed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.CheckObstruction");

	UBTT_PF_NPC_Action_Walk_Move_C_CheckObstruction_Params params;
	params.Location = Location;
	params.Forword = Forword;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Obstructed != nullptr)
		*Obstructed = params.Obstructed;
}


// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.SetRotationRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Forword                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPawnMovementComponent*  Movement                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_Move_C::SetRotationRate(const struct FVector& Location, const struct FVector& Forword, class UPawnMovementComponent* Movement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.SetRotationRate");

	UBTT_PF_NPC_Action_Walk_Move_C_SetRotationRate_Params params;
	params.Location = Location;
	params.Forword = Forword;
	params.Movement = Movement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.StopMovement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           MoveCompleted                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_Move_C::StopMovement(class AActor* Actor, const struct FScriptDelegate& Delegate, bool MoveCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.StopMovement");

	UBTT_PF_NPC_Action_Walk_Move_C_StopMovement_Params params;
	params.Actor = Actor;
	params.Delegate = Delegate;
	params.MoveCompleted = MoveCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_Move_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.ReceiveTickAI");

	UBTT_PF_NPC_Action_Walk_Move_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIRequestID            RequestID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_Move_C::CustomEvent_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.CustomEvent_1");

	UBTT_PF_NPC_Action_Walk_Move_C_CustomEvent_1_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_Move_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.ReceiveExecuteAI");

	UBTT_PF_NPC_Action_Walk_Move_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.ExecuteUbergraph_BTT_PF_NPC_Action_Walk_Move
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_PF_NPC_Action_Walk_Move_C::ExecuteUbergraph_BTT_PF_NPC_Action_Walk_Move(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_PF_NPC_Action_Walk_Move.BTT_PF_NPC_Action_Walk_Move_C.ExecuteUbergraph_BTT_PF_NPC_Action_Walk_Move");

	UBTT_PF_NPC_Action_Walk_Move_C_ExecuteUbergraph_BTT_PF_NPC_Action_Walk_Move_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
