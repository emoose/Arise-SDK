#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.ResetStrikeAttackGageChara
struct UBP_BMS_FUNCTION_COMMON_C_ResetStrikeAttackGageChara_Params
{
	struct FBtlUnitID                                  UnitID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetStrikeSmashReservePair
struct UBP_BMS_FUNCTION_COMMON_C_SetStrikeSmashReservePair_Params
{
	struct FBtlUnitID                                  UnitMaster;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBtlUnitID                                  UnitPair;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetStrikeAttakeGageRecoverValueChara
struct UBP_BMS_FUNCTION_COMMON_C_SetStrikeAttakeGageRecoverValueChara_Params
{
	float                                              RecoverValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Overwrite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlUnitID                                  UnitID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.ResetStrikeAttackGageIgnoreChara
struct UBP_BMS_FUNCTION_COMMON_C_ResetStrikeAttackGageIgnoreChara_Params
{
	struct FBtlUnitID                                  UnitID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.ResetStrikeAttackGageAll
struct UBP_BMS_FUNCTION_COMMON_C_ResetStrikeAttackGageAll_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.IsAliveParty
struct UBP_BMS_FUNCTION_COMMON_C_IsAliveParty_Params
{
	bool                                               TargettableOnly;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetAdventMotionGlobalAnimRateScale
struct UBP_BMS_FUNCTION_COMMON_C_SetAdventMotionGlobalAnimRateScale_Params
{
	struct FBtlUnitID                                  UnitID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Pause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.TutorialInitialize
struct UBP_BMS_FUNCTION_COMMON_C_TutorialInitialize_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.TutorialFinalize
struct UBP_BMS_FUNCTION_COMMON_C_TutorialFinalize_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.SetStrikeAttakeGageRecoverValue
struct UBP_BMS_FUNCTION_COMMON_C_SetStrikeAttakeGageRecoverValue_Params
{
	float                                              RecoverValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Overwrite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlHpLessAll
struct UBP_BMS_FUNCTION_COMMON_C_BtlHpLessAll_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HpRate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlFlexibleNotifyBossBMS
struct UBP_BMS_FUNCTION_COMMON_C_BtlFlexibleNotifyBossBMS_Params
{
	class UBP_BtlMetaScript_C*                         MetaScript;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Integer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlSetVoiceSCRestriction
struct UBP_BMS_FUNCTION_COMMON_C_BtlSetVoiceSCRestriction_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DamageReduceOnly;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlSetVoiceSystemEnable
struct UBP_BMS_FUNCTION_COMMON_C_BtlSetVoiceSystemEnable_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlSetSCRestriction
struct UBP_BMS_FUNCTION_COMMON_C_BtlSetSCRestriction_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DamageReduce;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OverlimitRestriction;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DamageReduceOnly;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlPlayAdventEvent
struct UBP_BMS_FUNCTION_COMMON_C_BtlPlayAdventEvent_Params
{
	class ULevelSequence*                              LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlTutorialFlagSettings(BoostStrike)
struct UBP_BMS_FUNCTION_COMMON_C_BtlTutorialFlagSettings_BoostStrike__Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GaugeSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlHpRecoveryAll
struct UBP_BMS_FUNCTION_COMMON_C_BtlHpRecoveryAll_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HpRate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlCameraSetFOV
struct UBP_BMS_FUNCTION_COMMON_C_BtlCameraSetFOV_Params
{
	class ABtl_Camera*                                 BtlCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlEndEventWinCondition
struct UBP_BMS_FUNCTION_COMMON_C_BtlEndEventWinCondition_Params
{
	bool                                               WinCondition;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WinParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WinContdition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlEndEventFunction
struct UBP_BMS_FUNCTION_COMMON_C_BtlEndEventFunction_Params
{
	struct FBtlCutSceneEndParam                        BtlCutSceneParam;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               EndParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlEndScenarioVoice
struct UBP_BMS_FUNCTION_COMMON_C_BtlEndScenarioVoice_Params
{
	struct FBtlVoice_DatabaseLabel                     EndVoiceLabel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBtlVoice_DatabaseLabel                     ScenarioLastVoiceLabel;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlBeginScenarioVoice
struct UBP_BMS_FUNCTION_COMMON_C_BtlBeginScenarioVoice_Params
{
	struct FBtlUnitID                                  BeginVoiceSpeaker;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBtlVoice_DatabaseLabel                     BeginVoiceLabel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlCameraInitializeParam
struct UBP_BMS_FUNCTION_COMMON_C_BtlCameraInitializeParam_Params
{
	class ABtl_Camera*                                 BtlCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BtlUnitID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UnitOfsetZ;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_FUNCTION_COMMON.BP_BMS_FUNCTION_COMMON_C.BtlCameraInitialize
struct UBP_BMS_FUNCTION_COMMON_C_BtlCameraInitialize_Params
{
	class ABtl_Camera*                                 BtlCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
