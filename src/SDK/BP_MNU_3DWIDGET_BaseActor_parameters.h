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

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimCloseFinishedEvent
struct ABP_MNU_3DWIDGET_BaseActor_C_BindAnimCloseFinishedEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimOpenFinishedEvent
struct ABP_MNU_3DWIDGET_BaseActor_C_BindAnimOpenFinishedEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimCloseStartEvent
struct ABP_MNU_3DWIDGET_BaseActor_C_BindAnimCloseStartEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.BindAnimOpenStartEvent
struct ABP_MNU_3DWIDGET_BaseActor_C_BindAnimOpenStartEvent_Params
{
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.IsPlayingAnimation
struct ABP_MNU_3DWIDGET_BaseActor_C_IsPlayingAnimation_Params
{
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.CheckFinishAnim
struct ABP_MNU_3DWIDGET_BaseActor_C_CheckFinishAnim_Params
{
	class UCurveVector*                                LocationCurve;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                RotationCurve;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                ScaleCurve;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFinish;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.MakeAnimTransform
struct ABP_MNU_3DWIDGET_BaseActor_C_MakeAnimTransform_Params
{
	class UCurveVector*                                LocationCurve;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                RotationCurve;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                ScaleCurve;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Trans;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.PlayAnimClose
struct ABP_MNU_3DWIDGET_BaseActor_C_PlayAnimClose_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.PlayAnimOpen
struct ABP_MNU_3DWIDGET_BaseActor_C_PlayAnimOpen_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.UserConstructionScript
struct ABP_MNU_3DWIDGET_BaseActor_C_UserConstructionScript_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimOpen
struct ABP_MNU_3DWIDGET_BaseActor_C_OnAnimOpen_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimClose
struct ABP_MNU_3DWIDGET_BaseActor_C_OnAnimClose_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimOpenStart
struct ABP_MNU_3DWIDGET_BaseActor_C_OnAnimOpenStart_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimCloseStart
struct ABP_MNU_3DWIDGET_BaseActor_C_OnAnimCloseStart_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimOpenFinishded
struct ABP_MNU_3DWIDGET_BaseActor_C_OnAnimOpenFinishded_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.OnAnimCloseFinished
struct ABP_MNU_3DWIDGET_BaseActor_C_OnAnimCloseFinished_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.ReceiveTick
struct ABP_MNU_3DWIDGET_BaseActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.ReceiveBeginPlay
struct ABP_MNU_3DWIDGET_BaseActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.ExecuteUbergraph_BP_MNU_3DWIDGET_BaseActor
struct ABP_MNU_3DWIDGET_BaseActor_C_ExecuteUbergraph_BP_MNU_3DWIDGET_BaseActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimCloseFinishedEvent__DelegateSignature
struct ABP_MNU_3DWIDGET_BaseActor_C_AnimCloseFinishedEvent__DelegateSignature_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimOpenFinishedEvent__DelegateSignature
struct ABP_MNU_3DWIDGET_BaseActor_C_AnimOpenFinishedEvent__DelegateSignature_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimCloseStartEvent__DelegateSignature
struct ABP_MNU_3DWIDGET_BaseActor_C_AnimCloseStartEvent__DelegateSignature_Params
{
};

// Function BP_MNU_3DWIDGET_BaseActor.BP_MNU_3DWIDGET_BaseActor_C.AnimOpenStartEvent__DelegateSignature
struct ABP_MNU_3DWIDGET_BaseActor_C_AnimOpenStartEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
