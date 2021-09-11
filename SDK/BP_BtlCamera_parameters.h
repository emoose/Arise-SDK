#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_BtlCamera.BP_BtlCamera_C.LimitAimHeight
struct ABP_BtlCamera_C_LimitAimHeight_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NewAimPoint;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ResetCameraInstant
struct ABP_BtlCamera_C_ResetCameraInstant_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.UpdateResetToYaw
struct ABP_BtlCamera_C_UpdateResetToYaw_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.LimitCameraHeight
struct ABP_BtlCamera_C_LimitCameraHeight_Params
{
	struct FVector                                     CamPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NewCamPoint;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetInputAnyControl
struct ABP_BtlCamera_C_SetInputAnyControl_Params
{
	bool                                               New;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteEasingInspiration
struct ABP_BtlCamera_C_ExecuteEasingInspiration_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteEasingOverlimit
struct ABP_BtlCamera_C_ExecuteEasingOverlimit_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetInterpolateCoefficient_CamPoint
struct ABP_BtlCamera_C_SetInterpolateCoefficient_CamPoint_Params
{
	float                                              CoefficientCamPoint;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointNormalBattleEnd
struct ABP_BtlCamera_C_GetCamPointNormalBattleEnd_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CamPoint;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointNormalBattleEnd
struct ABP_BtlCamera_C_GetAimPointNormalBattleEnd_Params
{
	struct FVector                                     AimPoint;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteNormalBattleEnd
struct ABP_BtlCamera_C_ExecuteNormalBattleEnd_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetInputLimitPitch
struct ABP_BtlCamera_C_SetInputLimitPitch_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetInputLimitHeight
struct ABP_BtlCamera_C_SetInputLimitHeight_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Low;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Hight;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetInputLimitYaw
struct ABP_BtlCamera_C_SetInputLimitYaw_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              YawMin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              YawMax;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointFocusLocation
struct ABP_BtlCamera_C_GetCamPointFocusLocation_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CamDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetCamDirectionFocusLocation
struct ABP_BtlCamera_C_GetCamDirectionFocusLocation_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteFocusLocation
struct ABP_BtlCamera_C_ExecuteFocusLocation_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointPreSmash
struct ABP_BtlCamera_C_GetCamPointPreSmash_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CamPoint;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointPreSmash
struct ABP_BtlCamera_C_GetAimPointPreSmash_Params
{
	struct FVector                                     AimPoint;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecutePreStrikeSmash
struct ABP_BtlCamera_C_ExecutePreStrikeSmash_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ClearInputAnyFlag
struct ABP_BtlCamera_C_ClearInputAnyFlag_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.UpdateRewindToYawHeight
struct ABP_BtlCamera_C_UpdateRewindToYawHeight_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetResetCameraValue
struct ABP_BtlCamera_C_GetResetCameraValue_Params
{
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ResetCamera
struct ABP_BtlCamera_C_ResetCamera_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetDistanceInterpolateValue
struct ABP_BtlCamera_C_SetDistanceInterpolateValue_Params
{
	float                                              Interpolate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalDistanceOverride
struct ABP_BtlCamera_C_SetExternalDistanceOverride_Params
{
	bool                                               UseOverride;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideDistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.StartCutsceneToNormal
struct ABP_BtlCamera_C_StartCutsceneToNormal_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.CalculateNormalCamera
struct ABP_BtlCamera_C_CalculateNormalCamera_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     NewAimPoint;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     NewCamPoint;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteCutsceneTo
struct ABP_BtlCamera_C_ExecuteCutsceneTo_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.UpdateInterpolateCoefficient
struct ABP_BtlCamera_C_UpdateInterpolateCoefficient_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalPitchOverride
struct ABP_BtlCamera_C_SetExternalPitchOverride_Params
{
	bool                                               UseOverride;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverridePitch;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalYawOverride
struct ABP_BtlCamera_C_SetExternalYawOverride_Params
{
	bool                                               UseOverride;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideYaw;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetEnableInputHeight
struct ABP_BtlCamera_C_SetEnableInputHeight_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetEnableInputYaw
struct ABP_BtlCamera_C_SetEnableInputYaw_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalPitchOffset
struct ABP_BtlCamera_C_SetExternalPitchOffset_Params
{
	float                                              AddPitchOffset;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalYawOffset
struct ABP_BtlCamera_C_SetExternalYawOffset_Params
{
	float                                              AddYawOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.DrawDebugCamera
struct ABP_BtlCamera_C_DrawDebugCamera_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FColor                                      Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetFocusUnitRate
struct ABP_BtlCamera_C_GetFocusUnitRate_Params
{
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetCamDirectionFocusUnit
struct ABP_BtlCamera_C_GetCamDirectionFocusUnit_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointFocusUnit
struct ABP_BtlCamera_C_GetCamPointFocusUnit_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CamDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointFocusUnit
struct ABP_BtlCamera_C_GetAimPointFocusUnit_Params
{
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteFocusUnit
struct ABP_BtlCamera_C_ExecuteFocusUnit_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.UpdateCamDistanceNormal
struct ABP_BtlCamera_C_UpdateCamDistanceNormal_Params
{
	float                                              CheckDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetCamDistanceTargetNormal
struct ABP_BtlCamera_C_GetCamDistanceTargetNormal_Params
{
	float                                              DistanceTarget;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetInterpolateCoefficient
struct ABP_BtlCamera_C_SetInterpolateCoefficient_Params
{
	float                                              Coefficient;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetNormalCamera
struct ABP_BtlCamera_C_SetNormalCamera_Params
{
	struct FVector                                     Aim;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetExternalAimOffset
struct ABP_BtlCamera_C_SetExternalAimOffset_Params
{
	bool                                               UseOverride;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddAimOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.LookupNormal
struct ABP_BtlCamera_C_LookupNormal_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CamPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ResultAimPoint;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     ResultCamPoint;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteFlashRaid
struct ABP_BtlCamera_C_ExecuteFlashRaid_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteStrikeAttack
struct ABP_BtlCamera_C_ExecuteStrikeAttack_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.DetectBlocking
struct ABP_BtlCamera_C_DetectBlocking_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CamPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EscapePoint;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.OldDetectBlocking
struct ABP_BtlCamera_C_OldDetectBlocking_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CamPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EscapePoint;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetFittingYawNormal
struct ABP_BtlCamera_C_GetFittingYawNormal_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CamPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteNormal
struct ABP_BtlCamera_C_ExecuteNormal_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SavedPrevPoints
struct ABP_BtlCamera_C_SavedPrevPoints_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CamPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.UpdateCursorList
struct ABP_BtlCamera_C_UpdateCursorList_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.ChangeTarget
struct ABP_BtlCamera_C_ChangeTarget_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetTargetCursorPoint
struct ABP_BtlCamera_C_GetTargetCursorPoint_Params
{
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetMouseControl
struct ABP_BtlCamera_C_SetMouseControl_Params
{
	bool                                               IsMouseControl;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGamepadControl;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetCamDirectionNormal
struct ABP_BtlCamera_C_GetCamDirectionNormal_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Directional;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteInitialize
struct ABP_BtlCamera_C_ExecuteInitialize_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetInputHeightAdd
struct ABP_BtlCamera_C_SetInputHeightAdd_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetInputYawAdd
struct ABP_BtlCamera_C_SetInputYawAdd_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointNormalCurrent
struct ABP_BtlCamera_C_GetAimPointNormalCurrent_Params
{
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetCamPointNormal
struct ABP_BtlCamera_C_GetCamPointNormal_Params
{
	struct FVector                                     AimPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CamDirectionXY;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.GetAimPointNormal
struct ABP_BtlCamera_C_GetAimPointNormal_Params
{
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.UserConstructionScript
struct ABP_BtlCamera_C_UserConstructionScript_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlFlashRaidSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlFlashRaidSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SubStateStart
struct ABP_BtlCamera_C_SubStateStart_Params
{
	EBattleState                                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SubStateEnd
struct ABP_BtlCamera_C_SubStateEnd_Params
{
	EBattleState                                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ReceiveBeginPlay
struct ABP_BtlCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.ReceiveTick
struct ABP_BtlCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeAttackSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeAttackSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeAttackSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeAttackSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature_Params
{
	struct FBtlStrikeSmashEndParam                     Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetFocusUnitCamera
struct ABP_BtlCamera_C_SetFocusUnitCamera_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Part;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeSmashBeginSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeSmashBeginSignature__DelegateSignature_Params
{
	struct FBtlStrikeSmashBeginParam                   Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCameraModeChangeSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCameraModeChangeSignature__DelegateSignature_Params
{
	class ABtl_Camera*                                 BtlCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlCameraMode                                     Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBtlCameraMode                                     Now;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlSimpleSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlMysticEndSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlMysticEndSignature__DelegateSignature_Params
{
	struct FBtlMysticEndParam                          Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlChangeTargetSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlChangeTargetSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBtlTargetCursorComponent*                   NewTargetComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBtlTargetCursorComponent*                   PrevTargetComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlPreStrikeSmashBeginWarpStrikerSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlPreStrikeSmashBeginWarpStrikerSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ReceiveEndPlay
struct ABP_BtlCamera_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetFocusLocationCamera
struct ABP_BtlCamera_C_SetFocusLocationCamera_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              keepTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetNormalBtlWinCamera
struct ABP_BtlCamera_C_SetNormalBtlWinCamera_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetOverlimitUnitCamera
struct ABP_BtlCamera_C_SetOverlimitUnitCamera_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.SetInspirationUnitCamera
struct ABP_BtlCamera_C_SetInspirationUnitCamera_Params
{
	class ABtlCharacterBase*                           Unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ReturnBeforeFocusUnit
struct ABP_BtlCamera_C_ReturnBeforeFocusUnit_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlPreStrikeSmashEndSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlPreStrikeSmashEndSignature__DelegateSignature_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlPreStrikeSmashBeginSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlPreStrikeSmashBeginSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlCharacterBase*                           Striker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlSpecialStrikeBeginSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlSpecialStrikeBeginSignature__DelegateSignature_Params
{
	struct FBtlSpecialStrikeBeginParam                 Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlSpawnCharacterSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlSpawnCharacterSignature__DelegateSignature_Params
{
	class ABtlCharacterBase*                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reinforcement;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature_Params
{
};

// Function BP_BtlCamera.BP_BtlCamera_C.BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeEndSignature__DelegateSignature
struct ABP_BtlCamera_C_BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeEndSignature__DelegateSignature_Params
{
	struct FBtlSpecialStrikeEndParam                   Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BtlCamera.BP_BtlCamera_C.ExecuteUbergraph_BP_BtlCamera
struct ABP_BtlCamera_C_ExecuteUbergraph_BP_BtlCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
