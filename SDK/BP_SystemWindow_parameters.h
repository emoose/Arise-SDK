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

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetGaldCore
struct UBP_SystemWindow_C_OpenSysGetGaldCore_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FModifiedText>                       SelectList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                AddGald;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Loss;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DiffGald;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetGaldLoss
struct UBP_SystemWindow_C_OpenSysGetGaldLoss_Params
{
	int                                                Gald;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Loss;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GotGald;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.SysCloseImmidiate
struct UBP_SystemWindow_C_SysCloseImmidiate_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.CloseGald
struct UBP_SystemWindow_C_CloseGald_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetGald
struct UBP_SystemWindow_C_OpenSysGetGald_Params
{
	int                                                AddGald;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysApplyResolution
struct UBP_SystemWindow_C_OpenSysApplyResolution_Params
{
	float                                              Timer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysTimer
struct UBP_SystemWindow_C_OpenSysTimer_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               TimerText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Timer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FModifiedText>                       SelectList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysInstallBlock
struct UBP_SystemWindow_C_OpenSysInstallBlock_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysInstallMessageCore
struct UBP_SystemWindow_C_OpenSysInstallMessageCore_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysInstallMessage
struct UBP_SystemWindow_C_OpenSysInstallMessage_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetArts
struct UBP_SystemWindow_C_OpenSysGetArts_Params
{
	EArisePartyID                                      Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysEulaPP
struct UBP_SystemWindow_C_OpenSysEulaPP_Params
{
	class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C*              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FModifiedText>                       Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumPerPage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysAutoSaveNotice
struct UBP_SystemWindow_C_OpenSysAutoSaveNotice_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItemMultiCore
struct UBP_SystemWindow_C_OpenSysGetItemMultiCore_Params
{
	class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C*              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FModifiedText>                       SelectList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSysWinItemData>                     ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.GetSysLastResultPureCore
struct UBP_SystemWindow_C_GetSysLastResultPureCore_Params
{
	class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C*              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysMessageCore
struct UBP_SystemWindow_C_OpenSysMessageCore_Params
{
	class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C*              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItemCore
struct UBP_SystemWindow_C_OpenSysGetItemCore_Params
{
	class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C*              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.IsSysCloseCore
struct UBP_SystemWindow_C_IsSysCloseCore_Params
{
	class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C*              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClosed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysSelectCore
struct UBP_SystemWindow_C_OpenSysSelectCore_Params
{
	class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C*              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FModifiedText>                       Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumPerPage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableDecideSE;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItemMulti
struct UBP_SystemWindow_C_OpenSysGetItemMulti_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FModifiedText>                       SelectList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FSysWinItemData>                     ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenHelpWindowForBattle
struct UBP_SystemWindow_C_OpenHelpWindowForBattle_Params
{
	struct FString                                     HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.GetFishingToolSelectWindow
struct UBP_SystemWindow_C_GetFishingToolSelectWindow_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_FIS_C*                     ResultWindow;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.IsCloseFishingToolSelect
struct UBP_SystemWindow_C_IsCloseFishingToolSelect_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenFishingToolSelect
struct UBP_SystemWindow_C_OpenFishingToolSelect_Params
{
	struct FFishingAreaData                            AreaData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.IsMenuClosed
struct UBP_SystemWindow_C_IsMenuClosed_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClosed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenMenu
struct UBP_SystemWindow_C_OpenMenu_Params
{
	struct FString                                     MenuID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.IsSkipFromPause
struct UBP_SystemWindow_C_IsSkipFromPause_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoSkip;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.IsPauseClose
struct UBP_SystemWindow_C_IsPauseClose_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.GetPauseWindow
struct UBP_SystemWindow_C_GetPauseWindow_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_PAU_C*                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSimplePause
struct UBP_SystemWindow_C_OpenSimplePause_Params
{
	bool                                               IsSimple;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.GetFishingResultWindow
struct UBP_SystemWindow_C_GetFishingResultWindow_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_FIS_RESULT_C*              ResultWindow;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.IsCloseFisingResult
struct UBP_SystemWindow_C_IsCloseFisingResult_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClose;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenFishingResult
struct UBP_SystemWindow_C_OpenFishingResult_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.IsAliasGetClose
struct UBP_SystemWindow_C_IsAliasGetClose_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.ShowAliasGetEffect
struct UBP_SystemWindow_C_ShowAliasGetEffect_Params
{
	struct FString                                     AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               EnableOpenMenu;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.DebugOpenMemoWindow
struct UBP_SystemWindow_C_DebugOpenMemoWindow_Params
{
	struct FString                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.IsHelpWindowClose
struct UBP_SystemWindow_C_IsHelpWindowClose_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClosed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenHelpWindow
struct UBP_SystemWindow_C_OpenHelpWindow_Params
{
	struct FString                                     HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenHelpInner
struct UBP_SystemWindow_C_OpenHelpInner_Params
{
	struct FString                                     HelpLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ShowBG;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_COL_HLP_TUT_C*             Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.ShowLocationName
struct UBP_SystemWindow_C_ShowLocationName_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenPauseMenu
struct UBP_SystemWindow_C_OpenPauseMenu_Params
{
	EAriseGameState                                    ChangedGameState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.ShowQuestClearEffect
struct UBP_SystemWindow_C_ShowQuestClearEffect_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.ShowQuestStartEffect
struct UBP_SystemWindow_C_ShowQuestStartEffect_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.GetSysLastResultPure
struct UBP_SystemWindow_C_GetSysLastResultPure_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysMessage
struct UBP_SystemWindow_C_OpenSysMessage_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysGetItem
struct UBP_SystemWindow_C_OpenSysGetItem_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.GetSysLastResult
struct UBP_SystemWindow_C_GetSysLastResult_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.IsSysClose
struct UBP_SystemWindow_C_IsSysClose_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.GetSysWidget
struct UBP_SystemWindow_C_GetSysWidget_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_SYS_WIN_LAYOUT_C*              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SystemWindow.BP_SystemWindow_C.OpenSysSelect
struct UBP_SystemWindow_C_OpenSysSelect_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FModifiedText>                       Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumPerPage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableDecideSE;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
