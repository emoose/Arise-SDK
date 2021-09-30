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

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.GetLocationName
struct ABP_PF_SearchOwl_C_GetLocationName_Params
{
	struct FString                                     OutLocationName;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.GetVisibility
struct ABP_PF_SearchOwl_C_GetVisibility_Params
{
	bool                                               OutVisibility;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ResetIdleVoiceTimer
struct ABP_PF_SearchOwl_C_ResetIdleVoiceTimer_Params
{
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.SetVisibility
struct ABP_PF_SearchOwl_C_SetVisibility_Params
{
	bool                                               InNewVisibility;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.BuildCharacter2
struct ABP_PF_SearchOwl_C_BuildCharacter2_Params
{
	struct FString                                     InDatabaseID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.BuildCharacterInternal
struct ABP_PF_SearchOwl_C_BuildCharacterInternal_Params
{
	ESearchOwlType                                     InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InModelID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InAttachmentID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              InScale;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCollisionSize;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.UserConstructionScript
struct ABP_PF_SearchOwl_C_UserConstructionScript_Params
{
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.OnBuildCharacter
struct ABP_PF_SearchOwl_C_OnBuildCharacter_Params
{
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.FadeIn
struct ABP_PF_SearchOwl_C_FadeIn_Params
{
	float                                              InTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.FadeOut
struct ABP_PF_SearchOwl_C_FadeOut_Params
{
	float                                              InTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ReceiveBeginPlay
struct ABP_PF_SearchOwl_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ReceiveTick
struct ABP_PF_SearchOwl_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_SearchOwl.BP_PF_SearchOwl_C.ExecuteUbergraph_BP_PF_SearchOwl
struct ABP_PF_SearchOwl_C_ExecuteUbergraph_BP_PF_SearchOwl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
