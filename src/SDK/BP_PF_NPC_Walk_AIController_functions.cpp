
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

// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.IsNavigationEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_AIController_C::IsNavigationEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.IsNavigationEnabled");

	ABP_PF_NPC_Walk_AIController_C_IsNavigationEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.GetNodeFollowingListEx
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StartIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EndIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    FollowingIndexList             (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_Walk_AIController_C::GetNodeFollowingListEx(int StartIndex, int EndIndex, TArray<int>* FollowingIndexList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.GetNodeFollowingListEx");

	ABP_PF_NPC_Walk_AIController_C_GetNodeFollowingListEx_Params params;
	params.StartIndex = StartIndex;
	params.EndIndex = EndIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FollowingIndexList != nullptr)
		*FollowingIndexList = params.FollowingIndexList;
}


// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.SetNextWaypointAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_Walk_AIController_C::SetNextWaypointAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.SetNextWaypointAction");

	ABP_PF_NPC_Walk_AIController_C_SetNextWaypointAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.GetCurrentWaypointAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PF_NPC_Walk_WaypointActionData WaypointAction                 (Parm, OutParm)

void ABP_PF_NPC_Walk_AIController_C::GetCurrentWaypointAction(struct FST_PF_NPC_Walk_WaypointActionData* WaypointAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.GetCurrentWaypointAction");

	ABP_PF_NPC_Walk_AIController_C_GetCurrentWaypointAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaypointAction != nullptr)
		*WaypointAction = params.WaypointAction;
}


// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.SetWaypoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PF_NPC_Waypoint_C*   Waypoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_AIController_C::SetWaypoint(class ABP_PF_NPC_Waypoint_C* Waypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.SetWaypoint");

	ABP_PF_NPC_Walk_AIController_C_SetWaypoint_Params params;
	params.Waypoint = Waypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.SetMoveSegment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StartIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LastIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_AIController_C::SetMoveSegment(int StartIndex, int* LastIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.SetMoveSegment");

	ABP_PF_NPC_Walk_AIController_C_SetMoveSegment_Params params;
	params.StartIndex = StartIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastIndex != nullptr)
		*LastIndex = params.LastIndex;
}


// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_Walk_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.UserConstructionScript");

	ABP_PF_NPC_Walk_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_AIController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.ReceiveTick");

	ABP_PF_NPC_Walk_AIController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_NPC_Walk_AIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.ReceiveBeginPlay");

	ABP_PF_NPC_Walk_AIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_AIController_C::OnPossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.OnPossess");

	ABP_PF_NPC_Walk_AIController_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.ExecuteUbergraph_BP_PF_NPC_Walk_AIController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_AIController_C::ExecuteUbergraph_BP_PF_NPC_Walk_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_AIController.BP_PF_NPC_Walk_AIController_C.ExecuteUbergraph_BP_PF_NPC_Walk_AIController");

	ABP_PF_NPC_Walk_AIController_C_ExecuteUbergraph_BP_PF_NPC_Walk_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
