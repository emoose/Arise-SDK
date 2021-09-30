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

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.IsUnMasked
struct ABP_CaptureScreenMask_C_IsUnMasked_Params
{
	bool                                               bUnMasked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.IsMasked
struct ABP_CaptureScreenMask_C_IsMasked_Params
{
	bool                                               bMasked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.DoScreenFade
struct ABP_CaptureScreenMask_C_DoScreenFade_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.UserConstructionScript
struct ABP_CaptureScreenMask_C_UserConstructionScript_Params
{
};

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.DoScreenMask
struct ABP_CaptureScreenMask_C_DoScreenMask_Params
{
	bool                                               MaskOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ReceiveBeginPlay
struct ABP_CaptureScreenMask_C_ReceiveBeginPlay_Params
{
};

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ReceiveTick
struct ABP_CaptureScreenMask_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.OnScreenFade
struct ABP_CaptureScreenMask_C_OnScreenFade_Params
{
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ZeroTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ReceiveEndPlay
struct ABP_CaptureScreenMask_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.ExecuteUbergraph_BP_CaptureScreenMask
struct ABP_CaptureScreenMask_C_ExecuteUbergraph_BP_CaptureScreenMask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CaptureScreenMask.BP_CaptureScreenMask_C.EventScreenFade__DelegateSignature
struct ABP_CaptureScreenMask_C_EventScreenFade__DelegateSignature_Params
{
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ZeroTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
