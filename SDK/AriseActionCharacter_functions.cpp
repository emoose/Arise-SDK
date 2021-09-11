
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

// Function AriseActionCharacter.AriseActionCharacterFunctionLibrary.SetCharacterVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInNewVisibility               (Parm, ZeroConstructor, IsPlainOldData)

void UAriseActionCharacterFunctionLibrary::STATIC_SetCharacterVisibility(class AActor* InActor, bool bInNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseActionCharacterFunctionLibrary.SetCharacterVisibility");

	UAriseActionCharacterFunctionLibrary_SetCharacterVisibility_Params params;
	params.InActor = InActor;
	params.bInNewVisibility = bInNewVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseActionCharacterFunctionLibrary.SetCharacterTickEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInNewEnable                   (Parm, ZeroConstructor, IsPlainOldData)

void UAriseActionCharacterFunctionLibrary::STATIC_SetCharacterTickEnable(class AActor* InActor, bool bInNewEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseActionCharacterFunctionLibrary.SetCharacterTickEnable");

	UAriseActionCharacterFunctionLibrary_SetCharacterTickEnable_Params params;
	params.InActor = InActor;
	params.bInNewEnable = bInNewEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseAnimInstance.SetRootMotionSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseAnimInstance::SetRootMotionSequence(const struct FName& KeyName, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseAnimInstance.SetRootMotionSequence");

	UAriseAnimInstance_SetRootMotionSequence_Params params;
	params.KeyName = KeyName;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseAnimInstance.SetRootMotionBlendspace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseAnimInstance::SetRootMotionBlendspace(const struct FName& KeyName, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseAnimInstance.SetRootMotionBlendspace");

	UAriseAnimInstance_SetRootMotionBlendspace_Params params;
	params.KeyName = KeyName;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseAnimInstance.SetGravityPowerWithInterpolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewGravityPower                (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (Parm, ZeroConstructor, IsPlainOldData)

void UAriseAnimInstance::SetGravityPowerWithInterpolation(float NewGravityPower, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseAnimInstance.SetGravityPowerWithInterpolation");

	UAriseAnimInstance_SetGravityPowerWithInterpolation_Params params;
	params.NewGravityPower = NewGravityPower;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseAnimInstance.SetDynamicsWeightWithInterpolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDynamicsWeight              (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (Parm, ZeroConstructor, IsPlainOldData)

void UAriseAnimInstance::SetDynamicsWeightWithInterpolation(float NewDynamicsWeight, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseAnimInstance.SetDynamicsWeightWithInterpolation");

	UAriseAnimInstance_SetDynamicsWeightWithInterpolation_Params params;
	params.NewDynamicsWeight = NewDynamicsWeight;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseAnimInstance.SetDampingPowerWithInterpolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDampingPower                (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (Parm, ZeroConstructor, IsPlainOldData)

void UAriseAnimInstance::SetDampingPowerWithInterpolation(float NewDampingPower, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseAnimInstance.SetDampingPowerWithInterpolation");

	UAriseAnimInstance_SetDampingPowerWithInterpolation_Params params;
	params.NewDampingPower = NewDampingPower;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseAnimInstance.K2_IsCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InMachineName                  (Parm, ZeroConstructor)
// struct FString                 InStateName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseAnimInstance::K2_IsCurrentState(const struct FString& InMachineName, const struct FString& InStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseAnimInstance.K2_IsCurrentState");

	UAriseAnimInstance_K2_IsCurrentState_Params params;
	params.InMachineName = InMachineName;
	params.InStateName = InStateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseAnimInstance.IsLevelSequenceControl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseAnimInstance::IsLevelSequenceControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseAnimInstance.IsLevelSequenceControl");

	UAriseAnimInstance_IsLevelSequenceControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseAnimInstance.GetLookAtViewAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAriseAnimInstance::GetLookAtViewAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseAnimInstance.GetLookAtViewAngle");

	UAriseAnimInstance_GetLookAtViewAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseAnimInstance.GetLookAtViewAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAriseAnimInstance::GetLookAtViewAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseAnimInstance.GetLookAtViewAlpha");

	UAriseAnimInstance_GetLookAtViewAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterBase.SetTears
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Type                           (Parm, ZeroConstructor)

void AAriseCharacterBase::SetTears(const struct FString& Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.SetTears");

	AAriseCharacterBase_SetTears_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.SetScalarParameterValueOnMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ParameterValue                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAriseCharacterBase::SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.SetScalarParameterValueOnMaterials");

	AAriseCharacterBase_SetScalarParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.SetForceLOD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InLevel                        (Parm, ZeroConstructor, IsPlainOldData)

void AAriseCharacterBase::SetForceLOD(int InLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.SetForceLOD");

	AAriseCharacterBase_SetForceLOD_Params params;
	params.InLevel = InLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.SetCharacterVisibility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInValue                       (Parm, ZeroConstructor, IsPlainOldData)

void AAriseCharacterBase::SetCharacterVisibility(bool bInValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.SetCharacterVisibility");

	AAriseCharacterBase_SetCharacterVisibility_Params params;
	params.bInValue = bInValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.SetCharacterTickEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInValue                       (Parm, ZeroConstructor, IsPlainOldData)

void AAriseCharacterBase::SetCharacterTickEnabled(bool bInValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.SetCharacterTickEnabled");

	AAriseCharacterBase_SetCharacterTickEnabled_Params params;
	params.bInValue = bInValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.ResetForceLOD
// (Final, Native, Public, BlueprintCallable)

void AAriseCharacterBase::ResetForceLOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.ResetForceLOD");

	AAriseCharacterBase_ResetForceLOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.RemoveTears
// (Final, Native, Public, BlueprintCallable)

void AAriseCharacterBase::RemoveTears()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.RemoveTears");

	AAriseCharacterBase_RemoveTears_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.ReceiveOnAnimInitialized
// (Native, Event, Public, BlueprintEvent)

void AAriseCharacterBase::ReceiveOnAnimInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.ReceiveOnAnimInitialized");

	AAriseCharacterBase_ReceiveOnAnimInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.OnUnbuildCharacter
// (Native, Event, Protected, BlueprintEvent)

void AAriseCharacterBase::OnUnbuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.OnUnbuildCharacter");

	AAriseCharacterBase_OnUnbuildCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.OnRebuildCharacterModel
// (Native, Event, Protected, BlueprintEvent)

void AAriseCharacterBase::OnRebuildCharacterModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.OnRebuildCharacterModel");

	AAriseCharacterBase_OnRebuildCharacterModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.OnGetUserLoadAsset
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FSoftObjectPath> OutAssetReference              (Parm, OutParm, ZeroConstructor)

void AAriseCharacterBase::OnGetUserLoadAsset(TArray<struct FSoftObjectPath>* OutAssetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.OnGetUserLoadAsset");

	AAriseCharacterBase_OnGetUserLoadAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetReference != nullptr)
		*OutAssetReference = params.OutAssetReference;
}


// Function AriseActionCharacter.AriseCharacterBase.OnBuildCharacterModelComplete
// (Native, Event, Protected, BlueprintEvent)

void AAriseCharacterBase::OnBuildCharacterModelComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.OnBuildCharacterModelComplete");

	AAriseCharacterBase_OnBuildCharacterModelComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.OnBuildCharacter
// (Native, Event, Protected, BlueprintEvent)

void AAriseCharacterBase::OnBuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.OnBuildCharacter");

	AAriseCharacterBase_OnBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.K2_SetFootComponentsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AAriseCharacterBase::K2_SetFootComponentsEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.K2_SetFootComponentsEnabled");

	AAriseCharacterBase_K2_SetFootComponentsEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.K2_SetAdjustMeshToCapsuleEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AAriseCharacterBase::K2_SetAdjustMeshToCapsuleEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.K2_SetAdjustMeshToCapsuleEnabled");

	AAriseCharacterBase_K2_SetAdjustMeshToCapsuleEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.K2_IsAnimCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 InMahcineName                  (Parm, ZeroConstructor)
// struct FString                 InStateName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseCharacterBase::K2_IsAnimCurrentState(const struct FString& InMahcineName, const struct FString& InStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.K2_IsAnimCurrentState");

	AAriseCharacterBase_K2_IsAnimCurrentState_Params params;
	params.InMahcineName = InMahcineName;
	params.InStateName = InStateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterBase.K2_InitializeFootComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InModelID                      (Parm, ZeroConstructor)

void AAriseCharacterBase::K2_InitializeFootComponents(const struct FString& InModelID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.K2_InitializeFootComponents");

	AAriseCharacterBase_K2_InitializeFootComponents_Params params;
	params.InModelID = InModelID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.K2_GetFootIK
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FAchCharacterFootIKResult ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAchCharacterFootIKResult AAriseCharacterBase::K2_GetFootIK(const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.K2_GetFootIK");

	AAriseCharacterBase_K2_GetFootIK_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterBase.K2_AdjustMeshToCapsule
// (Final, Native, Public, BlueprintCallable)

void AAriseCharacterBase::K2_AdjustMeshToCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.K2_AdjustMeshToCapsule");

	AAriseCharacterBase_K2_AdjustMeshToCapsule_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterBase.IsVisibleCharacter
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseCharacterBase::IsVisibleCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.IsVisibleCharacter");

	AAriseCharacterBase_IsVisibleCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterBase.IsCharacterTickEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseCharacterBase::IsCharacterTickEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.IsCharacterTickEnabled");

	AAriseCharacterBase_IsCharacterTickEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterBase.GetWetRatio
// (Native, Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bOutResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutRate                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAriseCharacterBase::GetWetRatio(bool* bOutResult, float* OutRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.GetWetRatio");

	AAriseCharacterBase_GetWetRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutResult != nullptr)
		*bOutResult = params.bOutResult;
	if (OutRate != nullptr)
		*OutRate = params.OutRate;
}


// Function AriseActionCharacter.AriseCharacterBase.GetWeaponID
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 WeaponID                       (Parm, OutParm, ZeroConstructor)

void AAriseCharacterBase::GetWeaponID(struct FString* WeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.GetWeaponID");

	AAriseCharacterBase_GetWeaponID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponID != nullptr)
		*WeaponID = params.WeaponID;
}


// Function AriseActionCharacter.AriseCharacterBase.GetTearsType
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         OutTypes                       (Parm, OutParm, ZeroConstructor)

void AAriseCharacterBase::GetTearsType(TArray<struct FString>* OutTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.GetTearsType");

	AAriseCharacterBase_GetTearsType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTypes != nullptr)
		*OutTypes = params.OutTypes;
}


// Function AriseActionCharacter.AriseCharacterBase.GetModelID
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ModelID                        (Parm, OutParm, ZeroConstructor)

void AAriseCharacterBase::GetModelID(struct FString* ModelID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.GetModelID");

	AAriseCharacterBase_GetModelID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModelID != nullptr)
		*ModelID = params.ModelID;
}


// Function AriseActionCharacter.AriseCharacterBase.GetGroundPhysicalMaterialName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AAriseCharacterBase::GetGroundPhysicalMaterialName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.GetGroundPhysicalMaterialName");

	AAriseCharacterBase_GetGroundPhysicalMaterialName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterBase.GetFootMaterial
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SurfaceName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAriseCharacterBase::GetFootMaterial(struct FName* SurfaceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.GetFootMaterial");

	AAriseCharacterBase_GetFootMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SurfaceName != nullptr)
		*SurfaceName = params.SurfaceName;
}


// Function AriseActionCharacter.AriseCharacterBase.GetCachedBuildComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAchCharacterBuildComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAchCharacterBuildComponent* AAriseCharacterBase::GetCachedBuildComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.GetCachedBuildComponent");

	AAriseCharacterBase_GetCachedBuildComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterBase.GetBoneMeshComponnt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAchCharacterBoneMeshComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAchCharacterBoneMeshComponent* AAriseCharacterBase::GetBoneMeshComponnt()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.GetBoneMeshComponnt");

	AAriseCharacterBase_GetBoneMeshComponnt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterBase.CollectAvailableLipPatternNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> AAriseCharacterBase::CollectAvailableLipPatternNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterBase.CollectAvailableLipPatternNames");

	AAriseCharacterBase_CollectAvailableLipPatternNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseBuildCharacter.K2_IsBuildCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAriseBuildCharacter::K2_IsBuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseBuildCharacter.K2_IsBuildCharacter");

	AAriseBuildCharacter_K2_IsBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseBuildCharacterFunctionLibrary.MakePCBuildParameter2
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EArisePartyID                  InPartyID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            InFlags                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FAchCharacterBuildParameters ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAchCharacterBuildParameters UAriseBuildCharacterFunctionLibrary::STATIC_MakePCBuildParameter2(EArisePartyID InPartyID, int InFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseBuildCharacterFunctionLibrary.MakePCBuildParameter2");

	UAriseBuildCharacterFunctionLibrary_MakePCBuildParameter2_Params params;
	params.InPartyID = InPartyID;
	params.InFlags = InFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseBuildCharacterFunctionLibrary.MakePCBuildParameter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EArisePartyID                  InPartyID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAchCharacterBuildParameters ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAchCharacterBuildParameters UAriseBuildCharacterFunctionLibrary::STATIC_MakePCBuildParameter(EArisePartyID InPartyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseBuildCharacterFunctionLibrary.MakePCBuildParameter");

	UAriseBuildCharacterFunctionLibrary_MakePCBuildParameter_Params params;
	params.InPartyID = InPartyID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseBuildCharacterPawn.SetCollisionEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AAriseBuildCharacterPawn::SetCollisionEnable(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseBuildCharacterPawn.SetCollisionEnable");

	AAriseBuildCharacterPawn_SetCollisionEnable_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseBuildCharacterPawn.SendAnimCommand
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void AAriseBuildCharacterPawn::SendAnimCommand(const struct FString& Command, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseBuildCharacterPawn.SendAnimCommand");

	AAriseBuildCharacterPawn_SendAnimCommand_Params params;
	params.Command = Command;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseBuildCharacterPawn.OnUnbuildCharacter
// (Native, Event, Protected, BlueprintEvent)

void AAriseBuildCharacterPawn::OnUnbuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseBuildCharacterPawn.OnUnbuildCharacter");

	AAriseBuildCharacterPawn_OnUnbuildCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseBuildCharacterPawn.OnGetUserLoadAsset
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FSoftObjectPath> OutAssetReference              (Parm, OutParm, ZeroConstructor)

void AAriseBuildCharacterPawn::OnGetUserLoadAsset(TArray<struct FSoftObjectPath>* OutAssetReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseBuildCharacterPawn.OnGetUserLoadAsset");

	AAriseBuildCharacterPawn_OnGetUserLoadAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAssetReference != nullptr)
		*OutAssetReference = params.OutAssetReference;
}


// Function AriseActionCharacter.AriseBuildCharacterPawn.OnBuildCharacter
// (Native, Event, Protected, BlueprintEvent)

void AAriseBuildCharacterPawn::OnBuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseBuildCharacterPawn.OnBuildCharacter");

	AAriseBuildCharacterPawn_OnBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseWrinkle1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterFacialComponent::SetPoseWrinkle1(int Value, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseWrinkle1");

	UAriseCharacterFacialComponent_SetPoseWrinkle1_Params params;
	params.Value = Value;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseWrinkle0
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterFacialComponent::SetPoseWrinkle0(int Value, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseWrinkle0");

	UAriseCharacterFacialComponent_SetPoseWrinkle0_Params params;
	params.Value = Value;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseIris
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterFacialComponent::SetPoseIris(int Value, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseIris");

	UAriseCharacterFacialComponent_SetPoseIris_Params params;
	params.Value = Value;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseFacialPreset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseCharacterFacialComponent::SetPoseFacialPreset(const struct FString& ID, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseFacialPreset");

	UAriseCharacterFacialComponent_SetPoseFacialPreset_Params params;
	params.ID = ID;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseFacialDefault
// (Final, Native, Public, BlueprintCallable)

void UAriseCharacterFacialComponent::SetPoseFacialDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseFacialDefault");

	UAriseCharacterFacialComponent_SetPoseFacialDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEyelid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterFacialComponent::SetPoseEyelid(int Value, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEyelid");

	UAriseCharacterFacialComponent_SetPoseEyelid_Params params;
	params.Value = Value;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEye_LookAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterFacialComponent::SetPoseEye_LookAt(float Angle, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEye_LookAt");

	UAriseCharacterFacialComponent_SetPoseEye_LookAt_Params params;
	params.Angle = Angle;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEye_Highlight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterFacialComponent::SetPoseEye_Highlight(int Value, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEye_Highlight");

	UAriseCharacterFacialComponent_SetPoseEye_Highlight_Params params;
	params.Value = Value;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEmotion1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterFacialComponent::SetPoseEmotion1(int Value, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEmotion1");

	UAriseCharacterFacialComponent_SetPoseEmotion1_Params params;
	params.Value = Value;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEmotion0
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterFacialComponent::SetPoseEmotion0(int Value, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEmotion0");

	UAriseCharacterFacialComponent_SetPoseEmotion0_Params params;
	params.Value = Value;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterFacialComponent.SetEnableLip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterFacialComponent::SetEnableLip(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterFacialComponent.SetEnableLip");

	UAriseCharacterFacialComponent_SetEnableLip_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetUseKeyFrameAnim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InUseKeyFrameAnim              (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetUseKeyFrameAnim(bool InUseKeyFrameAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetUseKeyFrameAnim");

	UAriseCharacterPhysicsComponent_SetUseKeyFrameAnim_Params params;
	params.InUseKeyFrameAnim = InUseKeyFrameAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetUseGroudCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InGroudCollision               (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetUseGroudCollision(bool InGroudCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetUseGroudCollision");

	UAriseCharacterPhysicsComponent_SetUseGroudCollision_Params params;
	params.InGroudCollision = InGroudCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetSimulationSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAnimPhysSimSpaceType          InSimulationSpace              (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetSimulationSpace(EAnimPhysSimSpaceType InSimulationSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetSimulationSpace");

	UAriseCharacterPhysicsComponent_SetSimulationSpace_Params params;
	params.InSimulationSpace = InSimulationSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetGravityPowerWithInterpolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InGravityPower                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetGravityPowerWithInterpolation(float InGravityPower, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetGravityPowerWithInterpolation");

	UAriseCharacterPhysicsComponent_SetGravityPowerWithInterpolation_Params params;
	params.InGravityPower = InGravityPower;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetGravityPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InGravityPower                 (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetGravityPower(float InGravityPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetGravityPower");

	UAriseCharacterPhysicsComponent_SetGravityPower_Params params;
	params.InGravityPower = InGravityPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateUpperParts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InEnableSimulateUpperParts     (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetEnableSimulateUpperParts(bool InEnableSimulateUpperParts)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateUpperParts");

	UAriseCharacterPhysicsComponent_SetEnableSimulateUpperParts_Params params;
	params.InEnableSimulateUpperParts = InEnableSimulateUpperParts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateLowerParts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InEnableSimulateLowerParts     (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetEnableSimulateLowerParts(bool InEnableSimulateLowerParts)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateLowerParts");

	UAriseCharacterPhysicsComponent_SetEnableSimulateLowerParts_Params params;
	params.InEnableSimulateLowerParts = InEnableSimulateLowerParts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateHairParts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InEnableSimulateHairParts      (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetEnableSimulateHairParts(bool InEnableSimulateHairParts)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateHairParts");

	UAriseCharacterPhysicsComponent_SetEnableSimulateHairParts_Params params;
	params.InEnableSimulateHairParts = InEnableSimulateHairParts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateExtraParts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InEnableSimulateExtraParts     (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetEnableSimulateExtraParts(bool InEnableSimulateExtraParts)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateExtraParts");

	UAriseCharacterPhysicsComponent_SetEnableSimulateExtraParts_Params params;
	params.InEnableSimulateExtraParts = InEnableSimulateExtraParts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDynamicsWeightWithInterpolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDynamicsWeight               (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetDynamicsWeightWithInterpolation(float InDynamicsWeight, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDynamicsWeightWithInterpolation");

	UAriseCharacterPhysicsComponent_SetDynamicsWeightWithInterpolation_Params params;
	params.InDynamicsWeight = InDynamicsWeight;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDynamicsWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDynamicsWeight               (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetDynamicsWeight(float InDynamicsWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDynamicsWeight");

	UAriseCharacterPhysicsComponent_SetDynamicsWeight_Params params;
	params.InDynamicsWeight = InDynamicsWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDampingPowerWithInterpolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDampingPower                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetDampingPowerWithInterpolation(float InDampingPower, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDampingPowerWithInterpolation");

	UAriseCharacterPhysicsComponent_SetDampingPowerWithInterpolation_Params params;
	params.InDampingPower = InDampingPower;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDampingPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDampingPower                 (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetDampingPower(float InDampingPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDampingPower");

	UAriseCharacterPhysicsComponent_SetDampingPower_Params params;
	params.InDampingPower = InDampingPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetClothBlendWeightWithInterpolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InClothBlendWeight             (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpolationTime              (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetClothBlendWeightWithInterpolation(float InClothBlendWeight, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetClothBlendWeightWithInterpolation");

	UAriseCharacterPhysicsComponent_SetClothBlendWeightWithInterpolation_Params params;
	params.InClothBlendWeight = InClothBlendWeight;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetClothBlendWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InClothBlendWeight             (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetClothBlendWeight(float InClothBlendWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetClothBlendWeight");

	UAriseCharacterPhysicsComponent_SetClothBlendWeight_Params params;
	params.InClothBlendWeight = InClothBlendWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetCancelTeleportMoveByBone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInCancelTeleportMoveByBone    (Parm, ZeroConstructor, IsPlainOldData)

void UAriseCharacterPhysicsComponent::SetCancelTeleportMoveByBone(bool bInCancelTeleportMoveByBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetCancelTeleportMoveByBone");

	UAriseCharacterPhysicsComponent_SetCancelTeleportMoveByBone_Params params;
	params.bInCancelTeleportMoveByBone = bInCancelTeleportMoveByBone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.IsUseKeyFrameAnim
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseCharacterPhysicsComponent::IsUseKeyFrameAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.IsUseKeyFrameAnim");

	UAriseCharacterPhysicsComponent_IsUseKeyFrameAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.IsUseGroudCollision
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseCharacterPhysicsComponent::IsUseGroudCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.IsUseGroudCollision");

	UAriseCharacterPhysicsComponent_IsUseGroudCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.IsCancelTeleportMoveByBone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseCharacterPhysicsComponent::IsCancelTeleportMoveByBone()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.IsCancelTeleportMoveByBone");

	UAriseCharacterPhysicsComponent_IsCancelTeleportMoveByBone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetSimulationSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAnimPhysSimSpaceType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAnimPhysSimSpaceType UAriseCharacterPhysicsComponent::GetSimulationSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetSimulationSpace");

	UAriseCharacterPhysicsComponent_GetSimulationSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetGravityPower
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAriseCharacterPhysicsComponent::GetGravityPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetGravityPower");

	UAriseCharacterPhysicsComponent_GetGravityPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetDynamicsWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAriseCharacterPhysicsComponent::GetDynamicsWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetDynamicsWeight");

	UAriseCharacterPhysicsComponent_GetDynamicsWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetDampingPower
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAriseCharacterPhysicsComponent::GetDampingPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetDampingPower");

	UAriseCharacterPhysicsComponent_GetDampingPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetClothBlendWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAriseCharacterPhysicsComponent::GetClothBlendWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetClothBlendWeight");

	UAriseCharacterPhysicsComponent_GetClothBlendWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateUpperParts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseCharacterPhysicsComponent::EnableSimulateUpperParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateUpperParts");

	UAriseCharacterPhysicsComponent_EnableSimulateUpperParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateLowerParts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseCharacterPhysicsComponent::EnableSimulateLowerParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateLowerParts");

	UAriseCharacterPhysicsComponent_EnableSimulateLowerParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateHairParts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseCharacterPhysicsComponent::EnableSimulateHairParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateHairParts");

	UAriseCharacterPhysicsComponent_EnableSimulateHairParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateExtraParts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAriseCharacterPhysicsComponent::EnableSimulateExtraParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateExtraParts");

	UAriseCharacterPhysicsComponent_EnableSimulateExtraParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseCinematicCharacter.SetEnableUpdateDynamics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AAriseCinematicCharacter::SetEnableUpdateDynamics(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCinematicCharacter.SetEnableUpdateDynamics");

	AAriseCinematicCharacter_SetEnableUpdateDynamics_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseCinematicCharacter.GetAllSpawnedCharacters
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AAriseCinematicCharacter*> OutSpawnedCharacters           (Parm, OutParm, ZeroConstructor)

void AAriseCinematicCharacter::STATIC_GetAllSpawnedCharacters(TArray<class AAriseCinematicCharacter*>* OutSpawnedCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseCinematicCharacter.GetAllSpawnedCharacters");

	AAriseCinematicCharacter_GetAllSpawnedCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSpawnedCharacters != nullptr)
		*OutSpawnedCharacters = params.OutSpawnedCharacters;
}


// Function AriseActionCharacter.AriseLodPreviewBoneMeshComponent.GetCurrentLODInfo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FColor                  Color                          (Parm, OutParm, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// struct FAchCharacterLODInfo    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAchCharacterLODInfo UAriseLodPreviewBoneMeshComponent::GetCurrentLODInfo(struct FColor* Color, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseLodPreviewBoneMeshComponent.GetCurrentLODInfo");

	UAriseLodPreviewBoneMeshComponent_GetCurrentLODInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
	if (Name != nullptr)
		*Name = params.Name;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseLodPreviewCharacter.ImportFromDatabase
// (Final, Native, Public)

void AAriseLodPreviewCharacter::ImportFromDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseLodPreviewCharacter.ImportFromDatabase");

	AAriseLodPreviewCharacter_ImportFromDatabase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AriseActionCharacter.AriseLodPreviewCharacter.GetModelList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> AAriseLodPreviewCharacter::GetModelList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseLodPreviewCharacter.GetModelList");

	AAriseLodPreviewCharacter_GetModelList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AriseActionCharacter.AriseLodPreviewCharacter.BuildModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ModelID                        (Parm, ZeroConstructor)

void AAriseLodPreviewCharacter::BuildModel(const struct FString& ModelID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AriseActionCharacter.AriseLodPreviewCharacter.BuildModel");

	AAriseLodPreviewCharacter_BuildModel_Params params;
	params.ModelID = ModelID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
