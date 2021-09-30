
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

// Function BP_BattleUIManager.BP_BattleUIManager_C.IsUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BattleUIManager_C::IsUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.IsUse");

	ABP_BattleUIManager_C_IsUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.ShowBtlLock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::ShowBtlLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.ShowBtlLock");

	ABP_BattleUIManager_C_ShowBtlLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.HiddenBtlLock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::HiddenBtlLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.HiddenBtlLock");

	ABP_BattleUIManager_C_HiddenBtlLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.PlayBtlTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::PlayBtlTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.PlayBtlTarget");

	ABP_BattleUIManager_C_PlayBtlTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.PlayBtlLock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::PlayBtlLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.PlayBtlLock");

	ABP_BattleUIManager_C_PlayBtlLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.UserConstructionScript");

	ABP_BattleUIManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.ShowLockon
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::ShowLockon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.ShowLockon");

	ABP_BattleUIManager_C_ShowLockon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.OnHeal_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUIManager_C::OnHeal_Event(class ABtlCharacterBase* Target, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.OnHeal_Event");

	ABP_BattleUIManager_C_OnHeal_Event_Params params;
	params.Target = Target;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.EventEndStrikeSmash
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::EventEndStrikeSmash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.EventEndStrikeSmash");

	ABP_BattleUIManager_C_EventEndStrikeSmash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.HideLockon
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::HideLockon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.HideLockon");

	ABP_BattleUIManager_C_HideLockon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.OnBeginSpellCastDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlStatusViewModelBase* ViewModel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUIManager_C::OnBeginSpellCastDelegate(class UBtlStatusViewModelBase* ViewModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.OnBeginSpellCastDelegate");

	ABP_BattleUIManager_C_OnBeginSpellCastDelegate_Params params;
	params.ViewModel = ViewModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.CreatePostStatusViewModel
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBtlStatusViewModelBase* ViewModel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUIManager_C::CreatePostStatusViewModel(class UBtlStatusViewModelBase* ViewModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.CreatePostStatusViewModel");

	ABP_BattleUIManager_C_CreatePostStatusViewModel_Params params;
	params.ViewModel = ViewModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.EventBeginStrikeSmash
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::EventBeginStrikeSmash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.EventBeginStrikeSmash");

	ABP_BattleUIManager_C_EventBeginStrikeSmash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BattleUIManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature");

	ABP_BattleUIManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlHeelSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Healer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUIManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlHeelSignature__DelegateSignature(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlHeelSignature__DelegateSignature");

	ABP_BattleUIManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlHeelSignature__DelegateSignature_Params params;
	params.Healer = Healer;
	params.Receiver = Receiver;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlHeelSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Healer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUIManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlHeelSignature__DelegateSignature(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlHeelSignature__DelegateSignature");

	ABP_BattleUIManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlHeelSignature__DelegateSignature_Params params;
	params.Healer = Healer;
	params.Receiver = Receiver;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.OnHealEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Healer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HealValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUIManager_C::OnHealEvent(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.OnHealEvent");

	ABP_BattleUIManager_C_OnHealEvent_Params params;
	params.Healer = Healer;
	params.Receiver = Receiver;
	params.HealValue = HealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlComboSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       DamageCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HitCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUIManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlComboSignature__DelegateSignature(class ABtlCharacterBase* DamageCharacter, class ABtlCharacterBase* Attacker, int HitCount, int TotalDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlComboSignature__DelegateSignature");

	ABP_BattleUIManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlComboSignature__DelegateSignature_Params params;
	params.DamageCharacter = DamageCharacter;
	params.Attacker = Attacker;
	params.HitCount = HitCount;
	params.TotalDamage = TotalDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BattleUIManager_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature");

	ABP_BattleUIManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.OnViewStart
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::OnViewStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.OnViewStart");

	ABP_BattleUIManager_C_OnViewStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BattleUIManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.ReceiveBeginPlay");

	ABP_BattleUIManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.OnViewEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleUIManager_C::OnViewEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.OnViewEnd");

	ABP_BattleUIManager_C_OnViewEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUIManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.ReceiveEndPlay");

	ABP_BattleUIManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUIManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.ReceiveTick");

	ABP_BattleUIManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.OpenPoisonDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnemy                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BattleUIManager_C::OpenPoisonDamage(int Number, bool IsEnemy, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.OpenPoisonDamage");

	ABP_BattleUIManager_C_OpenPoisonDamage_Params params;
	params.Number = Number;
	params.IsEnemy = IsEnemy;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.OpenHeal
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BattleUIManager_C::OpenHeal(int Number, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.OpenHeal");

	ABP_BattleUIManager_C_OpenHeal_Params params;
	params.Number = Number;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.OpenDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnemy                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeak                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsResist                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCore                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCoreBreak                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBoostBreak                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BattleUIManager_C::OpenDamage(int Number, bool IsEnemy, bool IsCritical, bool IsWeak, bool IsResist, bool IsCore, bool IsCoreBreak, bool IsBoostBreak, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.OpenDamage");

	ABP_BattleUIManager_C_OpenDamage_Params params;
	params.Number = Number;
	params.IsEnemy = IsEnemy;
	params.IsCritical = IsCritical;
	params.IsWeak = IsWeak;
	params.IsResist = IsResist;
	params.IsCore = IsCore;
	params.IsCoreBreak = IsCoreBreak;
	params.IsBoostBreak = IsBoostBreak;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleUIManager.BP_BattleUIManager_C.ExecuteUbergraph_BP_BattleUIManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleUIManager_C::ExecuteUbergraph_BP_BattleUIManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleUIManager.BP_BattleUIManager_C.ExecuteUbergraph_BP_BattleUIManager");

	ABP_BattleUIManager_C_ExecuteUbergraph_BP_BattleUIManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
