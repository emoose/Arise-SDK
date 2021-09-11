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

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.TPCheck
struct UTO14_BPI_GUI_SYS_PF_TP_C_TPCheck_Params
{
	int                                                InNewTpMax;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InNewTp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.Refresh
struct UTO14_BPI_GUI_SYS_PF_TP_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.GetIsEvent
struct UTO14_BPI_GUI_SYS_PF_TP_C_GetIsEvent_Params
{
	bool                                               OutIsEvent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.SetIsEvent
struct UTO14_BPI_GUI_SYS_PF_TP_C_SetIsEvent_Params
{
	bool                                               InIsEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.SetIsOen
struct UTO14_BPI_GUI_SYS_PF_TP_C_SetIsOen_Params
{
	bool                                               InIsOpen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.GetIsOpen
struct UTO14_BPI_GUI_SYS_PF_TP_C_GetIsOpen_Params
{
	bool                                               OutIsOpen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.GetIsPinch
struct UTO14_BPI_GUI_SYS_PF_TP_C_GetIsPinch_Params
{
	bool                                               OutIsPinch;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PinchColorCheck
struct UTO14_BPI_GUI_SYS_PF_TP_C_PinchColorCheck_Params
{
	bool                                               InIsCPAction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsShow;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.SetShow
struct UTO14_BPI_GUI_SYS_PF_TP_C_SetShow_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PFUIHelp_Initialize
struct UTO14_BPI_GUI_SYS_PF_TP_C_PFUIHelp_Initialize_Params
{
	int                                                InNewTpMax;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InNewTp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PFUIHelp_Close
struct UTO14_BPI_GUI_SYS_PF_TP_C_PFUIHelp_Close_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PFUIHelp_Open
struct UTO14_BPI_GUI_SYS_PF_TP_C_PFUIHelp_Open_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.PreConstruct
struct UTO14_BPI_GUI_SYS_PF_TP_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.Construct
struct UTO14_BPI_GUI_SYS_PF_TP_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.ChangeValue
struct UTO14_BPI_GUI_SYS_PF_TP_C_ChangeValue_Params
{
	int                                                NewTp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OpneStated
struct UTO14_BPI_GUI_SYS_PF_TP_C_OpneStated_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.CloseFinished
struct UTO14_BPI_GUI_SYS_PF_TP_C_CloseFinished_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OpenAnime
struct UTO14_BPI_GUI_SYS_PF_TP_C_OpenAnime_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.CloseAnime
struct UTO14_BPI_GUI_SYS_PF_TP_C_CloseAnime_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OpneEnd
struct UTO14_BPI_GUI_SYS_PF_TP_C_OpneEnd_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_TP
struct UTO14_BPI_GUI_SYS_PF_TP_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_TP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_TP.TO14_BPI_GUI_SYS_PF_TP_C.OnOpenAnimeFinished__DelegateSignature
struct UTO14_BPI_GUI_SYS_PF_TP_C_OnOpenAnimeFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
