
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

// Function BP_PF_NPC_InteractEvent_Ship.BP_PF_NPC_InteractEvent_Ship_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Ship_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Ship.BP_PF_NPC_InteractEvent_Ship_C.UserConstructionScript");

	ABP_PF_NPC_InteractEvent_Ship_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Ship.BP_PF_NPC_InteractEvent_Ship_C.MainInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_InteractEvent_Ship_C::MainInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Ship.BP_PF_NPC_InteractEvent_Ship_C.MainInteract");

	ABP_PF_NPC_InteractEvent_Ship_C_MainInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Ship.BP_PF_NPC_InteractEvent_Ship_C.úQ*‚
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 MapLocatorName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_NPC_InteractEvent_Ship_C::úQ*‚(const struct FString& MapName, const struct FString& MapLocatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Ship.BP_PF_NPC_InteractEvent_Ship_C.úQ*‚");

	ABP_PF_NPC_InteractEvent_Ship_C_úQ*‚_Params params;
	params.MapName = MapName;
	params.MapLocatorName = MapLocatorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_InteractEvent_Ship.BP_PF_NPC_InteractEvent_Ship_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_Ship
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_InteractEvent_Ship_C::ExecuteUbergraph_BP_PF_NPC_InteractEvent_Ship(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_InteractEvent_Ship.BP_PF_NPC_InteractEvent_Ship_C.ExecuteUbergraph_BP_PF_NPC_InteractEvent_Ship");

	ABP_PF_NPC_InteractEvent_Ship_C_ExecuteUbergraph_BP_PF_NPC_InteractEvent_Ship_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
