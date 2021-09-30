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

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.Despawn
struct ABP_PF_NpcCharacterWalk_C_Despawn_Params
{
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.RemoveSystem
struct ABP_PF_NpcCharacterWalk_C_RemoveSystem_Params
{
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetOverrideFacialData
struct ABP_PF_NpcCharacterWalk_C_SetOverrideFacialData_Params
{
	struct FPFNpcDefineFacialData                      OverrideFacialData;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialEye_LookAt
struct ABP_PF_NpcCharacterWalk_C_SetFacialEye_LookAt_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialEye_Highlight
struct ABP_PF_NpcCharacterWalk_C_SetFacialEye_Highlight_Params
{
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialAutoBlink
struct ABP_PF_NpcCharacterWalk_C_SetFacialAutoBlink_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialEye
struct ABP_PF_NpcCharacterWalk_C_SetFacialEye_Params
{
	int                                                EyeNo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialIris
struct ABP_PF_NpcCharacterWalk_C_SetFacialIris_Params
{
	int                                                No;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialPreset
struct ABP_PF_NpcCharacterWalk_C_SetFacialPreset_Params
{
	int                                                PresetNo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetFacialData
struct ABP_PF_NpcCharacterWalk_C_SetFacialData_Params
{
	struct FPFNpcDefineFacialData                      NewFacialData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetDefaultFacialData
struct ABP_PF_NpcCharacterWalk_C_SetDefaultFacialData_Params
{
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.BuildCharacter
struct ABP_PF_NpcCharacterWalk_C_BuildCharacter_Params
{
	struct FPFNpWalkSpawnData                          SpawnData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bLoadImmediate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.SetCollide
struct ABP_PF_NpcCharacterWalk_C_SetCollide_Params
{
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.UserConstructionScript
struct ABP_PF_NpcCharacterWalk_C_UserConstructionScript_Params
{
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.ReceiveBeginPlay
struct ABP_PF_NpcCharacterWalk_C_ReceiveBeginPlay_Params
{
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.OnBuildCharacter
struct ABP_PF_NpcCharacterWalk_C_OnBuildCharacter_Params
{
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.ReceiveBuildCharacterInitAnim
struct ABP_PF_NpcCharacterWalk_C_ReceiveBuildCharacterInitAnim_Params
{
};

// Function BP_PF_NpcCharacterWalk.BP_PF_NpcCharacterWalk_C.ExecuteUbergraph_BP_PF_NpcCharacterWalk
struct ABP_PF_NpcCharacterWalk_C_ExecuteUbergraph_BP_PF_NpcCharacterWalk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
