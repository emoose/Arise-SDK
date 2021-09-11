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

// Function TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C.DeReaction
struct UTO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C_DeReaction_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               EndReaction;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C.Reaction
struct UTO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C_Reaction_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               StartReaction;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C.GetEntityWidget
struct UTO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C_GetEntityWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
