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

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.UseCamp
struct ABP_PF_CampActorBase_C_UseCamp_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.GetCampPattern
struct ABP_PF_CampActorBase_C_GetCampPattern_Params
{
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPFCampDatabaseData                         CampData;                                                 // (Parm, OutParm)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SetLookAtTarget
struct ABP_PF_CampActorBase_C_SetLookAtTarget_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ResetTalkGroup
struct ABP_PF_CampActorBase_C_ResetTalkGroup_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SetCampVisibility
struct ABP_PF_CampActorBase_C_SetCampVisibility_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AttachCharacter
struct ABP_PF_CampActorBase_C_AttachCharacter_Params
{
	class AActor*                                      ChildActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AttachID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AddWeapon
struct ABP_PF_CampActorBase_C_AddWeapon_Params
{
	class ABP_PF_NPC_CampWeapon_C*                     Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AddCharacter
struct ABP_PF_CampActorBase_C_AddCharacter_Params
{
	class APFNpcCharacterBase*                         Character;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.IsCharacterVisualChange
struct ABP_PF_CampActorBase_C_IsCharacterVisualChange_Params
{
	bool                                               bChange;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.FindCharacterByPartyID
struct ABP_PF_CampActorBase_C_FindCharacterByPartyID_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_PF_NPC_CampCharacter_C*                  Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.DestroyCharacterByPartyID
struct ABP_PF_CampActorBase_C_DestroyCharacterByPartyID_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.FindCharacter
struct ABP_PF_CampActorBase_C_FindCharacter_Params
{
	struct FString                                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_PF_NPC_CampCharacter_C*                  Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.AddTalkGroup
struct ABP_PF_CampActorBase_C_AddTalkGroup_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class APFNpcCharacterBase*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.GetRandomLotteryCampID
struct ABP_PF_CampActorBase_C_GetRandomLotteryCampID_Params
{
	class UPFCampDatabaseObject*                       CampDatabase;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CampID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.GetCharacterID
struct ABP_PF_CampActorBase_C_GetCharacterID_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CharacterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewCharacterID;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.StopCamp
struct ABP_PF_CampActorBase_C_StopCamp_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.StartCamp
struct ABP_PF_CampActorBase_C_StartCamp_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.UnloadCampAsset
struct ABP_PF_CampActorBase_C_UnloadCampAsset_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.LoadCampAsset
struct ABP_PF_CampActorBase_C_LoadCampAsset_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ReadCampData
struct ABP_PF_CampActorBase_C_ReadCampData_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.IsResourceLoaded
struct ABP_PF_CampActorBase_C_IsResourceLoaded_Params
{
	bool                                               bLoaded;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.CanPlayEvent
struct ABP_PF_CampActorBase_C_CanPlayEvent_Params
{
	bool                                               bCanPlay;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ResetCampSceneCamera
struct ABP_PF_CampActorBase_C_ResetCampSceneCamera_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SetCampSceneCamera
struct ABP_PF_CampActorBase_C_SetCampSceneCamera_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.DestroyCharacter
struct ABP_PF_CampActorBase_C_DestroyCharacter_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.SpawnCharacter
struct ABP_PF_CampActorBase_C_SpawnCharacter_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.UserConstructionScript
struct ABP_PF_CampActorBase_C_UserConstructionScript_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ReceiveBeginPlay
struct ABP_PF_CampActorBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ReceiveEndPlay
struct ABP_PF_CampActorBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.OnMapChange
struct ABP_PF_CampActorBase_C_OnMapChange_Params
{
	struct FString                                     NewMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OldMapName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_CampActorBase.BP_PF_CampActorBase_C.ExecuteUbergraph_BP_PF_CampActorBase
struct ABP_PF_CampActorBase_C_ExecuteUbergraph_BP_PF_CampActorBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
