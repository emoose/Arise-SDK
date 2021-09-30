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

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.ChangeButtonText
struct UTO14_BPI_GUI_MNU_MAS_SET_C_ChangeButtonText_Params
{
	int                                                SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.Select
struct UTO14_BPI_GUI_MNU_MAS_SET_C_Select_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SetTitleText
struct UTO14_BPI_GUI_MNU_MAS_SET_C_SetTitleText_Params
{
	struct FDictionaryText                             DicText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.MouseMoveRequestCheck
struct UTO14_BPI_GUI_MNU_MAS_SET_C_MouseMoveRequestCheck_Params
{
	bool                                               IsMove;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.GetArtsLabel
struct UTO14_BPI_GUI_MNU_MAS_SET_C_GetArtsLabel_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SetArtsLabel
struct UTO14_BPI_GUI_MNU_MAS_SET_C_SetArtsLabel_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.IsSelect
struct UTO14_BPI_GUI_MNU_MAS_SET_C_IsSelect_Params
{
	bool                                               Select;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SelectChange
struct UTO14_BPI_GUI_MNU_MAS_SET_C_SelectChange_Params
{
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SelectClear
struct UTO14_BPI_GUI_MNU_MAS_SET_C_SelectClear_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.PadWork
struct UTO14_BPI_GUI_MNU_MAS_SET_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MouseCheckOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.GetCursorIndex
struct UTO14_BPI_GUI_MNU_MAS_SET_C_GetCursorIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.CursorDown
struct UTO14_BPI_GUI_MNU_MAS_SET_C_CursorDown_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.CursorUp
struct UTO14_BPI_GUI_MNU_MAS_SET_C_CursorUp_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SetMouseEnable
struct UTO14_BPI_GUI_MNU_MAS_SET_C_SetMouseEnable_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.EnterRequest
struct UTO14_BPI_GUI_MNU_MAS_SET_C_EnterRequest_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.SelectRequest
struct UTO14_BPI_GUI_MNU_MAS_SET_C_SelectRequest_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_MAS_SET_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.Construct
struct UTO14_BPI_GUI_MNU_MAS_SET_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.Tick
struct UTO14_BPI_GUI_MNU_MAS_SET_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.InitEvent
struct UTO14_BPI_GUI_MNU_MAS_SET_C_InitEvent_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_SET.TO14_BPI_GUI_MNU_MAS_SET_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET
struct UTO14_BPI_GUI_MNU_MAS_SET_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_SET_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
