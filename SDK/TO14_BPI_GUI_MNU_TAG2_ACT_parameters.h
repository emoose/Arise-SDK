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

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.CheckVisibleChange
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_CheckVisibleChange_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BindToggleCheckEvent
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_BindToggleCheckEvent_Params
{
	struct FScriptDelegate                             OnToggleCheck;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.SetActive
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_SetActive_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.SortStart
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_SortStart_Params
{
	bool                                               bLeft;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.Refresh
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_Refresh_Params
{
	struct FMenuTacticsLineData                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.SortMode
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_SortMode_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnDeselected
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnSelected
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ActDetailPadWork
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_ActDetailPadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ChangeActive
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_ChangeActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ChangeAllVisibility
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_ChangeAllVisibility_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.PadWork
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.Update
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_Update_Params
{
	struct FMenuTacticsLineData                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.InitializeNewData
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_InitializeNewData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ChangeDetailVisibility
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_ChangeDetailVisibility_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.CB_MouseEnter
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_CB_MouseEnter_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.CB_MouseOver
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_CB_MouseOver_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.Initialize
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_Initialize_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuTacticsLineData                        TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimSelect
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimSelect_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChange
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChange_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnVisible
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnVisible_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimDefault
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimDefault_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOff
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeOff_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenL
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeOpenL_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenLFinished
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeOpenLFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseL
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeCloseL_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseLFinished
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeCloseLFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseR
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeCloseR_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeCloseRFinished
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeCloseRFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenR
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeOpenR_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimChangeOpenRFinished
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimChangeOpenRFinished_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_BndEvt__CHECK_CLICK_AREA_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.ToggleCheckEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_ToggleCheckEvent__DelegateSignature_Params
{
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.IndexMove__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_IndexMove__DelegateSignature_Params
{
	int                                                MoveValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTrigger;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.MouseEnter__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_MouseEnter__DelegateSignature_Params
{
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT.TO14_BPI_GUI_MNU_TAG2_ACT_C.MouseOver__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_C_MouseOver__DelegateSignature_Params
{
	int                                                ListIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
