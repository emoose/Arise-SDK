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

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.InitTask
struct UPFT_EnSym_Base_C_InitTask_Params
{
	class AAIController*                               InController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       InPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.Finalize
struct UPFT_EnSym_Base_C_Finalize_Params
{
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.IsCurrentActionState
struct UPFT_EnSym_Base_C_IsCurrentActionState_Params
{
	struct FName                                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.ChangeActionState
struct UPFT_EnSym_Base_C_ChangeActionState_Params
{
	struct FName                                       InStateID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.IsNearHomeLocation
struct UPFT_EnSym_Base_C_IsNearHomeLocation_Params
{
	float                                              Near;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.IsChangeActionState
struct UPFT_EnSym_Base_C_IsChangeActionState_Params
{
	struct FName                                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.ReceiveExecuteAI
struct UPFT_EnSym_Base_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.ReceiveTickAI
struct UPFT_EnSym_Base_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.OnHitCollision
struct UPFT_EnSym_Base_C_OnHitCollision_Params
{
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.ReceiveAbortAI
struct UPFT_EnSym_Base_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.OnAbort
struct UPFT_EnSym_Base_C_OnAbort_Params
{
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.OnTick
struct UPFT_EnSym_Base_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.OnExecute
struct UPFT_EnSym_Base_C_OnExecute_Params
{
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.OnMoveCompleted
struct UPFT_EnSym_Base_C_OnMoveCompleted_Params
{
	struct FAIRequestID                                RequestID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.OnFinishMove
struct UPFT_EnSym_Base_C_OnFinishMove_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base.PFT_EnSym_Base_C.ExecuteUbergraph_PFT_EnSym_Base
struct UPFT_EnSym_Base_C_ExecuteUbergraph_PFT_EnSym_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
