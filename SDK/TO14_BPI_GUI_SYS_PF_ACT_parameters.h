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

// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.Refresh
struct UTO14_BPI_GUI_SYS_PF_ACT_C_Refresh_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.SetIsCPAction
struct UTO14_BPI_GUI_SYS_PF_ACT_C_SetIsCPAction_Params
{
	bool                                               InIsCPAction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.GetIsCPAction
struct UTO14_BPI_GUI_SYS_PF_ACT_C_GetIsCPAction_Params
{
	bool                                               OutIsCPAction;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.ShowCP
struct UTO14_BPI_GUI_SYS_PF_ACT_C_ShowCP_Params
{
	int                                                InCPPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.SetInfo
struct UTO14_BPI_GUI_SYS_PF_ACT_C_SetInfo_Params
{
	struct FModifiedText                               iModText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Button;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCPPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.Construct
struct UTO14_BPI_GUI_SYS_PF_ACT_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.EventOnCloseAnimationEnd
struct UTO14_BPI_GUI_SYS_PF_ACT_C_EventOnCloseAnimationEnd_Params
{
};

// Function TO14_BPI_GUI_SYS_PF_ACT.TO14_BPI_GUI_SYS_PF_ACT_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_ACT
struct UTO14_BPI_GUI_SYS_PF_ACT_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_PF_ACT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
