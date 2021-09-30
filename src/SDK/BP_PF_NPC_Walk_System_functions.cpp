
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

// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ShrinkPopCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_Walk_System_C::ShrinkPopCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ShrinkPopCharacter");

	ABP_PF_NPC_Walk_System_C_ShrinkPopCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.SetAIControllerFromWaypoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APFWalkableNpcCharacter* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WaypointIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_System_C::SetAIControllerFromWaypoint(class UObject* Controller, class APFWalkableNpcCharacter* Character, int WaypointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.SetAIControllerFromWaypoint");

	ABP_PF_NPC_Walk_System_C_SetAIControllerFromWaypoint_Params params;
	params.Controller = Controller;
	params.Character = Character;
	params.WaypointIndex = WaypointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.CheckDisappearing
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_Walk_System_C::CheckDisappearing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.CheckDisappearing");

	ABP_PF_NPC_Walk_System_C_CheckDisappearing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.OnRespawnCharacter
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PF_NPC_Walk_System_C::OnRespawnCharacter(class APFNpcCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.OnRespawnCharacter");

	ABP_PF_NPC_Walk_System_C_OnRespawnCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetSpawnTransformFromWaypoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bImmediately                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)
// int                            WaypointIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_System_C::GetSpawnTransformFromWaypoint(bool bImmediately, bool* bValid, struct FTransform* Transform, int* WaypointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetSpawnTransformFromWaypoint");

	ABP_PF_NPC_Walk_System_C_GetSpawnTransformFromWaypoint_Params params;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (Transform != nullptr)
		*Transform = params.Transform;
	if (WaypointIndex != nullptr)
		*WaypointIndex = params.WaypointIndex;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.IsSpawnLocked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PF_NPC_Walk_System_C::IsSpawnLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.IsSpawnLocked");

	ABP_PF_NPC_Walk_System_C_IsSpawnLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.OnSpawnCharacter
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPFNpWalkSpawnData      SpawnData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bImmediately                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APFNpcCharacterBase*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APFNpcCharacterBase* ABP_PF_NPC_Walk_System_C::OnSpawnCharacter(const struct FPFNpWalkSpawnData& SpawnData, bool bImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.OnSpawnCharacter");

	ABP_PF_NPC_Walk_System_C_OnSpawnCharacter_Params params;
	params.SpawnData = SpawnData;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetPopDistanceWaypoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    InIndexes                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutIndexes                     (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_Walk_System_C::GetPopDistanceWaypoint(float Distance, TArray<int>* InIndexes, TArray<int>* OutIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetPopDistanceWaypoint");

	ABP_PF_NPC_Walk_System_C_GetPopDistanceWaypoint_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InIndexes != nullptr)
		*InIndexes = params.InIndexes;
	if (OutIndexes != nullptr)
		*OutIndexes = params.OutIndexes;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetDistanceWaypoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    InIndexs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutIndexs                      (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_Walk_System_C::GetDistanceWaypoint(float Distance, TArray<int>* InIndexs, TArray<int>* OutIndexs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetDistanceWaypoint");

	ABP_PF_NPC_Walk_System_C_GetDistanceWaypoint_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InIndexs != nullptr)
		*InIndexs = params.InIndexs;
	if (OutIndexs != nullptr)
		*OutIndexs = params.OutIndexs;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetPawnWaypoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bImmediately                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Waypoint                       (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_Walk_System_C::GetPawnWaypoint(bool bImmediately, TArray<int>* Waypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetPawnWaypoint");

	ABP_PF_NPC_Walk_System_C_GetPawnWaypoint_Params params;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Waypoint != nullptr)
		*Waypoint = params.Waypoint;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetOccludedWaypoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    InIndexs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    OutIndexs                      (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_Walk_System_C::GetOccludedWaypoint(TArray<int>* InIndexs, TArray<int>* OutIndexs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetOccludedWaypoint");

	ABP_PF_NPC_Walk_System_C_GetOccludedWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InIndexs != nullptr)
		*InIndexs = params.InIndexs;
	if (OutIndexs != nullptr)
		*OutIndexs = params.OutIndexs;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetInSightWaypoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    InIndexs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    InSightIndexs                  (Parm, OutParm, ZeroConstructor)
// TArray<int>                    OutSightIndexs                 (Parm, OutParm, ZeroConstructor)

void ABP_PF_NPC_Walk_System_C::GetInSightWaypoint(TArray<int>* InIndexs, TArray<int>* InSightIndexs, TArray<int>* OutSightIndexs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.GetInSightWaypoint");

	ABP_PF_NPC_Walk_System_C_GetInSightWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InIndexs != nullptr)
		*InIndexs = params.InIndexs;
	if (InSightIndexs != nullptr)
		*InSightIndexs = params.InSightIndexs;
	if (OutSightIndexs != nullptr)
		*OutSightIndexs = params.OutSightIndexs;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NPC_Walk_System_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.UserConstructionScript");

	ABP_PF_NPC_Walk_System_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_NPC_Walk_System_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveBeginPlay");

	ABP_PF_NPC_Walk_System_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_System_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveEndPlay");

	ABP_PF_NPC_Walk_System_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveDoUpdateSpawn
// (Event, Public, BlueprintEvent)

void ABP_PF_NPC_Walk_System_C::ReceiveDoUpdateSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveDoUpdateSpawn");

	ABP_PF_NPC_Walk_System_C_ReceiveDoUpdateSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.OnDespawnCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class APFNpcCharacterBase*     Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_System_C::OnDespawnCharacter(class APFNpcCharacterBase* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.OnDespawnCharacter");

	ABP_PF_NPC_Walk_System_C_OnDespawnCharacter_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveDoSetVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_System_C::ReceiveDoSetVisibility(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ReceiveDoSetVisibility");

	ABP_PF_NPC_Walk_System_C_ReceiveDoSetVisibility_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ExecuteUbergraph_BP_PF_NPC_Walk_System
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NPC_Walk_System_C::ExecuteUbergraph_BP_PF_NPC_Walk_System(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NPC_Walk_System.BP_PF_NPC_Walk_System_C.ExecuteUbergraph_BP_PF_NPC_Walk_System");

	ABP_PF_NPC_Walk_System_C_ExecuteUbergraph_BP_PF_NPC_Walk_System_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
