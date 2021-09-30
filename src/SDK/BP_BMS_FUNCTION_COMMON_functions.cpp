
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

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.ResetStrikeAttackGageChara
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlUnitID              UnitID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_ResetStrikeAttackGageChara(const struct FBtlUnitID& UnitID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.ResetStrikeAttackGageChara");

	UBP_BMS_FUNCTION_COMMON_C_ResetStrikeAttackGageChara_Params params;
	params.UnitID = UnitID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetStrikeSmashReservePair
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlUnitID              UnitMaster                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBtlUnitID              UnitPair                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_SetStrikeSmashReservePair(const struct FBtlUnitID& UnitMaster, const struct FBtlUnitID& UnitPair, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetStrikeSmashReservePair");

	UBP_BMS_FUNCTION_COMMON_C_SetStrikeSmashReservePair_Params params;
	params.UnitMaster = UnitMaster;
	params.UnitPair = UnitPair;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetStrikeAttakeGageRecoverValueChara
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RecoverValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Overwrite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlUnitID              UnitID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_SetStrikeAttakeGageRecoverValueChara(float RecoverValue, bool Overwrite, const struct FBtlUnitID& UnitID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetStrikeAttakeGageRecoverValueChara");

	UBP_BMS_FUNCTION_COMMON_C_SetStrikeAttakeGageRecoverValueChara_Params params;
	params.RecoverValue = RecoverValue;
	params.Overwrite = Overwrite;
	params.UnitID = UnitID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.ResetStrikeAttackGageIgnoreChara
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlUnitID              UnitID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_ResetStrikeAttackGageIgnoreChara(const struct FBtlUnitID& UnitID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.ResetStrikeAttackGageIgnoreChara");

	UBP_BMS_FUNCTION_COMMON_C_ResetStrikeAttackGageIgnoreChara_Params params;
	params.UnitID = UnitID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.ResetStrikeAttackGageAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_ResetStrikeAttackGageAll(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.ResetStrikeAttackGageAll");

	UBP_BMS_FUNCTION_COMMON_C_ResetStrikeAttackGageAll_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.IsAliveParty
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TargettableOnly                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_IsAliveParty(bool TargettableOnly, class UObject* __WorldContext, bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.IsAliveParty");

	UBP_BMS_FUNCTION_COMMON_C_IsAliveParty_Params params;
	params.TargettableOnly = TargettableOnly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetAdventMotionGlobalAnimRateScale
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlUnitID              UnitID                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Pause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_SetAdventMotionGlobalAnimRateScale(const struct FBtlUnitID& UnitID, bool Pause, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetAdventMotionGlobalAnimRateScale");

	UBP_BMS_FUNCTION_COMMON_C_SetAdventMotionGlobalAnimRateScale_Params params;
	params.UnitID = UnitID;
	params.Pause = Pause;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.TutorialInitialize
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_TutorialInitialize(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.TutorialInitialize");

	UBP_BMS_FUNCTION_COMMON_C_TutorialInitialize_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.TutorialFinalize
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_TutorialFinalize(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.TutorialFinalize");

	UBP_BMS_FUNCTION_COMMON_C_TutorialFinalize_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetStrikeAttakeGageRecoverValue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RecoverValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Overwrite                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_SetStrikeAttakeGageRecoverValue(float RecoverValue, bool Overwrite, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetStrikeAttakeGageRecoverValue");

	UBP_BMS_FUNCTION_COMMON_C_SetStrikeAttakeGageRecoverValue_Params params;
	params.RecoverValue = RecoverValue;
	params.Overwrite = Overwrite;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlHpLessAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HpRate                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlHpLessAll(class ABtlCharacterBase* Unit, float HpRate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlHpLessAll");

	UBP_BMS_FUNCTION_COMMON_C_BtlHpLessAll_Params params;
	params.Unit = Unit;
	params.HpRate = HpRate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlFlexibleNotifyBossBMS
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_BtlMetaScript_C*     MetaScript                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Integer                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Float                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlFlexibleNotifyBossBMS(class UBP_BtlMetaScript_C* MetaScript, int Integer, float Float, const struct FString& String, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlFlexibleNotifyBossBMS");

	UBP_BMS_FUNCTION_COMMON_C_BtlFlexibleNotifyBossBMS_Params params;
	params.MetaScript = MetaScript;
	params.Integer = Integer;
	params.Float = Float;
	params.String = String;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlSetVoiceSCRestriction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DamageReduceOnly               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlSetVoiceSCRestriction(bool Enable, bool DamageReduceOnly, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlSetVoiceSCRestriction");

	UBP_BMS_FUNCTION_COMMON_C_BtlSetVoiceSCRestriction_Params params;
	params.Enable = Enable;
	params.DamageReduceOnly = DamageReduceOnly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlSetVoiceSystemEnable
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlSetVoiceSystemEnable(bool Enable, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlSetVoiceSystemEnable");

	UBP_BMS_FUNCTION_COMMON_C_BtlSetVoiceSystemEnable_Params params;
	params.Enable = Enable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlSetSCRestriction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DamageReduce                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OverlimitRestriction           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DamageReduceOnly               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlSetSCRestriction(bool Enable, bool DamageReduce, bool OverlimitRestriction, bool DamageReduceOnly, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlSetSCRestriction");

	UBP_BMS_FUNCTION_COMMON_C_BtlSetSCRestriction_Params params;
	params.Enable = Enable;
	params.DamageReduce = DamageReduce;
	params.OverlimitRestriction = OverlimitRestriction;
	params.DamageReduceOnly = DamageReduceOnly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlPlayAdventEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlPlayAdventEvent(class ULevelSequence* LevelSequence, class ABtlCharacterBase* BtlUnit, const struct FTransform& Transform, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlPlayAdventEvent");

	UBP_BMS_FUNCTION_COMMON_C_BtlPlayAdventEvent_Params params;
	params.LevelSequence = LevelSequence;
	params.BtlUnit = BtlUnit;
	params.Transform = Transform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlTutorialFlagSettings(BoostStrike)
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GaugeSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlTutorialFlagSettings_BoostStrike_(bool Enable, EArisePartyID PartyId, float GaugeSpeed, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlTutorialFlagSettings(BoostStrike)");

	UBP_BMS_FUNCTION_COMMON_C_BtlTutorialFlagSettings_BoostStrike__Params params;
	params.Enable = Enable;
	params.PartyId = PartyId;
	params.GaugeSpeed = GaugeSpeed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlHpRecoveryAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HpRate                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlHpRecoveryAll(class ABtlCharacterBase* Unit, float HpRate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlHpRecoveryAll");

	UBP_BMS_FUNCTION_COMMON_C_BtlHpRecoveryAll_Params params;
	params.Unit = Unit;
	params.HpRate = HpRate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlCameraSetFOV
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtl_Camera*             BtlCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FOV                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlCameraSetFOV(class ABtl_Camera* BtlCamera, float FOV, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlCameraSetFOV");

	UBP_BMS_FUNCTION_COMMON_C_BtlCameraSetFOV_Params params;
	params.BtlCamera = BtlCamera;
	params.FOV = FOV;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlEndEventWinCondition
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WinCondition                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WinParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WinContdition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlEndEventWinCondition(bool WinCondition, bool WinParam, class UObject* __WorldContext, bool* WinContdition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlEndEventWinCondition");

	UBP_BMS_FUNCTION_COMMON_C_BtlEndEventWinCondition_Params params;
	params.WinCondition = WinCondition;
	params.WinParam = WinParam;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WinContdition != nullptr)
		*WinContdition = params.WinContdition;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlEndEventFunction
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlCutSceneEndParam    BtlCutSceneParam               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           EndParam                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlEndEventFunction(const struct FBtlCutSceneEndParam& BtlCutSceneParam, const struct FString& EventName, class UObject* __WorldContext, bool* EndParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlEndEventFunction");

	UBP_BMS_FUNCTION_COMMON_C_BtlEndEventFunction_Params params;
	params.BtlCutSceneParam = BtlCutSceneParam;
	params.EventName = EventName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndParam != nullptr)
		*EndParam = params.EndParam;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlEndScenarioVoice
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlVoice_DatabaseLabel EndVoiceLabel                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBtlVoice_DatabaseLabel ScenarioLastVoiceLabel         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlEndScenarioVoice(const struct FBtlVoice_DatabaseLabel& EndVoiceLabel, const struct FBtlVoice_DatabaseLabel& ScenarioLastVoiceLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlEndScenarioVoice");

	UBP_BMS_FUNCTION_COMMON_C_BtlEndScenarioVoice_Params params;
	params.EndVoiceLabel = EndVoiceLabel;
	params.ScenarioLastVoiceLabel = ScenarioLastVoiceLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlBeginScenarioVoice
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlUnitID              BeginVoiceSpeaker              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBtlVoice_DatabaseLabel BeginVoiceLabel                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlBeginScenarioVoice(const struct FBtlUnitID& BeginVoiceSpeaker, const struct FBtlVoice_DatabaseLabel& BeginVoiceLabel, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlBeginScenarioVoice");

	UBP_BMS_FUNCTION_COMMON_C_BtlBeginScenarioVoice_Params params;
	params.BeginVoiceSpeaker = BeginVoiceSpeaker;
	params.BeginVoiceLabel = BeginVoiceLabel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlCameraInitializeParam
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtl_Camera*             BtlCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BtlUnitID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UnitOfsetZ                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlCameraInitializeParam(class ABtl_Camera* BtlCamera, const struct FName& BtlUnitID, float Yaw, float Height, float Distance, float UnitOfsetZ, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlCameraInitializeParam");

	UBP_BMS_FUNCTION_COMMON_C_BtlCameraInitializeParam_Params params;
	params.BtlCamera = BtlCamera;
	params.BtlUnitID = BtlUnitID;
	params.Yaw = Yaw;
	params.Height = Height;
	params.Distance = Distance;
	params.UnitOfsetZ = UnitOfsetZ;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlCameraInitialize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtl_Camera*             BtlCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BMS_FUNCTION_COMMON_C::STATIC_BtlCameraInitialize(class ABtl_Camera* BtlCamera, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlCameraInitialize");

	UBP_BMS_FUNCTION_COMMON_C_BtlCameraInitialize_Params params;
	params.BtlCamera = BtlCamera;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
