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

// Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.IsRunningGroupJump
struct UBP_MNU_FREE_CURSOR_Interface_C_IsRunningGroupJump_Params
{
	bool                                               bRunning;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.ForceRunGroupJump
struct UBP_MNU_FREE_CURSOR_Interface_C_ForceRunGroupJump_Params
{
	int                                                Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     To;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.MouseUnhoverAll
struct UBP_MNU_FREE_CURSOR_Interface_C_MouseUnhoverAll_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.MouseUnhover
struct UBP_MNU_FREE_CURSOR_Interface_C_MouseUnhover_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_FREE_CURSOR_Interface.BP_MNU_FREE_CURSOR_Interface_C.MouseHover
struct UBP_MNU_FREE_CURSOR_Interface_C_MouseHover_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
