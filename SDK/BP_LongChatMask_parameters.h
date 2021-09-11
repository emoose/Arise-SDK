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

// Function BP_LongChatMask.BP_LongChatMask_C.CreateUI
struct ABP_LongChatMask_C_CreateUI_Params
{
};

// Function BP_LongChatMask.BP_LongChatMask_C.DoMasked
struct ABP_LongChatMask_C_DoMasked_Params
{
};

// Function BP_LongChatMask.BP_LongChatMask_C.ChangeVisibleDebug
struct ABP_LongChatMask_C_ChangeVisibleDebug_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatMask.BP_LongChatMask_C.IsUnMasked
struct ABP_LongChatMask_C_IsUnMasked_Params
{
	bool                                               bUnMasked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatMask.BP_LongChatMask_C.IsMasked
struct ABP_LongChatMask_C_IsMasked_Params
{
	bool                                               bMasked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatMask.BP_LongChatMask_C.DoScreenFade
struct ABP_LongChatMask_C_DoScreenFade_Params
{
	bool                                               FadeWhite;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatMask.BP_LongChatMask_C.UserConstructionScript
struct ABP_LongChatMask_C_UserConstructionScript_Params
{
};

// Function BP_LongChatMask.BP_LongChatMask_C.DoScreenMask
struct ABP_LongChatMask_C_DoScreenMask_Params
{
	bool                                               MaskOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatMask.BP_LongChatMask_C.ReceiveBeginPlay
struct ABP_LongChatMask_C_ReceiveBeginPlay_Params
{
};

// Function BP_LongChatMask.BP_LongChatMask_C.OnScreenFade
struct ABP_LongChatMask_C_OnScreenFade_Params
{
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatMask.BP_LongChatMask_C.ReceiveTick
struct ABP_LongChatMask_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatMask.BP_LongChatMask_C.DoCaptureScene
struct ABP_LongChatMask_C_DoCaptureScene_Params
{
	struct FTransform                                  CameraTransform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UCameraComponent*                            BaseCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LongChatMask.BP_LongChatMask_C.ReceiveEndPlay
struct ABP_LongChatMask_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatMask.BP_LongChatMask_C.ExecuteUbergraph_BP_LongChatMask
struct ABP_LongChatMask_C_ExecuteUbergraph_BP_LongChatMask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LongChatMask.BP_LongChatMask_C.EventScreenFade__DelegateSignature
struct ABP_LongChatMask_C_EventScreenFade__DelegateSignature_Params
{
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
