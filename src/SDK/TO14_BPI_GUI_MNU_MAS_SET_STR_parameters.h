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

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetButtonText
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_SetButtonText_Params
{
	struct FModifiedText                               ModText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetActive
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_SetActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetCursorVisible
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_SetCursorVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.GetArtsLabel
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_GetArtsLabel_Params
{
	struct FName                                       Label;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetButtonIconText
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_SetButtonIconText_Params
{
	struct FText                                       IconText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.SetArtsData
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_SetArtsData_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDictionaryText                             DictionaryText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.GetSelectStatus
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_GetSelectStatus_Params
{
	bool                                               SelectState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.OnDeselected
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.OnSelected
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_BndEvt__AriseClickableArea_275_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.Tick
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.Construct
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_SET_STR.TO14_BPI_GUI_MNU_MAS_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET_STR
struct UTO14_BPI_GUI_MNU_MAS_SET_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
