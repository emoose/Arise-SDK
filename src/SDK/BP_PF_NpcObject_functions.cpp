
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

// Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_PF_NpcObject_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetOutlinerFolderPath");

	ABP_PF_NpcObject_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PF_NpcObject_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetOutlinerLabelName");

	ABP_PF_NpcObject_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.CreateInfluenceMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcObject_C::CreateInfluenceMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.CreateInfluenceMap");

	ABP_PF_NpcObject_C_CreateInfluenceMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetOverrideInteractReceiverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPFActorInteractState> OverrideInteractReceiverState  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::SetOverrideInteractReceiverState(TEnumAsByte<EPFActorInteractState> OverrideInteractReceiverState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetOverrideInteractReceiverState");

	ABP_PF_NpcObject_C_SetOverrideInteractReceiverState_Params params;
	params.OverrideInteractReceiverState = OverrideInteractReceiverState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ApplySpawnStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPFNpcSpawnType                SpawnType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::ApplySpawnStatus(EPFNpcSpawnType SpawnType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.ApplySpawnStatus");

	ABP_PF_NpcObject_C_ApplySpawnStatus_Params params;
	params.SpawnType = SpawnType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.DestroyInfluenceMap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcObject_C::DestroyInfluenceMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.DestroyInfluenceMap");

	ABP_PF_NpcObject_C_DestroyInfluenceMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.UpdateInfluenceMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcObject_C::UpdateInfluenceMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.UpdateInfluenceMap");

	ABP_PF_NpcObject_C_UpdateInfluenceMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecSkeletalMesh
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bBlockBuild                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadImmediate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::SpawnSpecSkeletalMesh(const struct FTransform& Transform, bool bBlockBuild, bool bLoadImmediate, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecSkeletalMesh");

	ABP_PF_NpcObject_C_SpawnSpecSkeletalMesh_Params params;
	params.Transform = Transform;
	params.bBlockBuild = bBlockBuild;
	params.bLoadImmediate = bLoadImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetCollide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCentering                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::SetCollide(class AActor* Actor, bool bCentering)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetCollide");

	ABP_PF_NpcObject_C_SetCollide_Params params;
	params.Actor = Actor;
	params.bCentering = bCentering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecEmpty
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::SpawnSpecEmpty(const struct FTransform& Transform, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecEmpty");

	ABP_PF_NpcObject_C_SpawnSpecEmpty_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetChildrenActors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)

void ABP_PF_NpcObject_C::GetChildrenActors(class UClass* ActorClass, TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetChildrenActors");

	ABP_PF_NpcObject_C_GetChildrenActors_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnTryChangeScenarioConditionRespawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBlock                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::OnTryChangeScenarioConditionRespawn(bool bBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnTryChangeScenarioConditionRespawn");

	ABP_PF_NpcObject_C_OnTryChangeScenarioConditionRespawn_Params params;
	params.bBlock = bBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnTryDespawn
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcObject_C::OnTryDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnTryDespawn");

	ABP_PF_NpcObject_C_OnTryDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetSpec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPFNpcPlacementData     PlacementData                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EDE_PF_NpcPawnSpec> ReturnSpec                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::GetSpec(const struct FPFNpcPlacementData& PlacementData, TEnumAsByte<EDE_PF_NpcPawnSpec>* ReturnSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.GetSpec");

	ABP_PF_NpcObject_C_GetSpec_Params params;
	params.PlacementData = PlacementData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnSpec != nullptr)
		*ReturnSpec = params.ReturnSpec;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecStand
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bBlockBuild                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadImmediate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::SpawnSpecStand(const struct FTransform& Transform, bool bBlockBuild, bool bLoadImmediate, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecStand");

	ABP_PF_NpcObject_C_SpawnSpecStand_Params params;
	params.Transform = Transform;
	params.bBlockBuild = bBlockBuild;
	params.bLoadImmediate = bLoadImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecStaticMesh
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bBlockBuild                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadImmediate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::SpawnSpecStaticMesh(const struct FTransform& Transform, bool bBlockBuild, bool bLoadImmediate, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnSpecStaticMesh");

	ABP_PF_NpcObject_C_SpawnSpecStaticMesh_Params params;
	params.Transform = Transform;
	params.bBlockBuild = bBlockBuild;
	params.bLoadImmediate = bLoadImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.CopyComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::CopyComponent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.CopyComponent");

	ABP_PF_NpcObject_C_CopyComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetInteractionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPFNpcInteractionType          Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPFNpcInteractionData   Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::SetInteractionInfo(EPFNpcInteractionType Type, const struct FPFNpcInteractionData& Data, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetInteractionInfo");

	ABP_PF_NpcObject_C_SetInteractionInfo_Params params;
	params.Type = Type;
	params.Data = Data;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetInteractionReceiverData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  SymbolInfoClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReceiverInfoClass              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  EventClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::SetInteractionReceiverData(class UClass* SymbolInfoClass, class UClass* ReceiverInfoClass, class UClass* EventClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.SetInteractionReceiverData");

	ABP_PF_NpcObject_C_SetInteractionReceiverData_Params params;
	params.SymbolInfoClass = SymbolInfoClass;
	params.ReceiverInfoClass = ReceiverInfoClass;
	params.EventClass = EventClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.DisableComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PF_NpcObject_C::DisableComponent(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.DisableComponent");

	ABP_PF_NpcObject_C_DisableComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnTrySpawn
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBlock                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPFNpcSpawnType                SpawnType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadImmediate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::OnTrySpawn(bool bBlock, EPFNpcSpawnType SpawnType, bool bLoadImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnTrySpawn");

	ABP_PF_NpcObject_C_OnTrySpawn_Params params;
	params.bBlock = bBlock;
	params.SpawnType = SpawnType;
	params.bLoadImmediate = bLoadImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnCharacter
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBlock                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadImmediate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bCollisionCentering            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::SpawnCharacter(bool bBlock, bool bLoadImmediate, class AActor** Actor, bool* bCollisionCentering)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.SpawnCharacter");

	ABP_PF_NpcObject_C_SpawnCharacter_Params params;
	params.bBlock = bBlock;
	params.bLoadImmediate = bLoadImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
	if (bCollisionCentering != nullptr)
		*bCollisionCentering = params.bCollisionCentering;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.UserConstructionScript");

	ABP_PF_NpcObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnUpdateInteraction
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  PawnActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPFNpcInteractionUpdateInfo UpdateInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PF_NpcObject_C::OnUpdateInteraction(class AActor* PawnActor, const struct FPFNpcInteractionUpdateInfo& UpdateInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnUpdateInteraction");

	ABP_PF_NpcObject_C_OnUpdateInteraction_Params params;
	params.PawnActor = PawnActor;
	params.UpdateInfo = UpdateInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_NpcObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveBeginPlay");

	ABP_PF_NpcObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveEndPlay");

	ABP_PF_NpcObject_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnSpawnRequest
// (Event, Public, BlueprintEvent)
// Parameters:
// EPFNpcSpawnType                SpawnType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadImmediate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::OnSpawnRequest(EPFNpcSpawnType SpawnType, bool bLoadImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnSpawnRequest");

	ABP_PF_NpcObject_C_OnSpawnRequest_Params params;
	params.SpawnType = SpawnType;
	params.bLoadImmediate = bLoadImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnDespawnRequest
// (Event, Public, BlueprintEvent)

void ABP_PF_NpcObject_C::OnDespawnRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.OnDespawnRequest");

	ABP_PF_NpcObject_C_OnDespawnRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveDoUpdateSpawn
// (Event, Public, BlueprintEvent)

void ABP_PF_NpcObject_C::ReceiveDoUpdateSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveDoUpdateSpawn");

	ABP_PF_NpcObject_C_ReceiveDoUpdateSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_PF_NpcObject_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.ReceiveDestroyed");

	ABP_PF_NpcObject_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.On Spawn Influence Map
// (BlueprintCallable, BlueprintEvent)

void ABP_PF_NpcObject_C::On_Spawn_Influence_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.On Spawn Influence Map");

	ABP_PF_NpcObject_C_On_Spawn_Influence_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_NpcObject.BP_PF_NpcObject_C.ExecuteUbergraph_BP_PF_NpcObject
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_NpcObject_C::ExecuteUbergraph_BP_PF_NpcObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_NpcObject.BP_PF_NpcObject_C.ExecuteUbergraph_BP_PF_NpcObject");

	ABP_PF_NpcObject_C_ExecuteUbergraph_BP_PF_NpcObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
