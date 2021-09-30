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

// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.Received_IsCalculateDamageAddCondition
struct UBP_BTL_SKS_OUTNUMBER_C_Received_IsCalculateDamageAddCondition_Params
{
	class ABtlCharacterBase*                           AttackerActor;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBtlAttackCollisionInterface> AttackCollision;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class ABtlCharacterBase*                           DmgActor;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlDamageSphereComponent*                   DmgCollision;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsHandle                              ArtsHandle;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsGuard;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeakness;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsResistanc;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.BeginPlay
struct UBP_BTL_SKS_OUTNUMBER_C_BeginPlay_Params
{
};

// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.OnBeginBattle
struct UBP_BTL_SKS_OUTNUMBER_C_OnBeginBattle_Params
{
};

// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.OnDeadCharacter
struct UBP_BTL_SKS_OUTNUMBER_C_OnDeadCharacter_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.EndPlay
struct UBP_BTL_SKS_OUTNUMBER_C_EndPlay_Params
{
};

// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.OnSpawnCharacter
struct UBP_BTL_SKS_OUTNUMBER_C_OnSpawnCharacter_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reinforcement;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_SKS_OUTNUMBER.BP_BTL_SKS_OUTNUMBER_C.ExecuteUbergraph_BP_BTL_SKS_OUTNUMBER
struct UBP_BTL_SKS_OUTNUMBER_C_ExecuteUbergraph_BP_BTL_SKS_OUTNUMBER_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
