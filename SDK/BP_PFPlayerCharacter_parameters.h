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

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.SetDebugVisibility
struct ABP_PFPlayerCharacter_C_SetDebugVisibility_Params
{
	bool                                               InNewValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.IsDebugInputEnable
struct ABP_PFPlayerCharacter_C_IsDebugInputEnable_Params
{
	bool                                               bOut;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.AdsorbGround
struct ABP_PFPlayerCharacter_C_AdsorbGround_Params
{
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.IsIdle
struct ABP_PFPlayerCharacter_C_IsIdle_Params
{
	bool                                               OutIdle;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.PlaySearchSwim
struct ABP_PFPlayerCharacter_C_PlaySearchSwim_Params
{
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.IdleTransLadder
struct ABP_PFPlayerCharacter_C_IdleTransLadder_Params
{
	int                                                InBeginStepNum;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTotalStepNum;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BeginLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    BeginRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       InPhysMaterialName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.LadderTransIdle
struct ABP_PFPlayerCharacter_C_LadderTransIdle_Params
{
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.LadderTransFloating
struct ABP_PFPlayerCharacter_C_LadderTransFloating_Params
{
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.SetCollisionPreset
struct ABP_PFPlayerCharacter_C_SetCollisionPreset_Params
{
	TEnumAsByte<EPFPlayerCollisionPreset>              InNewPreset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.CanOpenPFMenuTop
struct ABP_PFPlayerCharacter_C_CanOpenPFMenuTop_Params
{
	bool                                               CanOpen;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.GetCurrentJumpZVelocity
struct ABP_PFPlayerCharacter_C_GetCurrentJumpZVelocity_Params
{
	float                                              JumpZVelocity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ExecuteFlyModeMovement
struct ABP_PFPlayerCharacter_C_ExecuteFlyModeMovement_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ChangeFlyMode
struct ABP_PFPlayerCharacter_C_ChangeFlyMode_Params
{
	bool                                               FlyMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ChangeJumpRate
struct ABP_PFPlayerCharacter_C_ChangeJumpRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ChangeMoveSpeedRate
struct ABP_PFPlayerCharacter_C_ChangeMoveSpeedRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.SetupActionState
struct ABP_PFPlayerCharacter_C_SetupActionState_Params
{
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.UserConstructionScript
struct ABP_PFPlayerCharacter_C_UserConstructionScript_Params
{
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.OnMoveBlockedBy
struct ABP_PFPlayerCharacter_C_OnMoveBlockedBy_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.OnResetCharacter
struct ABP_PFPlayerCharacter_C_OnResetCharacter_Params
{
	bool                                               bInIndoorMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ReceiveBeginPlay
struct ABP_PFPlayerCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ReceiveTick
struct ABP_PFPlayerCharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PFPlayerCharacter.BP_PFPlayerCharacter_C.ExecuteUbergraph_BP_PFPlayerCharacter
struct ABP_PFPlayerCharacter_C_ExecuteUbergraph_BP_PFPlayerCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
