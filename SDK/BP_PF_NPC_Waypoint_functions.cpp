
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

// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetTraceIndexs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<int>                    Indexs                         (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_Waypoint_C::GetTraceIndexs(TArray<int>* Indexs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetTraceIndexs");

	ABP_PF_NPC_Waypoint_C_GetTraceIndexs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Indexs != nullptr)
		*Indexs = params.Indexs;
}


// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetTraceLocations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_Waypoint_C::GetTraceLocations(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetTraceLocations");

	ABP_PF_NPC_Waypoint_C_GetTraceLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetTraceLocationAtWaypointIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_PF_NPC_Waypoint_C::GetTraceLocationAtWaypointIndex(int Index, bool* bIsValid, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetTraceLocationAtWaypointIndex");

	ABP_PF_NPC_Waypoint_C_GetTraceLocationAtWaypointIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetLocationAtWaypointIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_PF_NPC_Waypoint_C::GetLocationAtWaypointIndex(int Index, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.GetLocationAtWaypointIndex");

	ABP_PF_NPC_Waypoint_C_GetLocationAtWaypointIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_Waypoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.UserConstructionScript");

	ABP_PF_NPC_Waypoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Waypoint_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.ReceiveTick");

	ABP_PF_NPC_Waypoint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_NPC_Waypoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.ReceiveBeginPlay");

	ABP_PF_NPC_Waypoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.ExecuteUbergraph_BP_PF_NPC_Waypoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Waypoint_C::ExecuteUbergraph_BP_PF_NPC_Waypoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Waypoint.BP_PF_NPC_Waypoint_C.ExecuteUbergraph_BP_PF_NPC_Waypoint");

	ABP_PF_NPC_Waypoint_C_ExecuteUbergraph_BP_PF_NPC_Waypoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
