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

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideStepOpenCheck
struct UBP_PF_FunctionLibrary_C_SetQuestGuideStepOpenCheck_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                QuestStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepStart;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepEnd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGuideUpdate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.RotateToBackward
struct UBP_PF_FunctionLibrary_C_RotateToBackward_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      To;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportPhysics;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.WhiteIn
struct UBP_PF_FunctionLibrary_C_WhiteIn_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.RotateTo
struct UBP_PF_FunctionLibrary_C_RotateTo_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      To;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportPhysics;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.WhiteOut
struct UBP_PF_FunctionLibrary_C_WhiteOut_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideStepShowFlag
struct UBP_PF_FunctionLibrary_C_GetQuestGuideStepShowFlag_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                StepNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowFlag;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackOut(Deactive)
struct UBP_PF_FunctionLibrary_C_BlackOut_Deactive__Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetNPCAdjustHeightWithActor
struct UBP_PF_FunctionLibrary_C_SetNPCAdjustHeightWithActor_Params
{
	struct FPFNpcDefineID                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CollectQuestSysRewardLossItems
struct UBP_PF_FunctionLibrary_C_CollectQuestSysRewardLossItems_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                StepNo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasLoss;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSysWinItemData>                     LossItems;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                LossGald;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetNPCActorFromDefineID
struct UBP_PF_FunctionLibrary_C_GetNPCActorFromDefineID_Params
{
	struct FPFNpcDefineID                              DefineID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NpcActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetMenuManagerInterface
struct UBP_PF_FunctionLibrary_C_GetMenuManagerInterface_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTO14_BP_MenuManagerInterface_C> MenuManagerInterface;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetAllMapObjVisibility
struct UBP_PF_FunctionLibrary_C_SetAllMapObjVisibility_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.TeleportLocator
struct UBP_PF_FunctionLibrary_C_TeleportLocator_Params
{
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.IsQuestGuideMultiStepCleared
struct UBP_PF_FunctionLibrary_C_IsQuestGuideMultiStepCleared_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int>                                        QuestStepArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackInStay
struct UBP_PF_FunctionLibrary_C_BlackInStay_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckScenarioCondition
struct UBP_PF_FunctionLibrary_C_CheckScenarioCondition_Params
{
	TArray<struct FScenarioConditionNamed>             Conditions;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ok;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetEventContinueState
struct UBP_PF_FunctionLibrary_C_SetEventContinueState_Params
{
	bool                                               bSet;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.IsLongChatPlaying
struct UBP_PF_FunctionLibrary_C_IsLongChatPlaying_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaying;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.PlayLongChat
struct UBP_PF_FunctionLibrary_C_PlayLongChat_Params
{
	struct FString                                     LongCharName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bQued;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetArtsLearnByLabel
struct UBP_PF_FunctionLibrary_C_GetArtsLearnByLabel_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetAliasLearnByLabel
struct UBP_PF_FunctionLibrary_C_GetAliasLearnByLabel_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetScenarioFlagByNameArray
struct UBP_PF_FunctionLibrary_C_SetScenarioFlagByNameArray_Params
{
	TArray<struct FString>                             FlagName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.RecoverAllForStayingInn
struct UBP_PF_FunctionLibrary_C_RecoverAllForStayingInn_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CollectQuestGuideRewardLossItems
struct UBP_PF_FunctionLibrary_C_CollectQuestGuideRewardLossItems_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuestRewardItem>                    LossItems;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                LossGald;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckRisePointMaxNum
struct UBP_PF_FunctionLibrary_C_CheckRisePointMaxNum_Params
{
	int                                                AddRP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GetIt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckRisePointNum
struct UBP_PF_FunctionLibrary_C_CheckRisePointNum_Params
{
	int                                                RP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HaveIt;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckGaldMaxNum
struct UBP_PF_FunctionLibrary_C_CheckGaldMaxNum_Params
{
	int                                                AddGald;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GetIt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LostNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckGaldNum
struct UBP_PF_FunctionLibrary_C_CheckGaldNum_Params
{
	int                                                Gald;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HaveIt;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideReward
struct UBP_PF_FunctionLibrary_C_GetQuestGuideReward_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GetIt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             LearningAlias;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.DuplicateNPCActor
struct UBP_PF_FunctionLibrary_C_DuplicateNPCActor_Params
{
	class AActor*                                      DestinationActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.PF_OpenShopMenu
struct UBP_PF_FunctionLibrary_C_PF_OpenShopMenu_Params
{
	struct FString                                     ShopID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetMenuManager
struct UBP_PF_FunctionLibrary_C_GetMenuManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ATO14_BP_MenuManagerBase_C*                  MenuManager;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.PF_OpenMenu
struct UBP_PF_FunctionLibrary_C_PF_OpenMenu_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MakeQuestGuideStepNameByString
struct UBP_PF_FunctionLibrary_C_MakeQuestGuideStepNameByString_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     QuestStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideStepFlagByString
struct UBP_PF_FunctionLibrary_C_SetQuestGuideStepFlagByString_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     QuestStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     QuestFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Valid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideStepFlagByString
struct UBP_PF_FunctionLibrary_C_GetQuestGuideStepFlagByString_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                QuestStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDE_PF_Script_QuestFlag>               QuestFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetNPCActorFromID
struct UBP_PF_FunctionLibrary_C_GetNPCActorFromID_Params
{
	struct FString                                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NpcActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckItemMaxNum
struct UBP_PF_FunctionLibrary_C_CheckItemMaxNum_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCategory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GetIt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LostNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetItemId
struct UBP_PF_FunctionLibrary_C_GetItemId_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetItemMaxNum
struct UBP_PF_FunctionLibrary_C_GetItemMaxNum_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNum;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestRewardItem
struct UBP_PF_FunctionLibrary_C_GetQuestRewardItem_Params
{
	struct FString                                     RewardItemLabel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GetIt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.CheckItemNum
struct UBP_PF_FunctionLibrary_C_CheckItemNum_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HaveIt;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.AddUserItemNum
struct UBP_PF_FunctionLibrary_C_AddUserItemNum_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                AddNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAccessorySkillRandom;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetUserItemNum
struct UBP_PF_FunctionLibrary_C_GetUserItemNum_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackIn
struct UBP_PF_FunctionLibrary_C_BlackIn_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.BlackOut
struct UBP_PF_FunctionLibrary_C_BlackOut_Params
{
	TEnumAsByte<EVisualFadeLayer>                      Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MapJump
struct UBP_PF_FunctionLibrary_C_MapJump_Params
{
	struct FString                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ChangeScenarioFlag;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetNPCActor
struct UBP_PF_FunctionLibrary_C_GetNPCActor_Params
{
	struct FString                                     NpcName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NpcActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SeparateTimeMinutes
struct UBP_PF_FunctionLibrary_C_SeparateTimeMinutes_Params
{
	int                                                Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDT_PF_ScriptTime                           Time;                                                     // (Parm, OutParm)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.IsTimeElapsed
struct UBP_PF_FunctionLibrary_C_IsTimeElapsed_Params
{
	int                                                Timestamp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                elapsedDay;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                elapsedHour;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ElapsedMinute;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bElapsed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetTimeStamp
struct UBP_PF_FunctionLibrary_C_GetTimeStamp_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Timestamp;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetTimeToMinutes
struct UBP_PF_FunctionLibrary_C_GetTimeToMinutes_Params
{
	struct FDT_PF_ScriptTime                           Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetTimeElapsedMinutes
struct UBP_PF_FunctionLibrary_C_GetTimeElapsedMinutes_Params
{
	int                                                Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ElapsedMinutes;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetExcludeStringArray
struct UBP_PF_FunctionLibrary_C_GetExcludeStringArray_Params
{
	TArray<struct FString>                             Selects;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        ExcludeIndexs;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             NewSelects;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Indices;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetDictionaryModifiedTextArray
struct UBP_PF_FunctionLibrary_C_GetDictionaryModifiedTextArray_Params
{
	struct FString                                     Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             IDs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FModifiedText>                       ModifiedTextArray;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetDictionaryModifiedText
struct UBP_PF_FunctionLibrary_C_GetDictionaryModifiedText_Params
{
	struct FString                                     Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ModifiedText;                                             // (Parm, OutParm)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetExcludeIndexArray
struct UBP_PF_FunctionLibrary_C_GetExcludeIndexArray_Params
{
	TArray<int>                                        Selects;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        ExcludeIndexs;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        NewSelects;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Indices;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetPFScriptComponent
struct UBP_PF_FunctionLibrary_C_GetPFScriptComponent_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAriseScriptComponent*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideStepFlagByID
struct UBP_PF_FunctionLibrary_C_GetQuestGuideStepFlagByID_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                QuestStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDE_PF_Script_QuestFlag>               QuestFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideStepFlagByID
struct UBP_PF_FunctionLibrary_C_SetQuestGuideStepFlagByID_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                QuestStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDE_PF_Script_QuestFlag>               QuestFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGuideUpdate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MakeQuestGuideStepName
struct UBP_PF_FunctionLibrary_C_MakeQuestGuideStepName_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                QuestStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.GetQuestGuideFlagByID
struct UBP_PF_FunctionLibrary_C_GetQuestGuideFlagByID_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EDE_PF_Script_QuestFlag>               QuestFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.MakeQuestGuideFlagSuffixName
struct UBP_PF_FunctionLibrary_C_MakeQuestGuideFlagSuffixName_Params
{
	TEnumAsByte<EDE_PF_Script_QuestFlag>               QuestFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_FunctionLibrary.BP_PF_FunctionLibrary_C.SetQuestGuideFlagByID
struct UBP_PF_FunctionLibrary_C_SetQuestGuideFlagByID_Params
{
	struct FQuestID                                    QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EDE_PF_Script_QuestFlag>               QuestFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
