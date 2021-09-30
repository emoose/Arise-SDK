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

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.TermLookAtAim
struct ABP_PF_NpcCharacterEvent_C_TermLookAtAim_Params
{
};

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.SetAutoLookAtAimFromLocation
struct ABP_PF_NpcCharacterEvent_C_SetAutoLookAtAimFromLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.GetAutoLookAtAim
struct ABP_PF_NpcCharacterEvent_C_GetAutoLookAtAim_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.GetLookAtAimNum
struct ABP_PF_NpcCharacterEvent_C_GetLookAtAimNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.GetLookAtAimTarget
struct ABP_PF_NpcCharacterEvent_C_GetLookAtAimTarget_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.InitLookAtAim
struct ABP_PF_NpcCharacterEvent_C_InitLookAtAim_Params
{
};

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.SetAutoLookAtAimFromYawPitch
struct ABP_PF_NpcCharacterEvent_C_SetAutoLookAtAimFromYawPitch_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.UserConstructionScript
struct ABP_PF_NpcCharacterEvent_C_UserConstructionScript_Params
{
};

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.ReceiveBuildCharacterInitAnim
struct ABP_PF_NpcCharacterEvent_C_ReceiveBuildCharacterInitAnim_Params
{
};

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.ReceiveDestroyed
struct ABP_PF_NpcCharacterEvent_C_ReceiveDestroyed_Params
{
};

// Function BP_PF_NpcCharacterEvent.BP_PF_NpcCharacterEvent_C.ExecuteUbergraph_BP_PF_NpcCharacterEvent
struct ABP_PF_NpcCharacterEvent_C_ExecuteUbergraph_BP_PF_NpcCharacterEvent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
