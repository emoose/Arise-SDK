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

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseImmidiate
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_CloseImmidiate_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetEnableDecideSE
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetEnableDecideSE_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetArtsMulti
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetArtsMulti_Params
{
	TArray<struct FName>                               ArtsLabels;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.RemoveItems
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_RemoveItems_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.ForceDecide
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_ForceDecide_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Abort
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_Abort_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetItemStructMulti
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetItemStructMulti_Params
{
	TArray<struct FSysWinItemData>                     ItemDataArray;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetRisePoint
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetRisePoint_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetGald
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetGald_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnOpened
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OnOpened_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseRisePoint
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_CloseRisePoint_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseGald
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_CloseGald_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OpenRisePoint
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OpenRisePoint_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OpenGald
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OpenGald_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnClosed
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OnClosed_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Decide
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_Decide_Params
{
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.GetLastResult
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_GetLastResult_Params
{
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.IsClose
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_IsClose_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Close
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_Close_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.UpdatePad
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_UpdatePad_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.PadTerm
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_PadTerm_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.PadInit
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_PadInit_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Open
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_Open_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideTitle
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideTitle_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideText
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideText_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideRisePoint
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideRisePoint_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideGald
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideGald_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.RemoveSelection
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_RemoveSelection_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideItem
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideItem_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideEnemy
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideEnemy_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.AddRisePoint
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_AddRisePoint_Params
{
	int                                                AddRP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.AddGald
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_AddGald_Params
{
	int                                                AddGald;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetSelection
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetSelection_Params
{
	TArray<struct FModifiedText>                       SelectList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                DefaultIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberPerPage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetText
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetText_Params
{
	struct FModifiedText                               Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetItem
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetItem_Params
{
	struct FString                                     ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetEnemy
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetEnemy_Params
{
	struct FString                                     QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetTitle
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetTitle_Params
{
	struct FModifiedText                               Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.HideAll
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_HideAll_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.Construct
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.UpdateTick
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_UpdateTick_Params
{
	float                                              TickData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.SetupDelegate
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_SetupDelegate_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.CloseFinished
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_CloseFinished_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.EventCancel
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_EventCancel_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_LAYOUT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnOpenStartEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OnOpenStartEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnCloseEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OnCloseEvent__DelegateSignature_Params
{
};

// Function TO14_BPI_GUI_SYS_WIN_LAYOUT.TO14_BPI_GUI_SYS_WIN_LAYOUT_C.OnOpenEvent__DelegateSignature
struct UTO14_BPI_GUI_SYS_WIN_LAYOUT_C_OnOpenEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
