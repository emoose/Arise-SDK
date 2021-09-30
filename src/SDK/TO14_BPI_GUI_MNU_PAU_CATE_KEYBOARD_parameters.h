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

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.PadWork
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_PadWork_Params
{
	class AMenuPadProcess*                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.SetShowClickable
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_SetShowClickable_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.ChangeOperationType
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_ChangeOperationType_Params
{
	int                                                InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.Initialize
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_Initialize_Params
{
	TArray<struct FDictionaryText>                     Types;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TypeCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LeftLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     RightLabel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_0_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_1_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_2_OnMouseClickedEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_3_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_4_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__ClickableArea_L_K2Node_ComponentBoundEvent_4_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__ClickableArea_R_K2Node_ComponentBoundEvent_5_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_BndEvt__OperationType_ClickableArea_K2Node_ComponentBoundEvent_6_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD.TO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C.EventChangeOperation__DelegateSignature
struct UTO14_BPI_GUI_MNU_PAU_CATE_KEYBOARD_C_EventChangeOperation__DelegateSignature_Params
{
	int                                                InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
