
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

// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetOrthoWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NaviMapCaptor_C::SetOrthoWidth(float Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetOrthoWidth");

	ABP_NaviMapCaptor_C_SetOrthoWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetCameraRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NaviMapCaptor_C::SetCameraRotation(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetCameraRotation");

	ABP_NaviMapCaptor_C_SetCameraRotation_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetCameraLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_NaviMapCaptor_C::SetCameraLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetCameraLocation");

	ABP_NaviMapCaptor_C_SetCameraLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetRenderTargetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NaviMapCaptor_C::SetRenderTargetTexture(class UTextureRenderTarget2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.SetRenderTargetTexture");

	ABP_NaviMapCaptor_C_SetRenderTargetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NaviMapCaptor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.UserConstructionScript");

	ABP_NaviMapCaptor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NaviMapCaptor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.ReceiveBeginPlay");

	ABP_NaviMapCaptor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NaviMapCaptor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.ReceiveTick");

	ABP_NaviMapCaptor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.Render
// (BlueprintCallable, BlueprintEvent)

void ABP_NaviMapCaptor_C::Render()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.Render");

	ABP_NaviMapCaptor_C_Render_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.ExecuteUbergraph_BP_NaviMapCaptor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NaviMapCaptor_C::ExecuteUbergraph_BP_NaviMapCaptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NaviMapCaptor.BP_NaviMapCaptor_C.ExecuteUbergraph_BP_NaviMapCaptor");

	ABP_NaviMapCaptor_C_ExecuteUbergraph_BP_NaviMapCaptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
