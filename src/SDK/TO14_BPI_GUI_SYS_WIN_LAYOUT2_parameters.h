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

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.ForceDecide
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_ForceDecide_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Abort
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_Abort_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnOpened
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_OnOpened_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnClosed
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_OnClosed_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Decide
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_Decide_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.GetLastResult
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_GetLastResult_Params
{
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.IsClose
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_IsClose_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Close
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_Close_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.UpdatePad
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_UpdatePad_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.PadTerm
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_PadTerm_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.PadInit
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_PadInit_Params
{
	int                                                InputLayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Open
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_Open_Params
{
	int                                                InputLayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.HideTitle
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_HideTitle_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.HideText
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_HideText_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.RemoveSelection
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_RemoveSelection_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetSelection
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_SetSelection_Params
{
	TArray<struct FModifiedText>                       SelectList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberPerPage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetText
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_SetText_Params
{
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetTitle
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_SetTitle_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.HideAll
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_HideAll_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.Construct
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.UpdateTick
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_UpdateTick_Params
{
	float                                              TickData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.SetupDelegate
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_SetupDelegate_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT2
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnOpenStartEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_OnOpenStartEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnCloseEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_OnCloseEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT2.TO14_BPI_GUI_SYS_WIN_LAYOUT2_C.OnOpenEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT2_C_OnOpenEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
