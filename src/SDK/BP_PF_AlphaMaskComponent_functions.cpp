
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

// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.IsWatchFadeOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           OutEnable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::IsWatchFadeOut(bool* OutEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.IsWatchFadeOut");

	UBP_PF_AlphaMaskComponent_C_IsWatchFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEnable != nullptr)
		*OutEnable = params.OutEnable;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.IsWatchFadeIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           OutEnable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::IsWatchFadeIn(bool* OutEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.IsWatchFadeIn");

	UBP_PF_AlphaMaskComponent_C_IsWatchFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEnable != nullptr)
		*OutEnable = params.OutEnable;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.AdjustRadius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewRadius                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::AdjustRadius(float Radius, float* NewRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.AdjustRadius");

	UBP_PF_AlphaMaskComponent_C_AdjustRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewRadius != nullptr)
		*NewRadius = params.NewRadius;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.GetSphere
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::GetSphere(struct FVector* Location, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.GetSphere");

	UBP_PF_AlphaMaskComponent_C_GetSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.DrawDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::DrawDebug(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.DrawDebug");

	UBP_PF_AlphaMaskComponent_C_DrawDebug_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.TestSphere
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIntersect                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::TestSphere(float Distance, bool* bIntersect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.TestSphere");

	UBP_PF_AlphaMaskComponent_C_TestSphere_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIntersect != nullptr)
		*bIntersect = params.bIntersect;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.TestCameraDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIntersect                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::TestCameraDistance(float Distance, const struct FVector& Location, float Radius, bool* bIntersect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.TestCameraDistance");

	UBP_PF_AlphaMaskComponent_C_TestCameraDistance_Params params;
	params.Distance = Distance;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIntersect != nullptr)
		*bIntersect = params.bIntersect;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ExecuteTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::ExecuteTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ExecuteTick");

	UBP_PF_AlphaMaskComponent_C_ExecuteTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ReceiveEndPlay");

	UBP_PF_AlphaMaskComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.OnBeginCameraAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArisePlayerCameraManager* PlyaerCameraManager            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraAnimInst*         CameraAnimInst                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::OnBeginCameraAnim(class AArisePlayerCameraManager* PlyaerCameraManager, class UCameraAnimInst* CameraAnimInst)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.OnBeginCameraAnim");

	UBP_PF_AlphaMaskComponent_C_OnBeginCameraAnim_Params params;
	params.PlyaerCameraManager = PlyaerCameraManager;
	params.CameraAnimInst = CameraAnimInst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.OnEndCameraAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArisePlayerCameraManager* PlyaerCameraManager            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::OnEndCameraAnim(class AArisePlayerCameraManager* PlyaerCameraManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.OnEndCameraAnim");

	UBP_PF_AlphaMaskComponent_C_OnEndCameraAnim_Params params;
	params.PlyaerCameraManager = PlyaerCameraManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ReceiveTick");

	UBP_PF_AlphaMaskComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PF_AlphaMaskComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ReceiveBeginPlay");

	UBP_PF_AlphaMaskComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ExecuteUbergraph_BP_PF_AlphaMaskComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_AlphaMaskComponent_C::ExecuteUbergraph_BP_PF_AlphaMaskComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_AlphaMaskComponent.BP_PF_AlphaMaskComponent_C.ExecuteUbergraph_BP_PF_AlphaMaskComponent");

	UBP_PF_AlphaMaskComponent_C_ExecuteUbergraph_BP_PF_AlphaMaskComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
