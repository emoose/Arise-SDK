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

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetInitPlayAction
struct ABP_PF_NPC_CampCharacter_C_SetInitPlayAction_Params
{
};

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetFacialAutoPreset
struct ABP_PF_NPC_CampCharacter_C_SetFacialAutoPreset_Params
{
};

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.OnGetUserLoadAsset
struct ABP_PF_NPC_CampCharacter_C_OnGetUserLoadAsset_Params
{
	TArray<struct FSoftObjectPath>                     OutAssetReference;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.UserConstructionScript
struct ABP_PF_NPC_CampCharacter_C_UserConstructionScript_Params
{
};

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetFacialPresetNo
struct ABP_PF_NPC_CampCharacter_C_SetFacialPresetNo_Params
{
	int                                                FacialPresetNo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.ReceiveBuildCharacterInitAnim
struct ABP_PF_NPC_CampCharacter_C_ReceiveBuildCharacterInitAnim_Params
{
};

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.ReceiveTick
struct ABP_PF_NPC_CampCharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.OnBuildCharacter
struct ABP_PF_NPC_CampCharacter_C_OnBuildCharacter_Params
{
};

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.SetFacialEye_LookAt
struct ABP_PF_NPC_CampCharacter_C_SetFacialEye_LookAt_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NPC_CampCharacter.BP_PF_NPC_CampCharacter_C.ExecuteUbergraph_BP_PF_NPC_CampCharacter
struct ABP_PF_NPC_CampCharacter_C_ExecuteUbergraph_BP_PF_NPC_CampCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
