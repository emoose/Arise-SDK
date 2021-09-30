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

// Function BP_MiningSaveData.BP_MiningSaveData_C.AcquiredMiningData
struct UBP_MiningSaveData_C_AcquiredMiningData_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiningSaveData.BP_MiningSaveData_C.GetMiningData
struct UBP_MiningSaveData_C_GetMiningData_Params
{
	struct FString                                     actorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FPFMiningPointItemID                        ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAriseMiningPointSaveInfo                   MiningPointInfo;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
