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

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsTargetableInCutScene
struct UBP_VoiceValidationHandle_C_IsTargetableInCutScene_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetEnemyUnitsInCutScene
struct UBP_VoiceValidationHandle_C_GetEnemyUnitsInCutScene_Params
{
	TArray<class ABtlCharacterBase*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.OnEndBattle
struct UBP_VoiceValidationHandle_C_OnEndBattle_Params
{
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetDerivedVoiceListByInternalPredicate
struct UBP_VoiceValidationHandle_C_GetDerivedVoiceListByInternalPredicate_Params
{
	int                                                SourceVoiceIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Who;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           ToWhom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DelayRequest;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TalkRequest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreOrder;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             UnitFilter;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FScriptDelegate                             VoiceFilter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FBtlVoiceLottery>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.SetBattleTimerByEvent
struct UBP_VoiceValidationHandle_C_SetBattleTimerByEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.RequestVoiceLottery
struct UBP_VoiceValidationHandle_C_RequestVoiceLottery_Params
{
	class ABtlCharacterBase*                           Who;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           ToWhom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TalkRequest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreOrder;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetDerivedVoiceList
struct UBP_VoiceValidationHandle_C_GetDerivedVoiceList_Params
{
	struct FBtlVoiceMessageCommand                     SourceCommand;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FBtlVoiceLottery>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetVoiceListByInternalPredicate
struct UBP_VoiceValidationHandle_C_GetVoiceListByInternalPredicate_Params
{
	class ABtlCharacterBase*                           Who;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           ToWhom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DelayRequest;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TalkRequest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreOrder;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             UnitFilter;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FScriptDelegate                             VoiceFilter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FBtlVoiceLottery>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsRequestVoiceConditionMatched
struct UBP_VoiceValidationHandle_C_IsRequestVoiceConditionMatched_Params
{
	class ABtlCharacterBase*                           Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Who;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           ToWhom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsDerivedVoiceConditionMatched
struct UBP_VoiceValidationHandle_C_IsDerivedVoiceConditionMatched_Params
{
	int                                                SourceVoiceIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Who;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           ToWhom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.BreakConditionArgs
struct UBP_VoiceValidationHandle_C_BreakConditionArgs_Params
{
	struct FString                                     ConditionArgs;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                RequiredCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Args;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.OnBeginBattle
struct UBP_VoiceValidationHandle_C_OnBeginBattle_Params
{
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsVoiceConditionMatched
struct UBP_VoiceValidationHandle_C_IsVoiceConditionMatched_Params
{
	class ABtlCharacterBase*                           Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Who;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           ToWhom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.IsTargetConditionMatched
struct UBP_VoiceValidationHandle_C_IsTargetConditionMatched_Params
{
	class ABtlCharacterBase*                           Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EBtlVoiceTarget                                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetVoiceList
struct UBP_VoiceValidationHandle_C_GetVoiceList_Params
{
	TArray<struct FBtlVoiceLottery>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_VoiceValidationHandle.BP_VoiceValidationHandle_C.GetVoiceListByPredicate
struct UBP_VoiceValidationHandle_C_GetVoiceListByPredicate_Params
{
	bool                                               TalkRequired;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Who;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           ToWhom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreOrder;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBtlVoiceLottery>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
