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

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.IsShowTips
struct ABP_TipsScreenMask_C_IsShowTips_Params
{
	bool                                               bShow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.CreateUI
struct ABP_TipsScreenMask_C_CreateUI_Params
{
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.IsUnMasked
struct ABP_TipsScreenMask_C_IsUnMasked_Params
{
	bool                                               bUnMasked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.IsMasked
struct ABP_TipsScreenMask_C_IsMasked_Params
{
	bool                                               bMasked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.ChangeVisibleNowLoading
struct ABP_TipsScreenMask_C_ChangeVisibleNowLoading_Params
{
	bool                                               bNewVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.DoScreenFade
struct ABP_TipsScreenMask_C_DoScreenFade_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Instantry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.UserConstructionScript
struct ABP_TipsScreenMask_C_UserConstructionScript_Params
{
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.DoScreenMask
struct ABP_TipsScreenMask_C_DoScreenMask_Params
{
	bool                                               MaskOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.ReceiveBeginPlay
struct ABP_TipsScreenMask_C_ReceiveBeginPlay_Params
{
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.ReceiveTick
struct ABP_TipsScreenMask_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.OnScreenFade
struct ABP_TipsScreenMask_C_OnScreenFade_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Instantry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.TakeOverFadeState
struct ABP_TipsScreenMask_C_TakeOverFadeState_Params
{
	class AScreenMaskBase*                             OldMask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.OnReleaseCurrent
struct ABP_TipsScreenMask_C_OnReleaseCurrent_Params
{
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.OnAssignCurrent
struct ABP_TipsScreenMask_C_OnAssignCurrent_Params
{
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.ReceiveEndPlay
struct ABP_TipsScreenMask_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.ExecuteUbergraph_BP_TipsScreenMask
struct ABP_TipsScreenMask_C_ExecuteUbergraph_BP_TipsScreenMask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TipsScreenMask.BP_TipsScreenMask_C.EventScreenFade__DelegateSignature
struct ABP_TipsScreenMask_C_EventScreenFade__DelegateSignature_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Instantry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
