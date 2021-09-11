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

// BlueprintGeneratedClass BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BUS_FUNCTION_CORE_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C");
		return ptr;
	}


	void STATIC_BtlUnitUpdateCoreMaterialAll(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialNameG0, const struct FName& MaterialNameDOA, float DeltaTime, float EmissivePowerMin, float EmissivePowerMax, float EmissivePowerSpeed, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial, bool* Disable);
	void STATIC_BtlUnitUpdateCoreMaterialDisable(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial, bool* Disable);
	void STATIC_BtlUnitCoreMaterialOff(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial, TArray<struct FName>* MaterialNames);
	void STATIC_BtlUnitCoreMaterialBreak(class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial);
	void STATIC_BtlUnitCoreMaterialEmissiveEnable(bool Enable, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial);
	void STATIC_BtlUnitSetCoreMaterialParam(class ABtlCharacterBase* BtlUnit, const struct FBtlCoreMaterial& CoreMaterial, const struct FName& MaterialNameG0, const struct FName& MaterialNameDOA, class UObject* __WorldContext);
	void STATIC_BtlUnitUpdateCoreMaterial(float DeltaTime, float EmissivePowerMin, float EmissivePowerMax, float EmissivePowerSpeed, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial);
	void STATIC_BtlUnitInitializeCoreMaterial(float EmissivePower, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
