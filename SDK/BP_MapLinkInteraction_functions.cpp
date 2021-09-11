
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

// Function BP_MapLinkInteraction.BP_MapLinkInteraction_C.FinishMapJump
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkInteraction_C::FinishMapJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkInteraction.BP_MapLinkInteraction_C.FinishMapJump");

	ABP_MapLinkInteraction_C_FinishMapJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkInteraction.BP_MapLinkInteraction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapLinkInteraction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkInteraction.BP_MapLinkInteraction_C.UserConstructionScript");

	ABP_MapLinkInteraction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkInteraction.BP_MapLinkInteraction_C.Do Interact
// (BlueprintCallable, BlueprintEvent)

void ABP_MapLinkInteraction_C::Do_Interact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkInteraction.BP_MapLinkInteraction_C.Do Interact");

	ABP_MapLinkInteraction_C_Do_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapLinkInteraction.BP_MapLinkInteraction_C.ExecuteUbergraph_BP_MapLinkInteraction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapLinkInteraction_C::ExecuteUbergraph_BP_MapLinkInteraction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapLinkInteraction.BP_MapLinkInteraction_C.ExecuteUbergraph_BP_MapLinkInteraction");

	ABP_MapLinkInteraction_C_ExecuteUbergraph_BP_MapLinkInteraction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
