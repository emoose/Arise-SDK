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

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleKPIVisit
struct UBP_PF_QuestManager_Interface_C_QuestBattleKPIVisit_Params
{
	struct FName                                       EncountGroupLabel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.RequestForceQuestLineup
struct UBP_PF_QuestManager_Interface_C_RequestForceQuestLineup_Params
{
	struct FString                                     QuestLabelID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetIsArrivedItemCounter
struct UBP_PF_QuestManager_Interface_C_GetIsArrivedItemCounter_Params
{
	struct FQuestTargetCounterData                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Arrived;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetIsArrivedEnemyCounter
struct UBP_PF_QuestManager_Interface_C_GetIsArrivedEnemyCounter_Params
{
	struct FQuestTargetCounterData                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Arrived;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.RequestAddQuestUpdate
struct UBP_PF_QuestManager_Interface_C_RequestAddQuestUpdate_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleStartByMapLink
struct UBP_PF_QuestManager_Interface_C_QuestBattleStartByMapLink_Params
{
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.CallOnQuestUpdate
struct UBP_PF_QuestManager_Interface_C_CallOnQuestUpdate_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.UnbindOnQuestUpdate
struct UBP_PF_QuestManager_Interface_C_UnbindOnQuestUpdate_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.BindOnQuestUpdate
struct UBP_PF_QuestManager_Interface_C_BindOnQuestUpdate_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetCurrentSubQuest
struct UBP_PF_QuestManager_Interface_C_GetCurrentSubQuest_Params
{
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             RetSubQuestIDs;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        retSubStepIndices;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.GetCurrentMainQuest
struct UBP_PF_QuestManager_Interface_C_GetCurrentMainQuest_Params
{
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     retMainQuestID;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                retMainStepIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleLoad
struct UBP_PF_QuestManager_Interface_C_QuestBattleLoad_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       EncountGroupName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleResultCheck
struct UBP_PF_QuestManager_Interface_C_QuestBattleResultCheck_Params
{
	struct FName                                       EncountGroupName;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.QuestBattleStart
struct UBP_PF_QuestManager_Interface_C_QuestBattleStart_Params
{
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.ManagedScriptKillPostFadeIn
struct UBP_PF_QuestManager_Interface_C_ManagedScriptKillPostFadeIn_Params
{
	float                                              FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ValidCheckObject;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPostMapJump;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.ShowQuestClearEffects
struct UBP_PF_QuestManager_Interface_C_ShowQuestClearEffects_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bGetReward;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.ShowQuestStartEffects
struct UBP_PF_QuestManager_Interface_C_ShowQuestStartEffects_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSelectSubQuestMark;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_QuestManager_Interface.BP_PF_QuestManager_Interface_C.IsDuringShowQuestEffects
struct UBP_PF_QuestManager_Interface_C_IsDuringShowQuestEffects_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
