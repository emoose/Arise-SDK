
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

// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.ApplyPostProcessParam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings    StructRef                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PFPlayerCamera_C::ApplyPostProcessParam(struct FPostProcessSettings* StructRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.ApplyPostProcessParam");

	ABP_PFPlayerCamera_C_ApplyPostProcessParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StructRef != nullptr)
		*StructRef = params.StructRef;
}


// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayerCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.UserConstructionScript");

	ABP_PFPlayerCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PFPlayerCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.ReceiveBeginPlay");

	ABP_PFPlayerCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.OnApplyMotionBlurParams
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PFPlayerCamera_C::OnApplyMotionBlurParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.OnApplyMotionBlurParams");

	ABP_PFPlayerCamera_C_OnApplyMotionBlurParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.OnPostMapChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 OldMapName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PFPlayerCamera_C::OnPostMapChange(const struct FString& NewMapName, const struct FString& OldMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.OnPostMapChange");

	ABP_PFPlayerCamera_C_OnPostMapChange_Params params;
	params.NewMapName = NewMapName;
	params.OldMapName = OldMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.ExecuteUbergraph_BP_PFPlayerCamera
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PFPlayerCamera_C::ExecuteUbergraph_BP_PFPlayerCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PFPlayerCamera.BP_PFPlayerCamera_C.ExecuteUbergraph_BP_PFPlayerCamera");

	ABP_PFPlayerCamera_C_ExecuteUbergraph_BP_PFPlayerCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
