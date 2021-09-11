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

// Function TO14_ANO_PostEvent_Character.TO14_ANO_PostEvent_Character_C.Received_Notify
struct UTO14_ANO_PostEvent_Character_C_Received_Notify_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TO14_ANO_PostEvent_Character.TO14_ANO_PostEvent_Character_C.SetSwitchGroup
struct UTO14_ANO_PostEvent_Character_C_SetSwitchGroup_Params
{
	class UAkComponent*                                AkComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_ANO_PostEvent_Character.TO14_ANO_PostEvent_Character_C.GetSwitchState
struct UTO14_ANO_PostEvent_Character_C_GetSwitchState_Params
{
	class UAkComponent*                                AkComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     State;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_ANO_PostEvent_Character.TO14_ANO_PostEvent_Character_C.GetSwitchGroup
struct UTO14_ANO_PostEvent_Character_C_GetSwitchGroup_Params
{
	class UAkComponent*                                AkComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Group;                                                    // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
