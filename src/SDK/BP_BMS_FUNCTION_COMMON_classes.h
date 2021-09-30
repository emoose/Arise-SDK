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

// BlueprintGeneratedClass BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BMS_FUNCTION_COMMON_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C");
		return ptr;
	}


	void STATIC_ResetStrikeAttackGageChara(const struct FBtlUnitID& UnitID, class UObject* __WorldContext);
	void STATIC_SetStrikeSmashReservePair(const struct FBtlUnitID& UnitMaster, const struct FBtlUnitID& UnitPair, class UObject* __WorldContext);
	void STATIC_SetStrikeAttakeGageRecoverValueChara(float RecoverValue, bool Overwrite, const struct FBtlUnitID& UnitID, class UObject* __WorldContext);
	void STATIC_ResetStrikeAttackGageIgnoreChara(const struct FBtlUnitID& UnitID, class UObject* __WorldContext);
	void STATIC_ResetStrikeAttackGageAll(class UObject* __WorldContext);
	void STATIC_IsAliveParty(bool TargettableOnly, class UObject* __WorldContext, bool* Enable);
	void STATIC_SetAdventMotionGlobalAnimRateScale(const struct FBtlUnitID& UnitID, bool Pause, class UObject* __WorldContext);
	void STATIC_TutorialInitialize(class UObject* __WorldContext);
	void STATIC_TutorialFinalize(class UObject* __WorldContext);
	void STATIC_SetStrikeAttakeGageRecoverValue(float RecoverValue, bool Overwrite, class UObject* __WorldContext);
	void STATIC_BtlHpLessAll(class ABtlCharacterBase* Unit, float HpRate, class UObject* __WorldContext);
	void STATIC_BtlFlexibleNotifyBossBMS(class UBP_BtlMetaScript_C* MetaScript, int Integer, float Float, const struct FString& String, class UObject* __WorldContext);
	void STATIC_BtlSetVoiceSCRestriction(bool Enable, bool DamageReduceOnly, class UObject* __WorldContext);
	void STATIC_BtlSetVoiceSystemEnable(bool Enable, class UObject* __WorldContext);
	void STATIC_BtlSetSCRestriction(bool Enable, bool DamageReduce, bool OverlimitRestriction, bool DamageReduceOnly, class UObject* __WorldContext);
	void STATIC_BtlPlayAdventEvent(class ULevelSequence* LevelSequence, class ABtlCharacterBase* BtlUnit, const struct FTransform& Transform, class UObject* __WorldContext);
	void STATIC_BtlTutorialFlagSettings_BoostStrike_(bool Enable, EArisePartyID PartyId, float GaugeSpeed, class UObject* __WorldContext);
	void STATIC_BtlHpRecoveryAll(class ABtlCharacterBase* Unit, float HpRate, class UObject* __WorldContext);
	void STATIC_BtlCameraSetFOV(class ABtl_Camera* BtlCamera, float FOV, class UObject* __WorldContext);
	void STATIC_BtlEndEventWinCondition(bool WinCondition, bool WinParam, class UObject* __WorldContext, bool* WinContdition);
	void STATIC_BtlEndEventFunction(const struct FBtlCutSceneEndParam& BtlCutSceneParam, const struct FString& EventName, class UObject* __WorldContext, bool* EndParam);
	void STATIC_BtlEndScenarioVoice(const struct FBtlVoice_DatabaseLabel& EndVoiceLabel, const struct FBtlVoice_DatabaseLabel& ScenarioLastVoiceLabel, class UObject* __WorldContext);
	void STATIC_BtlBeginScenarioVoice(const struct FBtlUnitID& BeginVoiceSpeaker, const struct FBtlVoice_DatabaseLabel& BeginVoiceLabel, class UObject* __WorldContext);
	void STATIC_BtlCameraInitializeParam(class ABtl_Camera* BtlCamera, const struct FName& BtlUnitID, float Yaw, float Height, float Distance, float UnitOfsetZ, class UObject* __WorldContext);
	void STATIC_BtlCameraInitialize(class ABtl_Camera* BtlCamera, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
