
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

// Function BP_InfoIconComponent.BP_InfoIconComponent_C.IsEndFinish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFinished                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_InfoIconComponent_C::IsEndFinish(bool* IsFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfoIconComponent.BP_InfoIconComponent_C.IsEndFinish");

	UBP_InfoIconComponent_C_IsEndFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinished != nullptr)
		*IsFinished = params.IsFinished;
}


// Function BP_InfoIconComponent.BP_InfoIconComponent_C.SetBillboardActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InfoIconComponent_C::SetBillboardActor(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfoIconComponent.BP_InfoIconComponent_C.SetBillboardActor");

	UBP_InfoIconComponent_C_SetBillboardActor_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfoIconComponent.BP_InfoIconComponent_C.SetBillboardLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_InfoIconComponent_C::SetBillboardLocation(const struct FVector& CameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfoIconComponent.BP_InfoIconComponent_C.SetBillboardLocation");

	UBP_InfoIconComponent_C_SetBillboardLocation_Params params;
	params.CameraLocation = CameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfoIconComponent.BP_InfoIconComponent_C.End
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_InfoIconComponent_C::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfoIconComponent.BP_InfoIconComponent_C.End");

	UBP_InfoIconComponent_C_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfoIconComponent.BP_InfoIconComponent_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_InfoIconComponent_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfoIconComponent.BP_InfoIconComponent_C.Stop");

	UBP_InfoIconComponent_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfoIconComponent.BP_InfoIconComponent_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InfoIconComponent_C::Play(bool IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfoIconComponent.BP_InfoIconComponent_C.Play");

	UBP_InfoIconComponent_C_Play_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfoIconComponent.BP_InfoIconComponent_C.SetIconType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETO14_InfoIconType> IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InfoIconComponent_C::SetIconType(TEnumAsByte<ETO14_InfoIconType> IconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfoIconComponent.BP_InfoIconComponent_C.SetIconType");

	UBP_InfoIconComponent_C_SetIconType_Params params;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfoIconComponent.BP_InfoIconComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InfoIconComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfoIconComponent.BP_InfoIconComponent_C.ReceiveTick");

	UBP_InfoIconComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InfoIconComponent.BP_InfoIconComponent_C.ExecuteUbergraph_BP_InfoIconComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InfoIconComponent_C::ExecuteUbergraph_BP_InfoIconComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InfoIconComponent.BP_InfoIconComponent_C.ExecuteUbergraph_BP_InfoIconComponent");

	UBP_InfoIconComponent_C_ExecuteUbergraph_BP_InfoIconComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
