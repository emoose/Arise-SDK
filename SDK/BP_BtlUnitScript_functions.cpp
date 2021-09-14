
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

// Function BP_BtlUnitScript.BP_BtlUnitScript_C.ReceiveOnStrikeAttackDown
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::ReceiveOnStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.ReceiveOnStrikeAttackDown");

	UBP_BtlUnitScript_C_ReceiveOnStrikeAttackDown_Params params;
	params.Attacker = Attacker;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.CanStrikeAttackDown
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::CanStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.CanStrikeAttackDown");

	UBP_BtlUnitScript_C_CanStrikeAttackDown_Params params;
	params.Attacker = Attacker;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.GetUnitParameterAsBool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlUnitParameterLabel  Label                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_BtlUnitScript_C::GetUnitParameterAsBool(const struct FBtlUnitParameterLabel& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.GetUnitParameterAsBool");

	UBP_BtlUnitScript_C_GetUnitParameterAsBool_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.GetUnitParameterAsInt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlUnitParameterLabel  Label                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_BtlUnitScript_C::GetUnitParameterAsInt(const struct FBtlUnitParameterLabel& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.GetUnitParameterAsInt");

	UBP_BtlUnitScript_C_GetUnitParameterAsInt_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.GetUnitParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBtlUnitParameterLabel  Label                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_BtlUnitScript_C::GetUnitParameter(const struct FBtlUnitParameterLabel& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.GetUnitParameter");

	UBP_BtlUnitScript_C_GetUnitParameter_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnComboNext
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PrevArts                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Override                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   NextArts                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::OnComboNext(const struct FName& PrevArts, bool* Override, struct FName* NextArts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnComboNext");

	UBP_BtlUnitScript_C_OnComboNext_Params params;
	params.PrevArts = PrevArts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Override != nullptr)
		*Override = params.Override;
	if (NextArts != nullptr)
		*NextArts = params.NextArts;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttackAirSub
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::OnGetBoostAttackAirSub(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttackAirSub");

	UBP_BtlUnitScript_C_OnGetBoostAttackAirSub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttackAir
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::OnGetBoostAttackAir(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttackAir");

	UBP_BtlUnitScript_C_OnGetBoostAttackAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttackSub
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::OnGetBoostAttackSub(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttackSub");

	UBP_BtlUnitScript_C_OnGetBoostAttackSub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttack
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::OnGetBoostAttack(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnGetBoostAttack");

	UBP_BtlUnitScript_C_OnGetBoostAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.ApplyBreakEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlStrikeType                 StrikeType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::ApplyBreakEffect(EBtlStrikeType StrikeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.ApplyBreakEffect");

	UBP_BtlUnitScript_C_ApplyBreakEffect_Params params;
	params.StrikeType = StrikeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.ApplyBreakVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlStrikeType                 StrikeType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::ApplyBreakVisibility(EBtlStrikeType StrikeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.ApplyBreakVisibility");

	UBP_BtlUnitScript_C_ApplyBreakVisibility_Params params;
	params.StrikeType = StrikeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakRush
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlUnitScript_C::OnBreakRush(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakRush");

	UBP_BtlUnitScript_C_OnBreakRush_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakArmor
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlUnitScript_C::OnBreakArmor(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakArmor");

	UBP_BtlUnitScript_C_OnBreakArmor_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakSuperAvoid
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlUnitScript_C::OnBreakSuperAvoid(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakSuperAvoid");

	UBP_BtlUnitScript_C_OnBreakSuperAvoid_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnReceiveFireSword
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlUnitScript_C::OnReceiveFireSword(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnReceiveFireSword");

	UBP_BtlUnitScript_C_OnReceiveFireSword_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnDead
// (Event, Public, BlueprintEvent)

void UBP_BtlUnitScript_C::OnDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnDead");

	UBP_BtlUnitScript_C_OnDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnStrikeAttackDown
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::OnStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnStrikeAttackDown");

	UBP_BtlUnitScript_C_OnStrikeAttackDown_Params params;
	params.Attacker = Attacker;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnDeadAction
// (Event, Public, BlueprintEvent)

void UBP_BtlUnitScript_C::OnDeadAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnDeadAction");

	UBP_BtlUnitScript_C_OnDeadAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakChant
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlUnitScript_C::OnBreakChant(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakChant");

	UBP_BtlUnitScript_C_OnBreakChant_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnCutsceneResetAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::OnCutsceneResetAnimation(const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnCutsceneResetAnimation");

	UBP_BtlUnitScript_C_OnCutsceneResetAnimation_Params params;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnSuccessJustGuard
// (Event, Public, BlueprintEvent)

void UBP_BtlUnitScript_C::OnSuccessJustGuard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnSuccessJustGuard");

	UBP_BtlUnitScript_C_OnSuccessJustGuard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnSuccessJustAvoid
// (Event, Public, BlueprintEvent)

void UBP_BtlUnitScript_C::OnSuccessJustAvoid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnSuccessJustAvoid");

	UBP_BtlUnitScript_C_OnSuccessJustAvoid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakFlying
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BtlUnitScript_C::OnBreakFlying(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnBreakFlying");

	UBP_BtlUnitScript_C_OnBreakFlying_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnFrozenAction
// (Event, Public, BlueprintEvent)

void UBP_BtlUnitScript_C::OnFrozenAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.OnFrozenAction");

	UBP_BtlUnitScript_C_OnFrozenAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitScript.BP_BtlUnitScript_C.ExecuteUbergraph_BP_BtlUnitScript
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BtlUnitScript_C::ExecuteUbergraph_BP_BtlUnitScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitScript.BP_BtlUnitScript_C.ExecuteUbergraph_BP_BtlUnitScript");

	UBP_BtlUnitScript_C_ExecuteUbergraph_BP_BtlUnitScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
