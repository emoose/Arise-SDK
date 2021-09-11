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

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.GetEffectValue
struct UBP_BTL_USS_KISIN_C_GetEffectValue_Params
{
	struct FAriseSkillEffect                           Effect;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.InitializeRefCount
struct UBP_BTL_USS_KISIN_C_InitializeRefCount_Params
{
};

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnTargetCharacterChanged
struct UBP_BTL_USS_KISIN_C_OnTargetCharacterChanged_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           NewCharacter;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           PrevCharacter;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnTargetChanged
struct UBP_BTL_USS_KISIN_C_OnTargetChanged_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlTargetCursorComponent*                   NewTargetComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlTargetCursorComponent*                   PrevTargetComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.TargetChanged
struct UBP_BTL_USS_KISIN_C_TargetChanged_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlTargetCursorComponent*                   NewTargetComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlTargetCursorComponent*                   PrevTargetComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnFocus
struct UBP_BTL_USS_KISIN_C_OnFocus_Params
{
};

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnOutOfFocus
struct UBP_BTL_USS_KISIN_C_OnOutOfFocus_Params
{
};

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnDisabled
struct UBP_BTL_USS_KISIN_C_OnDisabled_Params
{
};

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnEnabled
struct UBP_BTL_USS_KISIN_C_OnEnabled_Params
{
};

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.OnDeadUnit
struct UBP_BTL_USS_KISIN_C_OnDeadUnit_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BTL_USS_KISIN.BP_BTL_USS_KISIN_C.ExecuteUbergraph_BP_BTL_USS_KISIN
struct UBP_BTL_USS_KISIN_C_ExecuteUbergraph_BP_BTL_USS_KISIN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
