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

// Function BP_GSC_Camp.BP_GSC_Camp_C.CampLevelUnload
struct UBP_GSC_Camp_C_CampLevelUnload_Params
{
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.IsCampLevelUnloaded
struct UBP_GSC_Camp_C_IsCampLevelUnloaded_Params
{
	bool                                               bEntry;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.IsPausePossibleState
struct UBP_GSC_Camp_C_IsPausePossibleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.IsEnableSystemPause
struct UBP_GSC_Camp_C_IsEnableSystemPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.DestroyScreenMask
struct UBP_GSC_Camp_C_DestroyScreenMask_Params
{
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.ShowTopMenu
struct UBP_GSC_Camp_C_ShowTopMenu_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.SetScreenMask
struct UBP_GSC_Camp_C_SetScreenMask_Params
{
	struct FString                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               MaskOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.SceneRunning
struct UBP_GSC_Camp_C_SceneRunning_Params
{
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.SceneFinalize
struct UBP_GSC_Camp_C_SceneFinalize_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.SceneInitialize
struct UBP_GSC_Camp_C_SceneInitialize_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.WaitExitCampCompleted
struct UBP_GSC_Camp_C_WaitExitCampCompleted_Params
{
	bool                                               bCompleted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.ExitCamp
struct UBP_GSC_Camp_C_ExitCamp_Params
{
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.UnloadCamp
struct UBP_GSC_Camp_C_UnloadCamp_Params
{
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.LoadCamp
struct UBP_GSC_Camp_C_LoadCamp_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.WaitInitCampCompleted
struct UBP_GSC_Camp_C_WaitInitCampCompleted_Params
{
	bool                                               bCompleted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.InitCamp
struct UBP_GSC_Camp_C_InitCamp_Params
{
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.ShowCampMap
struct UBP_GSC_Camp_C_ShowCampMap_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.PFCharacterActive
struct UBP_GSC_Camp_C_PFCharacterActive_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlayerActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.ShowCharcterStage
struct UBP_GSC_Camp_C_ShowCharcterStage_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.SetupScreenMask
struct UBP_GSC_Camp_C_SetupScreenMask_Params
{
	bool                                               NewScreenMask;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.CreateScreenMask
struct UBP_GSC_Camp_C_CreateScreenMask_Params
{
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.DebugPrintSceneState
struct UBP_GSC_Camp_C_DebugPrintSceneState_Params
{
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Finalize
struct UBP_GSC_Camp_C_BPE_Finalize_Params
{
	ESceneFinalizeReason                               finalizeReason;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Initialize
struct UBP_GSC_Camp_C_BPE_Initialize_Params
{
	ESceneInitializeMode                               initMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Tick
struct UBP_GSC_Camp_C_BPE_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Sleep
struct UBP_GSC_Camp_C_BPE_Sleep_Params
{
	unsigned char                                      nextScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.BPE_Wakeup
struct UBP_GSC_Camp_C_BPE_Wakeup_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Camp.BP_GSC_Camp_C.ExecuteUbergraph_BP_GSC_Camp
struct UBP_GSC_Camp_C_ExecuteUbergraph_BP_GSC_Camp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
