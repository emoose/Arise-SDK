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

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Refresh
struct UTO14_BPI_GUI_MNU_TOP_TP_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BindOnPreviewEvemt
struct UTO14_BPI_GUI_MNU_TOP_TP_C_BindOnPreviewEvemt_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.GetVisibleFlag
struct UTO14_BPI_GUI_MNU_TOP_TP_C_GetVisibleFlag_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.CursorIndex
struct UTO14_BPI_GUI_MNU_TOP_TP_C_CursorIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.HPHeal
struct UTO14_BPI_GUI_MNU_TOP_TP_C_HPHeal_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.TPPreview
struct UTO14_BPI_GUI_MNU_TOP_TP_C_TPPreview_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.PadWork
struct UTO14_BPI_GUI_MNU_TOP_TP_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Close
struct UTO14_BPI_GUI_MNU_TOP_TP_C_Close_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Open
struct UTO14_BPI_GUI_MNU_TOP_TP_C_Open_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.Init
struct UTO14_BPI_GUI_MNU_TOP_TP_C_Init_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.OnInit
struct UTO14_BPI_GUI_MNU_TOP_TP_C_OnInit_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.OnPreviewFromCmdList
struct UTO14_BPI_GUI_MNU_TOP_TP_C_OnPreviewFromCmdList_Params
{
	TMap<EArisePartyID, int>                           HealHPMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                UseTP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_24_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP_TP_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_24_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.OnAnimationFinished
struct UTO14_BPI_GUI_MNU_TOP_TP_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP_TP_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP_TP_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_TP.TO14_BPI_GUI_MNU_TOP_TP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_TP
struct UTO14_BPI_GUI_MNU_TOP_TP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_TP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
