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

// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.SetScale
struct UBP_MNU_3DPARTICLE_C_SetScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.IsPlaying
struct UBP_MNU_3DPARTICLE_C_IsPlaying_Params
{
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.SetWidgetComponent
struct UBP_MNU_3DPARTICLE_C_SetWidgetComponent_Params
{
	class UWidgetComponent*                            WidgetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.Stop
struct UBP_MNU_3DPARTICLE_C_Stop_Params
{
};

// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.Play
struct UBP_MNU_3DPARTICLE_C_Play_Params
{
};

// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.OnPlayEnd
struct UBP_MNU_3DPARTICLE_C_OnPlayEnd_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.Tick
struct UBP_MNU_3DPARTICLE_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MNU_3DPARTICLE.BP_MNU_3DPARTICLE_C.ExecuteUbergraph_BP_MNU_3DPARTICLE
struct UBP_MNU_3DPARTICLE_C_ExecuteUbergraph_BP_MNU_3DPARTICLE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
