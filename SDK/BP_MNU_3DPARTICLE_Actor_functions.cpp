
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

// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MNU_3DPARTICLE_Actor_C::SetScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.SetScale");

	ABP_MNU_3DPARTICLE_Actor_C_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.SetRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MNU_3DPARTICLE_Actor_C::SetRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.SetRotation");

	ABP_MNU_3DPARTICLE_Actor_C_SetRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DistAdjust                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WidthAdjust                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleAdjust                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MNU_3DPARTICLE_Actor_C::Initialize(float DistAdjust, float WidthAdjust, float ScaleAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.Initialize");

	ABP_MNU_3DPARTICLE_Actor_C_Initialize_Params params;
	params.DistAdjust = DistAdjust;
	params.WidthAdjust = WidthAdjust;
	params.ScaleAdjust = ScaleAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.SetScreenPos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ScreenPos                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MNU_3DPARTICLE_Actor_C::SetScreenPos(const struct FVector2D& ScreenPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.SetScreenPos");

	ABP_MNU_3DPARTICLE_Actor_C_SetScreenPos_Params params;
	params.ScreenPos = ScreenPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MNU_3DPARTICLE_Actor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.UserConstructionScript");

	ABP_MNU_3DPARTICLE_Actor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MNU_3DPARTICLE_Actor_C::BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature");

	ABP_MNU_3DPARTICLE_Actor_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MNU_3DPARTICLE_Actor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.ReceiveTick");

	ABP_MNU_3DPARTICLE_Actor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MNU_3DPARTICLE_Actor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.ReceiveBeginPlay");

	ABP_MNU_3DPARTICLE_Actor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.ExecuteUbergraph_BP_MNU_3DPARTICLE_Actor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MNU_3DPARTICLE_Actor_C::ExecuteUbergraph_BP_MNU_3DPARTICLE_Actor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MNU_3DPARTICLE_Actor.BP_MNU_3DPARTICLE_Actor_C.ExecuteUbergraph_BP_MNU_3DPARTICLE_Actor");

	ABP_MNU_3DPARTICLE_Actor_C_ExecuteUbergraph_BP_MNU_3DPARTICLE_Actor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
