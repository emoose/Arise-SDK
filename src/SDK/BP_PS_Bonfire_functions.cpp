
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

// Function BP_PS_Bonfire.BP_PS_Bonfire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PS_Bonfire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PS_Bonfire.BP_PS_Bonfire_C.UserConstructionScript");

	ABP_PS_Bonfire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PS_Bonfire.BP_PS_Bonfire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PS_Bonfire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PS_Bonfire.BP_PS_Bonfire_C.ReceiveBeginPlay");

	ABP_PS_Bonfire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PS_Bonfire.BP_PS_Bonfire_C.ExecuteUbergraph_BP_PS_Bonfire
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PS_Bonfire_C::ExecuteUbergraph_BP_PS_Bonfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PS_Bonfire.BP_PS_Bonfire_C.ExecuteUbergraph_BP_PS_Bonfire");

	ABP_PS_Bonfire_C_ExecuteUbergraph_BP_PS_Bonfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
