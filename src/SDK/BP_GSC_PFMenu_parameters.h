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

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.IsEnableSystemPause
struct UBP_GSC_PFMenu_C_IsEnableSystemPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.IsPausePossibleState
struct UBP_GSC_PFMenu_C_IsPausePossibleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.PFCharacterLockIfNeed
struct UBP_GSC_PFMenu_C_PFCharacterLockIfNeed_Params
{
	class AActor*                                      PlayerActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.PFCharacterUnlockIfNeed
struct UBP_GSC_PFMenu_C_PFCharacterUnlockIfNeed_Params
{
	class AActor*                                      PlayerActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.ShowCharcterStage
struct UBP_GSC_PFMenu_C_ShowCharcterStage_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.MaskPFMap
struct UBP_GSC_PFMenu_C_MaskPFMap_Params
{
	bool                                               bMask;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.SetupScreenMack
struct UBP_GSC_PFMenu_C_SetupScreenMack_Params
{
	bool                                               NewScreenMask;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.CreateScreenMask
struct UBP_GSC_PFMenu_C_CreateScreenMask_Params
{
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.DebugPrintSceneState
struct UBP_GSC_PFMenu_C_DebugPrintSceneState_Params
{
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.UnbindPause
struct UBP_GSC_PFMenu_C_UnbindPause_Params
{
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Tick
struct UBP_GSC_PFMenu_C_BPE_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Initialize
struct UBP_GSC_PFMenu_C_BPE_Initialize_Params
{
	ESceneInitializeMode                               initMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Finalize
struct UBP_GSC_PFMenu_C_BPE_Finalize_Params
{
	ESceneFinalizeReason                               finalizeReason;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BindPause
struct UBP_GSC_PFMenu_C_BindPause_Params
{
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.Resume
struct UBP_GSC_PFMenu_C_Resume_Params
{
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.ResumePF
struct UBP_GSC_PFMenu_C_ResumePF_Params
{
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.PausePF
struct UBP_GSC_PFMenu_C_PausePF_Params
{
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.CancelPause
struct UBP_GSC_PFMenu_C_CancelPause_Params
{
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Wakeup
struct UBP_GSC_PFMenu_C_BPE_Wakeup_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.BPE_Sleep
struct UBP_GSC_PFMenu_C_BPE_Sleep_Params
{
	unsigned char                                      nextScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_PFMenu.BP_GSC_PFMenu_C.ExecuteUbergraph_BP_GSC_PFMenu
struct UBP_GSC_PFMenu_C_ExecuteUbergraph_BP_GSC_PFMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
