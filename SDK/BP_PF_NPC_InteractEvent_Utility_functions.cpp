
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

// Function BP_PF_NPC_InteractEvent_Utility.BP_PF_NPC_InteractEvent_Utility_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Utility_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Utility.BP_PF_NPC_InteractEvent_Utility_C.UserConstructionScript");

	ABP_PF_NPC_InteractEvent_Utility_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Utility.BP_PF_NPC_InteractEvent_Utility_C.MainInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Utility_C::MainInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Utility.BP_PF_NPC_InteractEvent_Utility_C.MainInteract");

	ABP_PF_NPC_InteractEvent_Utility_C_MainInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Utility.BP_PF_NPC_InteractEvent_Utility_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_Utility
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Utility_C::ExecuteUbergraph_BP_PF_NPC_InteractEvent_Utility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Utility.BP_PF_NPC_InteractEvent_Utility_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_Utility");

	ABP_PF_NPC_InteractEvent_Utility_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_Utility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
