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

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.BPE_IsExecFall
struct APFAIC_EnSym_Base_C_BPE_IsExecFall_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.CalcFollowRange
struct APFAIC_EnSym_Base_C_CalcFollowRange_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.BPE_IsExecJump
struct APFAIC_EnSym_Base_C_BPE_IsExecJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.CalcRandomMoveRange
struct APFAIC_EnSym_Base_C_CalcRandomMoveRange_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.SetWanderingMode
struct APFAIC_EnSym_Base_C_SetWanderingMode_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.InitControlledPawn
struct APFAIC_EnSym_Base_C_InitControlledPawn_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.GetInitSplinePoint
struct APFAIC_EnSym_Base_C_GetInitSplinePoint_Params
{
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.OnChangeRender
struct APFAIC_EnSym_Base_C_OnChangeRender_Params
{
	bool                                               bRendering;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.FinishBackHome
struct APFAIC_EnSym_Base_C_FinishBackHome_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.FinishRepop
struct APFAIC_EnSym_Base_C_FinishRepop_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.InitBackHomeBlueprint
struct APFAIC_EnSym_Base_C_InitBackHomeBlueprint_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.RepopSymbol
struct APFAIC_EnSym_Base_C_RepopSymbol_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.PrintJumpError
struct APFAIC_EnSym_Base_C_PrintJumpError_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.IsPerception
struct APFAIC_EnSym_Base_C_IsPerception_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.IsFinded
struct APFAIC_EnSym_Base_C_IsFinded_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.IsFollow
struct APFAIC_EnSym_Base_C_IsFollow_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.SetRandomAIState
struct APFAIC_EnSym_Base_C_SetRandomAIState_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.RestartAI
struct APFAIC_EnSym_Base_C_RestartAI_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.StopAI
struct APFAIC_EnSym_Base_C_StopAI_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.IsEscape
struct APFAIC_EnSym_Base_C_IsEscape_Params
{
	bool                                               Escape;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.SetFollowStart
struct APFAIC_EnSym_Base_C_SetFollowStart_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.SetEntrySearchArea
struct APFAIC_EnSym_Base_C_SetEntrySearchArea_Params
{
	bool                                               bEntry;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.SetMoveSpeed
struct APFAIC_EnSym_Base_C_SetMoveSpeed_Params
{
	bool                                               IsWalk;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnify;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.LostTarget
struct APFAIC_EnSym_Base_C_LostTarget_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.FindedTarget
struct APFAIC_EnSym_Base_C_FindedTarget_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.RespawnSymbol
struct APFAIC_EnSym_Base_C_RespawnSymbol_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.InitBlackBoard
struct APFAIC_EnSym_Base_C_InitBlackBoard_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.UserConstructionScript
struct APFAIC_EnSym_Base_C_UserConstructionScript_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.OnInitCallback
struct APFAIC_EnSym_Base_C_OnInitCallback_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.ReceiveBeginPlay
struct APFAIC_EnSym_Base_C_ReceiveBeginPlay_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.OnUsingBlackBoard
struct APFAIC_EnSym_Base_C_OnUsingBlackBoard_Params
{
	class UBlackboardComponent*                        BlackboardComp;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.ReceiveDestroyed
struct APFAIC_EnSym_Base_C_ReceiveDestroyed_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.OnCeilFalling
struct APFAIC_EnSym_Base_C_OnCeilFalling_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.OnDetectActor
struct APFAIC_EnSym_Base_C_OnDetectActor_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.OnInitControlledPawn
struct APFAIC_EnSym_Base_C_OnInitControlledPawn_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.OnInitBehaviour
struct APFAIC_EnSym_Base_C_OnInitBehaviour_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.OnAIPaused
struct APFAIC_EnSym_Base_C_OnAIPaused_Params
{
	bool                                               bPause;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.BPE_ExecJump
struct APFAIC_EnSym_Base_C_BPE_ExecJump_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.BPE_ForceGiveup
struct APFAIC_EnSym_Base_C_BPE_ForceGiveup_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.OnJumpMove
struct APFAIC_EnSym_Base_C_OnJumpMove_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.OnLaunchCharacter
struct APFAIC_EnSym_Base_C_OnLaunchCharacter_Params
{
};

// Function PFAIC_EnSym_Base.PFAIC_EnSym_Base_C.ExecuteUbergraph_PFAIC_EnSym_Base
struct APFAIC_EnSym_Base_C_ExecuteUbergraph_PFAIC_EnSym_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
