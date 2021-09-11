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

// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.SetSelectImagVisiblity
struct UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_SetSelectImagVisiblity_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.SetButtonData
struct UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_SetButtonData_Params
{
	EULA_Language                                      Lang;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ButtonLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.OnDeselected
struct UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_OnDeselected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.OnSelected
struct UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_OnSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_1_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_7_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.SetActive
struct UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_SetActive_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_SYS_EULA_BTN_LANG.TO14_BPI_GUI_SYS_EULA_BTN_LANG_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_BTN_LANG
struct UTO14_BPI_GUI_SYS_EULA_BTN_LANG_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_EULA_BTN_LANG_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
