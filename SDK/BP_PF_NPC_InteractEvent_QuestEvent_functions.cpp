
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

// Function BP_PF_NPC_InteractEvent_QuestEvent.BP_PF_NPC_InteractEvent_QuestEvent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_QuestEvent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_QuestEvent.BP_PF_NPC_InteractEvent_QuestEvent_C.UserConstructionScript");

	ABP_PF_NPC_InteractEvent_QuestEvent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_QuestEvent.BP_PF_NPC_InteractEvent_QuestEvent_C.MainInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_QuestEvent_C::MainInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_QuestEvent.BP_PF_NPC_InteractEvent_QuestEvent_C.MainInteract");

	ABP_PF_NPC_InteractEvent_QuestEvent_C_MainInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_QuestEvent.BP_PF_NPC_InteractEvent_QuestEvent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_QuestEvent_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_QuestEvent.BP_PF_NPC_InteractEvent_QuestEvent_C.ReceiveDestroyed");

	ABP_PF_NPC_InteractEvent_QuestEvent_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_QuestEvent.BP_PF_NPC_InteractEvent_QuestEvent_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_QuestEvent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_QuestEvent_C::ExecuteUbergraph_BP_PF_NPC_InteractEvent_QuestEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_QuestEvent.BP_PF_NPC_InteractEvent_QuestEvent_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_QuestEvent");

	ABP_PF_NPC_InteractEvent_QuestEvent_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_QuestEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
