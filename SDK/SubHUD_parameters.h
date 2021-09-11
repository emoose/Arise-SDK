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

// Function SubHUD.SubHUD_C.RenderHUD
struct ASubHUD_C_RenderHUD_Params
{
};

// Function SubHUD.SubHUD_C.UserConstructionScript
struct ASubHUD_C_UserConstructionScript_Params
{
};

// Function SubHUD.SubHUD_C.RenderEvent
struct ASubHUD_C_RenderEvent_Params
{
};

// Function SubHUD.SubHUD_C.ReceiveTick
struct ASubHUD_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubHUD.SubHUD_C.ExecuteUbergraph_SubHUD
struct ASubHUD_C_ExecuteUbergraph_SubHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
