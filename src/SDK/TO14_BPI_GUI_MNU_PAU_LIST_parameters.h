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

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.RequestMouseFocus
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_RequestMouseFocus_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.SetMouseFocus
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_SetMouseFocus_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.IndexToReturnValue
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_IndexToReturnValue_Params
{
	int                                                A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPauseMenuResult>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Next
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_Next_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Prev
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_Prev_Params
{
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.InitItem
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_InitItem_Params
{
	class UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C*        InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifiedText                               ModifiedText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Select
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_Select_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.MouseDecide
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_MouseDecide_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.SetActivate
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_SetActivate_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.GetResult
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_GetResult_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.PadWork
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Decided;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPauseMenuResult>                      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Init
struct UTO14_BPI_GUI_MNU_PAU_LIST_C_Init_Params
{
	TEnumAsByte<EPauseMenuOpenType>                    OpenType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
