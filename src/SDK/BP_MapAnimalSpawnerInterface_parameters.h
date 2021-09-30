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

// Function BP_MapAnimalSpawnerInterface.BP_MapAnimalSpawnerInterface_C.OnAnimStateChange
struct UBP_MapAnimalSpawnerInterface_C_OnAnimStateChange_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     PreviousStateName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NextStateName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Turn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
