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

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsPFHelpUIOpenCheck
struct UBP_PF_HUD_Library_C_PF_HUD_IsPFHelpUIOpenCheck_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsOpen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_GetDefaultShow
struct UBP_PF_HUD_Library_C_PF_HUD_GetDefaultShow_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       IsDefaultShow;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_Hide
struct UBP_PF_HUD_Library_C_PF_HUD_Hide_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPF_HUD_ManagerNative
struct UBP_PF_HUD_Library_C_GetPF_HUD_ManagerNative_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APF_HUD_Manager*                             OutBP_PF_HUD;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPF_HUD_ManagerInterface
struct UBP_PF_HUD_Library_C_GetPF_HUD_ManagerInterface_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBP_PF_HUD_Interface_C>     OutBP_PF_HUD;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AbortShortChat
struct UBP_PF_HUD_Library_C_PF_HUD_AbortShortChat_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowPFUIHelp
struct UBP_PF_HUD_Library_C_PF_HUD_IsShowPFUIHelp_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ClearShortChat
struct UBP_PF_HUD_Library_C_PF_HUD_ClearShortChat_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowCPAction
struct UBP_PF_HUD_Library_C_PF_HUD_IsShowCPAction_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowLongChatInfo
struct UBP_PF_HUD_Library_C_PF_HUD_IsShowLongChatInfo_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPF_HUD_LayoutInterface
struct UBP_PF_HUD_Library_C_GetPF_HUD_LayoutInterface_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C> PF_Layout;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsShowNextMapName?
struct UBP_PF_HUD_Library_C_PF_HUD_IsShowNextMapName__Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogFarmLivestockHarvest
struct UBP_PF_HUD_Library_C_PF_HUD_AddLogFarmLivestockHarvest_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_IsPlayableHelpButtonShow
struct UBP_PF_HUD_Library_C_PF_HUD_IsPlayableHelpButtonShow_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_GetShownPlayableHelpLabel
struct UBP_PF_HUD_Library_C_PF_HUD_GetShownPlayableHelpLabel_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetNewsInfoManager
struct UBP_PF_HUD_Library_C_GetNewsInfoManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UNewsInfoManager*                            Manager;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowSubQuest
struct UBP_PF_HUD_Library_C_PF_HUD_ShowSubQuest_Params
{
	struct FModifiedText                               Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               OldName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_Refresh
struct UBP_PF_HUD_Library_C_PF_HUD_Refresh_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.DbPrintHelpSaveStatus
struct UBP_PF_HUD_Library_C_DbPrintHelpSaveStatus_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowPlayableHelpByLabel
struct UBP_PF_HUD_Library_C_PF_HUD_ShowPlayableHelpByLabel_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ChangeUIControl
struct UBP_PF_HUD_Library_C_PF_HUD_ChangeUIControl_Params
{
	EPFUIPattern                                       InPFUIPattern;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsChangeLock;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogFoodEffectEnd
struct UBP_PF_HUD_Library_C_PF_HUD_AddLogFoodEffectEnd_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowTPAnimation
struct UBP_PF_HUD_Library_C_PF_HUD_ShowTPAnimation_Params
{
	float                                              Old;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              New;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetNavimapFootprintManager
struct UBP_PF_HUD_Library_C_GetNavimapFootprintManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UNavimapFootprintManager*                    Manager;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HideKeyHelp
struct UBP_PF_HUD_Library_C_PF_HUD_HideKeyHelp_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowKeyHelp
struct UBP_PF_HUD_Library_C_PF_HUD_ShowKeyHelp_Params
{
	TEnumAsByte<EKeyHelpMode>                          Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HidePlayableHelp
struct UBP_PF_HUD_Library_C_PF_HUD_HidePlayableHelp_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowPlayableHelp
struct UBP_PF_HUD_Library_C_PF_HUD_ShowPlayableHelp_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsShowButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CachedLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_CloseShortChat
struct UBP_PF_HUD_Library_C_PF_HUD_CloseShortChat_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_PlayShortChat
struct UBP_PF_HUD_Library_C_PF_HUD_PlayShortChat_Params
{
	EAriseCharaIconID                                  CharaIconID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogQuestDefeatEnemy
struct UBP_PF_HUD_Library_C_PF_HUD_AddLogQuestDefeatEnemy_Params
{
	struct FName                                       EnemyID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogFastTravelEnabled
struct UBP_PF_HUD_Library_C_PF_HUD_AddLogFastTravelEnabled_Params
{
	struct FString                                     LocatorName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogQuestGetItem
struct UBP_PF_HUD_Library_C_PF_HUD_AddLogQuestGetItem_Params
{
	struct FString                                     ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowLocation
struct UBP_PF_HUD_Library_C_PF_HUD_ShowLocation_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldLocatiojnName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddMainQuestUpdate
struct UBP_PF_HUD_Library_C_PF_HUD_AddMainQuestUpdate_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OldQuestID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                OldStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.GetPopupInfoManager
struct UBP_PF_HUD_Library_C_GetPopupInfoManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPopupInfoManager*                           Manager;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HideActInfo
struct UBP_PF_HUD_Library_C_PF_HUD_HideActInfo_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowActInfo
struct UBP_PF_HUD_Library_C_PF_HUD_ShowActInfo_Params
{
	struct FModifiedText                               Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ButtonLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCPPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_HideNextMapName
struct UBP_PF_HUD_Library_C_PF_HUD_HideNextMapName_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowNextMapName
struct UBP_PF_HUD_Library_C_PF_HUD_ShowNextMapName_Params
{
	struct FModifiedText                               MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogQuestStepUpdate
struct UBP_PF_HUD_Library_C_PF_HUD_AddLogQuestStepUpdate_Params
{
	struct FModifiedText                               Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_ShowMainQuest
struct UBP_PF_HUD_Library_C_PF_HUD_ShowMainQuest_Params
{
	struct FModifiedText                               Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               OldName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddQuestUpdate
struct UBP_PF_HUD_Library_C_PF_HUD_AddQuestUpdate_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogGetItem
struct UBP_PF_HUD_Library_C_PF_HUD_AddLogGetItem_Params
{
	struct FString                                     ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOption                                            InLogOption;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Library.BP_PF_HUD_Library_C.PF_HUD_AddLogMessageBase
struct UBP_PF_HUD_Library_C_PF_HUD_AddLogMessageBase_Params
{
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETO14_ImageType>                       inImageType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                inImageID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                inRarity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOption                                            InOption;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
