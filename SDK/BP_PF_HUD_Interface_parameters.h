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

// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.GetDefaultShow
struct UBP_PF_HUD_Interface_C_GetDefaultShow_Params
{
	TArray<bool>                                       IsDefaultShow;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.Hide
struct UBP_PF_HUD_Interface_C_Hide_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.CheckPastStory
struct UBP_PF_HUD_Interface_C_CheckPastStory_Params
{
	bool                                               OutIsPastStory;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.Refresh
struct UBP_PF_HUD_Interface_C_Refresh_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.ChangePFUIPattern
struct UBP_PF_HUD_Interface_C_ChangePFUIPattern_Params
{
	EPFUIPattern                                       InEPFUIPattern;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsChangeLock;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.UpdateDuringControl
struct UBP_PF_HUD_Interface_C_UpdateDuringControl_Params
{
	EPFUIParts                                         InPFUIParts;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.GetPFLayoutInterface
struct UBP_PF_HUD_Interface_C_GetPFLayoutInterface_Params
{
	TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C> PFLayout;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.RequestInitializeLongChatManager
struct UBP_PF_HUD_Interface_C_RequestInitializeLongChatManager_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
