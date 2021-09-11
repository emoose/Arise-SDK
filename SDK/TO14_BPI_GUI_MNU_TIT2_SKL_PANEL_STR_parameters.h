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

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindClosedShortDialogEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindClosedShortDialogEvent_Params
{
	struct FScriptDelegate                             OnClosedShortDialog;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindClosedLearnDialogEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindClosedLearnDialogEvent_Params
{
	struct FScriptDelegate                             OnClosedLearnDialog;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetOwnerPanel
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetOwnerPanel_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          NewParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetCharaID
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetCharaID_Params
{
	EArisePartyID                                      CharaID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetSkillID
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetSkillID_Params
{
	int                                                SkillID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetAliasID
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetAliasID_Params
{
	int                                                AliasID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CheckSkillLearnable
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CheckSkillLearnable_Params
{
	bool                                               bLearnable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindSkillLearnEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindSkillLearnEvent_Params
{
	struct FScriptDelegate                             OnSkillLernNew;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetClickableArea
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetClickableArea_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_CLICK_AREA_C*     ClickableArea;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindOpenedShortDialogEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindOpenedShortDialogEvent_Params
{
	struct FScriptDelegate                             OnOpenedShortDialog;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OpenShortDialog
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OpenShortDialog_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindClosedAnyDialogEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindClosedAnyDialogEvent_Params
{
	struct FScriptDelegate                             OnClosedAnyDialog;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindOpenedAnyDialogEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindOpenedAnyDialogEvent_Params
{
	struct FScriptDelegate                             OnOpenedAnyDialog;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BindOpenedLeanDialogEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BindOpenedLeanDialogEvent_Params
{
	struct FScriptDelegate                             OnOpenedLeanDialog;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.RunSkillLern
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_RunSkillLern_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OpenLernDialog
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OpenLernDialog_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CheckHaveSkillLearnRisePoint
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CheckHaveSkillLearnRisePoint_Params
{
	bool                                               IsHave;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CheckSkillLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CheckSkillLearn_Params
{
	bool                                               IsLean;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.GetAdsorbArea
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_GetAdsorbArea_Params
{
	class UBP_MenuFreeCursorAdsorbArea_C*              AdsorbArea;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.ActivateBP
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_ActivateBP_Params
{
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.Restruct
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_Restruct_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C*          OwnerPanel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillNo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.Initialize
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_Initialize_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnHovered;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnUnhovered;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnDeselected
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnSelected
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnPanelCompleted
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnPanelCompleted_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnFreeCursorHovered_SKL_CLICK_AREA
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnFreeCursorHovered_SKL_CLICK_AREA_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnDecide
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnDecide_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnOpenedLeanDialog
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnOpenedLeanDialog_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnOpenedShortDialog
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnOpenedShortDialog_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnFreeCursorUnovered_SKL_CLICK_AREA
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnFreeCursorUnovered_SKL_CLICK_AREA_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.CustomEvent_OnFreeCursorDecided_SKL_CLICK_AREA
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_CustomEvent_OnFreeCursorDecided_SKL_CLICK_AREA_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_3_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BndEvt__AriseClickableArea_62_K2Node_ComponentBoundEvent_10_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.Activate
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_Activate_Params
{
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.BndEvt__SKL_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_BndEvt__SKL_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnClosedShortDialog__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnClosedShortDialog__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnClosedLearnDialog__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnClosedLearnDialog__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnOpenedShortDialog__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnOpenedShortDialog__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnClosedAnyDialog__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnClosedAnyDialog__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnOpenedAnyDialog__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnOpenedAnyDialog__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnOpenedLeanDialog__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnOpenedLeanDialog__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnSkillLearn__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnSkillLearn__DelegateSignature_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C.OnUnhoveredEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C_OnUnhoveredEvent__DelegateSignature_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
