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

// Function BP_PF_HUD.BP_PF_HUD_C.GetDefaultShow
struct ABP_PF_HUD_C_GetDefaultShow_Params
{
	TArray<bool>                                       IsDefaultShow;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_HUD.BP_PF_HUD_C.Hide
struct ABP_PF_HUD_C_Hide_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.CheckPastStory
struct ABP_PF_HUD_C_CheckPastStory_Params
{
	bool                                               OutIsPastStory;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.Refresh
struct ABP_PF_HUD_C_Refresh_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.ChangePFUIPattern
struct ABP_PF_HUD_C_ChangePFUIPattern_Params
{
	EPFUIPattern                                       InEPFUIPattern;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsChangeLock;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.UpdateDuringControl
struct ABP_PF_HUD_C_UpdateDuringControl_Params
{
	EPFUIParts                                         InPFUIParts;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.GetPFLayoutInterface
struct ABP_PF_HUD_C_GetPFLayoutInterface_Params
{
	TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C> PFLayout;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.Destory
struct ABP_PF_HUD_C_Destory_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.IsPastStory
struct ABP_PF_HUD_C_IsPastStory_Params
{
	bool                                               OutIsPastStory;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.UpdateShowPastStoryUI
struct ABP_PF_HUD_C_UpdateShowPastStoryUI_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.UpdateDuringControlImpl
struct ABP_PF_HUD_C_UpdateDuringControlImpl_Params
{
	EPFUIParts                                         InPFUIParts;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.IsPFHelpUICloseCheck
struct ABP_PF_HUD_C_IsPFHelpUICloseCheck_Params
{
	bool                                               OutIsClose;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.IsPFHelpUIOpenCheck
struct ABP_PF_HUD_C_IsPFHelpUIOpenCheck_Params
{
	bool                                               OutIsOpen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.UpdateLongchatShow
struct ABP_PF_HUD_C_UpdateLongchatShow_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.UpdateNextMainQuestShow
struct ABP_PF_HUD_C_UpdateNextMainQuestShow_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.RefreshImpl
struct ABP_PF_HUD_C_RefreshImpl_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.UpdateBtlResultShow
struct ABP_PF_HUD_C_UpdateBtlResultShow_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.UpdateShortChatShow
struct ABP_PF_HUD_C_UpdateShortChatShow_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.SetDefaultShowFlag
struct ABP_PF_HUD_C_SetDefaultShowFlag_Params
{
	class UUserWidget*                                 InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.CurrentDefaultShowFlag
struct ABP_PF_HUD_C_CurrentDefaultShowFlag_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.SetShowParts
struct ABP_PF_HUD_C_SetShowParts_Params
{
	class UUserWidget*                                 InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsShow;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.ShowPartsCheck
struct ABP_PF_HUD_C_ShowPartsCheck_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.SetUserWidget
struct ABP_PF_HUD_C_SetUserWidget_Params
{
	class UUserWidget*                                 InSetWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 InBaseWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.SetPartsWidget
struct ABP_PF_HUD_C_SetPartsWidget_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.ChangePFUIPatternImpl
struct ABP_PF_HUD_C_ChangePFUIPatternImpl_Params
{
	EPFUIPattern                                       InEPFUIPattern;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsChangeLock;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.IsVisible
struct ABP_PF_HUD_C_IsVisible_Params
{
	bool                                               RetVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.SetVisible
struct ABP_PF_HUD_C_SetVisible_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.HideImpl
struct ABP_PF_HUD_C_HideImpl_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.Show
struct ABP_PF_HUD_C_Show_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.Initialize
struct ABP_PF_HUD_C_Initialize_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.UserConstructionScript
struct ABP_PF_HUD_C_UserConstructionScript_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.ReceiveTick
struct ABP_PF_HUD_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.ReceiveBeginPlay
struct ABP_PF_HUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.RequestInitializeLongChatManager
struct ABP_PF_HUD_C_RequestInitializeLongChatManager_Params
{
};

// Function BP_PF_HUD.BP_PF_HUD_C.ExecuteUbergraph_BP_PF_HUD
struct ABP_PF_HUD_C_ExecuteUbergraph_BP_PF_HUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD.BP_PF_HUD_C.PauseShortChat__DelegateSignature
struct ABP_PF_HUD_C_PauseShortChat__DelegateSignature_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
