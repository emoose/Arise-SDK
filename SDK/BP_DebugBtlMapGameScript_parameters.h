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

// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.@InitializeEncount
struct ABP_DebugBtlMapGameScript_C_@InitializeEncount_Params
{
	struct FString                                     NewMap;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMap;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ApplyBattleWorldSettings
struct ABP_DebugBtlMapGameScript_C_ApplyBattleWorldSettings_Params
{
	class AAriseWorldSettings*                         AriseWorldSettings;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.UserConstructionScript
struct ABP_DebugBtlMapGameScript_C_UserConstructionScript_Params
{
};

// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ReceiveBeginPlay
struct ABP_DebugBtlMapGameScript_C_ReceiveBeginPlay_Params
{
};

// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ReceiveTick
struct ABP_DebugBtlMapGameScript_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.OnBeginBattle
struct ABP_DebugBtlMapGameScript_C_OnBeginBattle_Params
{
};

// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.OnEndBattle
struct ABP_DebugBtlMapGameScript_C_OnEndBattle_Params
{
};

// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.BattleEnd
struct ABP_DebugBtlMapGameScript_C_BattleEnd_Params
{
	unsigned char                                      PrevScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugBtlMapGameScript.BP_DebugBtlMapGameScript_C.ExecuteUbergraph_BP_DebugBtlMapGameScript
struct ABP_DebugBtlMapGameScript_C_ExecuteUbergraph_BP_DebugBtlMapGameScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
