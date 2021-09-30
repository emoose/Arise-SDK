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

// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetCoreMaterialOn
struct UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitSetCoreMaterialOn_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               MaterialNames;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              GlowScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmissivePower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EmissiveColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                GlowColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetCoreMaterialOff
struct UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitSetCoreMaterialOff_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               MaterialNames;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ParamValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetMaterialVector
struct UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitSetMaterialVector_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParamValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitGetMaterialDynamics
struct UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitGetMaterialDynamics_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Material;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitGetMaterials
struct UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitGetMaterials_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Material;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitGetMaterial
struct UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitGetMaterial_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitDebugPrintMaterialName
struct UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitDebugPrintMaterialName_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetMaterialParam
struct UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitSetMaterialParam_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParamValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetMaterialParamAll
struct UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitSetMaterialParamAll_Params
{
	class ABtlCharacterBase*                           BtlUnit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParamValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAchCharacterBuildComponent>           InComponentType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
