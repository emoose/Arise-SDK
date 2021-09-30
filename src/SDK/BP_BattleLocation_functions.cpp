
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

// Function BP_BattleLocation.BP_BattleLocation_C.GetFloorComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBtlFloorComponent*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBtlFloorComponent* ABP_BattleLocation_C::GetFloorComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.GetFloorComponent");

	ABP_BattleLocation_C_GetFloorComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleLocation.BP_BattleLocation_C.GetAreaWidth
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_BattleLocation_C::GetAreaWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.GetAreaWidth");

	ABP_BattleLocation_C_GetAreaWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleLocation.BP_BattleLocation_C.GetSmashPointTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_BattleLocation_C::GetSmashPointTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.GetSmashPointTransform");

	ABP_BattleLocation_C_GetSmashPointTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleLocation.BP_BattleLocation_C.GetEnemySpawnerMax
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_BattleLocation_C::GetEnemySpawnerMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.GetEnemySpawnerMax");

	ABP_BattleLocation_C_GetEnemySpawnerMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleLocation.BP_BattleLocation_C.GetEnemySpawnerTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_BattleLocation_C::GetEnemySpawnerTransform(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.GetEnemySpawnerTransform");

	ABP_BattleLocation_C_GetEnemySpawnerTransform_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleLocation.BP_BattleLocation_C.GetPartySpawnerMax
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_BattleLocation_C::GetPartySpawnerMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.GetPartySpawnerMax");

	ABP_BattleLocation_C_GetPartySpawnerMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleLocation.BP_BattleLocation_C.GetPartySpawnerTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_BattleLocation_C::GetPartySpawnerTransform(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.GetPartySpawnerTransform");

	ABP_BattleLocation_C_GetPartySpawnerTransform_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleLocation.BP_BattleLocation_C.SnapOnGround
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleLocation_C::SnapOnGround(class AActor* Actor, class AActor** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.SnapOnGround");

	ABP_BattleLocation_C_SnapOnGround_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BattleLocation.BP_BattleLocation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.UserConstructionScript");

	ABP_BattleLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleLocation.BP_BattleLocation_C.CreateSpawnPoints
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleLocation_C::CreateSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.CreateSpawnPoints");

	ABP_BattleLocation_C_CreateSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleLocation.BP_BattleLocation_C.ExecuteUbergraph_BP_BattleLocation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleLocation_C::ExecuteUbergraph_BP_BattleLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleLocation.BP_BattleLocation_C.ExecuteUbergraph_BP_BattleLocation");

	ABP_BattleLocation_C_ExecuteUbergraph_BP_BattleLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
