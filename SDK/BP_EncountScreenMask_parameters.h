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

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.GetScreenMaskAnimState
struct ABP_EncountScreenMask_C_GetScreenMaskAnimState_Params
{
	EUBtlEncountEffectWidgetState                      NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.GetDynamicMaterialInstance
struct ABP_EncountScreenMask_C_GetDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.GetEncountEffectWidget
struct ABP_EncountScreenMask_C_GetEncountEffectWidget_Params
{
	class UBtl_EncountEffectWidget*                    Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.IsUnMasked
struct ABP_EncountScreenMask_C_IsUnMasked_Params
{
	bool                                               bUnMasked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.IsMasked
struct ABP_EncountScreenMask_C_IsMasked_Params
{
	bool                                               bMasked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.UserConstructionScript
struct ABP_EncountScreenMask_C_UserConstructionScript_Params
{
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.DoCaptureSceneComplete
struct ABP_EncountScreenMask_C_DoCaptureSceneComplete_Params
{
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.DoScreenMask
struct ABP_EncountScreenMask_C_DoScreenMask_Params
{
	bool                                               MaskOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnEndAnimFinished_Event
struct ABP_EncountScreenMask_C_OnEndAnimFinished_Event_Params
{
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnAssignCurrent
struct ABP_EncountScreenMask_C_OnAssignCurrent_Params
{
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnReleaseCurrent
struct ABP_EncountScreenMask_C_OnReleaseCurrent_Params
{
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.ReceiveEndPlay
struct ABP_EncountScreenMask_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.SetVisible
struct ABP_EncountScreenMask_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.BindingStartAnimFinish
struct ABP_EncountScreenMask_C_BindingStartAnimFinish_Params
{
	struct FAriseSimpleEventData                       Delegate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.@OnStartAnimFinished
struct ABP_EncountScreenMask_C_@OnStartAnimFinished_Params
{
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.ExecuteUbergraph_BP_EncountScreenMask
struct ABP_EncountScreenMask_C_ExecuteUbergraph_BP_EncountScreenMask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EncountScreenMask.BP_EncountScreenMask_C.OnStartAnimFinished__DelegateSignature
struct ABP_EncountScreenMask_C_OnStartAnimFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
