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

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.IsSelectState
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_IsSelectState_Params
{
	bool                                               OutIsSelect;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.UpdateSaveData
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_UpdateSaveData_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.KeyboardSaveData
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_KeyboardSaveData_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.GetInputCategory
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_GetInputCategory_Params
{
	EInputCategory                                     OutInputCategory;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.ChengOperation
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_ChengOperation_Params
{
	int                                                InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.GetText
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_GetText_Params
{
	struct FString                                     inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FModifiedText                               OutMText;                                                 // (Parm, OutParm)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.PadSaveData
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_PadSaveData_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.SetList
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_SetList_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.CreateList
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_CreateList_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.Initialize
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.PadControl
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_PadControl_Params
{
	class AMenuPadProcess*                             InPadProsess;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsEnd;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.CloseAnima
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_CloseAnima_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.OpenAnima
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_OpenAnima_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.Chengekey
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_Chengekey_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.Construct
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.InputDialogClose
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_InputDialogClose_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.«0¹0¿0à0¤0Ù0ó0È0_1
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params
{
	struct FModifiedText                               InChengeTitle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               InButtunIMessage_Text;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               InButtunID_Text;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FModifiedText                               InChengeMessage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.InputDialog_CloseEnd
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_InputDialog_CloseEnd_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.InputDialog_OpenStart
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_InputDialog_OpenStart_Params
{
};

// Function TO14_BPI_GUI_MNU_CNF_KEY_BASE.TO14_BPI_GUI_MNU_CNF_KEY_BASE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_BASE
struct UTO14_BPI_GUI_MNU_CNF_KEY_BASE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
