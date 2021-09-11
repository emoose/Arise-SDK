
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

// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitUpdateCoreMaterialAll
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlCoreMaterial        CoreMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   MaterialNameG0                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialNameDOA                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissivePowerMin               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissivePowerMax               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissivePowerSpeed             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Disable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_CORE_C::STATIC_BtlUnitUpdateCoreMaterialAll(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialNameG0, const struct FName& MaterialNameDOA, float DeltaTime, float EmissivePowerMin, float EmissivePowerMax, float EmissivePowerSpeed, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial, bool* Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitUpdateCoreMaterialAll");

	UBP_BUS_FUNCTION_CORE_C_BtlUnitUpdateCoreMaterialAll_Params params;
	params.BtlUnit = BtlUnit;
	params.MaterialNameG0 = MaterialNameG0;
	params.MaterialNameDOA = MaterialNameDOA;
	params.DeltaTime = DeltaTime;
	params.EmissivePowerMin = EmissivePowerMin;
	params.EmissivePowerMax = EmissivePowerMax;
	params.EmissivePowerSpeed = EmissivePowerSpeed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoreMaterial != nullptr)
		*CoreMaterial = params.CoreMaterial;
	if (Disable != nullptr)
		*Disable = params.Disable;
}


// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitUpdateCoreMaterialDisable
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlCoreMaterial        CoreMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Disable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_CORE_C::STATIC_BtlUnitUpdateCoreMaterialDisable(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial, bool* Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitUpdateCoreMaterialDisable");

	UBP_BUS_FUNCTION_CORE_C_BtlUnitUpdateCoreMaterialDisable_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoreMaterial != nullptr)
		*CoreMaterial = params.CoreMaterial;
	if (Disable != nullptr)
		*Disable = params.Disable;
}


// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitCoreMaterialOff
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlCoreMaterial        CoreMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<struct FName>           MaterialNames                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_CORE_C::STATIC_BtlUnitCoreMaterialOff(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial, TArray<struct FName>* MaterialNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitCoreMaterialOff");

	UBP_BUS_FUNCTION_CORE_C_BtlUnitCoreMaterialOff_Params params;
	params.BtlUnit = BtlUnit;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoreMaterial != nullptr)
		*CoreMaterial = params.CoreMaterial;
	if (MaterialNames != nullptr)
		*MaterialNames = params.MaterialNames;
}


// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitCoreMaterialBreak
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlCoreMaterial        CoreMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_CORE_C::STATIC_BtlUnitCoreMaterialBreak(class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitCoreMaterialBreak");

	UBP_BUS_FUNCTION_CORE_C_BtlUnitCoreMaterialBreak_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoreMaterial != nullptr)
		*CoreMaterial = params.CoreMaterial;
}


// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitCoreMaterialEmissiveEnable
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlCoreMaterial        CoreMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_CORE_C::STATIC_BtlUnitCoreMaterialEmissiveEnable(bool Enable, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitCoreMaterialEmissiveEnable");

	UBP_BUS_FUNCTION_CORE_C_BtlUnitCoreMaterialEmissiveEnable_Params params;
	params.Enable = Enable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoreMaterial != nullptr)
		*CoreMaterial = params.CoreMaterial;
}


// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitSetCoreMaterialParam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlCoreMaterial        CoreMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   MaterialNameG0                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialNameDOA                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_CORE_C::STATIC_BtlUnitSetCoreMaterialParam(class ABtlCharacterBase* BtlUnit, const struct FBtlCoreMaterial& CoreMaterial, const struct FName& MaterialNameG0, const struct FName& MaterialNameDOA, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitSetCoreMaterialParam");

	UBP_BUS_FUNCTION_CORE_C_BtlUnitSetCoreMaterialParam_Params params;
	params.BtlUnit = BtlUnit;
	params.CoreMaterial = CoreMaterial;
	params.MaterialNameG0 = MaterialNameG0;
	params.MaterialNameDOA = MaterialNameDOA;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitUpdateCoreMaterial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlCoreMaterial        CoreMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissivePowerMin               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissivePowerMax               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissivePowerSpeed             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_CORE_C::STATIC_BtlUnitUpdateCoreMaterial(float DeltaTime, float EmissivePowerMin, float EmissivePowerMax, float EmissivePowerSpeed, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitUpdateCoreMaterial");

	UBP_BUS_FUNCTION_CORE_C_BtlUnitUpdateCoreMaterial_Params params;
	params.DeltaTime = DeltaTime;
	params.EmissivePowerMin = EmissivePowerMin;
	params.EmissivePowerMax = EmissivePowerMax;
	params.EmissivePowerSpeed = EmissivePowerSpeed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoreMaterial != nullptr)
		*CoreMaterial = params.CoreMaterial;
}


// Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitInitializeCoreMaterial
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlCoreMaterial        CoreMaterial                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          EmissivePower                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_FUNCTION_CORE_C::STATIC_BtlUnitInitializeCoreMaterial(float EmissivePower, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_FUNCTION_CORE.BP_BUS_FUNCTION_CORE_C.BtlUnitInitializeCoreMaterial");

	UBP_BUS_FUNCTION_CORE_C_BtlUnitInitializeCoreMaterial_Params params;
	params.EmissivePower = EmissivePower;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoreMaterial != nullptr)
		*CoreMaterial = params.CoreMaterial;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
