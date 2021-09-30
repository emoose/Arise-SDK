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

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.CheckAnyLearnArts
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_CheckAnyLearnArts_Params
{
	struct FName                                       ArtsLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLean;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EArisePartyID                                      CharaID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsHeal
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_RefreshIconAsHeal_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsOther
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_RefreshIconAsOther_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsBuff
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_RefreshIconAsBuff_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.RefreshIconAsUseItem
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_RefreshIconAsUseItem_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.OnDeselected
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.OnSelected
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.SetActive
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_SetActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.Initialize
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_Initialize_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_SELECT
struct UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
