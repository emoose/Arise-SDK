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

// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.SetActive
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_C_SetActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.OnDeselected
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.OnSelected
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.Initialize
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_C_Initialize_Params
{
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsTacticsName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CustomFlag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_SELECT.TO14_BPI_GUI_MNU_TAG2_SELECT_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SELECT
struct UTO14_BPI_GUI_MNU_TAG2_SELECT_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SELECT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
