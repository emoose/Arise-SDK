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

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ForceFinalize
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ForceFinalize_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Exit
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_Exit_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Init
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_Init_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PrevSceneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ReadWait
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ReadWait_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Exec
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_Exec_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsFinish;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.GetNextScene
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_GetNextScene_Params
{
	struct FString                                     NextSceneID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               SelfRemain;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.Finish
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_Finish_Params
{
	struct FST_MenuGlobalData                          GlobalData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResultValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.DestroyTitGet
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_DestroyTitGet_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CreateTitGet
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CreateTitGet_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestoreAutoFaderOpacity
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestoreAutoFaderOpacity_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.StoreAutoFaderOpacity
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_StoreAutoFaderOpacity_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshSklPanels
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshSklPanels_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.FreeCursorToInitPos
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_FreeCursorToInitPos_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ResetLayout
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ResetLayout_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshExp
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshExp_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindTitGetHidden
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindTitGetHidden_Params
{
	class UWidget*                                     TitGetHidden;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.StopSklLearnParticleSkilPanels
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_StopSklLearnParticleSkilPanels_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnExpConfirmEndEvent
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindAutoSkillLearnExpConfirmEndEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnExpConfirmStartEvent
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindAutoSkillLearnExpConfirmStartEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckAutoSklLearnCharaIDs
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckAutoSklLearnCharaIDs_Params
{
	bool                                               Learnable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<EArisePartyID>                              CharaIDs;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindTitGetRoot
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindTitGetRoot_Params
{
	class UCanvasPanel*                                TitGetRoot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputAutoSkillLearnSkip
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckInputAutoSkillLearnSkip_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnSkipableEndEvent
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindAutoSkillLearnSkipableEndEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindAutoSkillLearnSkipableStartEvent
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindAutoSkillLearnSkipableStartEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindSklPanelInfo
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindSklPanelInfo_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C*     SklPanelInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ExecSklPanelnfo
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ExecSklPanelnfo_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.IsPausing
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_IsPausing_Params
{
	bool                                               IsPausing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.SetActive
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_SetActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitRoot
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitRoot_Params
{
	bool                                               ForceZoom;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckSklPanelStatusChange
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckSklPanelStatusChange_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          SklPanel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RunAutoSkillLearn
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RunAutoSkillLearn_Params
{
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckSkillMarkShowUI
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckSkillMarkShowUI_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitSklChecker
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitSklChecker_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshSklPanelnfo
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshSklPanelnfo_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindName
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindName_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_NAME_C*               Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitName
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitName_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshName
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshName_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshSklChecker
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshSklChecker_Params
{
	int                                                NewLearnUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RunSklChecker
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RunSklChecker_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputSklChecker
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckInputSklChecker_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitCharaID
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitCharaID_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitSkilPanelRoot
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitSkilPanelRoot_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputToggleScale
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckInputToggleScale_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitSklPanelInfo
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitSklPanelInfo_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindExp
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindExp_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_EXP_C*                Exp;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CreateSkilPanel
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CreateSkilPanel_Params
{
	class UDynamicEntryBox*                            DynamicSklPanel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          Panel;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckAutoSklLearnAliasIDs
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckAutoSklLearnAliasIDs_Params
{
	bool                                               Learnable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AliasIDs;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructSkilPanels
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructSkilPanels_Params
{
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructSkilPanel
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructSkilPanel_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RefreshRP
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RefreshRP_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputCharaSelect
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckInputCharaSelect_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      CharaID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitCharaSelect
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitCharaSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitRP
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitRP_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindRP
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindRP_Params
{
	class UTO14_BPI_GUI_MNU_TIT_RP_C*                  RP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.BindCharaSelect
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_BindCharaSelect_Params
{
	class UTO14_BPI_GUI_MNU_COM_CATE_CHARA_C*          CharaSelect;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.FindSklPanel
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_FindSklPanel_Params
{
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          SklPanel;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorAdsorbArea
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructFreeCursorAdsorbArea_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          SklPanel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bHover;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckCreateSkilPanels
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckCreateSkilPanels_Params
{
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorHoverEvent
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructFreeCursorHoverEvent_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          SklPanel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bHover;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorGroupJump1
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructFreeCursorGroupJump1_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          SklPanel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Hover;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.RestructFreeCursorGroupJump0
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_RestructFreeCursorGroupJump0_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitFreeCursor
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitFreeCursor_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitExp
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitExp_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CheckInputExit
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CheckInputExit_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInput;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.InitDynamicSklPaneals
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_InitDynamicSklPaneals_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ExecPad
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ExecPad_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnInputSklChecker
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnInputSklChecker_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnInputToggleView
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnInputToggleView_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnAutoSkillLearnAliasIDs
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnAutoSkillLearnAliasIDs_Params
{
	TArray<int>                                        AliasIDs;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnChangedCharacter
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnChangedCharacter_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_CheckCreateSklPanel
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_CheckCreateSklPanel_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnPanelCompletFinished
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnPanelCompletFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnChangedPanelVisible
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnChangedPanelVisible_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnSkillLearn
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnSkillLearn_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnTickTitGet_SklPanel
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnTickTitGet_SklPanel_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnOpenedLearnDialogFromSklIcon
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnOpenedLearnDialogFromSklIcon_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnClosedLearnDialogFromSklIcon
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnClosedLearnDialogFromSklIcon_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnHovered_FreeCursor
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnHovered_FreeCursor_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnUnhovered_FreeCursor
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnUnhovered_FreeCursor_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnStartGroupJump_FreeCrusor
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnStartGroupJump_FreeCrusor_Params
{
	int                                                Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnEndGroupJump_FreeCrusor
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnEndGroupJump_FreeCrusor_Params
{
	int                                                Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.CustomEvent_OnInit
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_CustomEvent_OnInit_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.PreConstruct
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_MAIN
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_MAIN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnExpConfirmEndEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnAutoSkillLearnExpConfirmEndEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnExpConfirmStartEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnAutoSkillLearnExpConfirmStartEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnSkipEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnAutoSkillLearnSkipEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnSkipableEndEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnAutoSkillLearnSkipableEndEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_MAIN.TO14_BPI_GUI_MNU_TIT2_MAIN_C.OnAutoSkillLearnSkipableStartEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_MAIN_C_OnAutoSkillLearnSkipableStartEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
