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

// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.SetMouseEnable
struct UTO14_BPI_GUI_MNU_FIS_SET_STR_C_SetMouseEnable_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.SetData
struct UTO14_BPI_GUI_MNU_FIS_SET_STR_C_SetData_Params
{
	struct FString                                     TitleLabel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.OnDeselected
struct UTO14_BPI_GUI_MNU_FIS_SET_STR_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.OnSelected
struct UTO14_BPI_GUI_MNU_FIS_SET_STR_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.SetActive
struct UTO14_BPI_GUI_MNU_FIS_SET_STR_C_SetActive_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_FIS_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_FIS_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_FIS_SET_STR.TO14_BPI_GUI_MNU_FIS_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_SET_STR
struct UTO14_BPI_GUI_MNU_FIS_SET_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_FIS_SET_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
