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

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.SetDefaultActive
struct UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_SetDefaultActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.GetTacticsData
struct UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_GetTacticsData_Params
{
	struct FMenuTacticsData                            Data;                                                     // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.Update
struct UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_Update_Params
{
	struct FMenuTacticsData                            TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.SetCursorActive
struct UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_SetCursorActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.OnDeselected
struct UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.OnSelected
struct UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.Initialize
struct UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_Initialize_Params
{
	struct FMenuTacticsData                            TacticsData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     ButtonLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_9_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_16_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_TAG2_SET_STR.TO14_BPI_GUI_MNU_TAG2_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_STR
struct UTO14_BPI_GUI_MNU_TAG2_SET_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TAG2_SET_STR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
