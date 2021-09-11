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

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.NotifyOnMouseUnhoverSelf
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_NotifyOnMouseUnhoverSelf_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.NotifyOnMouseHoverSelf
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_NotifyOnMouseHoverSelf_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.NotifyOnMouseUnhover
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_NotifyOnMouseUnhover_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.NotifyOnMouseHover
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_NotifyOnMouseHover_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindFreeCursor
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindFreeCursor_Params
{
	TScriptInterface<class UBP_MNU_FREE_CURSOR_Interface_C> FreeCursor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.StopCompParticle
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_StopCompParticle_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.Refresh
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.StopSklLearnParticle
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_StopSklLearnParticle_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindOnTickTitGetEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindOnTickTitGetEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.IsPlayingNewLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_IsPlayingNewLearn_Params
{
	bool                                               Playing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindTitGet
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindTitGet_Params
{
	class UTO14_BPI_GUI_SYS_PF_TIT_GET_C*              TitGet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindExp
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindExp_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_EXP_C*                Exp;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.PlaySklLearnParticle
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_PlaySklLearnParticle_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindSklLearnParticle
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindSklLearnParticle_Params
{
	TArray<class UBP_MNU_3DPARTICLE_C*>                SklLearnParticleActor;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.SetVisibleHoverAreas
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_SetVisibleHoverAreas_Params
{
	ESlateVisibility                                   Visiblity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.SetCanSelect
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_SetCanSelect_Params
{
	bool                                               CanSelect;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.PlayNewLearnParticle
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_PlayNewLearnParticle_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindNewLearnParticle
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindNewLearnParticle_Params
{
	TArray<class UBP_MNU_3DPARTICLE_C*>                NewLearnParticleActor;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.RunNewPreLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_RunNewPreLearn_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CheckNewPreLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CheckNewPreLearn_Params
{
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.IsStatusPreLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_IsStatusPreLearn_Params
{
	bool                                               IsLearn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.PlayCompParticle
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_PlayCompParticle_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindCompParticle
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindCompParticle_Params
{
	class UBP_MNU_3DPARTICLE_C*                        CompParticleActor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.RunNewLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_RunNewLearn_Params
{
	bool                                               bPreLearn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CheckNewLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CheckNewLearn_Params
{
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreLean;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.IsStatusEnable
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_IsStatusEnable_Params
{
	bool                                               IsComplete;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.GetCharaID
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_GetCharaID_Params
{
	EArisePartyID                                      AliasID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindSkillPanelInfo
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindSkillPanelInfo_Params
{
	class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C*     SklPanelInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.GetAdsorbAreaLocal
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_GetAdsorbAreaLocal_Params
{
	class UBP_MenuFreeCursorAdsorbArea_C*              AdsorbArea;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.GetOwnerWidget
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_GetOwnerWidget_Params
{
	class UWidget*                                     OwnerWidget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.UnbindCompletedEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_UnbindCompletedEvent_Params
{
	struct FScriptDelegate                             OnCompleted;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindChangedVisibleEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindChangedVisibleEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.IsInVisibleArea
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_IsInVisibleArea_Params
{
	bool                                               IsIn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CheckInVisibleArea
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CheckInVisibleArea_Params
{
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.SetVisibleAreaWidget
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_SetVisibleAreaWidget_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.IsStatusDisable
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_IsStatusDisable_Params
{
	bool                                               IsComplete;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.GetOwnerSlotOffsets
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_GetOwnerSlotOffsets_Params
{
	struct FMargin                                     Offsets;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.GetLowAliasIDs
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_GetLowAliasIDs_Params
{
	TArray<int>                                        LowAliasIDs;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.GetAliasID
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_GetAliasID_Params
{
	int                                                AliasID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.IsStatusLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_IsStatusLearn_Params
{
	bool                                               IsLearn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.IsStatusComplete
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_IsStatusComplete_Params
{
	bool                                               IsComplete;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.GetNewEnableAnimation
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_GetNewEnableAnimation_Params
{
	class UWidgetAnimation*                            NewEnableAnimation;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindNewEnabledEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindNewEnabledEvent_Params
{
	struct FScriptDelegate                             OnEnabled;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnEnabledEvent;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.RunNewEnable
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_RunNewEnable_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CheckNewEnable
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CheckNewEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindCompletedEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindCompletedEvent_Params
{
	struct FScriptDelegate                             OnCompleted;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.RunNewComplete
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_RunNewComplete_Params
{
	bool                                               bComplete;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CheckNewComplete
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CheckNewComplete_Params
{
	bool                                               bComplete;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.RestructForLow_DISABLE
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_RestructForLow_DISABLE_Params
{
	struct FBtlAliasData                               Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.RestructForLow_ENABLE
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_RestructForLow_ENABLE_Params
{
	struct FBtlAliasData                               Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.RestructForLow_LEAN
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_RestructForLow_LEAN_Params
{
	struct FBtlAliasData                               Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     Picture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.RestructForLow_COMP
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_RestructForLow_COMP_Params
{
	struct FBtlAliasData                               Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     Picture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.RestructForLow
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_RestructForLow_Params
{
	struct FBtlAliasData                               Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.RestructPanelStr
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_RestructPanelStr_Params
{
	struct FBtlSkillSetData                            SkillSet;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                SkillIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.InitSklIconList
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_InitSklIconList_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.Deselect
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_Deselect_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindDeselectEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindDeselectEvent_Params
{
	struct FScriptDelegate                             OnDeselect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindDecideEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindDecideEvent_Params
{
	struct FScriptDelegate                             OnDecide;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindSelectEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindSelectEvent_Params
{
	struct FScriptDelegate                             OnSelect;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BindActiveEvent
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BindActiveEvent_Params
{
	struct FScriptDelegate                             OnActivate;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.GetAdsorbArea
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_GetAdsorbArea_Params
{
	class UBP_MenuFreeCursorAdsorbArea_C*              AdsorbArea;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.GetSklIconList
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_GetSklIconList_Params
{
	TArray<class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_STR_C*> SklIconList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.Activate
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_Activate_Params
{
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.Select
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_Select_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.Restruct
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_Restruct_Params
{
	EArisePartyID                                      CharaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.Initialize
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_Initialize_Params
{
	class UWidget*                                     OwnerWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.OnNewComplete
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_OnNewComplete_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.OnNewEnable
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_OnNewEnable_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.OnAnimNewLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_OnAnimNewLearn_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.OnAnimDefaultLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_OnAnimDefaultLearn_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.OnAnimDefaultComp
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_OnAnimDefaultComp_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.OnAnimNoLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_OnAnimNoLearn_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CustomEvent_OnHoveredSkillIcon
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CustomEvent_OnHoveredSkillIcon_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CustomEvent_OnUnhoveredSkillIcon
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CustomEvent_OnUnhoveredSkillIcon_Params
{
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CustomEvent_OnHoveredAdsorbArea
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CustomEvent_OnHoveredAdsorbArea_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CustomEvent_OnUnhoveredAdsorbArea
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CustomEvent_OnUnhoveredAdsorbArea_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CustomEvent_OnSkillLearn
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CustomEvent_OnSkillLearn_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BndEvt__FREE_CURSOR_ADSORB_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BndEvt__FREE_CURSOR_ADSORB_AREA_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BndEvt__FREE_CURSOR_ADSORB_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BndEvt__FREE_CURSOR_ADSORB_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BndEvt__FREE_CURSOR_ADSORB_AREA_LOCAL_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BndEvt__FREE_CURSOR_ADSORB_AREA_LOCAL_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BndEvt__FREE_CURSOR_ADSORB_AREA_LOCAL_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BndEvt__FREE_CURSOR_ADSORB_AREA_LOCAL_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CustomEvent_OnHoveredAdsorbAreaLocal
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CustomEvent_OnHoveredAdsorbAreaLocal_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CustomEvent_OnUnhoveredAdsorbAreaLocal
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CustomEvent_OnUnhoveredAdsorbAreaLocal_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_6_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_6_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_8_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BndEvt__CLICK_AREA_K2Node_ComponentBoundEvent_8_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.BndEvt__FREE_CURSOR_ADSORB_AREA_LOCAL_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_BndEvt__FREE_CURSOR_ADSORB_AREA_LOCAL_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.Construct
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.OnTickTitGetEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_OnTickTitGetEvent__DelegateSignature_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.ChangedVisibleDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_ChangedVisibleDelegate__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.EnabledDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_EnabledDelegate__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.CompletedDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_CompletedDelegate__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.DeselectDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_DeselectDelegate__DelegateSignature_Params
{
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.SelectDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_SelectDelegate__DelegateSignature_Params
{
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.DecideDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_DecideDelegate__DelegateSignature_Params
{
	struct FString                                     Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                AliasID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C.ActivateDelegate__DelegateSignature
struct UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C_ActivateDelegate__DelegateSignature_Params
{
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
