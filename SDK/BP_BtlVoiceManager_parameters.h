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

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CanPlayVoice
struct ABP_BtlVoiceManager_C_CanPlayVoice_Params
{
	struct FBtlVoiceData                               VoiceData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABtlCharacterBase*                           SpeakerUnit;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndVoice
struct ABP_BtlVoiceManager_C_OnEndVoice_Params
{
	struct FBtlVoiceMessageCommand                     Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CreateVoiceHandle
struct ABP_BtlVoiceManager_C_CreateVoiceHandle_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlVoiceHandle*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetVoiceLotteries
struct ABP_BtlVoiceManager_C_GetVoiceLotteries_Params
{
	EBtlVoiceState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlVoiceCondition                                 Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBtlVoiceLottery>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetVoiceHandleByUnit
struct ABP_BtlVoiceManager_C_GetVoiceHandleByUnit_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlVoiceHandle*                             VoiceHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetInterpTime
struct ABP_BtlVoiceManager_C_GetInterpTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetBattleRank
struct ABP_BtlVoiceManager_C_GetBattleRank_Params
{
	int                                                WinRank;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CanResultVoice
struct ABP_BtlVoiceManager_C_CanResultVoice_Params
{
	struct FBtlVoice_DatabaseLabel                     VoiceLabel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<EBtlVoiceCharaID>                           PartyCharacterList;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetSequentialVoiceArray
struct ABP_BtlVoiceManager_C_GetSequentialVoiceArray_Params
{
	struct FBtlVoice_DatabaseLabel                     VoiceLabel;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FBtlVoice_DatabaseLabel>             VoiceLabelArray;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.MakeDictionaryText
struct ABP_BtlVoiceManager_C_MakeDictionaryText_Params
{
	struct FBtlVoice_DatabaseLabel                     VoiceLabel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FDictionaryText>                     DictionaryTextArray;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.CacheResultVoiceLotteries
struct ABP_BtlVoiceManager_C_CacheResultVoiceLotteries_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetResultVoiceLotteries
struct ABP_BtlVoiceManager_C_GetResultVoiceLotteries_Params
{
	TArray<struct FBtlVoiceLottery>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetLotteryToDictionaryText
struct ABP_BtlVoiceManager_C_GetLotteryToDictionaryText_Params
{
	TArray<struct FBtlVoiceLottery>                    Lotteries;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Voice_Label;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetMessageDataArray
struct ABP_BtlVoiceManager_C_GetMessageDataArray_Params
{
	struct FBtlVoice_DatabaseLabel                     VoiceLabel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UMessageData*>                        ShortChatMessageArray;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnRequestResultVoice
struct ABP_BtlVoiceManager_C_OnRequestResultVoice_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.RequestDerivedVoice
struct ABP_BtlVoiceManager_C_RequestDerivedVoice_Params
{
	struct FBtlVoiceMessageCommand                     SourceCommand;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               DerivedScenarioVoiceExist;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoadTimePatternTable
struct ABP_BtlVoiceManager_C_OnLoadTimePatternTable_Params
{
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsRewardItemInResult
struct ABP_BtlVoiceManager_C_IsRewardItemInResult_Params
{
	bool                                               Rare;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetValidationHandle
struct ABP_BtlVoiceManager_C_GetValidationHandle_Params
{
	EBtlVoiceState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlVoiceCondition                                 Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UBP_VoiceValidationHandle_C*>         Handles;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetEasyFightConditionTime
struct ABP_BtlVoiceManager_C_GetEasyFightConditionTime_Params
{
	float                                              ConditionTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetHardFightConditionTime
struct ABP_BtlVoiceManager_C_GetHardFightConditionTime_Params
{
	float                                              ConditionTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsEasyFight
struct ABP_BtlVoiceManager_C_IsEasyFight_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsHardFight
struct ABP_BtlVoiceManager_C_IsHardFight_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.SetWinTalkRequest
struct ABP_BtlVoiceManager_C_SetWinTalkRequest_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetValidationHandleByState
struct ABP_BtlVoiceManager_C_GetValidationHandleByState_Params
{
	EBtlVoiceState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UBP_VoiceValidationHandle_C*>         Handles;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetValidationHandleByCondition
struct ABP_BtlVoiceManager_C_GetValidationHandleByCondition_Params
{
	EBtlVoiceCondition                                 Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UBP_VoiceValidationHandle_C*>         Handles;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.VoiceCheck_Win
struct ABP_BtlVoiceManager_C_VoiceCheck_Win_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.GetWinRank
struct ABP_BtlVoiceManager_C_GetWinRank_Params
{
	int                                                Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsLevelUpUnit
struct ABP_BtlVoiceManager_C_IsLevelUpUnit_Params
{
	EPCOrder                                           TargetPcOrder;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.@MakeVoiceLotteryEtc
struct ABP_BtlVoiceManager_C_@MakeVoiceLotteryEtc_Params
{
	TArray<struct FBtlVoiceLottery>                    VoiceLottery;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.UserConstructionScript
struct ABP_BtlVoiceManager_C_UserConstructionScript_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsRelationshipCheck
struct ABP_BtlVoiceManager_C_IsRelationshipCheck_Params
{
	struct FBtlVoiceData                               VoiceData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.@GetHpRate
struct ABP_BtlVoiceManager_C_@GetHpRate_Params
{
	bool                                               bVanguardOnly;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HpRate;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.IsCheckVoiceTargetType
struct ABP_BtlVoiceManager_C_IsCheckVoiceTargetType_Params
{
	class ABtlCharacterBase*                           Character;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     VoiceLabel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EBtlVoiceTarget                                    VoiceTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           VoiceSpeaker;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.VoiceEvent_OnBeginBattle
struct ABP_BtlVoiceManager_C_VoiceEvent_OnBeginBattle_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.VoiceCheck_DamageRate
struct ABP_BtlVoiceManager_C_VoiceCheck_DamageRate_Params
{
	class ABtlCharacterBase*                           PartyMember;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     VoiceLabel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FBtlVoiceInfoData                           VoiceInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBtlVoiceConditionData                      VoiceCondition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoaded_492A336D42BB9FF86232E4AD65B6DE01
struct ABP_BtlVoiceManager_C_OnLoaded_492A336D42BB9FF86232E4AD65B6DE01_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoaded_2E86D3664C3EA014B57FB3BB939A332F
struct ABP_BtlVoiceManager_C_OnLoaded_2E86D3664C3EA014B57FB3BB939A332F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ReceiveTick
struct ABP_BtlVoiceManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature
struct ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlSimpleSignature__DelegateSignature
struct ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature
struct ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature
struct ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSimpleSignature__DelegateSignature
struct ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.StoreVoiceValidationHandle
struct ABP_BtlVoiceManager_C_StoreVoiceValidationHandle_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlSimpleSignature__DelegateSignature
struct ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLosed
struct ABP_BtlVoiceManager_C_OnLosed_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.InitializeVoiceRecorder
struct ABP_BtlVoiceManager_C_InitializeVoiceRecorder_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDecideWinSignature__DelegateSignature
struct ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDecideWinSignature__DelegateSignature_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnResultShortChat
struct ABP_BtlVoiceManager_C_OnResultShortChat_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ClearVoiceValidationHandle
struct ABP_BtlVoiceManager_C_ClearVoiceValidationHandle_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnLoadVoiceHandleRecord
struct ABP_BtlVoiceManager_C_OnLoadVoiceHandleRecord_Params
{
	struct FSTR_VoiceConditionRecord                   Record;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.InitializeVoiceFlags
struct ABP_BtlVoiceManager_C_InitializeVoiceFlags_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndResult
struct ABP_BtlVoiceManager_C_OnEndResult_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlAttackArtsSignature__DelegateSignature
struct ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlAttackArtsSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.InitializeBattleRankFlags
struct ABP_BtlVoiceManager_C_InitializeBattleRankFlags_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnGoBackTitle
struct ABP_BtlVoiceManager_C_OnGoBackTitle_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.RegisterEvent
struct ABP_BtlVoiceManager_C_RegisterEvent_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ReceiveEndPlay
struct ABP_BtlVoiceManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.UnregisterEvent
struct ABP_BtlVoiceManager_C_UnregisterEvent_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.StopVoice
struct ABP_BtlVoiceManager_C_StopVoice_Params
{
	float                                              InterpTimeSec;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.StopVoiceByUnit
struct ABP_BtlVoiceManager_C_StopVoiceByUnit_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTimeSec;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndLoad
struct ABP_BtlVoiceManager_C_OnEndLoad_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.EndLoad
struct ABP_BtlVoiceManager_C_EndLoad_Params
{
	EAriseSaveResult                                   iResult;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature
struct ABP_BtlVoiceManager_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.OnEndVoiceMessageCommand
struct ABP_BtlVoiceManager_C_OnEndVoiceMessageCommand_Params
{
	struct FBtlVoiceMessageCommand                     Command;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlVoiceManager.BP_BtlVoiceManager_C.ExecuteUbergraph_BP_BtlVoiceManager
struct ABP_BtlVoiceManager_C_ExecuteUbergraph_BP_BtlVoiceManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
