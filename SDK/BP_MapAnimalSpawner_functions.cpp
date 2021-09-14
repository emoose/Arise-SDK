
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

// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ClearMoveTempParams
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapAnimalSpawner_C::ClearMoveTempParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ClearMoveTempParams");

	ABP_MapAnimalSpawner_C_ClearMoveTempParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ClacBlendAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_MapAnimalSpawner_C::ClacBlendAlpha(float ElapsedTime, float TotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ClacBlendAlpha");

	ABP_MapAnimalSpawner_C_ClacBlendAlpha_Params params;
	params.ElapsedTime = ElapsedTime;
	params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.Move_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InitialRelativeLocation        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TargetRelativeLocation         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InitialRelativeRollAngle       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetRelativeRollAngle        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::Move_Internal(class USkeletalMeshComponent* SkeletalMeshComponent, float ElapsedTime, const struct FVector& InitialRelativeLocation, const struct FVector& TargetRelativeLocation, float InitialRelativeRollAngle, float TargetRelativeRollAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.Move_Internal");

	ABP_MapAnimalSpawner_C_Move_Internal_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.ElapsedTime = ElapsedTime;
	params.InitialRelativeLocation = InitialRelativeLocation;
	params.TargetRelativeLocation = TargetRelativeLocation;
	params.InitialRelativeRollAngle = InitialRelativeRollAngle;
	params.TargetRelativeRollAngle = TargetRelativeRollAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.Move
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::Move(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.Move");

	ABP_MapAnimalSpawner_C_Move_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.BeginMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          MoveValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::BeginMove(class USkeletalMeshComponent* SkeletalMeshComponent, float MoveValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.BeginMove");

	ABP_MapAnimalSpawner_C_BeginMove_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.MoveValue = MoveValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnMovingPerAnimal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::OnMovingPerAnimal(int Index, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnMovingPerAnimal");

	ABP_MapAnimalSpawner_C_OnMovingPerAnimal_Params params;
	params.Index = Index;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SpawnedMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::FadeOut(class USkeletalMeshComponent* SpawnedMesh, float ElapsedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.FadeOut");

	ABP_MapAnimalSpawner_C_FadeOut_Params params;
	params.SpawnedMesh = SpawnedMesh;
	params.ElapsedTime = ElapsedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.AreAllAnimalDestroyed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::AreAllAnimalDestroyed(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.AreAllAnimalDestroyed");

	ABP_MapAnimalSpawner_C_AreAllAnimalDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.DespawnAnimal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MapAnimalSpawner_C::DespawnAnimal(class USkeletalMeshComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.DespawnAnimal");

	ABP_MapAnimalSpawner_C_DespawnAnimal_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.DespawnAll
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapAnimalSpawner_C::DespawnAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.DespawnAll");

	ABP_MapAnimalSpawner_C_DespawnAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.GetComponentForward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Forward                        (Parm, OutParm, IsPlainOldData)

void ABP_MapAnimalSpawner_C::GetComponentForward(class USceneComponent* Component, struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.GetComponentForward");

	ABP_MapAnimalSpawner_C_GetComponentForward_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Forward != nullptr)
		*Forward = params.Forward;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.Respawn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapAnimalSpawner_C::Respawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.Respawn");

	ABP_MapAnimalSpawner_C_Respawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMapAnimalAnimInstance*  AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::GetAnimInstance(class USkeletalMeshComponent* SkeletalMeshComponent, class UMapAnimalAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.GetAnimInstance");

	ABP_MapAnimalSpawner_C_GetAnimInstance_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnPlayerApproaching
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapAnimalSpawner_C::OnPlayerApproaching()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnPlayerApproaching");

	ABP_MapAnimalSpawner_C_OnPlayerApproaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.TestPlayerApproaching
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapAnimalSpawner_C::TestPlayerApproaching()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.TestPlayerApproaching");

	ABP_MapAnimalSpawner_C_TestPlayerApproaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.SnapPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ModifiedLocation               (Parm, OutParm, IsPlainOldData)

void ABP_MapAnimalSpawner_C::SnapPosition(const struct FVector& InLocation, struct FVector* ModifiedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.SnapPosition");

	ABP_MapAnimalSpawner_C_SnapPosition_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedLocation != nullptr)
		*ModifiedLocation = params.ModifiedLocation;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.CalcSpawnRelativeTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Result                         (Parm, OutParm, IsPlainOldData)

void ABP_MapAnimalSpawner_C::CalcSpawnRelativeTransform(int Index, struct FTransform* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.CalcSpawnRelativeTransform");

	ABP_MapAnimalSpawner_C_CalcSpawnRelativeTransform_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.SpawnSkeletalMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              RelativeTransform              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_MapAnimalSpawner_C::SpawnSkeletalMesh(const struct FTransform& RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.SpawnSkeletalMesh");

	ABP_MapAnimalSpawner_C_SpawnSkeletalMesh_Params params;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.SpawnSkeletalMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapAnimalSpawner_C::SpawnSkeletalMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.SpawnSkeletalMeshes");

	ABP_MapAnimalSpawner_C_SpawnSkeletalMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapAnimalSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.UserConstructionScript");

	ABP_MapAnimalSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapAnimalSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ReceiveBeginPlay");

	ABP_MapAnimalSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ReceiveActorBeginOverlap");

	ABP_MapAnimalSpawner_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnAnimStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 PreviousStateName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NextStateName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Turn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::OnAnimStateChange(class USkeletalMeshComponent* SkeletalMeshComponent, const struct FString& PreviousStateName, const struct FString& NextStateName, float Turn, float Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnAnimStateChange");

	ABP_MapAnimalSpawner_C_OnAnimStateChange_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.PreviousStateName = PreviousStateName;
	params.NextStateName = NextStateName;
	params.Turn = Turn;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnRotated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Moved                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MapAnimalSpawner_C::OnRotated(class USceneComponent* Moved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.OnRotated");

	ABP_MapAnimalSpawner_C_OnRotated_Params params;
	params.Moved = Moved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ReceiveTick");

	ABP_MapAnimalSpawner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ExecuteUbergraph_BP_MapAnimalSpawner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapAnimalSpawner_C::ExecuteUbergraph_BP_MapAnimalSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapAnimalSpawner.BP_MapAnimalSpawner_C.ExecuteUbergraph_BP_MapAnimalSpawner");

	ABP_MapAnimalSpawner_C_ExecuteUbergraph_BP_MapAnimalSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
