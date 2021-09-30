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

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.SetStatckMode
struct UPFT_EnSym_Base2_C_SetStatckMode_Params
{
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.IsStacked
struct UPFT_EnSym_Base2_C_IsStacked_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.UpdateStackLocation
struct UPFT_EnSym_Base2_C_UpdateStackLocation_Params
{
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.GetGroundLocation
struct UPFT_EnSym_Base2_C_GetGroundLocation_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.Finish
struct UPFT_EnSym_Base2_C_Finish_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.Initialize
struct UPFT_EnSym_Base2_C_Initialize_Params
{
	class AAIController*                               InController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       InPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.IsCurrentActionState
struct UPFT_EnSym_Base2_C_IsCurrentActionState_Params
{
	struct FName                                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.ChangeActionState
struct UPFT_EnSym_Base2_C_ChangeActionState_Params
{
	struct FName                                       InStateID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.IsChangeActionState
struct UPFT_EnSym_Base2_C_IsChangeActionState_Params
{
	struct FName                                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.OnAbort
struct UPFT_EnSym_Base2_C_OnAbort_Params
{
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.OnTick
struct UPFT_EnSym_Base2_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.OnExecute
struct UPFT_EnSym_Base2_C_OnExecute_Params
{
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.OnFinishMove
struct UPFT_EnSym_Base2_C_OnFinishMove_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.ReceiveExecuteAI
struct UPFT_EnSym_Base2_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.ReceiveTickAI
struct UPFT_EnSym_Base2_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.ReceiveAbortAI
struct UPFT_EnSym_Base2_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.Bind
struct UPFT_EnSym_Base2_C_Bind_Params
{
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.Unbind
struct UPFT_EnSym_Base2_C_Unbind_Params
{
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.OnHitCollision
struct UPFT_EnSym_Base2_C_OnHitCollision_Params
{
};

// Function PFT_EnSym_Base2.PFT_EnSym_Base2_C.ExecuteUbergraph_PFT_EnSym_Base2
struct UPFT_EnSym_Base2_C_ExecuteUbergraph_PFT_EnSym_Base2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
