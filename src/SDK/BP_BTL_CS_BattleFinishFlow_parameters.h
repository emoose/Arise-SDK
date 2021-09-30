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

// Function BP_BTL_CS_BattleFinishFlow.BP_BTL_CS_BattleFinishFlow_C.GetEventNotifyName
struct UBP_BTL_CS_BattleFinishFlow_C_GetEventNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_BTL_CS_BattleFinishFlow.BP_BTL_CS_BattleFinishFlow_C.Received_BeginEvent
struct UBP_BTL_CS_BattleFinishFlow_C_Received_BeginEvent_Params
{
	class AActor*                                      Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
