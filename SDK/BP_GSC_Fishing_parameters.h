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

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.GetFishingSceneController
struct UBP_GSC_Fishing_C_GetFishingSceneController_Params
{
	TScriptInterface<class UBP_FishingSceneControllerInterface_C> Object;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.PopLevelsEndFishing
struct UBP_GSC_Fishing_C_PopLevelsEndFishing_Params
{
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.IsEnableSystemPause
struct UBP_GSC_Fishing_C_IsEnableSystemPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.HideLevelsStartFishing
struct UBP_GSC_Fishing_C_HideLevelsStartFishing_Params
{
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.SpawnBlueprints
struct UBP_GSC_Fishing_C_SpawnBlueprints_Params
{
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.IsBlueprintsLoaded?
struct UBP_GSC_Fishing_C_IsBlueprintsLoaded__Params
{
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.IsPausePossibleState
struct UBP_GSC_Fishing_C_IsPausePossibleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.PauseManagement
struct UBP_GSC_Fishing_C_PauseManagement_Params
{
	bool                                               bEventSkip;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.PauseTickManagement
struct UBP_GSC_Fishing_C_PauseTickManagement_Params
{
	float                                              Tick;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.CheckTackle
struct UBP_GSC_Fishing_C_CheckTackle_Params
{
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPGeneralFunctionBool
struct UBP_GSC_Fishing_C_BPGeneralFunctionBool_Params
{
	struct FName                                       OpertionName;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TMap<struct FName, struct FString>                 Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.PFCharacterActive
struct UBP_GSC_Fishing_C_PFCharacterActive_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlayerActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.InitializeByFishingPoint
struct UBP_GSC_Fishing_C_InitializeByFishingPoint_Params
{
	TScriptInterface<class UBP_FishingPointInterface_C> FishingPoint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Initialize
struct UBP_GSC_Fishing_C_BPE_Initialize_Params
{
	ESceneInitializeMode                               initMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Tick
struct UBP_GSC_Fishing_C_BPE_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Finalize
struct UBP_GSC_Fishing_C_BPE_Finalize_Params
{
	ESceneFinalizeReason                               finalizeReason;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Wakeup
struct UBP_GSC_Fishing_C_BPE_Wakeup_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.BPE_Sleep
struct UBP_GSC_Fishing_C_BPE_Sleep_Params
{
	unsigned char                                      nextScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.EventCreatePauseController
struct UBP_GSC_Fishing_C_EventCreatePauseController_Params
{
};

// Function BP_GSC_Fishing.BP_GSC_Fishing_C.ExecuteUbergraph_BP_GSC_Fishing
struct UBP_GSC_Fishing_C_ExecuteUbergraph_BP_GSC_Fishing_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
