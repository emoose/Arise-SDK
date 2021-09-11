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

// Function BP_SkyDome.BP_SkyDome_C.UpdateMaterialParameters
struct ABP_SkyDome_C_UpdateMaterialParameters_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.CalculateTime
struct ABP_SkyDome_C_CalculateTime_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SkyDome.BP_SkyDome_C.Setup
struct ABP_SkyDome_C_Setup_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.MakeSunPosition
struct ABP_SkyDome_C_MakeSunPosition_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SkyDome.BP_SkyDome_C.UserConstructionScript
struct ABP_SkyDome_C_UserConstructionScript_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.BeginOverrideStars
struct ABP_SkyDome_C_BeginOverrideStars_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.EndOverrideStars
struct ABP_SkyDome_C_EndOverrideStars_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.OnApplyStars
struct ABP_SkyDome_C_OnApplyStars_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.BeginOverrideHeightFogDensity
struct ABP_SkyDome_C_BeginOverrideHeightFogDensity_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.EndOverrideHeightFogDensity
struct ABP_SkyDome_C_EndOverrideHeightFogDensity_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.OnApplyHeightFogDensity
struct ABP_SkyDome_C_OnApplyHeightFogDensity_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.BeginOverrideHeightFogColor
struct ABP_SkyDome_C_BeginOverrideHeightFogColor_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.EndOverrideHeightFogColor
struct ABP_SkyDome_C_EndOverrideHeightFogColor_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.OnApplyHeightFogColor
struct ABP_SkyDome_C_OnApplyHeightFogColor_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.BeginOverrideHeightFogFalloff
struct ABP_SkyDome_C_BeginOverrideHeightFogFalloff_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.EndOverrideHeightFogFalloff
struct ABP_SkyDome_C_EndOverrideHeightFogFalloff_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.OnApplyHeightFogFalloff
struct ABP_SkyDome_C_OnApplyHeightFogFalloff_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.BeginOverrideLightDirection
struct ABP_SkyDome_C_BeginOverrideLightDirection_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.EndOverrideLightDirection
struct ABP_SkyDome_C_EndOverrideLightDirection_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.OnApplyLightDirection
struct ABP_SkyDome_C_OnApplyLightDirection_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.ReceiveBeginPlay
struct ABP_SkyDome_C_ReceiveBeginPlay_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.UpdateTime
struct ABP_SkyDome_C_UpdateTime_Params
{
	float                                              CurrentHour;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkyDome.BP_SkyDome_C.ReceiveTick
struct ABP_SkyDome_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkyDome.BP_SkyDome_C.OnDevelopmentApply
struct ABP_SkyDome_C_OnDevelopmentApply_Params
{
};

// Function BP_SkyDome.BP_SkyDome_C.ExecuteUbergraph_BP_SkyDome
struct ABP_SkyDome_C_ExecuteUbergraph_BP_SkyDome_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkyDome.BP_SkyDome_C.ApplyTick__DelegateSignature
struct ABP_SkyDome_C_ApplyTick__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
