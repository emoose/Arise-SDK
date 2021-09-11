
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

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InStiffness                    (Parm, ZeroConstructor, IsPlainOldData)

void UClothingSimulationInteractorNv::SetAnimDriveSpringStiffness(float InStiffness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness");

	UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InStiffness                    (Parm, ZeroConstructor, IsPlainOldData)

void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness");

	UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UClothingSimulationInteractorNv::EnableGravityOverride(const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride");

	UClothingSimulationInteractorNv_EnableGravityOverride_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableApplyDampingPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDampingPower                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UClothingSimulationInteractorNv::EnableApplyDampingPower(float InDampingPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableApplyDampingPower");

	UClothingSimulationInteractorNv_EnableApplyDampingPower_Params params;
	params.InDampingPower = InDampingPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
// (Final, Native, Public, BlueprintCallable)

void UClothingSimulationInteractorNv::DisableGravityOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride");

	UClothingSimulationInteractorNv_DisableGravityOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableApplyDampingPower
// (Final, Native, Public, BlueprintCallable)

void UClothingSimulationInteractorNv::DisableApplyDampingPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableApplyDampingPower");

	UClothingSimulationInteractorNv_DisableApplyDampingPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
