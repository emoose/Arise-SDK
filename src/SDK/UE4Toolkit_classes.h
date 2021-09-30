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

// Class UE4Toolkit.TkActorUtilsLibrary
// 0x0000 (0x0028 - 0x0028)
class UTkActorUtilsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Toolkit.TkActorUtilsLibrary");
		return ptr;
	}


	void STATIC_SetActorAndComponentTickEnabled(class AActor* InActor, bool bInEnabled);
	void STATIC_GetActorBoundsSphere(class AActor* InActor, bool bOnlyCollidingComponents, struct FVector* OutOrigin, float* OutRadius);
};


// Class UE4Toolkit.TkCharacterUtilsLibrary
// 0x0000 (0x0028 - 0x0028)
class UTkCharacterUtilsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Toolkit.TkCharacterUtilsLibrary");
		return ptr;
	}


	void STATIC_TeleportCharacter(class ACharacter* InCharacter, const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void STATIC_SetCharacterOrientRotationToMovement(class ACharacter* InCharacter, bool bInRotation);
	void STATIC_SetCharacterLocation(class ACharacter* InCharacter, const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* OutSweepHitResult);
	struct FVector STATIC_GetCharacterLocation(class ACharacter* InCharacter);
};


// Class UE4Toolkit.TkCollisionUtilsLibrary
// 0x0000 (0x0028 - 0x0028)
class UTkCollisionUtilsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Toolkit.TkCollisionUtilsLibrary");
		return ptr;
	}


	void STATIC_GetResponseObjectTypes(const struct FName& InProfileName, TEnumAsByte<ECollisionResponse> InCollisionResponse, TArray<TEnumAsByte<EObjectTypeQuery>>* OutObjectChannel);
};


// Class UE4Toolkit.TkFreeCameraPawn
// 0x0008 (0x03B8 - 0x03B0)
class ATkFreeCameraPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UE4Toolkit.TkFreeCameraPawn");
		return ptr;
	}


	void TurnAtRate2(float Rate);
	void LookUpAtRate2(float Rate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
