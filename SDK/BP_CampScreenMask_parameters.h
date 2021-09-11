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

// Function BP_CampScreenMask.BP_CampScreenMask_C.SetFadeSpeedType
struct ABP_CampScreenMask_C_SetFadeSpeedType_Params
{
	struct FString                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.BlackOut
struct ABP_CampScreenMask_C_BlackOut_Params
{
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.IsUnMasked
struct ABP_CampScreenMask_C_IsUnMasked_Params
{
	bool                                               bUnMasked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.IsMasked
struct ABP_CampScreenMask_C_IsMasked_Params
{
	bool                                               bMasked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.ChangeVisibleNowLoading
struct ABP_CampScreenMask_C_ChangeVisibleNowLoading_Params
{
	bool                                               bNewVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.DoScreenFade
struct ABP_CampScreenMask_C_DoScreenFade_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.UserConstructionScript
struct ABP_CampScreenMask_C_UserConstructionScript_Params
{
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.DoScreenMask
struct ABP_CampScreenMask_C_DoScreenMask_Params
{
	bool                                               MaskOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.ReceiveBeginPlay
struct ABP_CampScreenMask_C_ReceiveBeginPlay_Params
{
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.OnScreenFade
struct ABP_CampScreenMask_C_OnScreenFade_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.ReceiveTick
struct ABP_CampScreenMask_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.OnReleaseCurrent
struct ABP_CampScreenMask_C_OnReleaseCurrent_Params
{
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.ExecuteUbergraph_BP_CampScreenMask
struct ABP_CampScreenMask_C_ExecuteUbergraph_BP_CampScreenMask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CampScreenMask.BP_CampScreenMask_C.EventScreenFade__DelegateSignature
struct ABP_CampScreenMask_C_EventScreenFade__DelegateSignature_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
