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

// Function TO14_BPI_GUI_MNU_AFT_CMD.TO14_BPI_GUI_MNU_AFT_CMD_C.SetCheckBox
struct UTO14_BPI_GUI_MNU_AFT_CMD_C_SetCheckBox_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD.TO14_BPI_GUI_MNU_AFT_CMD_C.SetActive
struct UTO14_BPI_GUI_MNU_AFT_CMD_C_SetActive_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD.TO14_BPI_GUI_MNU_AFT_CMD_C.OnDeselected
struct UTO14_BPI_GUI_MNU_AFT_CMD_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD.TO14_BPI_GUI_MNU_AFT_CMD_C.OnSelected
struct UTO14_BPI_GUI_MNU_AFT_CMD_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD.TO14_BPI_GUI_MNU_AFT_CMD_C.SetItemData
struct UTO14_BPI_GUI_MNU_AFT_CMD_C_SetItemData_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EffectID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               NoSwitchFlag;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_AFT_CMD.TO14_BPI_GUI_MNU_AFT_CMD_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_AFT_CMD_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_CMD.TO14_BPI_GUI_MNU_AFT_CMD_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_AFT_CMD_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_CMD.TO14_BPI_GUI_MNU_AFT_CMD_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_AFT_CMD_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_CMD.TO14_BPI_GUI_MNU_AFT_CMD_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_AFT_CMD_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_CMD.TO14_BPI_GUI_MNU_AFT_CMD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_CMD
struct UTO14_BPI_GUI_MNU_AFT_CMD_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_CMD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
