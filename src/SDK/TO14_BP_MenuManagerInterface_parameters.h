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

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.ResetMenuArenaSelect
struct UTO14_BP_MenuManagerInterface_C_ResetMenuArenaSelect_Params
{
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CallOnCookingEvent
struct UTO14_BP_MenuManagerInterface_C_CallOnCookingEvent_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCookingEvent
struct UTO14_BP_MenuManagerInterface_C_UnbindOnCookingEvent_Params
{
	struct FAriseCookingEventData                      Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCookingEvent
struct UTO14_BP_MenuManagerInterface_C_BindOnCookingEvent_Params
{
	struct FAriseCookingEventData                      Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetIcnMnuAnimInterface
struct UTO14_BP_MenuManagerInterface_C_GetIcnMnuAnimInterface_Params
{
	TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C> Interface;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.NotifyOnChangeEquipment
struct UTO14_BP_MenuManagerInterface_C_NotifyOnChangeEquipment_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetBtlControlChara
struct UTO14_BP_MenuManagerInterface_C_GetBtlControlChara_Params
{
	EArisePartyID                                      NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetVisibilityHeaderWidget
struct UTO14_BP_MenuManagerInterface_C_SetVisibilityHeaderWidget_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetBtlUsetItemID
struct UTO14_BP_MenuManagerInterface_C_SetBtlUsetItemID_Params
{
	struct FString                                     ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetIsNewGameStart
struct UTO14_BP_MenuManagerInterface_C_GetIsNewGameStart_Params
{
	bool                                               IsNewGameStart;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetIsNewGameStart
struct UTO14_BP_MenuManagerInterface_C_SetIsNewGameStart_Params
{
	bool                                               bIsNewGameStart;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetNextSceneID
struct UTO14_BP_MenuManagerInterface_C_GetNextSceneID_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderNameTopMenu
struct UTO14_BP_MenuManagerInterface_C_SetHeaderNameTopMenu_Params
{
	struct FString                                     InMenuID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FDictionaryText                             InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetSaveDataLoaded
struct UTO14_BP_MenuManagerInterface_C_SetSaveDataLoaded_Params
{
	bool                                               InSaveDataLoaded;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetLoadedSlot
struct UTO14_BP_MenuManagerInterface_C_SetLoadedSlot_Params
{
	int                                                LoadedSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.ShowHelpWidget
struct UTO14_BP_MenuManagerInterface_C_ShowHelpWidget_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowLight
struct UTO14_BP_MenuManagerInterface_C_UnbindOnShowLight_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowLight
struct UTO14_BP_MenuManagerInterface_C_BindOnShowLight_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowTopParticle
struct UTO14_BP_MenuManagerInterface_C_UnbindOnShowTopParticle_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowTopParticle
struct UTO14_BP_MenuManagerInterface_C_BindOnShowTopParticle_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowCaptureBG
struct UTO14_BP_MenuManagerInterface_C_UnbindOnShowCaptureBG_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowCaptureBG
struct UTO14_BP_MenuManagerInterface_C_BindOnShowCaptureBG_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowLevelHeader
struct UTO14_BP_MenuManagerInterface_C_UnbindOnShowLevelHeader_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowLevelHeader
struct UTO14_BP_MenuManagerInterface_C_BindOnShowLevelHeader_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnLevelActivate
struct UTO14_BP_MenuManagerInterface_C_UnbindOnLevelActivate_Params
{
	struct FOnMenuLevelActivate                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnLevelActivate
struct UTO14_BP_MenuManagerInterface_C_BindOnLevelActivate_Params
{
	struct FOnMenuLevelActivate                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetCurrentMenuData
struct UTO14_BP_MenuManagerInterface_C_GetCurrentMenuData_Params
{
	struct FMenuData                                   CurrentMenuData;                                          // (Parm, OutParm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderWidget3D
struct UTO14_BP_MenuManagerInterface_C_SetHeaderWidget3D_Params
{
	class UUserWidget*                                 HeaderWidget3D;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderActor
struct UTO14_BP_MenuManagerInterface_C_SetHeaderActor_Params
{
	class AActor*                                      HeaderActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderIcon
struct UTO14_BP_MenuManagerInterface_C_SetHeaderIcon_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               WithAnimation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetShowAlias
struct UTO14_BP_MenuManagerInterface_C_GetShowAlias_Params
{
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetHelpWidget
struct UTO14_BP_MenuManagerInterface_C_GetHelpWidget_Params
{
	class UUserWidget*                                 HelpWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetQuestID
struct UTO14_BP_MenuManagerInterface_C_GetQuestID_Params
{
	struct FString                                     QuestID;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.Close
struct UTO14_BP_MenuManagerInterface_C_Close_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetOpenMapLocation
struct UTO14_BP_MenuManagerInterface_C_GetOpenMapLocation_Params
{
	struct FString                                     OpenMapLocation;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetOpenMapLocationSecondary
struct UTO14_BP_MenuManagerInterface_C_GetOpenMapLocationSecondary_Params
{
	struct FString                                     OpenMapLocationSecondary;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetQuestIDSecondary
struct UTO14_BP_MenuManagerInterface_C_GetQuestIDSecondary_Params
{
	struct FString                                     QuestIDSecondary;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CallGetBackMenuID
struct UTO14_BP_MenuManagerInterface_C_CallGetBackMenuID_Params
{
	struct FString                                     MenuID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetOpenMapLocationSecondary
struct UTO14_BP_MenuManagerInterface_C_SetOpenMapLocationSecondary_Params
{
	struct FString                                     OpenMapLocationSecondary;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetOpenMapLocation
struct UTO14_BP_MenuManagerInterface_C_SetOpenMapLocation_Params
{
	struct FString                                     OpenMapLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetQuestIDSecondary
struct UTO14_BP_MenuManagerInterface_C_SetQuestIDSecondary_Params
{
	struct FString                                     QuestIDSecondary;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetQuestID
struct UTO14_BP_MenuManagerInterface_C_SetQuestID_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CheckPrevMenuCount
struct UTO14_BP_MenuManagerInterface_C_CheckPrevMenuCount_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetPadProcess
struct UTO14_BP_MenuManagerInterface_C_GetPadProcess_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.PrepareToCloseView
struct UTO14_BP_MenuManagerInterface_C_PrepareToCloseView_Params
{
	struct FString                                     NextMenuID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetShowAlias
struct UTO14_BP_MenuManagerInterface_C_SetShowAlias_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHelpID
struct UTO14_BP_MenuManagerInterface_C_SetHelpID_Params
{
	struct FString                                     HelpID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnChangeTopBG
struct UTO14_BP_MenuManagerInterface_C_UnbindOnChangeTopBG_Params
{
	struct FOnMenuChangeTopBGEventData                 Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnChangeTopBG
struct UTO14_BP_MenuManagerInterface_C_BindOnChangeTopBG_Params
{
	struct FOnMenuChangeTopBGEventData                 Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowTopBG
struct UTO14_BP_MenuManagerInterface_C_UnbindOnShowTopBG_Params
{
	struct FOnMenuShowTopBGEventData                   Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowTopBG
struct UTO14_BP_MenuManagerInterface_C_BindOnShowTopBG_Params
{
	struct FOnMenuShowTopBGEventData                   Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetMenuBGType
struct UTO14_BP_MenuManagerInterface_C_GetMenuBGType_Params
{
	EMenuBGType                                        BGType;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetExternalHelpInnerWidget
struct UTO14_BP_MenuManagerInterface_C_SetExternalHelpInnerWidget_Params
{
	class UUserWidget*                                 HelpInnerWidget;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetPrevSceneCount
struct UTO14_BP_MenuManagerInterface_C_GetPrevSceneCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CheckIsClose
struct UTO14_BP_MenuManagerInterface_C_CheckIsClose_Params
{
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.Open
struct UTO14_BP_MenuManagerInterface_C_Open_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class APlayerController*                           OwnerPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideCapture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetShopID
struct UTO14_BP_MenuManagerInterface_C_GetShopID_Params
{
	struct FString                                     ShopID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.IsAllowInputChangeMenu
struct UTO14_BP_MenuManagerInterface_C_IsAllowInputChangeMenu_Params
{
	bool                                               bAllow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHelp
struct UTO14_BP_MenuManagerInterface_C_SetHelp_Params
{
	struct FString                                     HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.FadeInForLevel
struct UTO14_BP_MenuManagerInterface_C_FadeInForLevel_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.FadeOutForLevel
struct UTO14_BP_MenuManagerInterface_C_FadeOutForLevel_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetBattleMenuParam
struct UTO14_BP_MenuManagerInterface_C_SetBattleMenuParam_Params
{
	struct FBattleMenuParam                            BattleMenuParam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetBattleMenuParam
struct UTO14_BP_MenuManagerInterface_C_GetBattleMenuParam_Params
{
	struct FBattleMenuParam                            BattleMenuParam;                                          // (Parm, OutParm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetBtlItemID
struct UTO14_BP_MenuManagerInterface_C_GetBtlItemID_Params
{
	struct FString                                     BtlItemID;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.ForceFinalize
struct UTO14_BP_MenuManagerInterface_C_ForceFinalize_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetCurrentMenuID
struct UTO14_BP_MenuManagerInterface_C_GetCurrentMenuID_Params
{
	struct FString                                     MenuID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.IsTutorialState
struct UTO14_BP_MenuManagerInterface_C_IsTutorialState_Params
{
	bool                                               bTutorialState;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CheckAndExecCurrentMenuTutorial
struct UTO14_BP_MenuManagerInterface_C_CheckAndExecCurrentMenuTutorial_Params
{
	bool                                               bExecTutorial;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCloseEndEvent
struct UTO14_BP_MenuManagerInterface_C_UnbindOnCloseEndEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCloseEndEvent
struct UTO14_BP_MenuManagerInterface_C_BindOnCloseEndEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnOpenEndEvent
struct UTO14_BP_MenuManagerInterface_C_UnbindOnOpenEndEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnOpenEndEvent
struct UTO14_BP_MenuManagerInterface_C_BindOnOpenEndEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCloseViewStartEvent
struct UTO14_BP_MenuManagerInterface_C_UnbindOnCloseViewStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCloseViewStartEvent
struct UTO14_BP_MenuManagerInterface_C_BindOnCloseViewStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnChangeEquipmentEvent
struct UTO14_BP_MenuManagerInterface_C_UnbindOnChangeEquipmentEvent_Params
{
	struct FAriseCharaEventData                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnChangeEquipmentEvent
struct UTO14_BP_MenuManagerInterface_C_BindOnChangeEquipmentEvent_Params
{
	struct FAriseCharaEventData                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCloseStartEvent
struct UTO14_BP_MenuManagerInterface_C_UnbindOnCloseStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCloseStartEvent
struct UTO14_BP_MenuManagerInterface_C_BindOnCloseStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnOpenStartEvent
struct UTO14_BP_MenuManagerInterface_C_UnbindOnOpenStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnOpenStartEvent
struct UTO14_BP_MenuManagerInterface_C_BindOnOpenStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetMenuResult
struct UTO14_BP_MenuManagerInterface_C_GetMenuResult_Params
{
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.RestoreInheritFlags
struct UTO14_BP_MenuManagerInterface_C_RestoreInheritFlags_Params
{
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetLoadedSlot
struct UTO14_BP_MenuManagerInterface_C_GetLoadedSlot_Params
{
	int                                                OutLoadedSlot;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.IsSaveDataLoaded
struct UTO14_BP_MenuManagerInterface_C_IsSaveDataLoaded_Params
{
	bool                                               OutSaveDataLoaded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
