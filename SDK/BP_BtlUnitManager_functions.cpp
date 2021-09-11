
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

// Function BP_BtlUnitManager.BP_BtlUnitManager_C.CancelAttack_AllUnit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlUnitManager_C::CancelAttack_AllUnit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.CancelAttack_AllUnit");

	ABP_BtlUnitManager_C_CancelAttack_AllUnit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.SwapPartyOrder
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       FromUnit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       ToUnit                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BtlUnitManager_C::SwapPartyOrder(class ABtlCharacterBase* FromUnit, class ABtlCharacterBase* ToUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.SwapPartyOrder");

	ABP_BtlUnitManager_C_SwapPartyOrder_Params params;
	params.FromUnit = FromUnit;
	params.ToUnit = ToUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.SwapFront2SubInternal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       FromUnit                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       ToUnit                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::SwapFront2SubInternal(class ABtlCharacterBase* FromUnit, class ABtlCharacterBase* ToUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.SwapFront2SubInternal");

	ABP_BtlUnitManager_C_SwapFront2SubInternal_Params params;
	params.FromUnit = FromUnit;
	params.ToUnit = ToUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.ForceUpdateAI_AllUnit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlUnitManager_C::ForceUpdateAI_AllUnit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.ForceUpdateAI_AllUnit");

	ABP_BtlUnitManager_C_ForceUpdateAI_AllUnit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.SpawnEnemyReinforcement
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlUnitEnemyReinforcementData SpawnElement                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Finish                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::SpawnEnemyReinforcement(struct FBtlUnitEnemyReinforcementData* SpawnElement, bool* Finish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.SpawnEnemyReinforcement");

	ABP_BtlUnitManager_C_SpawnEnemyReinforcement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnElement != nullptr)
		*SpawnElement = params.SpawnElement;
	if (Finish != nullptr)
		*Finish = params.Finish;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.OnChangePartyOrder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  FromPartyID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPCOrder                       FromOrder                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  ToPartyID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPCOrder                       ToOrder                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::OnChangePartyOrder(EArisePartyID FromPartyID, EPCOrder FromOrder, EArisePartyID ToPartyID, EPCOrder ToOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.OnChangePartyOrder");

	ABP_BtlUnitManager_C_OnChangePartyOrder_Params params;
	params.FromPartyID = FromPartyID;
	params.FromOrder = FromOrder;
	params.ToPartyID = ToPartyID;
	params.ToOrder = ToOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.PlayAI_AllUnit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlBitFlagCategory            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::PlayAI_AllUnit(EBtlBitFlagCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.PlayAI_AllUnit");

	ABP_BtlUnitManager_C_PlayAI_AllUnit_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.StopAI_AllUnit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlBitFlagCategory            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::StopAI_AllUnit(EBtlBitFlagCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.StopAI_AllUnit");

	ABP_BtlUnitManager_C_StopAI_AllUnit_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlUnitManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.UserConstructionScript");

	ABP_BtlUnitManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlStrikeSmashEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlStrikeSmashEndParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlStrikeSmashEndSignature__DelegateSignature(const struct FBtlStrikeSmashEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlStrikeSmashEndSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlStrikeSmashEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlMysticBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlMysticBeginParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlMysticBeginSignature__DelegateSignature(const struct FBtlMysticBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlMysticBeginSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlMysticBeginSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeSmashBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlStrikeSmashBeginParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeSmashBeginSignature__DelegateSignature(const struct FBtlStrikeSmashBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeSmashBeginSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeSmashBeginSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlHeelSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Healer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlHeelSignature__DelegateSignature(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlHeelSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlHeelSignature__DelegateSignature_Params params;
	params.Healer = Healer;
	params.Receiver = Receiver;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlAttackArtsSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlAttackArtsSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlAttackArtsSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlAttackArtsSignature__DelegateSignature_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.ArtsData = ArtsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlCutSceneEndParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature(const struct FBtlCutSceneEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlSpawnCharacterSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reinforcement                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlSpawnCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character, bool Reinforcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlSpawnCharacterSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlSpawnCharacterSignature__DelegateSignature_Params params;
	params.Character = Character;
	params.Reinforcement = Reinforcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeAttackSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeAttackSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeAttackSignature__DelegateSignature_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackSignature__DelegateSignature_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlEventBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlCutSceneBeginParam  Param                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlEventBeginSignature__DelegateSignature(const struct FBtlCutSceneBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlEventBeginSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlEventBeginSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlPreStrikeSmashBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlPreStrikeSmashBeginSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlPreStrikeSmashBeginSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlPreStrikeSmashBeginSignature__DelegateSignature_Params params;
	params.Attacker = Attacker;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BtlUnitManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.ReceiveBeginPlay");

	ABP_BtlUnitManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.ReceiveEndPlay");

	ABP_BtlUnitManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.RequestAddEnemyReinforcement
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlUnitManager_C::RequestAddEnemyReinforcement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.RequestAddEnemyReinforcement");

	ABP_BtlUnitManager_C_RequestAddEnemyReinforcement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.OnSpawnReinforrcement
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlUnitManager_C::OnSpawnReinforrcement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.OnSpawnReinforrcement");

	ABP_BtlUnitManager_C_OnSpawnReinforrcement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlSpecialStrikeBeginParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeBeginSignature__DelegateSignature(const struct FBtlSpecialStrikeBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeBeginSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeBeginSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSpecialStrikeEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlSpecialStrikeEndParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSpecialStrikeEndSignature__DelegateSignature(const struct FBtlSpecialStrikeEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSpecialStrikeEndSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSpecialStrikeEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlSemiautoChangeStateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlSemiautoPhase              OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlSemiautoPhase              NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlSemiautoChangeStateSignature__DelegateSignature(class ABtlCharacterBase* Unit, EBtlSemiautoPhase OldState, EBtlSemiautoPhase NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlSemiautoChangeStateSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlSemiautoChangeStateSignature__DelegateSignature_Params params;
	params.Unit = Unit;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlDecideWinSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlDecideWinSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlDecideWinSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlDecideWinSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_17_BtlDecideLoseSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_17_BtlDecideLoseSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_17_BtlDecideLoseSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_17_BtlDecideLoseSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_18_BtlAbnormalBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAbnormalType                  AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_18_BtlAbnormalBeginSignature__DelegateSignature(class ABtlCharacterBase* Unit, EAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_18_BtlAbnormalBeginSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_18_BtlAbnormalBeginSignature__DelegateSignature_Params params;
	params.Unit = Unit;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_19_BtlAbnormalEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAbnormalType                  AbnormalType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_19_BtlAbnormalEndSignature__DelegateSignature(class ABtlCharacterBase* Unit, EAbnormalType AbnormalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_19_BtlAbnormalEndSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_19_BtlAbnormalEndSignature__DelegateSignature_Params params;
	params.Unit = Unit;
	params.AbnormalType = AbnormalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_20_BtlDownFlagOnSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_20_BtlDownFlagOnSignature__DelegateSignature(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_20_BtlDownFlagOnSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_20_BtlDownFlagOnSignature__DelegateSignature_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_21_BtlDownFlagOffSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_21_BtlDownFlagOffSignature__DelegateSignature(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_21_BtlDownFlagOffSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_21_BtlDownFlagOffSignature__DelegateSignature_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_22_BtlChangeOperationSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       PrevOperationUnit              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       NowOperationUnit               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_22_BtlChangeOperationSignature__DelegateSignature(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_22_BtlChangeOperationSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_22_BtlChangeOperationSignature__DelegateSignature_Params params;
	params.PrevOperationUnit = PrevOperationUnit;
	params.NowOperationUnit = NowOperationUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_23_BtlFollowingPlayerBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtl_AIControllerBase*   BtlAIController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_23_BtlFollowingPlayerBeginSignature__DelegateSignature(class ABtl_AIControllerBase* BtlAIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_23_BtlFollowingPlayerBeginSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_23_BtlFollowingPlayerBeginSignature__DelegateSignature_Params params;
	params.BtlAIController = BtlAIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_24_BtlFollowingPlayerEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtl_AIControllerBase*   BtlAIController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_24_BtlFollowingPlayerEndSignature__DelegateSignature(class ABtl_AIControllerBase* BtlAIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_24_BtlFollowingPlayerEndSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_24_BtlFollowingPlayerEndSignature__DelegateSignature_Params params;
	params.BtlAIController = BtlAIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_25_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_25_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_25_BtlSimpleSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_25_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlChangeFormationSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       NewMainMember                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       NewSubMember                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlChangeFormationSignature__DelegateSignature(class ABtlCharacterBase* NewMainMember, class ABtlCharacterBase* NewSubMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlChangeFormationSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlChangeFormationSignature__DelegateSignature_Params params;
	params.NewMainMember = NewMainMember;
	params.NewSubMember = NewSubMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_26_BtlChangeOperationModeSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EOperationMode                 OldMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOperationMode                 NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_26_BtlChangeOperationModeSignature__DelegateSignature(EOperationMode OldMode, EOperationMode NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_26_BtlChangeOperationModeSignature__DelegateSignature");

	ABP_BtlUnitManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_26_BtlChangeOperationModeSignature__DelegateSignature_Params params;
	params.OldMode = OldMode;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlUnitManager.BP_BtlUnitManager_C.ExecuteUbergraph_BP_BtlUnitManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlUnitManager_C::ExecuteUbergraph_BP_BtlUnitManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlUnitManager.BP_BtlUnitManager_C.ExecuteUbergraph_BP_BtlUnitManager");

	ABP_BtlUnitManager_C_ExecuteUbergraph_BP_BtlUnitManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
