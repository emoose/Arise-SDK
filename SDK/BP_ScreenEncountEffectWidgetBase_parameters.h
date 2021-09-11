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

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.GetScreenMaskAnimState
struct ABP_ScreenEncountEffectWidgetBase_C_GetScreenMaskAnimState_Params
{
	EUBtlEncountEffectWidgetState                      NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.SetCreateWidget
struct ABP_ScreenEncountEffectWidgetBase_C_SetCreateWidget_Params
{
	class UClass*                                      CrateWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.PlayStartAnim
struct ABP_ScreenEncountEffectWidgetBase_C_PlayStartAnim_Params
{
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.SafeReleaseWidget
struct ABP_ScreenEncountEffectWidgetBase_C_SafeReleaseWidget_Params
{
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.DoMaskOn
struct ABP_ScreenEncountEffectWidgetBase_C_DoMaskOn_Params
{
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.GetEncountEffectAnimState
struct ABP_ScreenEncountEffectWidgetBase_C_GetEncountEffectAnimState_Params
{
	EUBtlEncountEffectWidgetState                      AnimState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.GetEncountEffectWidget
struct ABP_ScreenEncountEffectWidgetBase_C_GetEncountEffectWidget_Params
{
	class UBtl_EncountEffectWidget*                    Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.IsUnMasked
struct ABP_ScreenEncountEffectWidgetBase_C_IsUnMasked_Params
{
	bool                                               bUnMasked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.IsMasked
struct ABP_ScreenEncountEffectWidgetBase_C_IsMasked_Params
{
	bool                                               bMasked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.UserConstructionScript
struct ABP_ScreenEncountEffectWidgetBase_C_UserConstructionScript_Params
{
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.DoScreenMask
struct ABP_ScreenEncountEffectWidgetBase_C_DoScreenMask_Params
{
	bool                                               MaskOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnReleaseCurrent
struct ABP_ScreenEncountEffectWidgetBase_C_OnReleaseCurrent_Params
{
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnAssignCurrent
struct ABP_ScreenEncountEffectWidgetBase_C_OnAssignCurrent_Params
{
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.ReceiveEndPlay
struct ABP_ScreenEncountEffectWidgetBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnEndAnimFinished_Event
struct ABP_ScreenEncountEffectWidgetBase_C_OnEndAnimFinished_Event_Params
{
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnStartAnimFinish_Event
struct ABP_ScreenEncountEffectWidgetBase_C_OnStartAnimFinish_Event_Params
{
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.BindingStartAnimFinish
struct ABP_ScreenEncountEffectWidgetBase_C_BindingStartAnimFinish_Params
{
	struct FAriseSimpleEventData                       Delegate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.ExecuteUbergraph_BP_ScreenEncountEffectWidgetBase
struct ABP_ScreenEncountEffectWidgetBase_C_ExecuteUbergraph_BP_ScreenEncountEffectWidgetBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScreenEncountEffectWidgetBase.BP_ScreenEncountEffectWidgetBase_C.OnStartAnimFinished__DelegateSignature
struct ABP_ScreenEncountEffectWidgetBase_C_OnStartAnimFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
