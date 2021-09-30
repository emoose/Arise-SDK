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

// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.GetOutlinerFolderPath
struct ABP_PF_NPC_CampObject_C_GetOutlinerFolderPath_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.GetOutlinerLabelName
struct ABP_PF_NPC_CampObject_C_GetOutlinerLabelName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.SpawnWeapon
struct ABP_PF_NPC_CampObject_C_SpawnWeapon_Params
{
	struct FString                                     WeaponName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      SpawnActor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.SpawnCharacter
struct ABP_PF_NPC_CampObject_C_SpawnCharacter_Params
{
	struct FPFNpcDefineFacialData                      InitOverrideFacial;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FSoftObjectPath                             AnimSetPath;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     InitAction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FPFNpcCharacterBuildOptions                 Options;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      SpawnActor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.ToStringToPartyID
struct ABP_PF_NPC_CampObject_C_ToStringToPartyID_Params
{
	struct FString                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EArisePartyID                                      PartyId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.DespawnActor
struct ABP_PF_NPC_CampObject_C_DespawnActor_Params
{
};

// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.SpawnActor
struct ABP_PF_NPC_CampObject_C_SpawnActor_Params
{
	struct FString                                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InitAction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     LocationOffset;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FSoftObjectPath                             AnimSetPath;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPFNpcDefineFacialData                      FacialData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPFNpcCharacterBuildOptions                 Options;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_CampObject.BP_PF_NPC_CampObject_C.UserConstructionScript
struct ABP_PF_NPC_CampObject_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
