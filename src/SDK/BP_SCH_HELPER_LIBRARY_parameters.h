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

// Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_InteractReleaseLock
struct UBP_SCH_HELPER_LIBRARY_C_PFSC_InteractReleaseLock_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_NPCTalkLockPause
struct UBP_SCH_HELPER_LIBRARY_C_PFSC_NPCTalkLockPause_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_TreasureLockPause
struct UBP_SCH_HELPER_LIBRARY_C_PFSC_TreasureLockPause_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.PFSC_DisableWaitOwl
struct UBP_SCH_HELPER_LIBRARY_C_PFSC_DisableWaitOwl_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SCH_HELPER_LIBRARY.BP_SCH_HELPER_LIBRARY_C.ConvertPartyID2CharaIconID
struct UBP_SCH_HELPER_LIBRARY_C_ConvertPartyID2CharaIconID_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAriseCharaIconID                                  IconId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
