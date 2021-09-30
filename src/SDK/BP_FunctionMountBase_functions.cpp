
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

// Function BP_FunctionMountBase.BP_FunctionMountBase_C.SleepTick
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FunctionMountBase_C::SleepTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionMountBase.BP_FunctionMountBase_C.SleepTick");

	ABP_FunctionMountBase_C_SleepTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FunctionMountBase.BP_FunctionMountBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FunctionMountBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionMountBase.BP_FunctionMountBase_C.UserConstructionScript");

	ABP_FunctionMountBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FunctionMountBase.BP_FunctionMountBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FunctionMountBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionMountBase.BP_FunctionMountBase_C.ReceiveBeginPlay");

	ABP_FunctionMountBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FunctionMountBase.BP_FunctionMountBase_C.ExecuteUbergraph_BP_FunctionMountBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FunctionMountBase_C::ExecuteUbergraph_BP_FunctionMountBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionMountBase.BP_FunctionMountBase_C.ExecuteUbergraph_BP_FunctionMountBase");

	ABP_FunctionMountBase_C_ExecuteUbergraph_BP_FunctionMountBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
