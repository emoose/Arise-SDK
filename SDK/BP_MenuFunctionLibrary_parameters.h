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

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ResetMenuArenaSelect
struct UBP_MenuFunctionLibrary_C_ResetMenuArenaSelect_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CallOnCookingEvent
struct UBP_MenuFunctionLibrary_C_CallOnCookingEvent_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetAreaNameModifiedText
struct UBP_MenuFunctionLibrary_C_GetAreaNameModifiedText_Params
{
	struct FString                                     AreaName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ScenarioCounter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MENU_GetIcnMnuAnim_ANM_NAME
struct UBP_MenuFunctionLibrary_C_MENU_GetIcnMnuAnim_ANM_NAME_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MENU_GetIcnMnuAnim_ANM_FONT
struct UBP_MenuFunctionLibrary_C_MENU_GetIcnMnuAnim_ANM_FONT_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Animation;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MENU_GetIcnMnuAnimInterface
struct UBP_MenuFunctionLibrary_C_MENU_GetIcnMnuAnimInterface_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C> Interface;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsAUG_Closed
struct UBP_MenuFunctionLibrary_C_IsAUG_Closed_Params
{
	struct FString                                     AreaName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ScenarioCounter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SwitchHelpWidgetHitTest
struct UBP_MenuFunctionLibrary_C_SwitchHelpWidgetHitTest_Params
{
	bool                                               bInteractable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetQuestIDSecondary
struct UBP_MenuFunctionLibrary_C_GetQuestIDSecondary_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     QuestIDSecondary;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetQuestID
struct UBP_MenuFunctionLibrary_C_GetQuestID_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     QuestID;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetOpenMapLocationSecondary
struct UBP_MenuFunctionLibrary_C_GetOpenMapLocationSecondary_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenMapLocationSecondary;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetOpenMapLocation
struct UBP_MenuFunctionLibrary_C_GetOpenMapLocation_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenMapLocation;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckPrevMenuCount
struct UBP_MenuFunctionLibrary_C_CheckPrevMenuCount_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetQuestIDSecondary
struct UBP_MenuFunctionLibrary_C_SetQuestIDSecondary_Params
{
	struct FString                                     QuestIDSecondary;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetQuestID
struct UBP_MenuFunctionLibrary_C_SetQuestID_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetOpenMapLocationSecondary
struct UBP_MenuFunctionLibrary_C_SetOpenMapLocationSecondary_Params
{
	struct FString                                     OpenMapLocationSecondary;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetOpenMapLocation
struct UBP_MenuFunctionLibrary_C_SetOpenMapLocation_Params
{
	struct FString                                     OpenMapLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetBtlControlChara
struct UBP_MenuFunctionLibrary_C_GetBtlControlChara_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      CharaID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.NotifyOnChangeEquipment
struct UBP_MenuFunctionLibrary_C_NotifyOnChangeEquipment_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetCharaOffset
struct UBP_MenuFunctionLibrary_C_SetCharaOffset_Params
{
	struct FVector2D                                   Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetVisibilityHeaderWidget
struct UBP_MenuFunctionLibrary_C_SetVisibilityHeaderWidget_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetBtlUsetItemID
struct UBP_MenuFunctionLibrary_C_SetBtlUsetItemID_Params
{
	struct FString                                     ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetBtlItemID
struct UBP_MenuFunctionLibrary_C_GetBtlItemID_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BtlItemID;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetIsNewGameStart
struct UBP_MenuFunctionLibrary_C_GetIsNewGameStart_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNewGameStart;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetIsNewGameStart
struct UBP_MenuFunctionLibrary_C_SetIsNewGameStart_Params
{
	bool                                               IsNewGameStart;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetNextSceneID
struct UBP_MenuFunctionLibrary_C_GetNextSceneID_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetHeaderNameTopMenu
struct UBP_MenuFunctionLibrary_C_SetHeaderNameTopMenu_Params
{
	struct FString                                     InMenuID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FDictionaryText                             InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetSaveDataLoaded
struct UBP_MenuFunctionLibrary_C_SetSaveDataLoaded_Params
{
	bool                                               Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.PrepareToCloseView
struct UBP_MenuFunctionLibrary_C_PrepareToCloseView_Params
{
	struct FString                                     NextMenuID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetHeaderIcon
struct UBP_MenuFunctionLibrary_C_SetHeaderIcon_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               WithAnimation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetMenuLoadedSlot
struct UBP_MenuFunctionLibrary_C_SetMenuLoadedSlot_Params
{
	int                                                LoadedSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ShowMenuHelpWidget
struct UBP_MenuFunctionLibrary_C_ShowMenuHelpWidget_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetCurrentMenuID
struct UBP_MenuFunctionLibrary_C_GetCurrentMenuID_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MenuID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuHelpWidget
struct UBP_MenuFunctionLibrary_C_GetMenuHelpWidget_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 HelpWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuPadProcess
struct UBP_MenuFunctionLibrary_C_GetMenuPadProcess_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadProcess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetIsTitleMoviePlay
struct UBP_MenuFunctionLibrary_C_GetIsTitleMoviePlay_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTitleMoviePlay;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuBGType
struct UBP_MenuFunctionLibrary_C_GetMenuBGType_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuBGType                                        BGType;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuPrevSceneCount
struct UBP_MenuFunctionLibrary_C_GetMenuPrevSceneCount_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsSaveDataLoaded
struct UBP_MenuFunctionLibrary_C_IsSaveDataLoaded_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.MenuOpen
struct UBP_MenuFunctionLibrary_C_MenuOpen_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class APlayerController*                           OwnerPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideCapture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsMenuClose
struct UBP_MenuFunctionLibrary_C_IsMenuClose_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMenuManagerInterface
struct UBP_MenuFunctionLibrary_C_GetMenuManagerInterface_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTO14_BP_MenuManagerInterface_C> MenuManagerInterface;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuSysUpdated
struct UBP_MenuFunctionLibrary_C_CheckMenuSysUpdated_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUpdated;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetPauseMenuOpenType
struct UBP_MenuFunctionLibrary_C_GetPauseMenuOpenType_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPauseMenuOpenType>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ClearMenuUpdatedByData
struct UBP_MenuFunctionLibrary_C_ClearMenuUpdatedByData_Params
{
	struct FMenuData                                   MenuData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.ClearMenuUpdatedByID
struct UBP_MenuFunctionLibrary_C_ClearMenuUpdatedByID_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuUpdatedByDataBase
struct UBP_MenuFunctionLibrary_C_CheckMenuUpdatedByDataBase_Params
{
	struct FMenuData                                   MenuData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUpdated;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuUpdatedByData
struct UBP_MenuFunctionLibrary_C_CheckMenuUpdatedByData_Params
{
	struct FMenuData                                   MenuData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUpdated;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuColUpdated
struct UBP_MenuFunctionLibrary_C_CheckMenuColUpdated_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUpdated;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CheckMenuUpdatedByID
struct UBP_MenuFunctionLibrary_C_CheckMenuUpdatedByID_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUpdated;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetIntWithSpace
struct UBP_MenuFunctionLibrary_C_SetIntWithSpace_Params
{
	class UAriseTextWidget*                            Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Digit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.TickMaterialWhenPaused
struct UBP_MenuFunctionLibrary_C_TickMaterialWhenPaused_Params
{
	bool                                               DoTick;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetLocationNameModifiedTextByIndex
struct UBP_MenuFunctionLibrary_C_GetLocationNameModifiedTextByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShortName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScenarioCounter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               Text;                                                     // (Parm, OutParm)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.IsDEQ_Closed
struct UBP_MenuFunctionLibrary_C_IsDEQ_Closed_Params
{
	struct FString                                     AreaName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ScenarioCounter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.AllowInputChangeMenu
struct UBP_MenuFunctionLibrary_C_AllowInputChangeMenu_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.StartEndingScene
struct UBP_MenuFunctionLibrary_C_StartEndingScene_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetLocationNameModifiedTextBase
struct UBP_MenuFunctionLibrary_C_GetLocationNameModifiedTextBase_Params
{
	struct FMapLocationData                            LocationData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsShortName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScenarioCounter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               Text;                                                     // (Parm, OutParm)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetMapLinkNameModifiedText
struct UBP_MenuFunctionLibrary_C_GetMapLinkNameModifiedText_Params
{
	struct FString                                     NextLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     CurrentLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               Text;                                                     // (Parm, OutParm)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetMenuInputHelp
struct UBP_MenuFunctionLibrary_C_SetMenuInputHelp_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.FadeInForMenuLevel
struct UBP_MenuFunctionLibrary_C_FadeInForMenuLevel_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.FadeOutForMenuLevel
struct UBP_MenuFunctionLibrary_C_FadeOutForMenuLevel_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.PFMenuPartyTopChanged
struct UBP_MenuFunctionLibrary_C_PFMenuPartyTopChanged_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.BattleMenuArtsSettingChanged
struct UBP_MenuFunctionLibrary_C_BattleMenuArtsSettingChanged_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetLocationNameModifiedText
struct UBP_MenuFunctionLibrary_C_GetLocationNameModifiedText_Params
{
	struct FString                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsShortName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               Text;                                                     // (Parm, OutParm)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.BattleMenuTacticsRefreshRequest
struct UBP_MenuFunctionLibrary_C_BattleMenuTacticsRefreshRequest_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.BattleMenuWeaponChanged
struct UBP_MenuFunctionLibrary_C_BattleMenuWeaponChanged_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WeaponItemLabel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.SetBattleMenuArtsParam
struct UBP_MenuFunctionLibrary_C_SetBattleMenuArtsParam_Params
{
	EArisePartyID                                      User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetBattleMenuParam
struct UBP_MenuFunctionLibrary_C_GetBattleMenuParam_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleMenuParam                            Param;                                                    // (Parm, OutParm)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CursorAnimationUpdate
struct UBP_MenuFunctionLibrary_C_CursorAnimationUpdate_Params
{
	class UTO14_BPI_GUI_SYS_CURSOR_C*                  CursorWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PauseTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.CursorControl
struct UBP_MenuFunctionLibrary_C_CursorControl_Params
{
	class UTO14_BPI_GUI_SYS_CURSOR_C*                  CursorWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetPartyIDList(Enum)
struct UBP_MenuFunctionLibrary_C_GetPartyIDList_Enum__Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EArisePartyID>                              List_Enum_;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MenuFunctionLibrary.BP_MenuFunctionLibrary_C.GetPartyIDList(int)
struct UBP_MenuFunctionLibrary_C_GetPartyIDList_int__Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        List;                                                     // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
