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

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.Refresh
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.SetText
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_SetText_Params
{
	struct FModifiedText                               InModifiedText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.SetIcon
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_SetIcon_Params
{
	bool                                               InIsMainQuest;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.SetShow
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_SetShow_Params
{
	bool                                               InIsShow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.PFUIHelp_Close
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_PFUIHelp_Close_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.PFUIHelp_Open
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_PFUIHelp_Open_Params
{
	bool                                               InIsMainQuest;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.getIsShow
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_getIsShow_Params
{
	bool                                               OutIsShow;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.Construct
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.AnimaStarted
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_AnimaStarted_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.AnimaFinished
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_AnimaFinished_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.OpenStarted
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_OpenStarted_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.CloseFinished
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_CloseFinished_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_NEXT.TO14_BPI_GUI_SYS_PF_NEXT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_NEXT
struct UTO14_BPI_GUI_SYS_PF_NEXT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_NEXT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
