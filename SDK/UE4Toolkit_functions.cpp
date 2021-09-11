
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

// Function UE4Toolkit.TkActorUtilsLibrary.SetActorAndComponentTickEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UTkActorUtilsLibrary::STATIC_SetActorAndComponentTickEnabled(class AActor* InActor, bool bInEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Toolkit.TkActorUtilsLibrary.SetActorAndComponentTickEnabled");

	UTkActorUtilsLibrary_SetActorAndComponentTickEnabled_Params params;
	params.InActor = InActor;
	params.bInEnabled = bInEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Toolkit.TkActorUtilsLibrary.GetActorBoundsSphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyCollidingComponents       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutOrigin                      (Parm, OutParm, IsPlainOldData)
// float                          OutRadius                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTkActorUtilsLibrary::STATIC_GetActorBoundsSphere(class AActor* InActor, bool bOnlyCollidingComponents, struct FVector* OutOrigin, float* OutRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Toolkit.TkActorUtilsLibrary.GetActorBoundsSphere");

	UTkActorUtilsLibrary_GetActorBoundsSphere_Params params;
	params.InActor = InActor;
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOrigin != nullptr)
		*OutOrigin = params.OutOrigin;
	if (OutRadius != nullptr)
		*OutRadius = params.OutRadius;
}


// Function UE4Toolkit.TkCharacterUtilsLibrary.TeleportCharacter
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ACharacter*              InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)

void UTkCharacterUtilsLibrary::STATIC_TeleportCharacter(class ACharacter* InCharacter, const struct FVector& NewLocation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Toolkit.TkCharacterUtilsLibrary.TeleportCharacter");

	UTkCharacterUtilsLibrary_TeleportCharacter_Params params;
	params.InCharacter = InCharacter;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Toolkit.TkCharacterUtilsLibrary.SetCharacterOrientRotationToMovement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ACharacter*              InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void UTkCharacterUtilsLibrary::STATIC_SetCharacterOrientRotationToMovement(class ACharacter* InCharacter, bool bInRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Toolkit.TkCharacterUtilsLibrary.SetCharacterOrientRotationToMovement");

	UTkCharacterUtilsLibrary_SetCharacterOrientRotationToMovement_Params params;
	params.InCharacter = InCharacter;
	params.bInRotation = bInRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Toolkit.TkCharacterUtilsLibrary.SetCharacterLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class ACharacter*              InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutSweepHitResult              (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void UTkCharacterUtilsLibrary::STATIC_SetCharacterLocation(class ACharacter* InCharacter, const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* OutSweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Toolkit.TkCharacterUtilsLibrary.SetCharacterLocation");

	UTkCharacterUtilsLibrary_SetCharacterLocation_Params params;
	params.InCharacter = InCharacter;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSweepHitResult != nullptr)
		*OutSweepHitResult = params.OutSweepHitResult;
}


// Function UE4Toolkit.TkCharacterUtilsLibrary.GetCharacterLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ACharacter*              InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTkCharacterUtilsLibrary::STATIC_GetCharacterLocation(class ACharacter* InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Toolkit.TkCharacterUtilsLibrary.GetCharacterLocation");

	UTkCharacterUtilsLibrary_GetCharacterLocation_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UE4Toolkit.TkCollisionUtilsLibrary.GetResponseObjectTypes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InProfileName                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> InCollisionResponse            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> OutObjectChannel               (Parm, OutParm, ZeroConstructor)

void UTkCollisionUtilsLibrary::STATIC_GetResponseObjectTypes(const struct FName& InProfileName, TEnumAsByte<ECollisionResponse> InCollisionResponse, TArray<TEnumAsByte<EObjectTypeQuery>>* OutObjectChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Toolkit.TkCollisionUtilsLibrary.GetResponseObjectTypes");

	UTkCollisionUtilsLibrary_GetResponseObjectTypes_Params params;
	params.InProfileName = InProfileName;
	params.InCollisionResponse = InCollisionResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutObjectChannel != nullptr)
		*OutObjectChannel = params.OutObjectChannel;
}


// Function UE4Toolkit.TkFreeCameraPawn.TurnAtRate2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ATkFreeCameraPawn::TurnAtRate2(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Toolkit.TkFreeCameraPawn.TurnAtRate2");

	ATkFreeCameraPawn_TurnAtRate2_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UE4Toolkit.TkFreeCameraPawn.LookUpAtRate2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ATkFreeCameraPawn::LookUpAtRate2(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UE4Toolkit.TkFreeCameraPawn.LookUpAtRate2");

	ATkFreeCameraPawn_LookUpAtRate2_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
