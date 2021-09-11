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

// Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.UserConstructionScript
struct ABP_BtlLaunchWorkerActor_LightWeight_C_UserConstructionScript_Params
{
};

// Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.SetupParameter
struct ABP_BtlLaunchWorkerActor_LightWeight_C_SetupParameter_Params
{
	struct FString                                     InBattleMap;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FBtlEncountGroupParam>               InEncountParams;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InBattleDelayTime;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InAutoStart;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InUseOutsideCapture;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InBattleLoadContext;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.ReceiveBeginPlay
struct ABP_BtlLaunchWorkerActor_LightWeight_C_ReceiveBeginPlay_Params
{
};

// Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.ReceiveTick
struct ABP_BtlLaunchWorkerActor_LightWeight_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlLaunchWorkerActor_LightWeight.BP_BtlLaunchWorkerActor_LightWeight_C.ExecuteUbergraph_BP_BtlLaunchWorkerActor_LightWeight
struct ABP_BtlLaunchWorkerActor_LightWeight_C_ExecuteUbergraph_BP_BtlLaunchWorkerActor_LightWeight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
