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

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_ChangePartyTopTransformLocator
struct UBP_PF_SystemFunctionLibrary_C_PF_ChangePartyTopTransformLocator_Params
{
	struct FString                                     MapLocatorName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_CastToPFPlayerCharacter
struct UBP_PF_SystemFunctionLibrary_C_PF_CastToPFPlayerCharacter_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PFPlayerCharacter_C*                     PFPlayer;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_Get_BP_PF_QuestManager
struct UBP_PF_SystemFunctionLibrary_C_PF_Get_BP_PF_QuestManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PF_QuestManager_C*                       BP_PF_Quest_Manager;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_PlayerLocation
struct UBP_PF_SystemFunctionLibrary_C_PF_PlayerLocation_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_UpdatePlayerLocationInfo
struct UBP_PF_SystemFunctionLibrary_C_PF_UpdatePlayerLocationInfo_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.AddPrePFStartOperation
struct UBP_PF_SystemFunctionLibrary_C_AddPrePFStartOperation_Params
{
	struct FSTR_PrePFStartOperation                    PreOperation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_IsChangePartyTopCompleted
struct UBP_PF_SystemFunctionLibrary_C_PF_IsChangePartyTopCompleted_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_ChangePartyTop
struct UBP_PF_SystemFunctionLibrary_C_PF_ChangePartyTop_Params
{
	EArisePartyID                                      PartyId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_IsPartyTopMoving
struct UBP_PF_SystemFunctionLibrary_C_PF_IsPartyTopMoving_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutMoving;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_SetPartyTopVisibility
struct UBP_PF_SystemFunctionLibrary_C_PF_SetPartyTopVisibility_Params
{
	bool                                               bInValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_GetPlayerCamera
struct UBP_PF_SystemFunctionLibrary_C_PF_GetPlayerCamera_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APFPlayerCamera*                             OutCamera;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_GetPartyTopCharacter
struct UBP_PF_SystemFunctionLibrary_C_PF_GetPartyTopCharacter_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PFPartyTopCharacterBase_C*               OutCharacter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_IsBuildPartyTop
struct UBP_PF_SystemFunctionLibrary_C_PF_IsBuildPartyTop_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBuilded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SystemFunctionLibrary.BP_PF_SystemFunctionLibrary_C.PF_BuildPartyTop
struct UBP_PF_SystemFunctionLibrary_C_PF_BuildPartyTop_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
