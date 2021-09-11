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

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.GetUnitParameterAsBool
struct UBP_USS_RUNTIME_C_GetUnitParameterAsBool_Params
{
	struct FBtlUnitParameterLabel                      Label;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.GetUnitParameterAsInt
struct UBP_USS_RUNTIME_C_GetUnitParameterAsInt_Params
{
	struct FBtlUnitParameterLabel                      Label;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.GetUnitParameter
struct UBP_USS_RUNTIME_C_GetUnitParameter_Params
{
	struct FBtlUnitParameterLabel                      Label;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnCoolTimeOut
struct UBP_USS_RUNTIME_C_OnCoolTimeOut_Params
{
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetEffectTime
struct UBP_USS_RUNTIME_C_SetEffectTime_Params
{
	float                                              EffectTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnTimeOut
struct UBP_USS_RUNTIME_C_OnTimeOut_Params
{
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetEffectTimeIfNeeded
struct UBP_USS_RUNTIME_C_SetEffectTimeIfNeeded_Params
{
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetCoolTimeIfNeeded
struct UBP_USS_RUNTIME_C_SetCoolTimeIfNeeded_Params
{
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.SetCoolTime
struct UBP_USS_RUNTIME_C_SetCoolTime_Params
{
	float                                              CoolTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.CoolTimeOut
struct UBP_USS_RUNTIME_C_CoolTimeOut_Params
{
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnApplySkill
struct UBP_USS_RUNTIME_C_OnApplySkill_Params
{
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnDeadCharacter
struct UBP_USS_RUNTIME_C_OnDeadCharacter_Params
{
	class ABtlCharacterBase*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                PreArts;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnDead
struct UBP_USS_RUNTIME_C_OnDead_Params
{
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnEnabled
struct UBP_USS_RUNTIME_C_OnEnabled_Params
{
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.OnDisabled
struct UBP_USS_RUNTIME_C_OnDisabled_Params
{
};

// Function BP_USS_RUNTIME.BP_USS_RUNTIME_C.ExecuteUbergraph_BP_USS_RUNTIME
struct UBP_USS_RUNTIME_C_ExecuteUbergraph_BP_USS_RUNTIME_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
