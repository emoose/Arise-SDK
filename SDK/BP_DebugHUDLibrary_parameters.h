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

// Function BP_DebugHUDLibrary.BP_DebugHUDLibrary_C.GetUMGDebugHudInterface
struct UBP_DebugHUDLibrary_C_GetUMGDebugHudInterface_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UUMG_GameDebugHUD_Interface_C> DebugHUD;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugHUDLibrary.BP_DebugHUDLibrary_C.GetDebugHUD
struct UBP_DebugHUDLibrary_C_GetDebugHUD_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADebugHUD_C*                                 DebugHUD;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
