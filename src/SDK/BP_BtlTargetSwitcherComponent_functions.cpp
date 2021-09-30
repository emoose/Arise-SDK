
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

// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.CanTargetClearOnStateChanged
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::CanTargetClearOnStateChanged(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.CanTargetClearOnStateChanged");

	UBP_BtlTargetSwitcherComponent_C_CanTargetClearOnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.QuickTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlTargetSwitcherComponent_C::QuickTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.QuickTarget");

	UBP_BtlTargetSwitcherComponent_C_QuickTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.DistanceOrderPredicate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Lhs                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Rhs                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::DistanceOrderPredicate(class ABtlCharacterBase* Lhs, class ABtlCharacterBase* Rhs, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.DistanceOrderPredicate");

	UBP_BtlTargetSwitcherComponent_C_DistanceOrderPredicate_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetDistanceOrderTargets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class ABtlCharacterBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ABtlCharacterBase*> UBP_BtlTargetSwitcherComponent_C::GetDistanceOrderTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetDistanceOrderTargets");

	UBP_BtlTargetSwitcherComponent_C_GetDistanceOrderTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetFirstTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABtlCharacterBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABtlCharacterBase* UBP_BtlTargetSwitcherComponent_C::GetFirstTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetFirstTarget");

	UBP_BtlTargetSwitcherComponent_C_GetFirstTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.CanChangeTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlTargetSwitcherComponent_C::CanChangeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.CanChangeTarget");

	UBP_BtlTargetSwitcherComponent_C_CanChangeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetSelectableTargets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           UseCache                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UBtlTargetCursorComponent*> SelectableTargets              (Parm, OutParm, ZeroConstructor)

void UBP_BtlTargetSwitcherComponent_C::GetSelectableTargets(bool UseCache, int* TargetIndex, TArray<class UBtlTargetCursorComponent*>* SelectableTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetSelectableTargets");

	UBP_BtlTargetSwitcherComponent_C_GetSelectableTargets_Params params;
	params.UseCache = UseCache;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetIndex != nullptr)
		*TargetIndex = params.TargetIndex;
	if (SelectableTargets != nullptr)
		*SelectableTargets = params.SelectableTargets;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetTargetComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IgnoreTemporary                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlTargetCursorComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBtlTargetCursorComponent* UBP_BtlTargetSwitcherComponent_C::GetTargetComponent(bool IgnoreTemporary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetTargetComponent");

	UBP_BtlTargetSwitcherComponent_C_GetTargetComponent_Params params;
	params.IgnoreTemporary = IgnoreTemporary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.SetTargetCompoent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlTargetCursorComponent* TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Temporary                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::SetTargetCompoent(class UBtlTargetCursorComponent* TargetComponent, bool Temporary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.SetTargetCompoent");

	UBP_BtlTargetSwitcherComponent_C_SetTargetCompoent_Params params;
	params.TargetComponent = TargetComponent;
	params.Temporary = Temporary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetRelativeTargetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Vector                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::GetRelativeTargetIndex(int Vector, int* TargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetRelativeTargetIndex");

	UBP_BtlTargetSwitcherComponent_C_GetRelativeTargetIndex_Params params;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetIndex != nullptr)
		*TargetIndex = params.TargetIndex;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.UpdateMagicTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlTargetSwitcherComponent_C::UpdateMagicTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.UpdateMagicTarget");

	UBP_BtlTargetSwitcherComponent_C_UpdateMagicTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetMagicTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ArtsIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::GetMagicTarget(int ArtsIndex, class ABtlCharacterBase** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.GetMagicTarget");

	UBP_BtlTargetSwitcherComponent_C_GetMagicTarget_Params params;
	params.ArtsIndex = ArtsIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.CanAssistable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EBattleActionState             NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlTargetSwitcherComponent_C::CanAssistable(EBattleActionState NowState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.CanAssistable");

	UBP_BtlTargetSwitcherComponent_C_CanAssistable_Params params;
	params.NowState = NowState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnSwappedParty
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlTargetSwitcherComponent_C::OnSwappedParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnSwappedParty");

	UBP_BtlTargetSwitcherComponent_C_OnSwappedParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnDeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BtlTargetSwitcherComponent_C::OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnDeadCharacter");

	UBP_BtlTargetSwitcherComponent_C_OnDeadCharacter_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnDeadPartyUnit
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlTargetSwitcherComponent_C::OnDeadPartyUnit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnDeadPartyUnit");

	UBP_BtlTargetSwitcherComponent_C_OnDeadPartyUnit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnDeadEnemyUnit
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlTargetSwitcherComponent_C::OnDeadEnemyUnit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnDeadEnemyUnit");

	UBP_BtlTargetSwitcherComponent_C_OnDeadEnemyUnit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnRootMagicSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BtlTargetSwitcherComponent_C::OnRootMagicSpawned(const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnRootMagicSpawned");

	UBP_BtlTargetSwitcherComponent_C_OnRootMagicSpawned_Params params;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleActionState             NowState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleActionState             PreState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::OnStateChanged(EBattleActionState NowState, EBattleActionState PreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnStateChanged");

	UBP_BtlTargetSwitcherComponent_C_OnStateChanged_Params params;
	params.NowState = NowState;
	params.PreState = PreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnBeginMagicState
// (BlueprintCallable, BlueprintEvent)

void UBP_BtlTargetSwitcherComponent_C::OnBeginMagicState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnBeginMagicState");

	UBP_BtlTargetSwitcherComponent_C_OnBeginMagicState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnInitializeComponent
// (Event, Public, BlueprintEvent)

void UBP_BtlTargetSwitcherComponent_C::OnInitializeComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnInitializeComponent");

	UBP_BtlTargetSwitcherComponent_C_OnInitializeComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnBreakCore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::OnBreakCore(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, class UBtlDamageSphereComponent* DmgCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnBreakCore");

	UBP_BtlTargetSwitcherComponent_C_OnBreakCore_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.DmgCollision = DmgCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.ChangeRelativeTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Vector                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::ChangeRelativeTarget(int Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.ChangeRelativeTarget");

	UBP_BtlTargetSwitcherComponent_C_ChangeRelativeTarget_Params params;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnTargetSelectionPauseChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Paused                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::OnTargetSelectionPauseChanged(bool Paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnTargetSelectionPauseChanged");

	UBP_BtlTargetSwitcherComponent_C_OnTargetSelectionPauseChanged_Params params;
	params.Paused = Paused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnTargetLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::OnTargetLost(class ABtlCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnTargetLost");

	UBP_BtlTargetSwitcherComponent_C_OnTargetLost_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnCursorTargetableChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlTargetCursorComponent* CursorComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::OnCursorTargetableChanged(class UBtlTargetCursorComponent* CursorComponent, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnCursorTargetableChanged");

	UBP_BtlTargetSwitcherComponent_C_OnCursorTargetableChanged_Params params;
	params.CursorComponent = CursorComponent;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnTryRefresh
// (Event, Protected, BlueprintEvent)
// Parameters:
// EBtlBitFlagCategory            Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::OnTryRefresh(EBtlBitFlagCategory Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnTryRefresh");

	UBP_BtlTargetSwitcherComponent_C_OnTryRefresh_Params params;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnFakeDeadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       FakeDeadUnit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::OnFakeDeadEvent(class ABtlCharacterBase* FakeDeadUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.OnFakeDeadEvent");

	UBP_BtlTargetSwitcherComponent_C_OnFakeDeadEvent_Params params;
	params.FakeDeadUnit = FakeDeadUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.ExecuteUbergraph_BP_BtlTargetSwitcherComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlTargetSwitcherComponent_C::ExecuteUbergraph_BP_BtlTargetSwitcherComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlTargetSwitcherComponent.BP_BtlTargetSwitcherComponent_C.ExecuteUbergraph_BP_BtlTargetSwitcherComponent");

	UBP_BtlTargetSwitcherComponent_C_ExecuteUbergraph_BP_BtlTargetSwitcherComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
