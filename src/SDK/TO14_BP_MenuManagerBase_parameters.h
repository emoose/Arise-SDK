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

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetIcnMnuAnimInterface
struct ATO14_BP_MenuManagerBase_C_GetIcnMnuAnimInterface_Params
{
	TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C> Interface;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBtlControlChara
struct ATO14_BP_MenuManagerBase_C_GetBtlControlChara_Params
{
	EArisePartyID                                      NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetVisibilityHeaderWidget
struct ATO14_BP_MenuManagerBase_C_SetVisibilityHeaderWidget_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBtlUsetItemID
struct ATO14_BP_MenuManagerBase_C_SetBtlUsetItemID_Params
{
	struct FString                                     ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetIsNewGameStart
struct ATO14_BP_MenuManagerBase_C_GetIsNewGameStart_Params
{
	bool                                               IsNewGameStart;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetIsNewGameStart
struct ATO14_BP_MenuManagerBase_C_SetIsNewGameStart_Params
{
	bool                                               bIsNewGameStart;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetNextSceneID
struct ATO14_BP_MenuManagerBase_C_GetNextSceneID_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderNameTopMenu
struct ATO14_BP_MenuManagerBase_C_SetHeaderNameTopMenu_Params
{
	struct FString                                     InMenuID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FDictionaryText                             InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetSaveDataLoaded
struct ATO14_BP_MenuManagerBase_C_SetSaveDataLoaded_Params
{
	bool                                               InSaveDataLoaded;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetLoadedSlot
struct ATO14_BP_MenuManagerBase_C_SetLoadedSlot_Params
{
	int                                                LoadedSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowHelpWidget
struct ATO14_BP_MenuManagerBase_C_ShowHelpWidget_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetCurrentMenuData
struct ATO14_BP_MenuManagerBase_C_GetCurrentMenuData_Params
{
	struct FMenuData                                   CurrentMenuData;                                          // (Parm, OutParm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderWidget3D
struct ATO14_BP_MenuManagerBase_C_SetHeaderWidget3D_Params
{
	class UUserWidget*                                 HeaderWidget3D;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderActor
struct ATO14_BP_MenuManagerBase_C_SetHeaderActor_Params
{
	class AActor*                                      HeaderActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderIcon
struct ATO14_BP_MenuManagerBase_C_SetHeaderIcon_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               WithAnimation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetShowAlias
struct ATO14_BP_MenuManagerBase_C_GetShowAlias_Params
{
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetHelpWidget
struct ATO14_BP_MenuManagerBase_C_GetHelpWidget_Params
{
	class UUserWidget*                                 HelpWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetQuestID
struct ATO14_BP_MenuManagerBase_C_GetQuestID_Params
{
	struct FString                                     QuestID;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Close
struct ATO14_BP_MenuManagerBase_C_Close_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetOpenMapLocation
struct ATO14_BP_MenuManagerBase_C_GetOpenMapLocation_Params
{
	struct FString                                     OpenMapLocation;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetOpenMapLocationSecondary
struct ATO14_BP_MenuManagerBase_C_GetOpenMapLocationSecondary_Params
{
	struct FString                                     OpenMapLocationSecondary;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetQuestIDSecondary
struct ATO14_BP_MenuManagerBase_C_GetQuestIDSecondary_Params
{
	struct FString                                     QuestIDSecondary;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CallGetBackMenuID
struct ATO14_BP_MenuManagerBase_C_CallGetBackMenuID_Params
{
	struct FString                                     MenuID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetOpenMapLocationSecondary
struct ATO14_BP_MenuManagerBase_C_SetOpenMapLocationSecondary_Params
{
	struct FString                                     OpenMapLocationSecondary;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetOpenMapLocation
struct ATO14_BP_MenuManagerBase_C_SetOpenMapLocation_Params
{
	struct FString                                     OpenMapLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetQuestIDSecondary
struct ATO14_BP_MenuManagerBase_C_SetQuestIDSecondary_Params
{
	struct FString                                     QuestIDSecondary;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetQuestID
struct ATO14_BP_MenuManagerBase_C_SetQuestID_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckPrevMenuCount
struct ATO14_BP_MenuManagerBase_C_CheckPrevMenuCount_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetPadProcess
struct ATO14_BP_MenuManagerBase_C_GetPadProcess_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.PrepareToCloseView
struct ATO14_BP_MenuManagerBase_C_PrepareToCloseView_Params
{
	struct FString                                     NextMenuID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetShowAlias
struct ATO14_BP_MenuManagerBase_C_SetShowAlias_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHelpID
struct ATO14_BP_MenuManagerBase_C_SetHelpID_Params
{
	struct FString                                     HelpID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetMenuBGType
struct ATO14_BP_MenuManagerBase_C_GetMenuBGType_Params
{
	EMenuBGType                                        BGType;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetExternalHelpInnerWidget
struct ATO14_BP_MenuManagerBase_C_SetExternalHelpInnerWidget_Params
{
	class UUserWidget*                                 HelpInnerWidget;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetPrevSceneCount
struct ATO14_BP_MenuManagerBase_C_GetPrevSceneCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckIsClose
struct ATO14_BP_MenuManagerBase_C_CheckIsClose_Params
{
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Open
struct ATO14_BP_MenuManagerBase_C_Open_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class APlayerController*                           OwnerPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideCapture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetShopID
struct ATO14_BP_MenuManagerBase_C_GetShopID_Params
{
	struct FString                                     ShopID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsAllowInputChangeMenu
struct ATO14_BP_MenuManagerBase_C_IsAllowInputChangeMenu_Params
{
	bool                                               bAllow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHelp
struct ATO14_BP_MenuManagerBase_C_SetHelp_Params
{
	struct FString                                     HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FadeInForLevel
struct ATO14_BP_MenuManagerBase_C_FadeInForLevel_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FadeOutForLevel
struct ATO14_BP_MenuManagerBase_C_FadeOutForLevel_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBattleMenuParam
struct ATO14_BP_MenuManagerBase_C_SetBattleMenuParam_Params
{
	struct FBattleMenuParam                            BattleMenuParam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBattleMenuParam
struct ATO14_BP_MenuManagerBase_C_GetBattleMenuParam_Params
{
	struct FBattleMenuParam                            BattleMenuParam;                                          // (Parm, OutParm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBtlItemID
struct ATO14_BP_MenuManagerBase_C_GetBtlItemID_Params
{
	struct FString                                     BtlItemID;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ForceFinalize
struct ATO14_BP_MenuManagerBase_C_ForceFinalize_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetCurrentMenuID
struct ATO14_BP_MenuManagerBase_C_GetCurrentMenuID_Params
{
	struct FString                                     MenuID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsTutorialState
struct ATO14_BP_MenuManagerBase_C_IsTutorialState_Params
{
	bool                                               bTutorialState;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckAndExecCurrentMenuTutorial
struct ATO14_BP_MenuManagerBase_C_CheckAndExecCurrentMenuTutorial_Params
{
	bool                                               bExecTutorial;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetMenuResult
struct ATO14_BP_MenuManagerBase_C_GetMenuResult_Params
{
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetLoadedSlot
struct ATO14_BP_MenuManagerBase_C_GetLoadedSlot_Params
{
	int                                                OutLoadedSlot;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsSaveDataLoaded
struct ATO14_BP_MenuManagerBase_C_IsSaveDataLoaded_Params
{
	bool                                               OutSaveDataLoaded;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsLoadStatusImage
struct ATO14_BP_MenuManagerBase_C_IsLoadStatusImage_Params
{
	bool                                               Loaded1;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnloadStatusImage
struct ATO14_BP_MenuManagerBase_C_UnloadStatusImage_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.PreloadStatusImage
struct ATO14_BP_MenuManagerBase_C_PreloadStatusImage_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FinalizeVariables
struct ATO14_BP_MenuManagerBase_C_FinalizeVariables_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.RequestDLCEntitlementCheck
struct ATO14_BP_MenuManagerBase_C_RequestDLCEntitlementCheck_Params
{
	bool                                               bIsNeedDLC_Check;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckDLCEntitlementIfNeed
struct ATO14_BP_MenuManagerBase_C_CheckDLCEntitlementIfNeed_Params
{
	bool                                               OKorNotNeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBGTypeOld
struct ATO14_BP_MenuManagerBase_C_GetBGTypeOld_Params
{
	EMenuBGType                                        BGType;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsDucking
struct ATO14_BP_MenuManagerBase_C_IsDucking_Params
{
	bool                                               IsDucking;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowMapEnvironment
struct ATO14_BP_MenuManagerBase_C_ShowMapEnvironment_Params
{
	bool                                               bNewShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.RestoreMapEnvironment
struct ATO14_BP_MenuManagerBase_C_RestoreMapEnvironment_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.StoreMapEnvironment
struct ATO14_BP_MenuManagerBase_C_StoreMapEnvironment_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBackMenuID
struct ATO14_BP_MenuManagerBase_C_GetBackMenuID_Params
{
	struct FString                                     MenuID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckPrevMenuCountImpl
struct ATO14_BP_MenuManagerBase_C_CheckPrevMenuCountImpl_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBGType
struct ATO14_BP_MenuManagerBase_C_GetBGType_Params
{
	EMenuBGType                                        BGType;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsTitleScene
struct ATO14_BP_MenuManagerBase_C_IsTitleScene_Params
{
	bool                                               OutIsTitle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetShowDomeMesh
struct ATO14_BP_MenuManagerBase_C_SetShowDomeMesh_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetMenuResult
struct ATO14_BP_MenuManagerBase_C_SetMenuResult_Params
{
	struct FString                                     MenuResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Terminate
struct ATO14_BP_MenuManagerBase_C_Terminate_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetTopCharaType
struct ATO14_BP_MenuManagerBase_C_SetTopCharaType_Params
{
	struct FMenuData                                   MenuData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Set3DHeaderVisibility
struct ATO14_BP_MenuManagerBase_C_Set3DHeaderVisibility_Params
{
	bool                                               bNewVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetHeaderWidget
struct ATO14_BP_MenuManagerBase_C_GetHeaderWidget_Params
{
	class UTO14_BP_MenuHeaderBase_C*                   Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BackupInheritFlags
struct ATO14_BP_MenuManagerBase_C_BackupInheritFlags_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateInitialize
struct ATO14_BP_MenuManagerBase_C_UpdateInitialize_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsMenuTransparent
struct ATO14_BP_MenuManagerBase_C_IsMenuTransparent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateInitTutorial
struct ATO14_BP_MenuManagerBase_C_UpdateInitTutorial_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateTutorial
struct ATO14_BP_MenuManagerBase_C_UpdateTutorial_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ClearTITSettings
struct ATO14_BP_MenuManagerBase_C_ClearTITSettings_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetTITSettings
struct ATO14_BP_MenuManagerBase_C_GetTITSettings_Params
{
	EArisePartyID                                      CharaID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AliasID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetTITSettings
struct ATO14_BP_MenuManagerBase_C_SetTITSettings_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetShowAliasImpl
struct ATO14_BP_MenuManagerBase_C_GetShowAliasImpl_Params
{
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderIconImpl
struct ATO14_BP_MenuManagerBase_C_SetHeaderIconImpl_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               WithAnimation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetCharaOffset
struct ATO14_BP_MenuManagerBase_C_SetCharaOffset_Params
{
	struct FVector2D                                   Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowCharaLevel
struct ATO14_BP_MenuManagerBase_C_ShowCharaLevel_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Open_Delayed
struct ATO14_BP_MenuManagerBase_C_Open_Delayed_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class APlayerController*                           OwnerPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideCapture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_TopFade
struct ATO14_BP_MenuManagerBase_C_WaitEnd_TopFade_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_Help
struct ATO14_BP_MenuManagerBase_C_WaitEnd_Help_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_Capture
struct ATO14_BP_MenuManagerBase_C_WaitEnd_Capture_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd
struct ATO14_BP_MenuManagerBase_C_WaitEnd_Params
{
	EWidgetUse                                         Bit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_Frame
struct ATO14_BP_MenuManagerBase_C_WaitEnd_Frame_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_BtlBG
struct ATO14_BP_MenuManagerBase_C_WaitEnd_BtlBG_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CallCloseAnimations
struct ATO14_BP_MenuManagerBase_C_CallCloseAnimations_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetSCHTRoot
struct ATO14_BP_MenuManagerBase_C_GetSCHTRoot_Params
{
	class UTO14_BPI_GUI_SYS_SCHT_ROOT_C*               Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckHelpMenuID
struct ATO14_BP_MenuManagerBase_C_CheckHelpMenuID_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     HelpMenuID;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateBeforExit
struct ATO14_BP_MenuManagerBase_C_UpdateBeforExit_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.TerminatePauseMenu
struct ATO14_BP_MenuManagerBase_C_TerminatePauseMenu_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OpenPause
struct ATO14_BP_MenuManagerBase_C_OpenPause_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBtlUseMagicArts
struct ATO14_BP_MenuManagerBase_C_SetBtlUseMagicArts_Params
{
	EArisePartyID                                      UseChara;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBtlContrloMode
struct ATO14_BP_MenuManagerBase_C_SetBtlContrloMode_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBtlControlMode
struct ATO14_BP_MenuManagerBase_C_GetBtlControlMode_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnBattleMenuEnd
struct ATO14_BP_MenuManagerBase_C_OnBattleMenuEnd_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.LoadEnd_CharaLevel
struct ATO14_BP_MenuManagerBase_C_LoadEnd_CharaLevel_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnloadEnd_CharaLevel
struct ATO14_BP_MenuManagerBase_C_UnloadEnd_CharaLevel_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnloadCharaLevel
struct ATO14_BP_MenuManagerBase_C_UnloadCharaLevel_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.LoadCharaLevel
struct ATO14_BP_MenuManagerBase_C_LoadCharaLevel_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BlendVector2D
struct ATO14_BP_MenuManagerBase_C_BlendVector2D_Params
{
	struct FVector2D                                   Goal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetNeedFlags
struct ATO14_BP_MenuManagerBase_C_SetNeedFlags_Params
{
	struct FMenuData                                   MenuData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CreateViewWidget
struct ATO14_BP_MenuManagerBase_C_CreateViewWidget_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OpenNext
struct ATO14_BP_MenuManagerBase_C_OpenNext_Params
{
	struct FString                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Initialize
struct ATO14_BP_MenuManagerBase_C_Initialize_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateMain
struct ATO14_BP_MenuManagerBase_C_UpdateMain_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateExitWait
struct ATO14_BP_MenuManagerBase_C_UpdateExitWait_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.DoCapture
struct ATO14_BP_MenuManagerBase_C_DoCapture_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateFinalize
struct ATO14_BP_MenuManagerBase_C_UpdateFinalize_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateLoading
struct ATO14_BP_MenuManagerBase_C_UpdateLoading_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetSceneDepth
struct ATO14_BP_MenuManagerBase_C_GetSceneDepth_Params
{
	int                                                SceneCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsOpen
struct ATO14_BP_MenuManagerBase_C_IsOpen_Params
{
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ReleaseGlobalItem
struct ATO14_BP_MenuManagerBase_C_ReleaseGlobalItem_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CreateGlobalItem
struct ATO14_BP_MenuManagerBase_C_CreateGlobalItem_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.HelpUpdate
struct ATO14_BP_MenuManagerBase_C_HelpUpdate_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BGWork
struct ATO14_BP_MenuManagerBase_C_BGWork_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FinishPad
struct ATO14_BP_MenuManagerBase_C_FinishPad_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.InitPad
struct ATO14_BP_MenuManagerBase_C_InitPad_Params
{
	bool                                               IsCreate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CloseImpl
struct ATO14_BP_MenuManagerBase_C_CloseImpl_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsClose
struct ATO14_BP_MenuManagerBase_C_IsClose_Params
{
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UserConstructionScript
struct ATO14_BP_MenuManagerBase_C_UserConstructionScript_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnOpenStartEvent
struct ATO14_BP_MenuManagerBase_C_BindOnOpenStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnOpenStartEvent
struct ATO14_BP_MenuManagerBase_C_UnbindOnOpenStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCloseStartEvent
struct ATO14_BP_MenuManagerBase_C_BindOnCloseStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCloseStartEvent
struct ATO14_BP_MenuManagerBase_C_UnbindOnCloseStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnChangeEquipmentEvent
struct ATO14_BP_MenuManagerBase_C_BindOnChangeEquipmentEvent_Params
{
	struct FAriseCharaEventData                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnChangeEquipmentEvent
struct ATO14_BP_MenuManagerBase_C_UnbindOnChangeEquipmentEvent_Params
{
	struct FAriseCharaEventData                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.RestoreInheritFlags
struct ATO14_BP_MenuManagerBase_C_RestoreInheritFlags_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCloseViewStartEvent
struct ATO14_BP_MenuManagerBase_C_BindOnCloseViewStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCloseViewStartEvent
struct ATO14_BP_MenuManagerBase_C_UnbindOnCloseViewStartEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnOpenEndEvent
struct ATO14_BP_MenuManagerBase_C_BindOnOpenEndEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCloseEndEvent
struct ATO14_BP_MenuManagerBase_C_UnbindOnCloseEndEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnOpenEndEvent
struct ATO14_BP_MenuManagerBase_C_UnbindOnOpenEndEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCloseEndEvent
struct ATO14_BP_MenuManagerBase_C_BindOnCloseEndEvent_Params
{
	struct FAriseSimpleEventData                       Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowTopBG
struct ATO14_BP_MenuManagerBase_C_BindOnShowTopBG_Params
{
	struct FOnMenuShowTopBGEventData                   Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowTopBG
struct ATO14_BP_MenuManagerBase_C_UnbindOnShowTopBG_Params
{
	struct FOnMenuShowTopBGEventData                   Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnChangeTopBG
struct ATO14_BP_MenuManagerBase_C_BindOnChangeTopBG_Params
{
	struct FOnMenuChangeTopBGEventData                 Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnChangeTopBG
struct ATO14_BP_MenuManagerBase_C_UnbindOnChangeTopBG_Params
{
	struct FOnMenuChangeTopBGEventData                 Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnLevelActivate
struct ATO14_BP_MenuManagerBase_C_BindOnLevelActivate_Params
{
	struct FOnMenuLevelActivate                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnLevelActivate
struct ATO14_BP_MenuManagerBase_C_UnbindOnLevelActivate_Params
{
	struct FOnMenuLevelActivate                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowLevelHeader
struct ATO14_BP_MenuManagerBase_C_BindOnShowLevelHeader_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowLevelHeader
struct ATO14_BP_MenuManagerBase_C_UnbindOnShowLevelHeader_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowCaptureBG
struct ATO14_BP_MenuManagerBase_C_BindOnShowCaptureBG_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowCaptureBG
struct ATO14_BP_MenuManagerBase_C_UnbindOnShowCaptureBG_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowTopParticle
struct ATO14_BP_MenuManagerBase_C_BindOnShowTopParticle_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowTopParticle
struct ATO14_BP_MenuManagerBase_C_UnbindOnShowTopParticle_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowLight
struct ATO14_BP_MenuManagerBase_C_BindOnShowLight_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowLight
struct ATO14_BP_MenuManagerBase_C_UnbindOnShowLight_Params
{
	struct FOnMenuSimpleShow                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.NotifyOnChangeEquipment
struct ATO14_BP_MenuManagerBase_C_NotifyOnChangeEquipment_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCookingEvent
struct ATO14_BP_MenuManagerBase_C_BindOnCookingEvent_Params
{
	struct FAriseCookingEventData                      Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCookingEvent
struct ATO14_BP_MenuManagerBase_C_UnbindOnCookingEvent_Params
{
	struct FAriseCookingEventData                      Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CallOnCookingEvent
struct ATO14_BP_MenuManagerBase_C_CallOnCookingEvent_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ResetMenuArenaSelect
struct ATO14_BP_MenuManagerBase_C_ResetMenuArenaSelect_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ReceiveBeginPlay
struct ATO14_BP_MenuManagerBase_C_ReceiveBeginPlay_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateFunc
struct ATO14_BP_MenuManagerBase_C_UpdateFunc_Params
{
	float                                              TickData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetupDelegate
struct ATO14_BP_MenuManagerBase_C_SetupDelegate_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnStarMapRemove
struct ATO14_BP_MenuManagerBase_C_OnStarMapRemove_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenView
struct ATO14_BP_MenuManagerBase_C_OnOpenView_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseView
struct ATO14_BP_MenuManagerBase_C_OnCloseView_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseImmidiate
struct ATO14_BP_MenuManagerBase_C_OnCloseImmidiate_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.EventGameStateChanged
struct ATO14_BP_MenuManagerBase_C_EventGameStateChanged_Params
{
	EAriseGameState                                    ChangedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ReceiveEndPlay
struct ATO14_BP_MenuManagerBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnWaitEnd_TopFade
struct ATO14_BP_MenuManagerBase_C_OnWaitEnd_TopFade_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnDuckingStart
struct ATO14_BP_MenuManagerBase_C_OnDuckingStart_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnDuckingEnd
struct ATO14_BP_MenuManagerBase_C_OnDuckingEnd_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.onGoBackToTitle
struct ATO14_BP_MenuManagerBase_C_onGoBackToTitle_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnLoadedTop2BackActor
struct ATO14_BP_MenuManagerBase_C_OnLoadedTop2BackActor_Params
{
	class UObject*                                     InLoadedAsset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenSystemWindow
struct ATO14_BP_MenuManagerBase_C_OnOpenSystemWindow_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseSystemWindow
struct ATO14_BP_MenuManagerBase_C_OnCloseSystemWindow_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ExecuteUbergraph_TO14_BP_MenuManagerBase
struct ATO14_BP_MenuManagerBase_C_ExecuteUbergraph_TO14_BP_MenuManagerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCookingEvent__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_OnCookingEvent__DelegateSignature_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowLight__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_ShowLight__DelegateSignature_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseViewStart__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_OnCloseViewStart__DelegateSignature_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnChangeEquipment__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_OnChangeEquipment__DelegateSignature_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseEnd__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_OnCloseEnd__DelegateSignature_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenEnd__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_OnOpenEnd__DelegateSignature_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseStart__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_OnCloseStart__DelegateSignature_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenStart__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_OnOpenStart__DelegateSignature_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowTopParticle__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_ShowTopParticle__DelegateSignature_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ChangeTopBG__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_ChangeTopBG__DelegateSignature_Params
{
	bool                                               bNext;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OldShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuTopCharaType                                  OldCharaType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewShow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuTopCharaType                                  NewCharaType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BackDarkness;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowTopBG__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_ShowTopBG__DelegateSignature_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuTopCharaType                                  ShowCharaType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BackDarkness;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.EventFinalizeMenu__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_EventFinalizeMenu__DelegateSignature_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.EventInitMenu__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_EventInitMenu__DelegateSignature_Params
{
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowLevelHeader__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_ShowLevelHeader__DelegateSignature_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowCaptureBG__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_ShowCaptureBG__DelegateSignature_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.LevelActivate__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_LevelActivate__DelegateSignature_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePostProcess;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Eventinit__DelegateSignature
struct ATO14_BP_MenuManagerBase_C_Eventinit__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
