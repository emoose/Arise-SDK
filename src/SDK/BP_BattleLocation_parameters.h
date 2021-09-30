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

// Function BP_BattleLocation.BP_BattleLocation_C.GetFloorComponent
struct ABP_BattleLocation_C_GetFloorComponent_Params
{
	class UBtlFloorComponent*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BattleLocation.BP_BattleLocation_C.GetAreaWidth
struct ABP_BattleLocation_C_GetAreaWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleLocation.BP_BattleLocation_C.GetSmashPointTransform
struct ABP_BattleLocation_C_GetSmashPointTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BattleLocation.BP_BattleLocation_C.GetEnemySpawnerMax
struct ABP_BattleLocation_C_GetEnemySpawnerMax_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleLocation.BP_BattleLocation_C.GetEnemySpawnerTransform
struct ABP_BattleLocation_C_GetEnemySpawnerTransform_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BattleLocation.BP_BattleLocation_C.GetPartySpawnerMax
struct ABP_BattleLocation_C_GetPartySpawnerMax_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleLocation.BP_BattleLocation_C.GetPartySpawnerTransform
struct ABP_BattleLocation_C_GetPartySpawnerTransform_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_BattleLocation.BP_BattleLocation_C.SnapOnGround
struct ABP_BattleLocation_C_SnapOnGround_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleLocation.BP_BattleLocation_C.UserConstructionScript
struct ABP_BattleLocation_C_UserConstructionScript_Params
{
};

// Function BP_BattleLocation.BP_BattleLocation_C.CreateSpawnPoints
struct ABP_BattleLocation_C_CreateSpawnPoints_Params
{
};

// Function BP_BattleLocation.BP_BattleLocation_C.ExecuteUbergraph_BP_BattleLocation
struct ABP_BattleLocation_C_ExecuteUbergraph_BP_BattleLocation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
