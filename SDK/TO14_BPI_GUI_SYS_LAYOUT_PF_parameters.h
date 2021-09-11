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

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.RestructTutorialKeyButtonIconAll
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_RestructTutorialKeyButtonIconAll_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.CallIsPFHelpUIOpenCheck
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_CallIsPFHelpUIOpenCheck_Params
{
	bool                                               OutIsOpen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.AbortShortChat
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_AbortShortChat_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ClearShortChat
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ClearShortChat_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.IsShowCPAction
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_IsShowCPAction_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.IsShowPFUIHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_IsShowPFUIHelp_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.IsShowLongChatInfo
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_IsShowLongChatInfo_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.IsShowNextMapName
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_IsShowNextMapName_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.IsShowInfoOptionCheck
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_IsShowInfoOptionCheck_Params
{
	EOption                                            Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.IsPlayableHelpButtonShow
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_IsPlayableHelpButtonShow_Params
{
	bool                                               IsShow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.GetShownPlayableHelpLabel
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_GetShownPlayableHelpLabel_Params
{
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowSubQuest
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowSubQuest_Params
{
	struct FModifiedText                               Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               OldName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.HideKeyHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_HideKeyHelp_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowKeyHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowKeyHelp_Params
{
	TEnumAsByte<EKeyHelpMode>                          Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.HidePlayableHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_HidePlayableHelp_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowPlayableHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowPlayableHelp_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsShowButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CachedLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.CloseShortChat
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_CloseShortChat_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.PlayShortChat
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_PlayShortChat_Params
{
	EAriseCharaIconID                                  CharaIconID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowLocation
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowLocation_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.HideActInfo
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_HideActInfo_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowActInfo
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowActInfo_Params
{
	struct FModifiedText                               Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ButtonLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCPPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.HideNextMapName
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_HideNextMapName_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowNextMapName
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowNextMapName_Params
{
	struct FModifiedText                               MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowMainQuest
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowMainQuest_Params
{
	struct FModifiedText                               Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               OldName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowMainQuest2
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowMainQuest2_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.UpdateKeyHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_UpdateKeyHelp_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.SetLongChatManager
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_SetLongChatManager_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.SetPastStoryRenderOpacity
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_SetPastStoryRenderOpacity_Params
{
	float                                              InOpacity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.PastStoryChangeRefresh
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_PastStoryChangeRefresh_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.IsPastStory
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_IsPastStory_Params
{
	bool                                               OutIsPastStory;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowPastStoryUI
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowPastStoryUI_Params
{
	bool                                               InIsPastStory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.EventOnTP
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_EventOnTP_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.IsPFHelpUICloseCheck
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_IsPFHelpUICloseCheck_Params
{
	bool                                               OutIsClose;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.IsPFHelpUIOpenCheck
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_IsPFHelpUIOpenCheck_Params
{
	bool                                               OutIsOpen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.IsTPGaugeUpdateCheck
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_IsTPGaugeUpdateCheck_Params
{
	bool                                               OutIsUpdate;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.SetTPGaugeParam
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_SetTPGaugeParam_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowKeyHelpCheck
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowKeyHelpCheck_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ChangedSceneCheck
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ChangedSceneCheck_Params
{
	EAriseGameScene                                    InChangedScene;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAriseGameScene                                    InOldChangedScene;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.UpdatePlayableHelp
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_UpdatePlayableHelp_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ShowPlayableHelpCheck
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ShowPlayableHelpCheck_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.RefreshParts
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_RefreshParts_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.PFUIHelpRefresh
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_PFUIHelpRefresh_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.UpdateLongChat
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_UpdateLongChat_Params
{
	bool                                               InIsHelpInput;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.UpdateTPGauge
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_UpdateTPGauge_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.UpdatePFUIHelpUIChange
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_UpdatePFUIHelpUIChange_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.Open
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_Open_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.Close
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_Close_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.Update
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_Update_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.OnLocationChange
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_OnLocationChange_Params
{
	struct FString                                     NewLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldLocatiojnName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.AddLogGetOwl
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_AddLogGetOwl_Params
{
	struct FString                                     InActorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.OnMapChange
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_OnMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.SetLongChatSubtitle
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_SetLongChatSubtitle_Params
{
	class UAriseTextWidget*                            AriseText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LongchatName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.EventOnHide
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_EventOnHide_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.AnimaCloseFinished
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_AnimaCloseFinished_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.AnimaOpenStart
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_AnimaOpenStart_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.Refresh
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.CustomEvent_2
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_CustomEvent_2_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.GetOwl
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_GetOwl_Params
{
	struct FString                                     InActorID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.CustomEvent_1
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_CustomEvent_1_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.OnFastTravelPointOpen
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_OnFastTravelPointOpen_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.EventOnShow
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_EventOnShow_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.OnChangeLocation
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_OnChangeLocation_Params
{
	struct FString                                     NewLocationName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ChangeScene
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ChangeScene_Params
{
	unsigned char                                      ChangedScene;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldScene;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.Tick
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.Construct
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.PFUI_InitializeLongChatManager
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_PFUI_InitializeLongChatManager_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.OnChangeLongChatList
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_OnChangeLongChatList_Params
{
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.񣌘򠳾񍯐�0�0_1
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_񣌘򠳾񍯐�0�0_1_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LAYOUT_PF
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_LAYOUT_PF_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_LAYOUT_PF.TO14_BPI_GUI_SYS_LAYOUT_PF_C.EventScenarioObjectChange__DelegateSignature
struct UTO14_BPI_GUI_SYS_LAYOUT_PF_C_EventScenarioObjectChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
