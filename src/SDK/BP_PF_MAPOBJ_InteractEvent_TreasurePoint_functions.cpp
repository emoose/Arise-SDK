
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

// Function BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C.PlayOpenSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C::PlayOpenSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C.PlayOpenSound");

	ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C_PlayOpenSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C.UserConstructionScript");

	ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C.Interact
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C::Interact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C.Interact");

	ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C.Play Action (Treasure Open)
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C::Play_Action__Treasure_Open_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C.Play Action (Treasure Open)");

	ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C_Play_Action__Treasure_Open__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_TreasurePoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C::ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_TreasurePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_InteractEvent_TreasurePoint.BP_PF_MAPOBJ_InteractEvent_TreasurePoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_TreasurePoint");

	ABP_PF_MAPOBJ_InteractEvent_TreasurePoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_TreasurePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
