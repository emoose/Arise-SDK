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

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.InitPadSetting
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_InitPadSetting_Params
{
	struct FString                                     Plus10_KeyLabel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Minus10_KeyLabel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.GetNum
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_GetNum_Params
{
	int                                                Now;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.ResetResult
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_ResetResult_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.SetItemDataDirect
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_SetItemDataDirect_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.GetResult
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_GetResult_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.PadWork
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_PadWork_Params
{
	class AMenuPadProcess*                             PadData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.SetItemData
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_SetItemData_Params
{
	struct FMenuItemData                               ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_72_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_72_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_86_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_86_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_113_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_113_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Left_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Right_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_BndEvt__ClickArea_Center_K2Node_ComponentBoundEvent_2_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_ITM_INFO.TO14_BPI_GUI_MNU_ITM_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_INFO
struct UTO14_BPI_GUI_MNU_ITM_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_INFO_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
