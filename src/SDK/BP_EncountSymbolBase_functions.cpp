
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

// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetSphereRadius
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::GetSphereRadius(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetSphereRadius");

	ABP_EncountSymbolBase_C_GetSphereRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetRadar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::GetRadar(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetRadar");

	ABP_EncountSymbolBase_C_GetRadar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Activate");

	ABP_EncountSymbolBase_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetRelativeLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::SetRelativeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetRelativeLocation");

	ABP_EncountSymbolBase_C_SetRelativeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnChangeStateImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::OnChangeStateImpl(EAriseGameState State, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnChangeStateImpl");

	ABP_EncountSymbolBase_C_OnChangeStateImpl_Params params;
	params.State = State;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetModelBounds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::GetModelBounds(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetModelBounds");

	ABP_EncountSymbolBase_C_GetModelBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EnableBlockSphereCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InEnable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::EnableBlockSphereCollision(bool InEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EnableBlockSphereCollision");

	ABP_EncountSymbolBase_C_EnableBlockSphereCollision_Params params;
	params.InEnable = InEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsFindedMimicSymbol
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::IsFindedMimicSymbol(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsFindedMimicSymbol");

	ABP_EncountSymbolBase_C_IsFindedMimicSymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_IsEntrySearchBox
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EncountSymbolBase_C::BPE_IsEntrySearchBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_IsEntrySearchBox");

	ABP_EncountSymbolBase_C_BPE_IsEntrySearchBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetupUsePathFinding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::SetupUsePathFinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetupUsePathFinding");

	ABP_EncountSymbolBase_C_SetupUsePathFinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.CanEncounting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::CanEncounting(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.CanEncounting");

	ABP_EncountSymbolBase_C_CanEncounting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetDesiredFlyHeight
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_EncountSymbolBase_C::GetDesiredFlyHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetDesiredFlyHeight");

	ABP_EncountSymbolBase_C_GetDesiredFlyHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitFlyMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::InitFlyMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitFlyMode");

	ABP_EncountSymbolBase_C_InitFlyMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetDestination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InDestination                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_EncountSymbolBase_C::GetDestination(const struct FVector& InDestination, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetDestination");

	ABP_EncountSymbolBase_C_GetDestination_Params params;
	params.InDestination = InDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetRelativeFlyHeight
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_EncountSymbolBase_C::GetRelativeFlyHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetRelativeFlyHeight");

	ABP_EncountSymbolBase_C_GetRelativeFlyHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetBoxExtent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBoxComponent*           Box                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::SetBoxExtent(class UBoxComponent* Box, float Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetBoxExtent");

	ABP_EncountSymbolBase_C_SetBoxExtent_Params params;
	params.Box = Box;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetWanderingMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::SetWanderingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetWanderingMode");

	ABP_EncountSymbolBase_C_SetWanderingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EnableEncountCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::EnableEncountCollision(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EnableEncountCollision");

	ABP_EncountSymbolBase_C_EnableEncountCollision_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitSplineData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::InitSplineData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitSplineData");

	ABP_EncountSymbolBase_C_InitSplineData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsFlyState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::IsFlyState(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsFlyState");

	ABP_EncountSymbolBase_C_IsFlyState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsRandomWaitState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::IsRandomWaitState(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsRandomWaitState");

	ABP_EncountSymbolBase_C_IsRandomWaitState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetFlyMode
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::SetFlyMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetFlyMode");

	ABP_EncountSymbolBase_C_SetFlyMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Postinitialize
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::Postinitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Postinitialize");

	ABP_EncountSymbolBase_C_Postinitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsGround
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::IsGround(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsGround");

	ABP_EncountSymbolBase_C_IsGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.RespawnParameter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::RespawnParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.RespawnParameter");

	ABP_EncountSymbolBase_C_RespawnParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EnableOrientRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::EnableOrientRotation(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EnableOrientRotation");

	ABP_EncountSymbolBase_C_EnableOrientRotation_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Deactive
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::Deactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Deactive");

	ABP_EncountSymbolBase_C_Deactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EncountLink
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::EncountLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EncountLink");

	ABP_EncountSymbolBase_C_EncountLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsInvisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::IsInvisible(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.IsInvisible");

	ABP_EncountSymbolBase_C_IsInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetAIController
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::GetAIController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetAIController");

	ABP_EncountSymbolBase_C_GetAIController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.DetectSearchBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::DetectSearchBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.DetectSearchBox");

	ABP_EncountSymbolBase_C_DetectSearchBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetCeilMoveMode
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_EncountSymbolBase_C::SetCeilMoveMode(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetCeilMoveMode");

	ABP_EncountSymbolBase_C_SetCeilMoveMode_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetupActionState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::SetupActionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.SetupActionState");

	ABP_EncountSymbolBase_C_SetupActionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APFBP_EnSym_Placement_C* Placement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::Setup(class APFBP_EnSym_Placement_C* Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.Setup");

	ABP_EncountSymbolBase_C_Setup_Params params;
	params.Placement = Placement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetMyGroup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EncountGroup_C*      Group                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::GetMyGroup(class ABP_EncountGroup_C** Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.GetMyGroup");

	ABP_EncountSymbolBase_C_GetMyGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Group != nullptr)
		*Group = params.Group;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.UserConstructionScript");

	ABP_EncountSymbolBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnDoSceneCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              CaptureTransform               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UCameraComponent*        BaseCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_EncountSymbolBase_C::OnDoSceneCapture(const struct FTransform& CaptureTransform, class UCameraComponent* BaseCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnDoSceneCapture");

	ABP_EncountSymbolBase_C_OnDoSceneCapture_Params params;
	params.CaptureTransform = CaptureTransform;
	params.BaseCamera = BaseCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EncounProcess
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::EncounProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.EncounProcess");

	ABP_EncountSymbolBase_C_EncounProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnEncount
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_EncountSymbolBase_C::OnEncount(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnEncount");

	ABP_EncountSymbolBase_C_OnEncount_Params params;
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


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitCallback
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::InitCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitCallback");

	ABP_EncountSymbolBase_C_InitCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_EncountSymbolBase_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_EncountSymbolBase_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnEndOverlapCaptuer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::OnEndOverlapCaptuer(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnEndOverlapCaptuer");

	ABP_EncountSymbolBase_C_OnEndOverlapCaptuer_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_EncountSymbolBase_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNotDelete                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::FadeOut(bool bNotDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.FadeOut");

	ABP_EncountSymbolBase_C_FadeOut_Params params;
	params.bNotDelete = bNotDelete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.FadeIn");

	ABP_EncountSymbolBase_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnBuildCharacter
// (Event, Protected, BlueprintEvent)

void ABP_EncountSymbolBase_C::OnBuildCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnBuildCharacter");

	ABP_EncountSymbolBase_C_OnBuildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnEndEncount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::OnEndEncount(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnEndEncount");

	ABP_EncountSymbolBase_C_OnEndEncount_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCompleteFadeOutEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NotDelete                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::OnCompleteFadeOutEvent(bool NotDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCompleteFadeOutEvent");

	ABP_EncountSymbolBase_C_OnCompleteFadeOutEvent_Params params;
	params.NotDelete = NotDelete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCompleteFadeInEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::OnCompleteFadeInEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCompleteFadeInEvent");

	ABP_EncountSymbolBase_C_OnCompleteFadeInEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCollisionEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::OnCollisionEnable(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCollisionEnable");

	ABP_EncountSymbolBase_C_OnCollisionEnable_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCapture
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_EncountSymbolBase_C::OnCapture(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnCapture");

	ABP_EncountSymbolBase_C_OnCapture_Params params;
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


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitEncountSystem
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::InitEncountSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.InitEncountSystem");

	ABP_EncountSymbolBase_C_InitEncountSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EncountSymbolBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.ReceiveBeginPlay");

	ABP_EncountSymbolBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.TickNavMeshRecovery
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 RecoveryDestination            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_EncountSymbolBase_C::TickNavMeshRecovery(float DeltaTime, const struct FVector& Location, const struct FVector& RecoveryDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.TickNavMeshRecovery");

	ABP_EncountSymbolBase_C_TickNavMeshRecovery_Params params;
	params.DeltaTime = DeltaTime;
	params.Location = Location;
	params.RecoveryDestination = RecoveryDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnPostInitialized
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::OnPostInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnPostInitialized");

	ABP_EncountSymbolBase_C_OnPostInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnPFMovementStateDash
// (Event, Public, BlueprintEvent)

void ABP_EncountSymbolBase_C::OnPFMovementStateDash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnPFMovementStateDash");

	ABP_EncountSymbolBase_C_OnPFMovementStateDash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_ExecEntrySearchBox
// (Event, Public, BlueprintEvent)

void ABP_EncountSymbolBase_C::BPE_ExecEntrySearchBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_ExecEntrySearchBox");

	ABP_EncountSymbolBase_C_BPE_ExecEntrySearchBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_ResearchAIRoute
// (Event, Public, BlueprintEvent)

void ABP_EncountSymbolBase_C::BPE_ResearchAIRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_ResearchAIRoute");

	ABP_EncountSymbolBase_C_BPE_ResearchAIRoute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnFindedTarget
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::OnFindedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnFindedTarget");

	ABP_EncountSymbolBase_C_OnFindedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnLostTarget
// (BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::OnLostTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnLostTarget");

	ABP_EncountSymbolBase_C_OnLostTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_ForceRepop
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::BPE_ForceRepop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_ForceRepop");

	ABP_EncountSymbolBase_C_BPE_ForceRepop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_UpdateSearchBoxSize
// (Event, Public, BlueprintEvent)

void ABP_EncountSymbolBase_C::BPE_UpdateSearchBoxSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_UpdateSearchBoxSize");

	ABP_EncountSymbolBase_C_BPE_UpdateSearchBoxSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_UpdateMinimapVisibleSymbol
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::BPE_UpdateMinimapVisibleSymbol(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.BPE_UpdateMinimapVisibleSymbol");

	ABP_EncountSymbolBase_C_BPE_UpdateMinimapVisibleSymbol_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.ExecuteUbergraph_BP_EncountSymbolBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EncountSymbolBase_C::ExecuteUbergraph_BP_EncountSymbolBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.ExecuteUbergraph_BP_EncountSymbolBase");

	ABP_EncountSymbolBase_C_ExecuteUbergraph_BP_EncountSymbolBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnHitCollision__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EncountSymbolBase_C::OnHitCollision__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EncountSymbolBase.BP_EncountSymbolBase_C.OnHitCollision__DelegateSignature");

	ABP_EncountSymbolBase_C_OnHitCollision__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
