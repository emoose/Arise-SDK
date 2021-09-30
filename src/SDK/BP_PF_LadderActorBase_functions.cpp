
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

// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.GetOutlinerFolderPath
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_PF_LadderActorBase_C::GetOutlinerFolderPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.GetOutlinerFolderPath");

	ABP_PF_LadderActorBase_C_GetOutlinerFolderPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.GetOutlinerLabelName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABP_PF_LadderActorBase_C::GetOutlinerLabelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.GetOutlinerLabelName");

	ABP_PF_LadderActorBase_C_GetOutlinerLabelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveSerializeLadderPointParameter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPFPlacementLadderPointDatabaseRow DestinationParameter           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PF_LadderActorBase_C::ReceiveSerializeLadderPointParameter(struct FPFPlacementLadderPointDatabaseRow* DestinationParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveSerializeLadderPointParameter");

	ABP_PF_LadderActorBase_C_ReceiveSerializeLadderPointParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestinationParameter != nullptr)
		*DestinationParameter = params.DestinationParameter;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.IsLadderHide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutHide                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_LadderActorBase_C::IsLadderHide(bool* OutHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.IsLadderHide");

	ABP_PF_LadderActorBase_C_IsLadderHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHide != nullptr)
		*OutHide = params.OutHide;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.UpdateLadderVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PF_LadderActorBase_C::UpdateLadderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.UpdateLadderVisibility");

	ABP_PF_LadderActorBase_C_UpdateLadderVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.IsLadderEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bOut                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PF_LadderActorBase_C::IsLadderEnable(bool* bOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.IsLadderEnable");

	ABP_PF_LadderActorBase_C_IsLadderEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOut != nullptr)
		*bOut = params.bOut;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.SetScenaroiCondition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScenarioConditionNamed InNewCondition                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PF_LadderActorBase_C::SetScenaroiCondition(const struct FScenarioConditionNamed& InNewCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.SetScenaroiCondition");

	ABP_PF_LadderActorBase_C_SetScenaroiCondition_Params params;
	params.InNewCondition = InNewCondition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.GetJumpPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Position                       (Parm, OutParm, IsPlainOldData)

void ABP_PF_LadderActorBase_C::GetJumpPosition(struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.GetJumpPosition");

	ABP_PF_LadderActorBase_C_GetJumpPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.AddMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HeightOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_LadderActorBase_C::AddMesh(class UStaticMesh* Mesh, float HeightOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.AddMesh");

	ABP_PF_LadderActorBase_C_AddMesh_Params params;
	params.Mesh = Mesh;
	params.HeightOffset = HeightOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BuildMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InMiddleNum                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_LadderActorBase_C::BuildMesh(int InMiddleNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BuildMesh");

	ABP_PF_LadderActorBase_C_BuildMesh_Params params;
	params.InMiddleNum = InMiddleNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PF_LadderActorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.UserConstructionScript");

	ABP_PF_LadderActorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              HIT                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_LadderActorBase_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& HIT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	ABP_PF_LadderActorBase_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.HIT = HIT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_LadderActorBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveTick");

	ABP_PF_LadderActorBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BndEvt__HitBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PF_LadderActorBase_C::BndEvt__HitBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BndEvt__HitBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_PF_LadderActorBase_C_BndEvt__HitBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BndEvt__HitBox_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_LadderActorBase_C::BndEvt__HitBox_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.BndEvt__HitBox_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	ABP_PF_LadderActorBase_C_BndEvt__HitBox_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.OnScenarioFlagChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InFlagNo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInFlagValid                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_LadderActorBase_C::OnScenarioFlagChanged(int InFlagNo, bool bInFlagValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.OnScenarioFlagChanged");

	ABP_PF_LadderActorBase_C_OnScenarioFlagChanged_Params params;
	params.InFlagNo = InFlagNo;
	params.bInFlagValid = bInFlagValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.OnScenarioCounterChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InNew                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InOld                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_LadderActorBase_C::OnScenarioCounterChanged(int InNew, int InOld)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.OnScenarioCounterChanged");

	ABP_PF_LadderActorBase_C_OnScenarioCounterChanged_Params params;
	params.InNew = InNew;
	params.InOld = InOld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_LadderActorBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveEndPlay");

	ABP_PF_LadderActorBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PF_LadderActorBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ReceiveBeginPlay");

	ABP_PF_LadderActorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ExecuteUbergraph_BP_PF_LadderActorBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PF_LadderActorBase_C::ExecuteUbergraph_BP_PF_LadderActorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_LadderActorBase.BP_PF_LadderActorBase_C.ExecuteUbergraph_BP_PF_LadderActorBase");

	ABP_PF_LadderActorBase_C_ExecuteUbergraph_BP_PF_LadderActorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
