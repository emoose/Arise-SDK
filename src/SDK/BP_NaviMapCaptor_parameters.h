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

// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetOrthoWidth
struct ABP_NaviMapCaptor_C_SetOrthoWidth_Params
{
	float                                              Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetCameraRotation
struct ABP_NaviMapCaptor_C_SetCameraRotation_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetCameraLocation
struct ABP_NaviMapCaptor_C_SetCameraLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetRenderTargetTexture
struct ABP_NaviMapCaptor_C_SetRenderTargetTexture_Params
{
	class UTextureRenderTarget2D*                      Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.UserConstructionScript
struct ABP_NaviMapCaptor_C_UserConstructionScript_Params
{
};

// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.ReceiveBeginPlay
struct ABP_NaviMapCaptor_C_ReceiveBeginPlay_Params
{
};

// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.ReceiveTick
struct ABP_NaviMapCaptor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.Render
struct ABP_NaviMapCaptor_C_Render_Params
{
};

// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.ExecuteUbergraph_BP_NaviMapCaptor
struct ABP_NaviMapCaptor_C_ExecuteUbergraph_BP_NaviMapCaptor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
