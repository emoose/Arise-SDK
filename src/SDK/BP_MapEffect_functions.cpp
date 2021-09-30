
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

// Function BP_MapEffect.BP_MapEffect_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_MapEffect_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.GetOutlinerFolderPath");

	ABP_MapEffect_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapEffect.BP_MapEffect_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_MapEffect_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.GetOutlinerLabelName");

	ABP_MapEffect_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MapEffect.BP_MapEffect_C.OnSpawnAreaIn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapEffect_C::OnSpawnAreaIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.OnSpawnAreaIn");

	ABP_MapEffect_C_OnSpawnAreaIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.CheckDirectivity
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsOk                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapEffect_C::CheckDirectivity(const struct FVector& ActorLocation, bool* IsOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.CheckDirectivity");

	ABP_MapEffect_C_CheckDirectivity_Params params;
	params.ActorLocation = ActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOk != nullptr)
		*IsOk = params.IsOk;
}


// Function BP_MapEffect.BP_MapEffect_C._PreSpawnParticle
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapEffect_C::_PreSpawnParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C._PreSpawnParticle");

	ABP_MapEffect_C__PreSpawnParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.SpawnEmitterWithPlayerDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapEffect_C::SpawnEmitterWithPlayerDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.SpawnEmitterWithPlayerDistance");

	ABP_MapEffect_C_SpawnEmitterWithPlayerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.AbsoluteToRelative
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Abs                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 rel                            (Parm, OutParm, IsPlainOldData)

void ABP_MapEffect_C::AbsoluteToRelative(const struct FVector& Abs, struct FVector* rel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.AbsoluteToRelative");

	ABP_MapEffect_C_AbsoluteToRelative_Params params;
	params.Abs = Abs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (rel != nullptr)
		*rel = params.rel;
}


// Function BP_MapEffect.BP_MapEffect_C.RelativeToAbsolute
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 RelLoc                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 AbsLoc                         (Parm, OutParm, IsPlainOldData)

void ABP_MapEffect_C::RelativeToAbsolute(const struct FVector& RelLoc, struct FVector* AbsLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.RelativeToAbsolute");

	ABP_MapEffect_C_RelativeToAbsolute_Params params;
	params.RelLoc = RelLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbsLoc != nullptr)
		*AbsLoc = params.AbsLoc;
}


// Function BP_MapEffect.BP_MapEffect_C.SnapPosition
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENM_SpawnSnapType> SnapType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ModifiedLocation               (Parm, OutParm, IsPlainOldData)

void ABP_MapEffect_C::SnapPosition(TEnumAsByte<ENM_SpawnSnapType> SnapType, const struct FVector& Location, struct FVector* ModifiedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.SnapPosition");

	ABP_MapEffect_C_SnapPosition_Params params;
	params.SnapType = SnapType;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedLocation != nullptr)
		*ModifiedLocation = params.ModifiedLocation;
}


// Function BP_MapEffect.BP_MapEffect_C.SpawnStaticMeshs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapEffect_C::SpawnStaticMeshs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.SpawnStaticMeshs");

	ABP_MapEffect_C_SpawnStaticMeshs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.BehaviorAreaIn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapEffect_C::BehaviorAreaIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.BehaviorAreaIn");

	ABP_MapEffect_C_BehaviorAreaIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.HideStaticMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MapEffect_C::HideStaticMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.HideStaticMesh");

	ABP_MapEffect_C_HideStaticMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.SpawnEmitter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapEffect_C::SpawnEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.SpawnEmitter");

	ABP_MapEffect_C_SpawnEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.NowTimeOn?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CurHour                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OnHour                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffHour                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MapEffect_C::NowTimeOn_(float CurHour, float OnHour, float OffHour, bool* bOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.NowTimeOn?");

	ABP_MapEffect_C_NowTimeOn__Params params;
	params.CurHour = CurHour;
	params.OnHour = OnHour;
	params.OffHour = OffHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOn != nullptr)
		*bOn = params.bOn;
}


// Function BP_MapEffect.BP_MapEffect_C.ParticleOnOffManagement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurHour                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapEffect_C::ParticleOnOffManagement(float CurHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.ParticleOnOffManagement");

	ABP_MapEffect_C_ParticleOnOffManagement_Params params;
	params.CurHour = CurHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.UserConstructionScript");

	ABP_MapEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.OnPlayAction
// (BlueprintCallable, BlueprintEvent)

void ABP_MapEffect_C::OnPlayAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.OnPlayAction");

	ABP_MapEffect_C_OnPlayAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.Update
// (Event, Public, BlueprintEvent)

void ABP_MapEffect_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.Update");

	ABP_MapEffect_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.BndEvt__SwitchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MapEffect_C::BndEvt__SwitchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.BndEvt__SwitchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MapEffect_C_BndEvt__SwitchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapEffect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.ReceiveBeginPlay");

	ABP_MapEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapEffect_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.ReceiveEndPlay");

	ABP_MapEffect_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.OnDestroyPreSpawnParticle
// (BlueprintCallable, BlueprintEvent)

void ABP_MapEffect_C::OnDestroyPreSpawnParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.OnDestroyPreSpawnParticle");

	ABP_MapEffect_C_OnDestroyPreSpawnParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapEffect.BP_MapEffect_C.ExecuteUbergraph_BP_MapEffect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MapEffect_C::ExecuteUbergraph_BP_MapEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapEffect.BP_MapEffect_C.ExecuteUbergraph_BP_MapEffect");

	ABP_MapEffect_C_ExecuteUbergraph_BP_MapEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
