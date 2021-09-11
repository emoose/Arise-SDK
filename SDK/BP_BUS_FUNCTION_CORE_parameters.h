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

// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitUpdateCoreMaterialAll
struct UBP_BUS_FUNCTION_CORE_C_BtlUnitUpdateCoreMaterialAll_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlCoreMaterial                            CoreMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       MaterialNameG0;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialNameDOA;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmissivePowerMin;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmissivePowerMax;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmissivePowerSpeed;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Disable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitUpdateCoreMaterialDisable
struct UBP_BUS_FUNCTION_CORE_C_BtlUnitUpdateCoreMaterialDisable_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlCoreMaterial                            CoreMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Disable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitCoreMaterialOff
struct UBP_BUS_FUNCTION_CORE_C_BtlUnitCoreMaterialOff_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlCoreMaterial                            CoreMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FName>                               MaterialNames;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitCoreMaterialBreak
struct UBP_BUS_FUNCTION_CORE_C_BtlUnitCoreMaterialBreak_Params
{
	struct FBtlCoreMaterial                            CoreMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitCoreMaterialEmissiveEnable
struct UBP_BUS_FUNCTION_CORE_C_BtlUnitCoreMaterialEmissiveEnable_Params
{
	struct FBtlCoreMaterial                            CoreMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitSetCoreMaterialParam
struct UBP_BUS_FUNCTION_CORE_C_BtlUnitSetCoreMaterialParam_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlCoreMaterial                            CoreMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       MaterialNameG0;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialNameDOA;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitUpdateCoreMaterial
struct UBP_BUS_FUNCTION_CORE_C_BtlUnitUpdateCoreMaterial_Params
{
	struct FBtlCoreMaterial                            CoreMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmissivePowerMin;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmissivePowerMax;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmissivePowerSpeed;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitInitializeCoreMaterial
struct UBP_BUS_FUNCTION_CORE_C_BtlUnitInitializeCoreMaterial_Params
{
	struct FBtlCoreMaterial                            CoreMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              EmissivePower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
