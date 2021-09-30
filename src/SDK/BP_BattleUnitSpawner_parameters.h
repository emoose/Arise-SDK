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

// Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.SetColor
struct ABP_BattleUnitSpawner_C_SetColor_Params
{
	struct FVector                                     Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.SetUnitIndex
struct ABP_BattleUnitSpawner_C_SetUnitIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.SetUnitGroupColor
struct ABP_BattleUnitSpawner_C_SetUnitGroupColor_Params
{
	EBtlUnitGroup                                      UnitGroup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleUnitSpawner.BP_BattleUnitSpawner_C.UserConstructionScript
struct ABP_BattleUnitSpawner_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
