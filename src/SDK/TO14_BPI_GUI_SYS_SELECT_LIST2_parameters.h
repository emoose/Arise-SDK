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

// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.ExecPad
struct UTO14_BPI_GUI_SYS_SELECT_LIST2_C_ExecPad_Params
{
};

// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Decide
struct UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Decide_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Next
struct UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Next_Params
{
};

// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Prev
struct UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Prev_Params
{
};

// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Select
struct UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Select_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Setup
struct UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Setup_Params
{
	TArray<struct FModifiedText>                       Choices;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCancel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusLastByCancel;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       IsRead;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.Tick
struct UTO14_BPI_GUI_SYS_SELECT_LIST2_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SELECT_LIST2
struct UTO14_BPI_GUI_SYS_SELECT_LIST2_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_SELECT_LIST2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SELECT_LIST2.TO14_BPI_GUI_SYS_SELECT_LIST2_C.OnClose__DelegateSignature
struct UTO14_BPI_GUI_SYS_SELECT_LIST2_C_OnClose__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
