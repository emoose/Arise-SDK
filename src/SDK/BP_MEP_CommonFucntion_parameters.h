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

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.SetWorldTimePause
struct UBP_MEP_CommonFucntion_C_SetWorldTimePause_Params
{
	bool                                               newPause;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.GetQuestGuideClearCount
struct UBP_MEP_CommonFucntion_C_GetQuestGuideClearCount_Params
{
	struct FQuestID                                    Quest_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.QuestGuideReorder
struct UBP_MEP_CommonFucntion_C_QuestGuideReorder_Params
{
	struct FQuestID                                    Quest_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.ShowPlayableHelpWindow(XmlLabel)
struct UBP_MEP_CommonFucntion_C_ShowPlayableHelpWindow_XmlLabel__Params
{
	struct FCollectionHelp_XmlDatabaseLabel            HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.ShowPlayableHelpWindowDuration
struct UBP_MEP_CommonFucntion_C_ShowPlayableHelpWindowDuration_Params
{
	struct FString                                     InHelpLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              InDuration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.SetWorldTime
struct UBP_MEP_CommonFucntion_C_SetWorldTime_Params
{
	float                                              newTimeHour;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.ShowPlayableHelpWindow
struct UBP_MEP_CommonFucntion_C_ShowPlayableHelpWindow_Params
{
	struct FString                                     HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.GetAlias
struct UBP_MEP_CommonFucntion_C_GetAlias_Params
{
	struct FString                                     AliasName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.IsQuestGuideOpened
struct UBP_MEP_CommonFucntion_C_IsQuestGuideOpened_Params
{
	struct FQuestID                                    Quest_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClear;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.IsQuestGuideCleared
struct UBP_MEP_CommonFucntion_C_IsQuestGuideCleared_Params
{
	struct FQuestID                                    Quest_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClear;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.QuestGuideStart
struct UBP_MEP_CommonFucntion_C_QuestGuideStart_Params
{
	struct FQuestID                                    Quest_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.QuestGuideStep
struct UBP_MEP_CommonFucntion_C_QuestGuideStep_Params
{
	struct FQuestID                                    Quest_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Clear_Step;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGuideOpen;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MEP_CommonFucntion.BP_MEP_CommonFucntion_C.GetItemEquipmentPlayer
struct UBP_MEP_CommonFucntion_C_GetItemEquipmentPlayer_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
