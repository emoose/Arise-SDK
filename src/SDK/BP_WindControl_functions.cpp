
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

// Function BP_WindControl.BP_WindControl_C.GetWindDirectional
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWindDirectionalSourceComponent* WindDirectional                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WindControl_C::GetWindDirectional(class UWindDirectionalSourceComponent** WindDirectional)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindControl.BP_WindControl_C.GetWindDirectional");

	ABP_WindControl_C_GetWindDirectional_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WindDirectional != nullptr)
		*WindDirectional = params.WindDirectional;
}


// Function BP_WindControl.BP_WindControl_C.GetWindStrengthScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          StrengthScale                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WindControl_C::GetWindStrengthScale(float* StrengthScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindControl.BP_WindControl_C.GetWindStrengthScale");

	ABP_WindControl_C_GetWindStrengthScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StrengthScale != nullptr)
		*StrengthScale = params.StrengthScale;
}


// Function BP_WindControl.BP_WindControl_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WindControl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindControl.BP_WindControl_C.UserConstructionScript");

	ABP_WindControl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WindControl.BP_WindControl_C.SetWindStrengthScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StrengthScale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WindControl_C::SetWindStrengthScale(float StrengthScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindControl.BP_WindControl_C.SetWindStrengthScale");

	ABP_WindControl_C_SetWindStrengthScale_Params params;
	params.StrengthScale = StrengthScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WindControl.BP_WindControl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WindControl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindControl.BP_WindControl_C.ReceiveBeginPlay");

	ABP_WindControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WindControl.BP_WindControl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WindControl_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindControl.BP_WindControl_C.ReceiveTick");

	ABP_WindControl_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WindControl.BP_WindControl_C.ExecuteUbergraph_BP_WindControl
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WindControl_C::ExecuteUbergraph_BP_WindControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WindControl.BP_WindControl_C.ExecuteUbergraph_BP_WindControl");

	ABP_WindControl_C_ExecuteUbergraph_BP_WindControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
