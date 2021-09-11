
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

// Function BP_MapDefaultLocator.BP_MapDefaultLocator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapDefaultLocator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapDefaultLocator.BP_MapDefaultLocator_C.UserConstructionScript");

	ABP_MapDefaultLocator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapDefaultLocator.BP_MapDefaultLocator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapDefaultLocator_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapDefaultLocator.BP_MapDefaultLocator_C.ReceiveTick");

	ABP_MapDefaultLocator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapDefaultLocator.BP_MapDefaultLocator_C.ExecuteUbergraph_BP_MapDefaultLocator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapDefaultLocator_C::ExecuteUbergraph_BP_MapDefaultLocator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapDefaultLocator.BP_MapDefaultLocator_C.ExecuteUbergraph_BP_MapDefaultLocator");

	ABP_MapDefaultLocator_C_ExecuteUbergraph_BP_MapDefaultLocator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
