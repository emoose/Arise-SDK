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

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.BindOnPreviewEvent
struct UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_BindOnPreviewEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.Preview
struct UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_Preview_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.Refresh
struct UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.SetIndex
struct UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_SetIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.EnterCommand
struct UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_EnterCommand_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.PadWork
struct UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_PadWork_Params
{
	class AMenuPadProcess*                             PadProcess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Select;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.SelectCommand
struct UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_SelectCommand_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.Initialize
struct UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_Initialize_Params
{
};

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.OnPreviewEvent__DelegateSignature
struct UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_OnPreviewEvent__DelegateSignature_Params
{
	TMap<EArisePartyID, int>                           HealHPMap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                UseTP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
