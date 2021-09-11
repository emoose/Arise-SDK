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

// Function TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C.PostEventInternal
struct UTO14_ANO_Sound_PostEvent_C_PostEventInternal_Params
{
	class UAkComponent*                                Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UMeshComponent*                              MeshComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C.GetEventName
struct UTO14_ANO_Sound_PostEvent_C_GetEventName_Params
{
	struct FString                                     EventName;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function TO14_ANO_Sound_PostEvent.TO14_ANO_Sound_PostEvent_C.Received_Notify
struct UTO14_ANO_Sound_PostEvent_C_Received_Notify_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
