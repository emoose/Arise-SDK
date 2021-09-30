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

// Function BP_GSC_FishingInterface.BP_GSC_FishingInterface_C.GetFishingSceneController
struct UBP_GSC_FishingInterface_C_GetFishingSceneController_Params
{
	TScriptInterface<class UBP_FishingSceneControllerInterface_C> Object;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GSC_FishingInterface.BP_GSC_FishingInterface_C.InitializeByFishingPoint
struct UBP_GSC_FishingInterface_C_InitializeByFishingPoint_Params
{
	TScriptInterface<class UBP_FishingPointInterface_C> FishingPoint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
