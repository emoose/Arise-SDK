
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

// Function BP_CameraTrapInOutNear.BP_CameraTrapInOutNear_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CameraTrapInOutNear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapInOutNear.BP_CameraTrapInOutNear_C.UserConstructionScript");

	ABP_CameraTrapInOutNear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraTrapInOutNear.BP_CameraTrapInOutNear_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CameraTrapInOutNear_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapInOutNear.BP_CameraTrapInOutNear_C.ReceiveBeginPlay");

	ABP_CameraTrapInOutNear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraTrapInOutNear.BP_CameraTrapInOutNear_C.ExecuteUbergraph_BP_CameraTrapInOutNear
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraTrapInOutNear_C::ExecuteUbergraph_BP_CameraTrapInOutNear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraTrapInOutNear.BP_CameraTrapInOutNear_C.ExecuteUbergraph_BP_CameraTrapInOutNear");

	ABP_CameraTrapInOutNear_C_ExecuteUbergraph_BP_CameraTrapInOutNear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
