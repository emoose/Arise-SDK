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

// Function BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP.BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP_C.Received_IsCalculateDamageAddCondition
struct UBP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP_C_Received_IsCalculateDamageAddCondition_Params
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

// Function BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP.BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP_C.BeginPlay
struct UBP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP_C_BeginPlay_Params
{
};

// Function BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP.BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP_C.ExecuteUbergraph_BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP
struct UBP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP_C_ExecuteUbergraph_BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
