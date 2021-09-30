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

// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.CB_EnterRequest
struct UTO14_BPI_GUI_MNU_MAS_LIST_000_C_CB_EnterRequest_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.CB_SelectRequest
struct UTO14_BPI_GUI_MNU_MAS_LIST_000_C_CB_SelectRequest_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.GetCursorLabel
struct UTO14_BPI_GUI_MNU_MAS_LIST_000_C_GetCursorLabel_Params
{
	struct FName                                       Label;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.PadWork
struct UTO14_BPI_GUI_MNU_MAS_LIST_000_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.InitList
struct UTO14_BPI_GUI_MNU_MAS_LIST_000_C_InitList_Params
{
	int                                                CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMenuArtsType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FindLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.Construct
struct UTO14_BPI_GUI_MNU_MAS_LIST_000_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.OnSelectChange
struct UTO14_BPI_GUI_MNU_MAS_LIST_000_C_OnSelectChange_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_MAS_LIST_000.TO14_BPI_GUI_MNU_MAS_LIST_000_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000
struct UTO14_BPI_GUI_MNU_MAS_LIST_000_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_MAS_LIST_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
