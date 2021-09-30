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

// Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.CanAdsorb
struct UBP_MenuFreeCursorClickableAreaInterface_C_CanAdsorb_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.IsOnFreeCursorReaction
struct UBP_MenuFreeCursorClickableAreaInterface_C_IsOnFreeCursorReaction_Params
{
	bool                                               IsReaction;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.OnFreeCursorDecided
struct UBP_MenuFreeCursorClickableAreaInterface_C_OnFreeCursorDecided_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.OnFreeCursorUnhovered
struct UBP_MenuFreeCursorClickableAreaInterface_C_OnFreeCursorUnhovered_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickableAreaInterface.BP_MenuFreeCursorClickableAreaInterface_C.OnFreeCusrorHovered
struct UBP_MenuFreeCursorClickableAreaInterface_C_OnFreeCusrorHovered_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
