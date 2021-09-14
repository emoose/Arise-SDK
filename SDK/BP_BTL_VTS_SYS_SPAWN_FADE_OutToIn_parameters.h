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

// Function BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn.BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C.Received_EndPlay
struct UBP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C_Received_EndPlay_Params
{
};

// Function BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn.BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C.«0¹0¿0à0¤0Ù0ó0È0_2
struct UBP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C_«0¹0¿0à0¤0Ù0ó0È0_2_Params
{
	EBattleActionState                                 NowState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleActionState                                 PreState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn.BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C.«0¹0¿0à0¤0Ù0ó0È0_1
struct UBP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C_«0¹0¿0à0¤0Ù0ó0È0_1_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                PreArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                PrevHp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantDeath;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Critical;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn.BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C.Received_Begin
struct UBP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C_Received_Begin_Params
{
};

// Function BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn.BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C.ExecuteUbergraph_BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn
struct UBP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_C_ExecuteUbergraph_BP_BTL_VTS_SYS_SPAWN_FADE_OutToIn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
