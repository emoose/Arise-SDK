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

// Function BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C.Received_NotifyEnd
struct UBP_PF_AnimNotifyState_InputUTurnEnable_C_Received_NotifyEnd_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C.SetInputUTurnEnable
struct UBP_PF_AnimNotifyState_InputUTurnEnable_C_SetInputUTurnEnable_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PF_AnimNotifyState_InputUTurnEnable.BP_PF_AnimNotifyState_InputUTurnEnable_C.Received_NotifyBegin
struct UBP_PF_AnimNotifyState_InputUTurnEnable_C_Received_NotifyBegin_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
