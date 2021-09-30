
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

// Function BP_PF_InteractEvent_MapLink.BP_PF_InteractEvent_MapLink_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_InteractEvent_MapLink_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_MapLink.BP_PF_InteractEvent_MapLink_C.UserConstructionScript");

	ABP_PF_InteractEvent_MapLink_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_MapLink.BP_PF_InteractEvent_MapLink_C.Interact
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_InteractEvent_MapLink_C::Interact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_MapLink.BP_PF_InteractEvent_MapLink_C.Interact");

	ABP_PF_InteractEvent_MapLink_C_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_InteractEvent_MapLink.BP_PF_InteractEvent_MapLink_C.ExecuteUbergraph_BP_PF_InteractEvent_MapLink
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_InteractEvent_MapLink_C::ExecuteUbergraph_BP_PF_InteractEvent_MapLink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_InteractEvent_MapLink.BP_PF_InteractEvent_MapLink_C.ExecuteUbergraph_BP_PF_InteractEvent_MapLink");

	ABP_PF_InteractEvent_MapLink_C_ExecuteUbergraph_BP_PF_InteractEvent_MapLink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
