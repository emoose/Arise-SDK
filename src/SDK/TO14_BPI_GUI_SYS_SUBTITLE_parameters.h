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

// Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.SetVisible
struct UTO14_BPI_GUI_SYS_SUBTITLE_C_SetVisible_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.ClearString
struct UTO14_BPI_GUI_SYS_SUBTITLE_C_ClearString_Params
{
};

// Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.SetStringID
struct UTO14_BPI_GUI_SYS_SUBTITLE_C_SetStringID_Params
{
	struct FString                                     Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.Construct
struct UTO14_BPI_GUI_SYS_SUBTITLE_C_Construct_Params
{
};

// Function TO14_BPI_GUI_SYS_SUBTITLE.TO14_BPI_GUI_SYS_SUBTITLE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_SUBTITLE
struct UTO14_BPI_GUI_SYS_SUBTITLE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_SUBTITLE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
