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

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.PlayBoostStrike_Internal
struct UBP_BtlFunctionLibrary_C_PlayBoostStrike_Internal_Params
{
	struct FName                                       StrikeLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPostEventInfoBase*                          PostEventInfo;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetCameraOffsetAimHeight
struct UBP_BtlFunctionLibrary_C_SetCameraOffsetAimHeight_Params
{
	float                                              Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.RemoveDotLeftString
struct UBP_BtlFunctionLibrary_C_RemoveDotLeftString_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.LongPathToShortName
struct UBP_BtlFunctionLibrary_C_LongPathToShortName_Params
{
	struct FString                                     LongPath;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ShortName;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetBtlUnitListById
struct UBP_BtlFunctionLibrary_C_GetBtlUnitListById_Params
{
	struct FName                                       UnitID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class ABtlCharacterBase*>                   Unit;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetBtlUnitById
struct UBP_BtlFunctionLibrary_C_GetBtlUnitById_Params
{
	struct FName                                       UnitID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Unit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ShowDamageCollision
struct UBP_BtlFunctionLibrary_C_ShowDamageCollision_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetCameraOffsetRotation
struct UBP_BtlFunctionLibrary_C_SetCameraOffsetRotation_Params
{
	struct FRotator                                    Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetCameraOffsetLocation
struct UBP_BtlFunctionLibrary_C_SetCameraOffsetLocation_Params
{
	struct FVector                                     Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetSpecialStrikeLabel
struct UBP_BtlFunctionLibrary_C_GetSpecialStrikeLabel_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.IsReadySpecialStrike
struct UBP_BtlFunctionLibrary_C_IsReadySpecialStrike_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.NotReadySpecialStrike
struct UBP_BtlFunctionLibrary_C_NotReadySpecialStrike_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ReadySpecialStrike
struct UBP_BtlFunctionLibrary_C_ReadySpecialStrike_Params
{
	struct FName                                       NewSpecialStrike;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetBBArtsTarget
struct UBP_BtlFunctionLibrary_C_SetBBArtsTarget_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABtlCharacterBase*                           Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetBBRequestArts
struct UBP_BtlFunctionLibrary_C_SetBBRequestArts_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SetHoldMouse
struct UBP_BtlFunctionLibrary_C_SetHoldMouse_Params
{
	bool                                               Hold;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.LerpAngleValue
struct UBP_BtlFunctionLibrary_C_LerpAngleValue_Params
{
	float                                              From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              To;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.LerpFloatValue
struct UBP_BtlFunctionLibrary_C_LerpFloatValue_Params
{
	float                                              From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              To;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ChangeControlCharacter
struct UBP_BtlFunctionLibrary_C_ChangeControlCharacter_Params
{
	class ABtlCharacterBase*                           ChangeCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.ConvertElementToMPC
struct UBP_BtlFunctionLibrary_C_ConvertElementToMPC_Params
{
	EBtlElementType                                    Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SpawnElementEmitterAttached
struct UBP_BtlFunctionLibrary_C_SpawnElementEmitterAttached_Params
{
	struct FName                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EmitterTemplate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.SpawnElementEmitterAtLocation
struct UBP_BtlFunctionLibrary_C_SpawnElementEmitterAtLocation_Params
{
	struct FName                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EmitterTemplate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetMarkerLocation
struct UBP_BtlFunctionLibrary_C_GetMarkerLocation_Params
{
	struct FName                                       marker;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     returnValue;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetUnitData
struct UBP_BtlFunctionLibrary_C_GetUnitData_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlUnitData                                returnValue;                                              // (Parm, OutParm)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetName
struct UBP_BtlFunctionLibrary_C_GetName_Params
{
	struct FString                                     Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     returnValue;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetArtsData
struct UBP_BtlFunctionLibrary_C_GetArtsData_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtlArtsData                                returnValue;                                              // (Parm, OutParm)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetBtlStateEvent
struct UBP_BtlFunctionLibrary_C_GetBtlStateEvent_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlStateEvent*                              BtlStateEvent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.GetPCController
struct UBP_BtlFunctionLibrary_C_GetPCController_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AInputExtPlayerController*                   PCController;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.PlayBattleSE
struct UBP_BtlFunctionLibrary_C_PlayBattleSE_Params
{
	struct FName                                       SystemEffectLabel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlFunctionLibrary.BP_BtlFunctionLibrary_C.CollectUsableArtsList
struct UBP_BtlFunctionLibrary_C_CollectUsableArtsList_Params
{
	class ABtlCharacterBase*                           BtlCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           TargetCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ResultList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
