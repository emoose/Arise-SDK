
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

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.RunBoostAttackReserveDwon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::RunBoostAttackReserveDwon(class ABtlCharacterBase* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.RunBoostAttackReserveDwon");

	ABP_BattleManagerBase_C_RunBoostAttackReserveDwon_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.UserConstructionScript");

	ABP_BattleManagerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.GetSpecialStrikeLabel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Label                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::GetSpecialStrikeLabel(struct FName* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.GetSpecialStrikeLabel");

	ABP_BattleManagerBase_C_GetSpecialStrikeLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.IsReadySpecialStrike
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::IsReadySpecialStrike(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.IsReadySpecialStrike");

	ABP_BattleManagerBase_C_IsReadySpecialStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnMysticFadeInFinished
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::OnMysticFadeInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnMysticFadeInFinished");

	ABP_BattleManagerBase_C_OnMysticFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.MysticFadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::MysticFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.MysticFadeIn");

	ABP_BattleManagerBase_C_MysticFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.RegisterMysticEndFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  FadeWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::RegisterMysticEndFade(class UClass* FadeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.RegisterMysticEndFade");

	ABP_BattleManagerBase_C_RegisterMysticEndFade_Params params;
	params.FadeWidget = FadeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.AllUnitStateReset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::AllUnitStateReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.AllUnitStateReset");

	ABP_BattleManagerBase_C_AllUnitStateReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ChangeMysticUnitVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       PlayUnit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       TargetUnit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::ChangeMysticUnitVisibility(class ABtlCharacterBase* PlayUnit, class ABtlCharacterBase* TargetUnit, bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.ChangeMysticUnitVisibility");

	ABP_BattleManagerBase_C_ChangeMysticUnitVisibility_Params params;
	params.PlayUnit = PlayUnit;
	params.TargetUnit = TargetUnit;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.RestoreMysticTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::RestoreMysticTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.RestoreMysticTransform");

	ABP_BattleManagerBase_C_RestoreMysticTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BackupMysticTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlMysticBeginParam    MysticParam                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleManagerBase_C::BackupMysticTransform(const struct FBtlMysticBeginParam& MysticParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BackupMysticTransform");

	ABP_BattleManagerBase_C_BackupMysticTransform_Params params;
	params.MysticParam = MysticParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.GetAlphaMaskComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UAlphaMaskComponent*> NewParam                       (Parm, OutParm, ZeroConstructor)

void ABP_BattleManagerBase_C::GetAlphaMaskComponents(TArray<class UAlphaMaskComponent*>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.GetAlphaMaskComponents");

	ABP_BattleManagerBase_C_GetAlphaMaskComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ClearAlphaMaskComponent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::ClearAlphaMaskComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.ClearAlphaMaskComponent");

	ABP_BattleManagerBase_C_ClearAlphaMaskComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.RemoveAlphaMaskComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAlphaMaskComponent*     Remove                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BattleManagerBase_C::RemoveAlphaMaskComponent(class UAlphaMaskComponent* Remove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.RemoveAlphaMaskComponent");

	ABP_BattleManagerBase_C_RemoveAlphaMaskComponent_Params params;
	params.Remove = Remove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.RegistAlphaMaskComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAlphaMaskComponent*     Regist                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BattleManagerBase_C::RegistAlphaMaskComponent(class UAlphaMaskComponent* Regist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.RegistAlphaMaskComponent");

	ABP_BattleManagerBase_C_RegistAlphaMaskComponent_Params params;
	params.Regist = Regist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeSmashBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlStrikeSmashBeginParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeSmashBeginSignature__DelegateSignature(const struct FBtlStrikeSmashBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeSmashBeginSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeSmashBeginSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeSmashEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlStrikeSmashEndParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeSmashEndSignature__DelegateSignature(const struct FBtlStrikeSmashEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeSmashEndSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeSmashEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlMysticBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlMysticBeginParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlMysticBeginSignature__DelegateSignature(const struct FBtlMysticBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlMysticBeginSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlMysticBeginSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlMysticEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlMysticEndParam      Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlMysticEndSignature__DelegateSignature(const struct FBtlMysticEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlMysticEndSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlMysticEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlCutSceneEndParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature(const struct FBtlCutSceneEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlMysticBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlMysticBeginParam    Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlMysticBeginSignature__DelegateSignature(const struct FBtlMysticBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlMysticBeginSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlMysticBeginSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlStrikeAttackSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlStrikeAttackSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlStrikeAttackSignature__DelegateSignature_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlFlashRaidSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlFlashRaidSignature__DelegateSignature(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlFlashRaidSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlFlashRaidSignature__DelegateSignature_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCoreBreakSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlDamageSphereComponent* DmgCollision                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCoreBreakSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, class UBtlDamageSphereComponent* DmgCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCoreBreakSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCoreBreakSignature__DelegateSignature_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.DmgCollision = DmgCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackReserveDownSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackReserveDownSignature__DelegateSignature(class ABtlCharacterBase* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackReserveDownSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackReserveDownSignature__DelegateSignature_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDamageSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            PreArts                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            PrevHp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InstantDeath                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Critical                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDamageSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& PreArts, int PrevHp, bool InstantDeath, bool Critical, int DamageValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDamageSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDamageSignature__DelegateSignature_Params params;
	params.Attacker = Attacker;
	params.Receiver = Receiver;
	params.PreArts = PreArts;
	params.PrevHp = PrevHp;
	params.InstantDeath = InstantDeath;
	params.Critical = Critical;
	params.DamageValue = DamageValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlStrikeAttackSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlStrikeAttackSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlStrikeAttackSignature__DelegateSignature_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlCollisionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlCollisionSignatureData CollisionParam                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlCollisionSignature__DelegateSignature(const struct FBtlCollisionSignatureData& CollisionParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlCollisionSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlCollisionSignature__DelegateSignature_Params params;
	params.CollisionParam = CollisionParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlRequestUseItemBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       ItemUser                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlRequestUseItemBeginSignature__DelegateSignature(class ABtlCharacterBase* ItemUser, int ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlRequestUseItemBeginSignature__DelegateSignature");

	ABP_BattleManagerBase_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlRequestUseItemBeginSignature__DelegateSignature_Params params;
	params.ItemUser = ItemUser;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveInitialize
// (Event, Public, BlueprintEvent)

void ABP_BattleManagerBase_C::ReceiveInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveInitialize");

	ABP_BattleManagerBase_C_ReceiveInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.Receive_BattleResume
// (Event, Public, BlueprintEvent)

void ABP_BattleManagerBase_C::Receive_BattleResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.Receive_BattleResume");

	ABP_BattleManagerBase_C_Receive_BattleResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.Receive_BattlePause
// (Event, Public, BlueprintEvent)

void ABP_BattleManagerBase_C::Receive_BattlePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.Receive_BattlePause");

	ABP_BattleManagerBase_C_Receive_BattlePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveFinalize
// (Event, Public, BlueprintEvent)

void ABP_BattleManagerBase_C::ReceiveFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveFinalize");

	ABP_BattleManagerBase_C_ReceiveFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.NotReadySpecialStrike
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::NotReadySpecialStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.NotReadySpecialStrike");

	ABP_BattleManagerBase_C_NotReadySpecialStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReadySpecialStrike
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewSpecialStrike               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::ReadySpecialStrike(const struct FName& NewSpecialStrike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReadySpecialStrike");

	ABP_BattleManagerBase_C_ReadySpecialStrike_Params params;
	params.NewSpecialStrike = NewSpecialStrike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.PlayBattleExitMask
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::PlayBattleExitMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.PlayBattleExitMask");

	ABP_BattleManagerBase_C_PlayBattleExitMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleExitMaskDestory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::OnBattleExitMaskDestory(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleExitMaskDestory");

	ABP_BattleManagerBase_C_OnBattleExitMaskDestory_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BattleManagerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveBeginPlay");

	ABP_BattleManagerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.ReceiveEndPlay");

	ABP_BattleManagerBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBeginBattleScene
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::OnBeginBattleScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBeginBattleScene");

	ABP_BattleManagerBase_C_OnBeginBattleScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnGoBackTitle
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::OnGoBackTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnGoBackTitle");

	ABP_BattleManagerBase_C_OnGoBackTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnEndLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseSaveResult               iResult                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::OnEndLoad(EAriseSaveResult iResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnEndLoad");

	ABP_BattleManagerBase_C_OnEndLoad_Params params;
	params.iResult = iResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.@OnExitMaskStartAnimFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::@OnExitMaskStartAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.@OnExitMaskStartAnimFinish");

	ABP_BattleManagerBase_C_@OnExitMaskStartAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ExecuteUbergraph_BP_BattleManagerBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::ExecuteUbergraph_BP_BattleManagerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.ExecuteUbergraph_BP_BattleManagerBase");

	ABP_BattleManagerBase_C_ExecuteUbergraph_BP_BattleManagerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
