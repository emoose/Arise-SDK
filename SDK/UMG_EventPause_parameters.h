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

// Function UMG_EventPause.UMG_EventPause_C.Tick
struct UUMG_EventPause_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_EventPause.UMG_EventPause_C.OnChangeDebugCamera
struct UUMG_EventPause_C_OnChangeDebugCamera_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_EventPause.UMG_EventPause_C.Construct
struct UUMG_EventPause_C_Construct_Params
{
};

// Function UMG_EventPause.UMG_EventPause_C.ExecuteUbergraph_UMG_EventPause
struct UUMG_EventPause_C_ExecuteUbergraph_UMG_EventPause_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
