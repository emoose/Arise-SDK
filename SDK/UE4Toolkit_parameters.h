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

// Function UE4Toolkit.TkActorUtilsLibrary.SetActorAndComponentTickEnabled
struct UTkActorUtilsLibrary_SetActorAndComponentTickEnabled_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Toolkit.TkActorUtilsLibrary.GetActorBoundsSphere
struct UTkActorUtilsLibrary_GetActorBoundsSphere_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutOrigin;                                                // (Parm, OutParm, IsPlainOldData)
	float                                              OutRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Toolkit.TkCharacterUtilsLibrary.TeleportCharacter
struct UTkCharacterUtilsLibrary_TeleportCharacter_Params
{
	class ACharacter*                                  InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
};

// Function UE4Toolkit.TkCharacterUtilsLibrary.SetCharacterOrientRotationToMovement
struct UTkCharacterUtilsLibrary_SetCharacterOrientRotationToMovement_Params
{
	class ACharacter*                                  InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Toolkit.TkCharacterUtilsLibrary.SetCharacterLocation
struct UTkCharacterUtilsLibrary_SetCharacterLocation_Params
{
	class ACharacter*                                  InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutSweepHitResult;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Toolkit.TkCharacterUtilsLibrary.GetCharacterLocation
struct UTkCharacterUtilsLibrary_GetCharacterLocation_Params
{
	class ACharacter*                                  InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UE4Toolkit.TkCollisionUtilsLibrary.GetResponseObjectTypes
struct UTkCollisionUtilsLibrary_GetResponseObjectTypes_Params
{
	struct FName                                       InProfileName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    InCollisionResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              OutObjectChannel;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function UE4Toolkit.TkFreeCameraPawn.TurnAtRate2
struct ATkFreeCameraPawn_TurnAtRate2_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UE4Toolkit.TkFreeCameraPawn.LookUpAtRate2
struct ATkFreeCameraPawn_LookUpAtRate2_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
