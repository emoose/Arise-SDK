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

// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.SuperAvoidResurrectionCheck
struct UBP_BUS_WOL_000_C_SuperAvoidResurrectionCheck_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.BtlCanSpawn
struct UBP_BUS_WOL_000_C_BtlCanSpawn_Params
{
};

// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.HawlSpawn_Init
struct UBP_BUS_WOL_000_C_HawlSpawn_Init_Params
{
};

// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.HawlingSpawn
struct UBP_BUS_WOL_000_C_HawlingSpawn_Params
{
};

// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnBreakSuperAvoid
struct UBP_BUS_WOL_000_C_OnBreakSuperAvoid_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             AttackerCollision;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBtlArtsData                                ArtsData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBtlSphereComponent*                         ReceiveCollision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnBeginPlay
struct UBP_BUS_WOL_000_C_OnBeginPlay_Params
{
};

// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnFlexibleNotifyBegin
struct UBP_BUS_WOL_000_C_OnFlexibleNotifyBegin_Params
{
	int                                                UserInteger;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UserFloat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                UserColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     UserObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.OnTick
struct UBP_BUS_WOL_000_C_OnTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_WOL_000.BP_BUS_WOL_000_C.ExecuteUbergraph_BP_BUS_WOL_000
struct UBP_BUS_WOL_000_C_ExecuteUbergraph_BP_BUS_WOL_000_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
