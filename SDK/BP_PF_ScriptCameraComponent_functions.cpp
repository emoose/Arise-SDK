
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

// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.UpdatePostProcess
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PF_ScriptCameraComponent_C::UpdatePostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.UpdatePostProcess");

	UBP_PF_ScriptCameraComponent_C_UpdatePostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.GetCameraPresetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 PresteName                     (Parm, OutParm, ZeroConstructor)

void UBP_PF_ScriptCameraComponent_C::GetCameraPresetName(struct FString* PresteName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.GetCameraPresetName");

	UBP_PF_ScriptCameraComponent_C_GetCameraPresetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PresteName != nullptr)
		*PresteName = params.PresteName;
}


// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ApplyPostProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PF_ScriptCameraComponent_C::ApplyPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ApplyPostProcess");

	UBP_PF_ScriptCameraComponent_C_ApplyPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.FindCameraPreset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PresetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FScriptCameraData       CameraData                     (Parm, OutParm)

void UBP_PF_ScriptCameraComponent_C::FindCameraPreset(const struct FString& PresetName, bool* bFound, struct FScriptCameraData* CameraData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.FindCameraPreset");

	UBP_PF_ScriptCameraComponent_C_FindCameraPreset_Params params;
	params.PresetName = PresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (CameraData != nullptr)
		*CameraData = params.CameraData;
}


// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ApplyTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PF_ScriptCameraComponent_C::ApplyTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ApplyTransform");

	UBP_PF_ScriptCameraComponent_C_ApplyTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.GetCameraTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              NewTransform                   (Parm, OutParm, IsPlainOldData)

void UBP_PF_ScriptCameraComponent_C::GetCameraTransform(struct FTransform* NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.GetCameraTransform");

	UBP_PF_ScriptCameraComponent_C_GetCameraTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTransform != nullptr)
		*NewTransform = params.NewTransform;
}


// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PF_ScriptCameraComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ReceiveBeginPlay");

	UBP_PF_ScriptCameraComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_ScriptCameraComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ReceiveTick");

	UBP_PF_ScriptCameraComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ExecuteUbergraph_BP_PF_ScriptCameraComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PF_ScriptCameraComponent_C::ExecuteUbergraph_BP_PF_ScriptCameraComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_ScriptCameraComponent.BP_PF_ScriptCameraComponent_C.ExecuteUbergraph_BP_PF_ScriptCameraComponent");

	UBP_PF_ScriptCameraComponent_C_ExecuteUbergraph_BP_PF_ScriptCameraComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
