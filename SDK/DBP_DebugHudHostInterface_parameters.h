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

// Function DBP_DebugHudHostInterface.DBP_DebugHudHostInterface_C.GetUMGDebugHudInterface
struct UDBP_DebugHudHostInterface_C_GetUMGDebugHudInterface_Params
{
	TScriptInterface<class UUMG_GameDebugHUD_Interface_C> DebugHUD;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DBP_DebugHudHostInterface.DBP_DebugHudHostInterface_C.GetDebugHudInstance
struct UDBP_DebugHudHostInterface_C_GetDebugHudInstance_Params
{
	class ADebugHUD_C*                                 DebugHUD;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
