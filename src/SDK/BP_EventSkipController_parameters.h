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

// Function BP_EventSkipController.BP_EventSkipController_C.IF_EventSkipMangement
struct ABP_EventSkipController_C_IF_EventSkipMangement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DoEventSkip;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventSkipController.BP_EventSkipController_C.IF_PauseManagement
struct ABP_EventSkipController_C_IF_PauseManagement_Params
{
	bool                                               OnPause;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OffPause;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Skipped;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventSkipController.BP_EventSkipController_C.SetInputEnable
struct ABP_EventSkipController_C_SetInputEnable_Params
{
	bool                                               NewEnable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventSkipController.BP_EventSkipController_C.Finalize
struct ABP_EventSkipController_C_Finalize_Params
{
};

// Function BP_EventSkipController.BP_EventSkipController_C._DisplayEndSkipGuide
struct ABP_EventSkipController_C__DisplayEndSkipGuide_Params
{
};

// Function BP_EventSkipController.BP_EventSkipController_C.EventSkipManagement
struct ABP_EventSkipController_C_EventSkipManagement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoEventSkip;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventSkipController.BP_EventSkipController_C._GetInputPause
struct ABP_EventSkipController_C__GetInputPause_Params
{
	bool                                               bPressed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventSkipController.BP_EventSkipController_C.PauseManagement
struct ABP_EventSkipController_C_PauseManagement_Params
{
	bool                                               bOnPause;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOffPause;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkiped;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventSkipController.BP_EventSkipController_C.UserConstructionScript
struct ABP_EventSkipController_C_UserConstructionScript_Params
{
};

// Function BP_EventSkipController.BP_EventSkipController_C.ReceiveBeginPlay
struct ABP_EventSkipController_C_ReceiveBeginPlay_Params
{
};

// Function BP_EventSkipController.BP_EventSkipController_C.IF_DisplayEndSkipGuide
struct ABP_EventSkipController_C_IF_DisplayEndSkipGuide_Params
{
};

// Function BP_EventSkipController.BP_EventSkipController_C.ReceiveEndPlay
struct ABP_EventSkipController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventSkipController.BP_EventSkipController_C.ReceiveTick
struct ABP_EventSkipController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EventSkipController.BP_EventSkipController_C.ExecuteUbergraph_BP_EventSkipController
struct ABP_EventSkipController_C_ExecuteUbergraph_BP_EventSkipController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
