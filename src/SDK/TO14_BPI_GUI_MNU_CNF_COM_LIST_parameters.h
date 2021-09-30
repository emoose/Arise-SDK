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

// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.StopTextChangeAnime
struct UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_StopTextChangeAnime_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.SetModifiedText
struct UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_SetModifiedText_Params
{
	struct FModifiedText                               InModifiedText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               InIsAnim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.SetText
struct UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_SetText_Params
{
	struct FName                                       InTextLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsAnim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_BndEvt__ClickableArea_K2Node_ComponentBoundEvent_0_OnClickableAreaHoverEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_COM_LIST
struct UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_COM_LIST_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.MouseHovered__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_MouseHovered__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_COM_LIST.TO14_BPI_GUI_MNU_CNF_COM_LIST_C.MouseClicked__DelegateSignature
struct UTO14_BPI_GUI_MNU_CNF_COM_LIST_C_MouseClicked__DelegateSignature_Params
{
	bool                                               InIsCursorL;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
