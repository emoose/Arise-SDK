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

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetMouseCursorPosition
struct UTO14_BPI_GUI_SYS_WIN_00_C_SetMouseCursorPosition_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.ItemBoxAddChildren
struct UTO14_BPI_GUI_SYS_WIN_00_C_ItemBoxAddChildren_Params
{
	class UWidget*                                     InWidgetObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.ItemBoxClearChildren
struct UTO14_BPI_GUI_SYS_WIN_00_C_ItemBoxClearChildren_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Cancel
struct UTO14_BPI_GUI_SYS_WIN_00_C_Cancel_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.AddCustomParts
struct UTO14_BPI_GUI_SYS_WIN_00_C_AddCustomParts_Params
{
	class UBP_SysWin_PartsBase_C*                      Parts;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.GetSelectedIndex
struct UTO14_BPI_GUI_SYS_WIN_00_C_GetSelectedIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.PagePrev
struct UTO14_BPI_GUI_SYS_WIN_00_C_PagePrev_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.PageNext
struct UTO14_BPI_GUI_SYS_WIN_00_C_PageNext_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Next
struct UTO14_BPI_GUI_SYS_WIN_00_C_Next_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Prev
struct UTO14_BPI_GUI_SYS_WIN_00_C_Prev_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Decide
struct UTO14_BPI_GUI_SYS_WIN_00_C_Decide_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.CalcPageNum
struct UTO14_BPI_GUI_SYS_WIN_00_C_CalcPageNum_Params
{
	int                                                Total;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PerPage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PageNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Select
struct UTO14_BPI_GUI_SYS_WIN_00_C_Select_Params
{
	int                                                NewUniqueId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetPage
struct UTO14_BPI_GUI_SYS_WIN_00_C_SetPage_Params
{
	int                                                CurrentPage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.HideText
struct UTO14_BPI_GUI_SYS_WIN_00_C_HideText_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.HideTitle
struct UTO14_BPI_GUI_SYS_WIN_00_C_HideTitle_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.RemoveSelection
struct UTO14_BPI_GUI_SYS_WIN_00_C_RemoveSelection_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetSelection
struct UTO14_BPI_GUI_SYS_WIN_00_C_SetSelection_Params
{
	TArray<struct FModifiedText>                       SelectionList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num_Per_Page;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetText
struct UTO14_BPI_GUI_SYS_WIN_00_C_SetText_Params
{
	struct FModifiedText                               Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.SetTitle
struct UTO14_BPI_GUI_SYS_WIN_00_C_SetTitle_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.Construct
struct UTO14_BPI_GUI_SYS_WIN_00_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.OnAnimationFinished
struct UTO14_BPI_GUI_SYS_WIN_00_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_00
struct UTO14_BPI_GUI_SYS_WIN_00_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_00_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.OnCancel__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_00_C_OnCancel__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.OnDecide__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_00_C_OnDecide__DelegateSignature_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_00.TO14_BPI_GUI_SYS_WIN_00_C.AnimationFinish__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_00_C_AnimationFinish__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
