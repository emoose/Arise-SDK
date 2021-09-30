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

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetIsArrivedItemCounter
struct ABP_PF_QuestManager_C_GetIsArrivedItemCounter_Params
{
	struct FQuestTargetCounterData                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Arrived;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetIsArrivedEnemyCounter
struct ABP_PF_QuestManager_C_GetIsArrivedEnemyCounter_Params
{
	struct FQuestTargetCounterData                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Arrived;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CallOnQuestUpdate
struct ABP_PF_QuestManager_C_CallOnQuestUpdate_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.UnbindOnQuestUpdate
struct ABP_PF_QuestManager_C_UnbindOnQuestUpdate_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.BindOnQuestUpdate
struct ABP_PF_QuestManager_C_BindOnQuestUpdate_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetCurrentSubQuest
struct ABP_PF_QuestManager_C_GetCurrentSubQuest_Params
{
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             RetSubQuestIDs;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        retSubStepIndices;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetCurrentMainQuest
struct ABP_PF_QuestManager_C_GetCurrentMainQuest_Params
{
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     retMainQuestID;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                retMainStepIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.IsDuringShowQuestEffects
struct ABP_PF_QuestManager_C_IsDuringShowQuestEffects_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.FlushTargetCounterScriptPlayCache
struct ABP_PF_QuestManager_C_FlushTargetCounterScriptPlayCache_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckTargetCounterScriptPlay
struct ABP_PF_QuestManager_C_CheckTargetCounterScriptPlay_Params
{
	struct FQuestTargetCounterData                     CounterData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      NewPlayScriptActor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.SetBattleByMapLink
struct ABP_PF_QuestManager_C_SetBattleByMapLink_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckEnemyScriptContinue
struct ABP_PF_QuestManager_C_CheckEnemyScriptContinue_Params
{
	TArray<struct FBtlEncountGroupParam>               EncountGroup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleKPIVisit
struct ABP_PF_QuestManager_C_OnBattleKPIVisit_Params
{
	TArray<struct FBtlEncountGroupParam>               Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.KPI
struct ABP_PF_QuestManager_C_KPI_Params
{
	struct FQuestTargetCounterData                     CounterData;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EAriseKpiExDungeonData                             InDataType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.NotifyEnemyCounter
struct ABP_PF_QuestManager_C_NotifyEnemyCounter_Params
{
	struct FString                                     EnemyID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                DefeatNum;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DefeatMax;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.FlushQuestUpdateQueue
struct ABP_PF_QuestManager_C_FlushQuestUpdateQueue_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.AddQuestUpdateQueue
struct ABP_PF_QuestManager_C_AddQuestUpdateQueue_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                QuestStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.NotifyItemCounter
struct ABP_PF_QuestManager_C_NotifyItemCounter_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveOnCheckLineup
struct ABP_PF_QuestManager_C_ReceiveOnCheckLineup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.IsArrivedItemCounter
struct ABP_PF_QuestManager_C_IsArrivedItemCounter_Params
{
	struct FQuestTargetCounterData                     CounterData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bArrived;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.IsArrivedEnemyCounter
struct ABP_PF_QuestManager_C_IsArrivedEnemyCounter_Params
{
	struct FQuestTargetCounterData                     CounterData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bArrived;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetItemCounter
struct ABP_PF_QuestManager_C_GetItemCounter_Params
{
	struct FQuestTargetCounterData                     CounterData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetEnemyCounter
struct ABP_PF_QuestManager_C_GetEnemyCounter_Params
{
	struct FQuestTargetCounterData                     CounterData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckTargetCounterArrivedOptions
struct ABP_PF_QuestManager_C_CheckTargetCounterArrivedOptions_Params
{
	struct FQuestTargetCounterData                     CounterData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.DoBattleEvent
struct ABP_PF_QuestManager_C_DoBattleEvent_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.DoItemGetEvent
struct ABP_PF_QuestManager_C_DoItemGetEvent_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestCounterCheck
struct ABP_PF_QuestManager_C_OnQuestCounterCheck_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ApplyItemCounter
struct ABP_PF_QuestManager_C_ApplyItemCounter_Params
{
	struct FQuestTargetCounterData                     CounterData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bArrived;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckItemCounter
struct ABP_PF_QuestManager_C_CheckItemCounter_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ApplyEnemyCounter
struct ABP_PF_QuestManager_C_ApplyEnemyCounter_Params
{
	struct FQuestTargetCounterData                     CounterData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bArrived;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckTargetCounter
struct ABP_PF_QuestManager_C_CheckTargetCounter_Params
{
	struct FQuestTargetCounterData                     QuestTargetCounterData;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bArrived;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckEnemyCounter
struct ABP_PF_QuestManager_C_CheckEnemyCounter_Params
{
	struct FString                                     EncountGroup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleStart
struct ABP_PF_QuestManager_C_OnBattleStart_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleLoad
struct ABP_PF_QuestManager_C_OnBattleLoad_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       EncountGroupName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleFinish
struct ABP_PF_QuestManager_C_OnBattleFinish_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.GetTimeToMinutes
struct ABP_PF_QuestManager_C_GetTimeToMinutes_Params
{
	int                                                CurrentTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TimeDay;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TimeHour;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TimeMinute;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ForceQuestLineup
struct ABP_PF_QuestManager_C_ForceQuestLineup_Params
{
	struct FString                                     QuestLabelID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupByDatabase
struct ABP_PF_QuestManager_C_QuestLineupByDatabase_Params
{
	struct FQuestLineupData                            QuestLineupData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestLineupCheckByDatabase
struct ABP_PF_QuestManager_C_OnQuestLineupCheckByDatabase_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounterAndScenarioFlagAndTimeStamp
struct ABP_PF_QuestManager_C_QuestLineupFromCounterAndScenarioFlagAndTimeStamp_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Chapter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ConditionScenarioFlags;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Timestamp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                elapsedDay;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                elapsedHour;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ElapsedMinute;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounterAndTimeStamp
struct ABP_PF_QuestManager_C_QuestLineupFromCounterAndTimeStamp_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Capter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Timestamp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                elapsedDay;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ElaspedHour;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ElapsedMinute;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnInteractionCheck
struct ABP_PF_QuestManager_C_OnInteractionCheck_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckScenarioFlags
struct ABP_PF_QuestManager_C_CheckScenarioFlags_Params
{
	TArray<struct FString>                             Flags;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CheckScenarioCounter
struct ABP_PF_QuestManager_C_CheckScenarioCounter_Params
{
	int                                                Capter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounterAndScenarioFlag
struct ABP_PF_QuestManager_C_QuestLineupFromCounterAndScenarioFlag_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Chapter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ConditionScenarioFlags;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestLineupFromCounter
struct ABP_PF_QuestManager_C_QuestLineupFromCounter_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Capter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestLineupCheck
struct ABP_PF_QuestManager_C_OnQuestLineupCheck_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnItemGetCheck
struct ABP_PF_QuestManager_C_OnItemGetCheck_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnBattleResultCheck
struct ABP_PF_QuestManager_C_OnBattleResultCheck_Params
{
	TArray<struct FName>                               EncountLabel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.UserConstructionScript
struct ABP_PF_QuestManager_C_UserConstructionScript_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0665_PLEASEWIZARD
struct ABP_PF_QuestManager_C_CHECK_SQ_0665_PLEASEWIZARD_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0680_GOMIHIROI
struct ABP_PF_QuestManager_C_CHECK_SQ_0680_GOMIHIROI_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0465_DAIDOKORO
struct ABP_PF_QuestManager_C_CHECK_SQ_0465_DAIDOKORO_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0260_IWABA
struct ABP_PF_QuestManager_C_CHECK_SQ_0260_IWABA_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0080_MORESALES
struct ABP_PF_QuestManager_C_CHECK_SQ_0080_MORESALES_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0160_WARASIBE
struct ABP_PF_QuestManager_C_CHECK_SQ_0160_WARASIBE_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0355_REQUEST
struct ABP_PF_QuestManager_C_CHECK_SQ_0355_REQUEST_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0350_NEWLEADER
struct ABP_PF_QuestManager_C_CHECK_SQ_0350_NEWLEADER_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0360_PRIZESTART
struct ABP_PF_QuestManager_C_CHECK_SQ_0360_PRIZESTART_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Select Sub Quest Mark
struct ABP_PF_QuestManager_C_Select_Sub_Quest_Mark_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ShowQuestClearEffects
struct ABP_PF_QuestManager_C_ShowQuestClearEffects_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bGetReward;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ShowQuestStartEffects
struct ABP_PF_QuestManager_C_ShowQuestStartEffects_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSelectSubQuestMark;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveBeginPlay
struct ABP_PF_QuestManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveTick
struct ABP_PF_QuestManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0030_NABESAGASI
struct ABP_PF_QuestManager_C_CHECK_SQ_0030_NABESAGASI_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnChangeScenarioCounter
struct ABP_PF_QuestManager_C_Event_OnChangeScenarioCounter_Params
{
	int                                                counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnChageScenarioFlag
struct ABP_PF_QuestManager_C_Event_OnChageScenarioFlag_Params
{
	int                                                Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0040_KANATOKO
struct ABP_PF_QuestManager_C_CHECK_SQ_0040_KANATOKO_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event Add Item
struct ABP_PF_QuestManager_C_Event_Add_Item_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ReceiveEndPlay
struct ABP_PF_QuestManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0060_FIELDWORK
struct ABP_PF_QuestManager_C_CHECK_SQ_0060_FIELDWORK_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Event Field Wakeup
struct ABP_PF_QuestManager_C_On_Event_Field_Wakeup_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Register Event Field Wakeup
struct ABP_PF_QuestManager_C_Register_Event_Field_Wakeup_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnBattleFinalize
struct ABP_PF_QuestManager_C_Event_OnBattleFinalize_Params
{
	struct FBtlResultInfo                              ResultInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Refresh Post FadeIn
struct ABP_PF_QuestManager_C_On_Refresh_Post_FadeIn_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ValidCheckObject;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPostMapJump;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.CHECK_SQ_0205_AFTER
struct ABP_PF_QuestManager_C_CHECK_SQ_0205_AFTER_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.EventDoCollectLocators
struct ABP_PF_QuestManager_C_EventDoCollectLocators_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ManagedScriptKillPostFadeIn
struct ABP_PF_QuestManager_C_ManagedScriptKillPostFadeIn_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ValidCheckObject;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPostMapJump;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleLoad
struct ABP_PF_QuestManager_C_QuestBattleLoad_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       EncountGroupName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleStart
struct ABP_PF_QuestManager_C_QuestBattleStart_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleResultCheck
struct ABP_PF_QuestManager_C_QuestBattleResultCheck_Params
{
	struct FName                                       EncountGroupName;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleStartByMapLink
struct ABP_PF_QuestManager_C_QuestBattleStartByMapLink_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.RequestAddQuestUpdate
struct ABP_PF_QuestManager_C_RequestAddQuestUpdate_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.RequestForceQuestLineup
struct ABP_PF_QuestManager_C_RequestForceQuestLineup_Params
{
	struct FString                                     QuestLabelID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Do Post Map Change
struct ABP_PF_QuestManager_C_Do_Post_Map_Change_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.QuestBattleKPIVisit
struct ABP_PF_QuestManager_C_QuestBattleKPIVisit_Params
{
	struct FName                                       EncountGroupLabel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Auto Save Execute
struct ABP_PF_QuestManager_C_On_Auto_Save_Execute_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.Event OnChangeDisplayScene
struct ABP_PF_QuestManager_C_Event_OnChangeDisplayScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.On Auto Save Cancel
struct ABP_PF_QuestManager_C_On_Auto_Save_Cancel_Params
{
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.ExecuteUbergraph_BP_PF_QuestManager
struct ABP_PF_QuestManager_C_ExecuteUbergraph_BP_PF_QuestManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager.BP_PF_QuestManager_C.OnQuestUpdate__DelegateSignature
struct ABP_PF_QuestManager_C_OnQuestUpdate__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
