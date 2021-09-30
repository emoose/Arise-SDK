
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_SkyDome.BP_SkyDome_C.UpdateMaterialParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::UpdateMaterialParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.UpdateMaterialParameters");

	ABP_SkyDome_C_UpdateMaterialParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.CalculateTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_SkyDome_C::CalculateTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.CalculateTime");

	ABP_SkyDome_C_CalculateTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SkyDome.BP_SkyDome_C.Setup
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.Setup");

	ABP_SkyDome_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.MakeSunPosition
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)

void ABP_SkyDome_C::MakeSunPosition(float Time, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.MakeSunPosition");

	ABP_SkyDome_C_MakeSunPosition_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BP_SkyDome.BP_SkyDome_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.UserConstructionScript");

	ABP_SkyDome_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.BeginOverrideStars
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::BeginOverrideStars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.BeginOverrideStars");

	ABP_SkyDome_C_BeginOverrideStars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.EndOverrideStars
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::EndOverrideStars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.EndOverrideStars");

	ABP_SkyDome_C_EndOverrideStars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.OnApplyStars
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::OnApplyStars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.OnApplyStars");

	ABP_SkyDome_C_OnApplyStars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.BeginOverrideHeightFogDensity
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::BeginOverrideHeightFogDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.BeginOverrideHeightFogDensity");

	ABP_SkyDome_C_BeginOverrideHeightFogDensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.EndOverrideHeightFogDensity
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::EndOverrideHeightFogDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.EndOverrideHeightFogDensity");

	ABP_SkyDome_C_EndOverrideHeightFogDensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.OnApplyHeightFogDensity
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::OnApplyHeightFogDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.OnApplyHeightFogDensity");

	ABP_SkyDome_C_OnApplyHeightFogDensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.BeginOverrideHeightFogColor
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::BeginOverrideHeightFogColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.BeginOverrideHeightFogColor");

	ABP_SkyDome_C_BeginOverrideHeightFogColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.EndOverrideHeightFogColor
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::EndOverrideHeightFogColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.EndOverrideHeightFogColor");

	ABP_SkyDome_C_EndOverrideHeightFogColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.OnApplyHeightFogColor
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::OnApplyHeightFogColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.OnApplyHeightFogColor");

	ABP_SkyDome_C_OnApplyHeightFogColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.BeginOverrideHeightFogFalloff
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::BeginOverrideHeightFogFalloff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.BeginOverrideHeightFogFalloff");

	ABP_SkyDome_C_BeginOverrideHeightFogFalloff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.EndOverrideHeightFogFalloff
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::EndOverrideHeightFogFalloff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.EndOverrideHeightFogFalloff");

	ABP_SkyDome_C_EndOverrideHeightFogFalloff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.OnApplyHeightFogFalloff
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::OnApplyHeightFogFalloff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.OnApplyHeightFogFalloff");

	ABP_SkyDome_C_OnApplyHeightFogFalloff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.BeginOverrideLightDirection
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::BeginOverrideLightDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.BeginOverrideLightDirection");

	ABP_SkyDome_C_BeginOverrideLightDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.EndOverrideLightDirection
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::EndOverrideLightDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.EndOverrideLightDirection");

	ABP_SkyDome_C_EndOverrideLightDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.OnApplyLightDirection
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::OnApplyLightDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.OnApplyLightDirection");

	ABP_SkyDome_C_OnApplyLightDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkyDome_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.ReceiveBeginPlay");

	ABP_SkyDome_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.UpdateTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkyDome_C::UpdateTime(float CurrentHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.UpdateTime");

	ABP_SkyDome_C_UpdateTime_Params params;
	params.CurrentHour = CurrentHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkyDome_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.ReceiveTick");

	ABP_SkyDome_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.OnDevelopmentApply
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::OnDevelopmentApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.OnDevelopmentApply");

	ABP_SkyDome_C_OnDevelopmentApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.ExecuteUbergraph_BP_SkyDome
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkyDome_C::ExecuteUbergraph_BP_SkyDome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.ExecuteUbergraph_BP_SkyDome");

	ABP_SkyDome_C_ExecuteUbergraph_BP_SkyDome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkyDome.BP_SkyDome_C.ApplyTick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SkyDome_C::ApplyTick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkyDome.BP_SkyDome_C.ApplyTick__DelegateSignature");

	ABP_SkyDome_C_ApplyTick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
