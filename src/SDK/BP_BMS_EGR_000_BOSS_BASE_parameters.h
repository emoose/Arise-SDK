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

// Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.IsPartyMember
struct UBP_BMS_EGR_000_BOSS_BASE_C_IsPartyMember_Params
{
	bool                                               ARI;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SIO;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NNA;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ZGU;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MNK;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               YRA;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.Received_OnFlexibleNotify
struct UBP_BMS_EGR_000_BOSS_BASE_C_Received_OnFlexibleNotify_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     UserObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.OnPrevMainProduction
struct UBP_BMS_EGR_000_BOSS_BASE_C_OnPrevMainProduction_Params
{
};

// Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.OnEndArtsSpecialStrike
struct UBP_BMS_EGR_000_BOSS_BASE_C_OnEndArtsSpecialStrike_Params
{
	struct FBtlSpecialStrikeEndParam                   Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BMS_EGR_000_BOSS_BASE.BP_BMS_EGR_000_BOSS_BASE_C.ExecuteUbergraph_BP_BMS_EGR_000_BOSS_BASE
struct UBP_BMS_EGR_000_BOSS_BASE_C_ExecuteUbergraph_BP_BMS_EGR_000_BOSS_BASE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
