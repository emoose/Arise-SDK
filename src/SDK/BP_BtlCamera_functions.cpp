
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

// Function BP_BtlCamera.BP_BtlCamera_C.LimitAimHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NewAimPoint                    (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::LimitAimHeight(const struct FVector& AimPoint, struct FVector* NewAimPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.LimitAimHeight");

	ABP_BtlCamera_C_LimitAimHeight_Params params;
	params.AimPoint = AimPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewAimPoint != nullptr)
		*NewAimPoint = params.NewAimPoint;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ResetCameraInstant
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::ResetCameraInstant()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ResetCameraInstant");

	ABP_BtlCamera_C_ResetCameraInstant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.UpdateResetToYaw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::UpdateResetToYaw(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.UpdateResetToYaw");

	ABP_BtlCamera_C_UpdateResetToYaw_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.LimitCameraHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CamPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NewCamPoint                    (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::LimitCameraHeight(const struct FVector& CamPoint, struct FVector* NewCamPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.LimitCameraHeight");

	ABP_BtlCamera_C_LimitCameraHeight_Params params;
	params.CamPoint = CamPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewCamPoint != nullptr)
		*NewCamPoint = params.NewCamPoint;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetInputAnyControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           New                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetInputAnyControl(bool New)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetInputAnyControl");

	ABP_BtlCamera_C_SetInputAnyControl_Params params;
	params.New = New;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteEasingInspiration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecuteEasingInspiration(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteEasingInspiration");

	ABP_BtlCamera_C_ExecuteEasingInspiration_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteEasingOverlimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecuteEasingOverlimit(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteEasingOverlimit");

	ABP_BtlCamera_C_ExecuteEasingOverlimit_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetInterpolateCoefficient_CamPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CoefficientCamPoint            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetInterpolateCoefficient_CamPoint(float CoefficientCamPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetInterpolateCoefficient_CamPoint");

	ABP_BtlCamera_C_SetInterpolateCoefficient_CamPoint_Params params;
	params.CoefficientCamPoint = CoefficientCamPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointNormalBattleEnd
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CamPoint                       (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetCamPointNormalBattleEnd(const struct FVector& AimPoint, float Yaw, struct FVector* CamPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointNormalBattleEnd");

	ABP_BtlCamera_C_GetCamPointNormalBattleEnd_Params params;
	params.AimPoint = AimPoint;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CamPoint != nullptr)
		*CamPoint = params.CamPoint;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointNormalBattleEnd
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetAimPointNormalBattleEnd(struct FVector* AimPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointNormalBattleEnd");

	ABP_BtlCamera_C_GetAimPointNormalBattleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimPoint != nullptr)
		*AimPoint = params.AimPoint;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteNormalBattleEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecuteNormalBattleEnd(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteNormalBattleEnd");

	ABP_BtlCamera_C_ExecuteNormalBattleEnd_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetInputLimitPitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetInputLimitPitch(bool Enable, float PitchMin, float PitchMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetInputLimitPitch");

	ABP_BtlCamera_C_SetInputLimitPitch_Params params;
	params.Enable = Enable;
	params.PitchMin = PitchMin;
	params.PitchMax = PitchMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetInputLimitHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Low                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Hight                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetInputLimitHeight(bool Enable, float Low, float Hight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetInputLimitHeight");

	ABP_BtlCamera_C_SetInputLimitHeight_Params params;
	params.Enable = Enable;
	params.Low = Low;
	params.Hight = Hight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetInputLimitYaw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          YawMin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          YawMax                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetInputLimitYaw(bool Enable, float YawMin, float YawMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetInputLimitYaw");

	ABP_BtlCamera_C_SetInputLimitYaw_Params params;
	params.Enable = Enable;
	params.YawMin = YawMin;
	params.YawMax = YawMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointFocusLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CamDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetCamPointFocusLocation(const struct FVector& AimPoint, const struct FVector& CamDirection, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointFocusLocation");

	ABP_BtlCamera_C_GetCamPointFocusLocation_Params params;
	params.AimPoint = AimPoint;
	params.CamDirection = CamDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetCamDirectionFocusLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetCamDirectionFocusLocation(const struct FVector& AimPoint, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetCamDirectionFocusLocation");

	ABP_BtlCamera_C_GetCamDirectionFocusLocation_Params params;
	params.AimPoint = AimPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteFocusLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecuteFocusLocation(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteFocusLocation");

	ABP_BtlCamera_C_ExecuteFocusLocation_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointPreSmash
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CamPoint                       (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetCamPointPreSmash(const struct FVector& AimPoint, float Yaw, struct FVector* CamPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointPreSmash");

	ABP_BtlCamera_C_GetCamPointPreSmash_Params params;
	params.AimPoint = AimPoint;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CamPoint != nullptr)
		*CamPoint = params.CamPoint;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointPreSmash
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetAimPointPreSmash(struct FVector* AimPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointPreSmash");

	ABP_BtlCamera_C_GetAimPointPreSmash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimPoint != nullptr)
		*AimPoint = params.AimPoint;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecutePreStrikeSmash
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecutePreStrikeSmash(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecutePreStrikeSmash");

	ABP_BtlCamera_C_ExecutePreStrikeSmash_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ClearInputAnyFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::ClearInputAnyFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ClearInputAnyFlag");

	ABP_BtlCamera_C_ClearInputAnyFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.UpdateRewindToYawHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::UpdateRewindToYawHeight(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.UpdateRewindToYawHeight");

	ABP_BtlCamera_C_UpdateRewindToYawHeight_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetResetCameraValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::GetResetCameraValue(float* Yaw, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetResetCameraValue");

	ABP_BtlCamera_C_GetResetCameraValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yaw != nullptr)
		*Yaw = params.Yaw;
	if (Height != nullptr)
		*Height = params.Height;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ResetCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ResetCamera");

	ABP_BtlCamera_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetDistanceInterpolateValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interpolate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetDistanceInterpolateValue(float Interpolate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetDistanceInterpolateValue");

	ABP_BtlCamera_C_SetDistanceInterpolateValue_Params params;
	params.Interpolate = Interpolate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalDistanceOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseOverride                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideDistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetExternalDistanceOverride(bool UseOverride, float OverrideDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetExternalDistanceOverride");

	ABP_BtlCamera_C_SetExternalDistanceOverride_Params params;
	params.UseOverride = UseOverride;
	params.OverrideDistance = OverrideDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.StartCutsceneToNormal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::StartCutsceneToNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.StartCutsceneToNormal");

	ABP_BtlCamera_C_StartCutsceneToNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.CalculateNormalCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 NewAimPoint                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 NewCamPoint                    (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::CalculateNormalCamera(float DeltaSeconds, struct FVector* NewLocation, struct FRotator* NewRotation, struct FVector* NewAimPoint, struct FVector* NewCamPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.CalculateNormalCamera");

	ABP_BtlCamera_C_CalculateNormalCamera_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
	if (NewAimPoint != nullptr)
		*NewAimPoint = params.NewAimPoint;
	if (NewCamPoint != nullptr)
		*NewCamPoint = params.NewCamPoint;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteCutsceneTo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecuteCutsceneTo(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteCutsceneTo");

	ABP_BtlCamera_C_ExecuteCutsceneTo_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.UpdateInterpolateCoefficient
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::UpdateInterpolateCoefficient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.UpdateInterpolateCoefficient");

	ABP_BtlCamera_C_UpdateInterpolateCoefficient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalPitchOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseOverride                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OverridePitch                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetExternalPitchOverride(bool UseOverride, float OverridePitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetExternalPitchOverride");

	ABP_BtlCamera_C_SetExternalPitchOverride_Params params;
	params.UseOverride = UseOverride;
	params.OverridePitch = OverridePitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalYawOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseOverride                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideYaw                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetExternalYawOverride(bool UseOverride, float OverrideYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetExternalYawOverride");

	ABP_BtlCamera_C_SetExternalYawOverride_Params params;
	params.UseOverride = UseOverride;
	params.OverrideYaw = OverrideYaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetEnableInputHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetEnableInputHeight(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetEnableInputHeight");

	ABP_BtlCamera_C_SetEnableInputHeight_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetEnableInputYaw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetEnableInputYaw(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetEnableInputYaw");

	ABP_BtlCamera_C_SetEnableInputYaw_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalPitchOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AddPitchOffset                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetExternalPitchOffset(float AddPitchOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetExternalPitchOffset");

	ABP_BtlCamera_C_SetExternalPitchOffset_Params params;
	params.AddPitchOffset = AddPitchOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalYawOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AddYawOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetExternalYawOffset(float AddYawOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetExternalYawOffset");

	ABP_BtlCamera_C_SetExternalYawOffset_Params params;
	params.AddYawOffset = AddYawOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.DrawDebugCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FColor                  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BtlCamera_C::DrawDebugCamera(const struct FVector& Location, const struct FRotator& Rotation, const struct FText& Text, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.DrawDebugCamera");

	ABP_BtlCamera_C_DrawDebugCamera_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Text = Text;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetFocusUnitRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::GetFocusUnitRate(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetFocusUnitRate");

	ABP_BtlCamera_C_GetFocusUnitRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetCamDirectionFocusUnit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetCamDirectionFocusUnit(const struct FVector& AimPoint, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetCamDirectionFocusUnit");

	ABP_BtlCamera_C_GetCamDirectionFocusUnit_Params params;
	params.AimPoint = AimPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointFocusUnit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CamDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetCamPointFocusUnit(const struct FVector& AimPoint, const struct FVector& CamDirection, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointFocusUnit");

	ABP_BtlCamera_C_GetCamPointFocusUnit_Params params;
	params.AimPoint = AimPoint;
	params.CamDirection = CamDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointFocusUnit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetAimPointFocusUnit(struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointFocusUnit");

	ABP_BtlCamera_C_GetAimPointFocusUnit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteFocusUnit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecuteFocusUnit(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteFocusUnit");

	ABP_BtlCamera_C_ExecuteFocusUnit_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.UpdateCamDistanceNormal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CheckDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::UpdateCamDistanceNormal(float CheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.UpdateCamDistanceNormal");

	ABP_BtlCamera_C_UpdateCamDistanceNormal_Params params;
	params.CheckDistance = CheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetCamDistanceTargetNormal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          DistanceTarget                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::GetCamDistanceTargetNormal(float* DistanceTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetCamDistanceTargetNormal");

	ABP_BtlCamera_C_GetCamDistanceTargetNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceTarget != nullptr)
		*DistanceTarget = params.DistanceTarget;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetInterpolateCoefficient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Coefficient                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetInterpolateCoefficient(float Coefficient, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetInterpolateCoefficient");

	ABP_BtlCamera_C_SetInterpolateCoefficient_Params params;
	params.Coefficient = Coefficient;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetNormalCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Aim                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetNormalCamera(const struct FVector& Aim, float Yaw, float Height, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetNormalCamera");

	ABP_BtlCamera_C_SetNormalCamera_Params params;
	params.Aim = Aim;
	params.Yaw = Yaw;
	params.Height = Height;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalAimOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseOverride                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AddAimOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetExternalAimOffset(bool UseOverride, float AddAimOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetExternalAimOffset");

	ABP_BtlCamera_C_SetExternalAimOffset_Params params;
	params.UseOverride = UseOverride;
	params.AddAimOffset = AddAimOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.LookupNormal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CamPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ResultAimPoint                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 ResultCamPoint                 (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::LookupNormal(const struct FVector& AimPoint, const struct FVector& CamPoint, struct FVector* ResultAimPoint, struct FVector* ResultCamPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.LookupNormal");

	ABP_BtlCamera_C_LookupNormal_Params params;
	params.AimPoint = AimPoint;
	params.CamPoint = CamPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultAimPoint != nullptr)
		*ResultAimPoint = params.ResultAimPoint;
	if (ResultCamPoint != nullptr)
		*ResultCamPoint = params.ResultCamPoint;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteFlashRaid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecuteFlashRaid(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteFlashRaid");

	ABP_BtlCamera_C_ExecuteFlashRaid_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteStrikeAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecuteStrikeAttack(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteStrikeAttack");

	ABP_BtlCamera_C_ExecuteStrikeAttack_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.DetectBlocking
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CamPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EscapePoint                    (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::DetectBlocking(const struct FVector& AimPoint, const struct FVector& CamPoint, struct FVector* EscapePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.DetectBlocking");

	ABP_BtlCamera_C_DetectBlocking_Params params;
	params.AimPoint = AimPoint;
	params.CamPoint = CamPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EscapePoint != nullptr)
		*EscapePoint = params.EscapePoint;
}


// Function BP_BtlCamera.BP_BtlCamera_C.OldDetectBlocking
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CamPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EscapePoint                    (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::OldDetectBlocking(const struct FVector& AimPoint, const struct FVector& CamPoint, struct FVector* EscapePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.OldDetectBlocking");

	ABP_BtlCamera_C_OldDetectBlocking_Params params;
	params.AimPoint = AimPoint;
	params.CamPoint = CamPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EscapePoint != nullptr)
		*EscapePoint = params.EscapePoint;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetFittingYawNormal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CamPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::GetFittingYawNormal(const struct FVector& AimPoint, const struct FVector& CamPoint, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetFittingYawNormal");

	ABP_BtlCamera_C_GetFittingYawNormal_Params params;
	params.AimPoint = AimPoint;
	params.CamPoint = CamPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteNormal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecuteNormal(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteNormal");

	ABP_BtlCamera_C_ExecuteNormal_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SavedPrevPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CamPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BtlCamera_C::SavedPrevPoints(const struct FVector& AimPoint, const struct FVector& CamPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SavedPrevPoints");

	ABP_BtlCamera_C_SavedPrevPoints_Params params;
	params.AimPoint = AimPoint;
	params.CamPoint = CamPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.UpdateCursorList
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::UpdateCursorList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.UpdateCursorList");

	ABP_BtlCamera_C_UpdateCursorList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ChangeTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::ChangeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ChangeTarget");

	ABP_BtlCamera_C_ChangeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetTargetCursorPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetTargetCursorPoint(struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetTargetCursorPoint");

	ABP_BtlCamera_C_GetTargetCursorPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetMouseControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMouseControl                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsGamepadControl               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetMouseControl(bool IsMouseControl, bool IsGamepadControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetMouseControl");

	ABP_BtlCamera_C_SetMouseControl_Params params;
	params.IsMouseControl = IsMouseControl;
	params.IsGamepadControl = IsGamepadControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetCamDirectionNormal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Directional                    (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetCamDirectionNormal(float Yaw, struct FVector* Directional)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetCamDirectionNormal");

	ABP_BtlCamera_C_GetCamDirectionNormal_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Directional != nullptr)
		*Directional = params.Directional;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteInitialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::ExecuteInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteInitialize");

	ABP_BtlCamera_C_ExecuteInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetInputHeightAdd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetInputHeightAdd(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetInputHeightAdd");

	ABP_BtlCamera_C_SetInputHeightAdd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetInputYawAdd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetInputYawAdd(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetInputYawAdd");

	ABP_BtlCamera_C_SetInputYawAdd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointNormalCurrent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetAimPointNormalCurrent(struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointNormalCurrent");

	ABP_BtlCamera_C_GetAimPointNormalCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointNormal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AimPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CamDirectionXY                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetCamPointNormal(const struct FVector& AimPoint, const struct FVector& CamDirectionXY, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointNormal");

	ABP_BtlCamera_C_GetCamPointNormal_Params params;
	params.AimPoint = AimPoint;
	params.CamDirectionXY = CamDirectionXY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointNormal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_BtlCamera_C::GetAimPointNormal(struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointNormal");

	ABP_BtlCamera_C_GetAimPointNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BtlCamera.BP_BtlCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.UserConstructionScript");

	ABP_BtlCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlFlashRaidSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlFlashRaidSignature__DelegateSignature(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlFlashRaidSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlFlashRaidSignature__DelegateSignature_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SubStateStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleState                   State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SubStateStart(EBattleState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SubStateStart");

	ABP_BtlCamera_C_SubStateStart_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SubStateEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleState                   State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SubStateEnd(EBattleState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SubStateEnd");

	ABP_BtlCamera_C_SubStateEnd_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BtlCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ReceiveBeginPlay");

	ABP_BtlCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ReceiveTick");

	ABP_BtlCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeAttackSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeAttackSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeAttackSignature__DelegateSignature_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeAttackSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeAttackSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeAttackSignature__DelegateSignature_Params params;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlStrikeSmashEndParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature(const struct FBtlStrikeSmashEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidSignature__DelegateSignature(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidSignature__DelegateSignature_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetFocusUnitCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Part                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BtlCamera_C::SetFocusUnitCamera(bool Enable, class ABtlCharacterBase* Unit, class USceneComponent* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetFocusUnitCamera");

	ABP_BtlCamera_C_SetFocusUnitCamera_Params params;
	params.Enable = Enable;
	params.Unit = Unit;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeSmashBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlStrikeSmashBeginParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeSmashBeginSignature__DelegateSignature(const struct FBtlStrikeSmashBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeSmashBeginSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeSmashBeginSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCameraModeChangeSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtl_Camera*             BtlCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlCameraMode                 Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBtlCameraMode                 Now                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCameraModeChangeSignature__DelegateSignature(class ABtl_Camera* BtlCamera, EBtlCameraMode Prev, EBtlCameraMode Now)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCameraModeChangeSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCameraModeChangeSignature__DelegateSignature_Params params;
	params.BtlCamera = BtlCamera;
	params.Prev = Prev;
	params.Now = Now;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlSimpleSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlMysticEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlMysticEndParam      Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlMysticEndSignature__DelegateSignature(const struct FBtlMysticEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlMysticEndSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlMysticEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlChangeTargetSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlTargetCursorComponent* NewTargetComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBtlTargetCursorComponent* PrevTargetComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlChangeTargetSignature__DelegateSignature(class ABtlCharacterBase* Unit, class UBtlTargetCursorComponent* NewTargetComponent, class UBtlTargetCursorComponent* PrevTargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlChangeTargetSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlChangeTargetSignature__DelegateSignature_Params params;
	params.Unit = Unit;
	params.NewTargetComponent = NewTargetComponent;
	params.PrevTargetComponent = PrevTargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlPreStrikeSmashBeginWarpStrikerSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlPreStrikeSmashBeginWarpStrikerSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlPreStrikeSmashBeginWarpStrikerSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlPreStrikeSmashBeginWarpStrikerSignature__DelegateSignature_Params params;
	params.Attacker = Attacker;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ReceiveEndPlay");

	ABP_BtlCamera_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetFocusLocationCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          keepTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetFocusLocationCamera(bool Enable, const struct FVector& Location, float Distance, float InTime, float keepTime, float EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetFocusLocationCamera");

	ABP_BtlCamera_C_SetFocusLocationCamera_Params params;
	params.Enable = Enable;
	params.Location = Location;
	params.Distance = Distance;
	params.InTime = InTime;
	params.keepTime = keepTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetNormalBtlWinCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::SetNormalBtlWinCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetNormalBtlWinCamera");

	ABP_BtlCamera_C_SetNormalBtlWinCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetOverlimitUnitCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetOverlimitUnitCamera(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetOverlimitUnitCamera");

	ABP_BtlCamera_C_SetOverlimitUnitCamera_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.SetInspirationUnitCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Unit                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::SetInspirationUnitCamera(class ABtlCharacterBase* Unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.SetInspirationUnitCamera");

	ABP_BtlCamera_C_SetInspirationUnitCamera_Params params;
	params.Unit = Unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ReturnBeforeFocusUnit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlCamera_C::ReturnBeforeFocusUnit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ReturnBeforeFocusUnit");

	ABP_BtlCamera_C_ReturnBeforeFocusUnit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlPreStrikeSmashEndSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlPreStrikeSmashEndSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlPreStrikeSmashEndSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlPreStrikeSmashEndSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlPreStrikeSmashBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Striker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlPreStrikeSmashBeginSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Striker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlPreStrikeSmashBeginSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlPreStrikeSmashBeginSignature__DelegateSignature_Params params;
	params.Attacker = Attacker;
	params.Striker = Striker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlSpecialStrikeBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlSpecialStrikeBeginParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlSpecialStrikeBeginSignature__DelegateSignature(const struct FBtlSpecialStrikeBeginParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlSpecialStrikeBeginSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlSpecialStrikeBeginSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterSignature__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlSpawnCharacterSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reinforcement                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlSpawnCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character, bool Reinforcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlSpawnCharacterSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlSpawnCharacterSignature__DelegateSignature_Params params;
	params.Character = Character;
	params.Reinforcement = Reinforcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature
// (BlueprintEvent)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBtlSpecialStrikeEndParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BtlCamera_C::BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeEndSignature__DelegateSignature(const struct FBtlSpecialStrikeEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeEndSignature__DelegateSignature");

	ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeEndSignature__DelegateSignature_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteUbergraph_BP_BtlCamera
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BtlCamera_C::ExecuteUbergraph_BP_BtlCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BtlCamera.BP_BtlCamera_C.ExecuteUbergraph_BP_BtlCamera");

	ABP_BtlCamera_C_ExecuteUbergraph_BP_BtlCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
