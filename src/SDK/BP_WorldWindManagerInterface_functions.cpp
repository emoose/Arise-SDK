
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

// Function BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C.SetWindController
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WindController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WorldWindManagerInterface_C::SetWindController(class AActor* WindController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C.SetWindController");

	UBP_WorldWindManagerInterface_C_SetWindController_Params params;
	params.WindController = WindController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C.GetWindController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  WindController                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_WorldWindManagerInterface_C::GetWindController(class AActor** WindController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C.GetWindController");

	UBP_WorldWindManagerInterface_C_GetWindController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WindController != nullptr)
		*WindController = params.WindController;
}


// Function BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C.AddWindEmitter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WorldWindManagerInterface_C::AddWindEmitter(class UParticleSystemComponent* Particle, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldWindManagerInterface.BP_WorldWindManagerInterface_C.AddWindEmitter");

	UBP_WorldWindManagerInterface_C_AddWindEmitter_Params params;
	params.Particle = Particle;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
