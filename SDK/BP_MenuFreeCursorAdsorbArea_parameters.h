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

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.CanAdsorb
struct UBP_MenuFreeCursorAdsorbArea_C_CanAdsorb_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.IsOnFreeCursorReaction
struct UBP_MenuFreeCursorAdsorbArea_C_IsOnFreeCursorReaction_Params
{
	bool                                               IsReaction;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorDecided
struct UBP_MenuFreeCursorAdsorbArea_C_OnFreeCursorDecided_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorUnhovered
struct UBP_MenuFreeCursorAdsorbArea_C_OnFreeCursorUnhovered_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCusrorHovered
struct UBP_MenuFreeCursorAdsorbArea_C_OnFreeCusrorHovered_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.SetActive
struct UBP_MenuFreeCursorAdsorbArea_C_SetActive_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.BindFreeCursorUnhoveredEvent
struct UBP_MenuFreeCursorAdsorbArea_C_BindFreeCursorUnhoveredEvent_Params
{
	struct FScriptDelegate                             OnFreeCursorUnhovered;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.BindFreeCursorHoveredEvent
struct UBP_MenuFreeCursorAdsorbArea_C_BindFreeCursorHoveredEvent_Params
{
	struct FScriptDelegate                             OnFreeCursorHovered;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.CheckInsideAndLength
struct UBP_MenuFreeCursorAdsorbArea_C_CheckInsideAndLength_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsInside;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorUnhoveredEvent__DelegateSignature
struct UBP_MenuFreeCursorAdsorbArea_C_OnFreeCursorUnhoveredEvent__DelegateSignature_Params
{
};

// Function BP_MenuFreeCursorAdsorbArea.BP_MenuFreeCursorAdsorbArea_C.OnFreeCursorHoveredEvent__DelegateSignature
struct UBP_MenuFreeCursorAdsorbArea_C_OnFreeCursorHoveredEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
