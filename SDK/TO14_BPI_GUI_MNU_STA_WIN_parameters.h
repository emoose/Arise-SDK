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

// Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.SkillTextVisibility
struct UTO14_BPI_GUI_MNU_STA_WIN_C_SkillTextVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.InitStatus
struct UTO14_BPI_GUI_MNU_STA_WIN_C_InitStatus_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMenuStatusSceneData                        StatusParam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.OnViewOpen
struct UTO14_BPI_GUI_MNU_STA_WIN_C_OnViewOpen_Params
{
};

// Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.OnCharaChanged
struct UTO14_BPI_GUI_MNU_STA_WIN_C_OnCharaChanged_Params
{
};

// Function TO14_BPI_GUI_MNU_STA_WIN.TO14_BPI_GUI_MNU_STA_WIN_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_STA_WIN
struct UTO14_BPI_GUI_MNU_STA_WIN_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_STA_WIN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
