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

// Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.SetEncountInfo
struct UBP_BTL_EncountHudInterface_C_SetEncountInfo_Params
{
	TArray<struct FBtlEncountGroupParam>               NewEncountArray;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.ShowLastEncountRequest
struct UBP_BTL_EncountHudInterface_C_ShowLastEncountRequest_Params
{
};

// Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.BattleStart
struct UBP_BTL_EncountHudInterface_C_BattleStart_Params
{
};

// Function BP_BTL_EncountHudInterface.BP_BTL_EncountHudInterface_C.ShowEncountRequest
struct UBP_BTL_EncountHudInterface_C_ShowEncountRequest_Params
{
	TArray<struct FBtlEncountGroupParam>               NewEncountArray;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
