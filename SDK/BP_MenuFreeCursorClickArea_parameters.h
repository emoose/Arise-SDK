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

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.CanAdsorb
struct UBP_MenuFreeCursorClickArea_C_CanAdsorb_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.IsOnFreeCursorReaction
struct UBP_MenuFreeCursorClickArea_C_IsOnFreeCursorReaction_Params
{
	bool                                               IsReaction;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.OnFreeCursorDecided
struct UBP_MenuFreeCursorClickArea_C_OnFreeCursorDecided_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.OnFreeCusrorHovered
struct UBP_MenuFreeCursorClickArea_C_OnFreeCusrorHovered_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.OnFreeCursorUnhovered
struct UBP_MenuFreeCursorClickArea_C_OnFreeCursorUnhovered_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.SetCanFreeCursorDecide
struct UBP_MenuFreeCursorClickArea_C_SetCanFreeCursorDecide_Params
{
	bool                                               bCanFreeCursorDecide;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.GetOwnerUserWidget
struct UBP_MenuFreeCursorClickArea_C_GetOwnerUserWidget_Params
{
	class UUserWidget*                                 OwnerUserWidget;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.SetOwnerUserWidget
struct UBP_MenuFreeCursorClickArea_C_SetOwnerUserWidget_Params
{
	class UUserWidget*                                 OwnerUserWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.BindFreeCursorDecidedEvent
struct UBP_MenuFreeCursorClickArea_C_BindFreeCursorDecidedEvent_Params
{
	struct FScriptDelegate                             FreeCursorDecided;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.BindFreeCursorUnhoveredEvent
struct UBP_MenuFreeCursorClickArea_C_BindFreeCursorUnhoveredEvent_Params
{
	struct FScriptDelegate                             OnFreeCursorUnhovered;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.BindFreeCursorHoveredEvent
struct UBP_MenuFreeCursorClickArea_C_BindFreeCursorHoveredEvent_Params
{
	struct FScriptDelegate                             OnFreeCursorHovered;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.FreeCursorDecidedDelegate__DelegateSignature
struct UBP_MenuFreeCursorClickArea_C_FreeCursorDecidedDelegate__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.FreeCursorUnHoveredDelegate__DelegateSignature
struct UBP_MenuFreeCursorClickArea_C_FreeCursorUnHoveredDelegate__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MenuFreeCursorClickArea.BP_MenuFreeCursorClickArea_C.FreeCursorHoveredDelegate__DelegateSignature
struct UBP_MenuFreeCursorClickArea_C_FreeCursorHoveredDelegate__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
