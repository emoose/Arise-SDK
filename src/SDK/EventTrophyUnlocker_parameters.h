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

// Function EventTrophyUnlocker.EventTrophyUnlocker_C.FindTrophyRecord
struct AEventTrophyUnlocker_C_FindTrophyRecord_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               HIT;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPostEventTrophyData                        TrophyRecord;                                             // (Parm, OutParm)
};

// Function EventTrophyUnlocker.EventTrophyUnlocker_C.UserConstructionScript
struct AEventTrophyUnlocker_C_UserConstructionScript_Params
{
};

// Function EventTrophyUnlocker.EventTrophyUnlocker_C.Unlock
struct AEventTrophyUnlocker_C_Unlock_Params
{
	struct FString                                     TrophyName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EventTrophyUnlocker.EventTrophyUnlocker_C.OnBattleEnd
struct AEventTrophyUnlocker_C_OnBattleEnd_Params
{
	struct FBtlResultInfo                              ResultInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EventTrophyUnlocker.EventTrophyUnlocker_C.EventEnd
struct AEventTrophyUnlocker_C_EventEnd_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function EventTrophyUnlocker.EventTrophyUnlocker_C.BattleEnd
struct AEventTrophyUnlocker_C_BattleEnd_Params
{
	struct FBtlResultInfo                              ResultInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EventTrophyUnlocker.EventTrophyUnlocker_C.OnEventEnd
struct AEventTrophyUnlocker_C_OnEventEnd_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function EventTrophyUnlocker.EventTrophyUnlocker_C.ReceiveBeginPlay
struct AEventTrophyUnlocker_C_ReceiveBeginPlay_Params
{
};

// Function EventTrophyUnlocker.EventTrophyUnlocker_C.ExecuteUbergraph_EventTrophyUnlocker
struct AEventTrophyUnlocker_C_ExecuteUbergraph_EventTrophyUnlocker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
