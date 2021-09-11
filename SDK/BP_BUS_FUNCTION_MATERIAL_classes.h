#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BUS_FUNCTION_MATERIAL_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BUS_FUNCTION_MATERIAL.BP_BUS_FUNCTION_MATERIAL_C");
		return ptr;
	}


	void STATIC_BtlUnitSetCoreMaterialOn(class ABtlCharacterBase* BtlUnit, float GlowScale, float EmissivePower, const struct FLinearColor& EmissiveColor, const struct FLinearColor& GlowColor, class UObject* __WorldContext, TArray<struct FName>* MaterialNames);
	void STATIC_BtlUnitSetCoreMaterialOff(class ABtlCharacterBase* BtlUnit, float ParamValue, class UObject* __WorldContext, TArray<struct FName>* MaterialNames);
	void STATIC_BtlUnitSetMaterialVector(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialName, const struct FName& ParamName, const struct FLinearColor& ParamValue, class UObject* __WorldContext);
	void STATIC_BtlUnitGetMaterialDynamics(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* Material);
	void STATIC_BtlUnitGetMaterials(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, TArray<class UMaterialInterface*>* Material);
	void STATIC_BtlUnitGetMaterial(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialName, class UObject* __WorldContext, bool* Result, class UMaterialInterface** Material);
	void STATIC_BtlUnitDebugPrintMaterialName(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext);
	void STATIC_BtlUnitSetMaterialParam(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialName, const struct FName& ParamName, float ParamValue, class UObject* __WorldContext);
	void STATIC_BtlUnitSetMaterialParamAll(class ABtlCharacterBase* BtlUnit, const struct FName& ParamName, float ParamValue, TEnumAsByte<EAchCharacterBuildComponent> InComponentType, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
