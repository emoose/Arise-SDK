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

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.LogDelayFadeStateCheck
struct ABP_DefaultScreenMask_C_LogDelayFadeStateCheck_Params
{
	struct FString                                     InFadeState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.LogAnimationRequestCheck
struct ABP_DefaultScreenMask_C_LogAnimationRequestCheck_Params
{
	struct FString                                     InFadeState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.IsUnMasked
struct ABP_DefaultScreenMask_C_IsUnMasked_Params
{
	bool                                               bUnMasked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.IsMasked
struct ABP_DefaultScreenMask_C_IsMasked_Params
{
	bool                                               bMasked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.ChangeVisibleNowLoading
struct ABP_DefaultScreenMask_C_ChangeVisibleNowLoading_Params
{
	bool                                               bNewVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.DoScreenFade
struct ABP_DefaultScreenMask_C_DoScreenFade_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.UserConstructionScript
struct ABP_DefaultScreenMask_C_UserConstructionScript_Params
{
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.DoScreenMask
struct ABP_DefaultScreenMask_C_DoScreenMask_Params
{
	bool                                               MaskOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.ReceiveBeginPlay
struct ABP_DefaultScreenMask_C_ReceiveBeginPlay_Params
{
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.OnScreenFade
struct ABP_DefaultScreenMask_C_OnScreenFade_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.OnReleaseCurrent
struct ABP_DefaultScreenMask_C_OnReleaseCurrent_Params
{
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.OnAssignCurrent
struct ABP_DefaultScreenMask_C_OnAssignCurrent_Params
{
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.ExecuteUbergraph_BP_DefaultScreenMask
struct ABP_DefaultScreenMask_C_ExecuteUbergraph_BP_DefaultScreenMask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultScreenMask.BP_DefaultScreenMask_C.EventScreenFade__DelegateSignature
struct ABP_DefaultScreenMask_C_EventScreenFade__DelegateSignature_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
