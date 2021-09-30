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

// Function TO14_BPI_GUI_MNU_AFT_WIN00.TO14_BPI_GUI_MNU_AFT_WIN00_C.Init
struct UTO14_BPI_GUI_MNU_AFT_WIN00_C_Init_Params
{
};

// Function TO14_BPI_GUI_MNU_AFT_WIN00.TO14_BPI_GUI_MNU_AFT_WIN00_C.SetupItem
struct UTO14_BPI_GUI_MNU_AFT_WIN00_C_SetupItem_Params
{
	struct FArtifactData                               AtifactData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PartsComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExParts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
