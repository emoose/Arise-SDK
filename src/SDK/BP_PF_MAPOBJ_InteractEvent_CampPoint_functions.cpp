
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

// Function BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C.GetSelection
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_InteractEvent_CampPoint_C::GetSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C.GetSelection");

	ABP_PF_MAPOBJ_InteractEvent_CampPoint_C_GetSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C.AddSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 StringID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PF_MAPOBJ_InteractEvent_CampPoint_C::AddSelect(const struct FString& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C.AddSelect");

	ABP_PF_MAPOBJ_InteractEvent_CampPoint_C_AddSelect_Params params;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_InteractEvent_CampPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C.UserConstructionScript");

	ABP_PF_MAPOBJ_InteractEvent_CampPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C.Interact
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_MAPOBJ_InteractEvent_CampPoint_C::Interact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C.Interact");

	ABP_PF_MAPOBJ_InteractEvent_CampPoint_C_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_CampPoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_MAPOBJ_InteractEvent_CampPoint_C::ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_CampPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_MAPOBJ_InteractEvent_CampPoint.BP_PF_MAPOBJ_InteractEvent_CampPoint_C.ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_CampPoint");

	ABP_PF_MAPOBJ_InteractEvent_CampPoint_C_ExecuteUbergraph_BP_PF_MAPOBJ_InteractEvent_CampPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
