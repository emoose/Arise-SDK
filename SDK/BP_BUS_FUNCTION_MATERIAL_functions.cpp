
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetCoreMaterialOn
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           MaterialNames                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          GlowScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissivePower                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            EmissiveColor                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            GlowColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_MATERIAL_C::STATIC_BtlUnitSetCoreMaterialOn(class ABtlCharacterBase* BtlUnit, float GlowScale, float EmissivePower, const struct FLinearColor& EmissiveColor, const struct FLinearColor& GlowColor, class UObject* __WorldContext, TArray<struct FName>* MaterialNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetCoreMaterialOn");

	UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitSetCoreMaterialOn_Params params;
	params.BtlUnit = BtlUnit;
	params.GlowScale = GlowScale;
	params.EmissivePower = EmissivePower;
	params.EmissiveColor = EmissiveColor;
	params.GlowColor = GlowColor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialNames != nullptr)
		*MaterialNames = params.MaterialNames;
}


// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetCoreMaterialOff
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           MaterialNames                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          ParamValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_MATERIAL_C::STATIC_BtlUnitSetCoreMaterialOff(class ABtlCharacterBase* BtlUnit, float ParamValue, class UObject* __WorldContext, TArray<struct FName>* MaterialNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetCoreMaterialOff");

	UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitSetCoreMaterialOff_Params params;
	params.BtlUnit = BtlUnit;
	params.ParamValue = ParamValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialNames != nullptr)
		*MaterialNames = params.MaterialNames;
}


// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetMaterialVector
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ParamValue                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_MATERIAL_C::STATIC_BtlUnitSetMaterialVector(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialName, const struct FName& ParamName, const struct FLinearColor& ParamValue, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetMaterialVector");

	UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitSetMaterialVector_Params params;
	params.BtlUnit = BtlUnit;
	params.MaterialName = MaterialName;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitGetMaterialDynamics
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Material                       (Parm, OutParm, ZeroConstructor)

void UBP_BUS_FUNCTION_MATERIAL_C::STATIC_BtlUnitGetMaterialDynamics(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitGetMaterialDynamics");

	UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitGetMaterialDynamics_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitGetMaterials
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInterface*> Material                       (Parm, OutParm, ZeroConstructor)

void UBP_BUS_FUNCTION_MATERIAL_C::STATIC_BtlUnitGetMaterials(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, TArray<class UMaterialInterface*>* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitGetMaterials");

	UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitGetMaterials_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitGetMaterial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_MATERIAL_C::STATIC_BtlUnitGetMaterial(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialName, class UObject* __WorldContext, bool* Result, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitGetMaterial");

	UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitGetMaterial_Params params;
	params.BtlUnit = BtlUnit;
	params.MaterialName = MaterialName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitDebugPrintMaterialName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_MATERIAL_C::STATIC_BtlUnitDebugPrintMaterialName(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitDebugPrintMaterialName");

	UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitDebugPrintMaterialName_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetMaterialParam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ParamValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_MATERIAL_C::STATIC_BtlUnitSetMaterialParam(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialName, const struct FName& ParamName, float ParamValue, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetMaterialParam");

	UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitSetMaterialParam_Params params;
	params.BtlUnit = BtlUnit;
	params.MaterialName = MaterialName;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetMaterialParamAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ParamValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAchCharacterBuildComponent> InComponentType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_MATERIAL_C::STATIC_BtlUnitSetMaterialParamAll(class ABtlCharacterBase* BtlUnit, const struct FName& ParamName, float ParamValue, TEnumAsByte<EAchCharacterBuildComponent> InComponentType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C.BtlUnitSetMaterialParamAll");

	UBP_BUS_FUNCTION_MATERIAL_C_BtlUnitSetMaterialParamAll_Params params;
	params.BtlUnit = BtlUnit;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.InComponentType = InComponentType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
