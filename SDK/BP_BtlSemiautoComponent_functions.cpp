
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

// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.CanMysticArts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlSemiautoComponent_C::CanMysticArts(const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.CanMysticArts");

	UBP_BtlSemiautoComponent_C_CanMysticArts_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.CanImmediatelyArts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABtlCharacterBase*       TargetUnit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlSemiautoPhase              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBtlSemiautoPhase UBP_BtlSemiautoComponent_C::CanImmediatelyArts(class ABtlCharacterBase* TargetUnit, struct FBtlArtsData* ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.CanImmediatelyArts");

	UBP_BtlSemiautoComponent_C_CanImmediatelyArts_Params params;
	params.TargetUnit = TargetUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArtsData != nullptr)
		*ArtsData = params.ArtsData;

	return params.ReturnValue;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.IsOperationSemiauto
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlSemiautoComponent_C::IsOperationSemiauto()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.IsOperationSemiauto");

	UBP_BtlSemiautoComponent_C_IsOperationSemiauto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GetNextPhaseForMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsAttackState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAirArts                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAttackArts                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsExternalOrder                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlResultArtsRange     ArtsRange                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EBtlSemiautoPhase              NextPhase                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlSemiautoComponent_C::GetNextPhaseForMove(bool IsAttackState, bool IsAirArts, bool IsAttackArts, bool IsExternalOrder, const struct FBtlResultArtsRange& ArtsRange, EBtlSemiautoPhase* NextPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GetNextPhaseForMove");

	UBP_BtlSemiautoComponent_C_GetNextPhaseForMove_Params params;
	params.IsAttackState = IsAttackState;
	params.IsAirArts = IsAirArts;
	params.IsAttackArts = IsAttackArts;
	params.IsExternalOrder = IsExternalOrder;
	params.ArtsRange = ArtsRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextPhase != nullptr)
		*NextPhase = params.NextPhase;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayMystic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PlayMystic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayMystic");

	UBP_BtlSemiautoComponent_C_PlayMystic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseComboEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseComboEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseComboEnd");

	UBP_BtlSemiautoComponent_C_PhaseComboEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseMove");

	UBP_BtlSemiautoComponent_C_PhaseMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseMoveToSafePlace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseMoveToSafePlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseMoveToSafePlace");

	UBP_BtlSemiautoComponent_C_PhaseMoveToSafePlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseMoveAwayFromTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseMoveAwayFromTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseMoveAwayFromTarget");

	UBP_BtlSemiautoComponent_C_PhaseMoveAwayFromTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseJumpToPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseJumpToPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseJumpToPoint");

	UBP_BtlSemiautoComponent_C_PhaseJumpToPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseJump
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseJump");

	UBP_BtlSemiautoComponent_C_PhaseJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GuardEndRequest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Wait                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlSemiautoComponent_C::GuardEndRequest(bool* Wait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GuardEndRequest");

	UBP_BtlSemiautoComponent_C_GuardEndRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wait != nullptr)
		*Wait = params.Wait;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PauseAI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlSemiautoComponent_C::PauseAI(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PauseAI");

	UBP_BtlSemiautoComponent_C_PauseAI_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseComboStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseComboStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseComboStart");

	UBP_BtlSemiautoComponent_C_PhaseComboStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayComboStart
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlSemiautoComponent_C::PlayComboStart(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayComboStart");

	UBP_BtlSemiautoComponent_C_PlayComboStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseWaitNextCombo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseWaitNextCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseWaitNextCombo");

	UBP_BtlSemiautoComponent_C_PhaseWaitNextCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseAutoStep
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseAutoStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseAutoStep");

	UBP_BtlSemiautoComponent_C_PhaseAutoStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseAutoGuard
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseAutoGuard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseAutoGuard");

	UBP_BtlSemiautoComponent_C_PhaseAutoGuard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseArtsMagic
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseArtsMagic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseArtsMagic");

	UBP_BtlSemiautoComponent_C_PhaseArtsMagic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseStep
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseStep");

	UBP_BtlSemiautoComponent_C_PhaseStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseIdle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PhaseIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PhaseIdle");

	UBP_BtlSemiautoComponent_C_PhaseIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GetActionTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IgnoreTemporary                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlSemiautoComponent_C::GetActionTarget(bool IgnoreTemporary, class ABtlCharacterBase** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GetActionTarget");

	UBP_BtlSemiautoComponent_C_GetActionTarget_Params params;
	params.IgnoreTemporary = IgnoreTemporary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayAutoStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PlayAutoStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayAutoStep");

	UBP_BtlSemiautoComponent_C_PlayAutoStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayAutoGuard
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PlayAutoGuard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayAutoGuard");

	UBP_BtlSemiautoComponent_C_PlayAutoGuard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayArtsMagic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PlayArtsMagic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayArtsMagic");

	UBP_BtlSemiautoComponent_C_PlayArtsMagic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GetOwnerToTargetYaw
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlSemiautoComponent_C::GetOwnerToTargetYaw(float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.GetOwnerToTargetYaw");

	UBP_BtlSemiautoComponent_C_GetOwnerToTargetYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayStepToTurnTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::PlayStepToTurnTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.PlayStepToTurnTarget");

	UBP_BtlSemiautoComponent_C_PlayStepToTurnTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.BtlChangeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleState                   NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleState                   PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlSemiautoComponent_C::BtlChangeEvent(EBattleState NowState, EBattleState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.BtlChangeEvent");

	UBP_BtlSemiautoComponent_C_BtlChangeEvent_Params params;
	params.NowState = NowState;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlSemiautoComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ReceiveEndPlay");

	UBP_BtlSemiautoComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlSemiautoComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ReceiveTick");

	UBP_BtlSemiautoComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BtlSemiautoComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ReceiveBeginPlay");

	UBP_BtlSemiautoComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.AttackEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleActionState             NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            PreArts                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BtlSemiautoComponent_C::AttackEnd(class ABtlCharacterBase* SelfCharacter, EBattleActionState NowState, const struct FBtlArtsData& PreArts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.AttackEnd");

	UBP_BtlSemiautoComponent_C_AttackEnd_Params params;
	params.SelfCharacter = SelfCharacter;
	params.NowState = NowState;
	params.PreArts = PreArts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ExecuteUbergraph_BP_BtlSemiautoComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlSemiautoComponent_C::ExecuteUbergraph_BP_BtlSemiautoComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlSemiautoComponent.BP_BtlSemiautoComponent_C.ExecuteUbergraph_BP_BtlSemiautoComponent");

	UBP_BtlSemiautoComponent_C_ExecuteUbergraph_BP_BtlSemiautoComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
