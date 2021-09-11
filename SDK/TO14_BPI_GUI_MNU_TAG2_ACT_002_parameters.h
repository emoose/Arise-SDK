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

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.CheckAnyLearnArts
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_CheckAnyLearnArts_Params
{
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Lean;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      CharaID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsHeal
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_RefreshIconAsHeal_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsOther
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_RefreshIconAsOther_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsBuff
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_RefreshIconAsBuff_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.RefreshIconAsUseItem
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_RefreshIconAsUseItem_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.SetClickable
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_SetClickable_Params
{
	bool                                               Flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BindCursor
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_BindCursor_Params
{
	class UTO14_BPI_GUI_SYS_CURSOR_C*                  SYS_CURSOR;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.OnDeselected
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.OnSelected
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.Initialize
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_Initialize_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.ChangeVisibility
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_ChangeVisibility_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_002.TO14_BPI_GUI_MNU_TAG2_ACT_002_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_002
struct UTO14_BPI_GUI_MNU_TAG2_ACT_002_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_002_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
