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

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.EquipVisualCheck
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_EquipVisualCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.EquipCheck
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_EquipCheck_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.GetVisualItem
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_GetVisualItem_Params
{
	struct FMenuVisualData                             VisualData;                                               // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.ResetVisual
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_ResetVisual_Params
{
	bool                                               MouseEnable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetVisualItem
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetVisualItem_Params
{
	struct FMenuVisualData                             Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisableColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetLockMark
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetLockMark_Params
{
	bool                                               Lock;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetNewIconVisible
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetNewIconVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.GetItemId
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_GetItemId_Params
{
	int                                                ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.Reset
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_Reset_Params
{
	bool                                               MouseEnable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisableColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetItemID
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetItemID_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetMouseActive
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetMouseActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.SetActive
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_SetActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.OnDeselected
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.OnSelected
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.Activate
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_Activate_Params
{
	bool                                               sw;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.Tick
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.OnWidgetCreated
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_OnWidgetCreated_Params
{
};

// Function TO14_BPI_GUI_MNU_EQU_LIST_000_STR.TO14_BPI_GUI_MNU_EQU_LIST_000_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000_STR
struct UTO14_BPI_GUI_MNU_EQU_LIST_000_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_LIST_000_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
