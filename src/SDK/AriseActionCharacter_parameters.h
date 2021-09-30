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

// Function AriseActionCharacter.AriseActionCharacterFunctionLibrary.SetCharacterVisibility
struct UAriseActionCharacterFunctionLibrary_SetCharacterVisibility_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInNewVisibility;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseActionCharacterFunctionLibrary.SetCharacterTickEnable
struct UAriseActionCharacterFunctionLibrary_SetCharacterTickEnable_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInNewEnable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseAnimInstance.SetRootMotionSequence
struct UAriseAnimInstance_SetRootMotionSequence_Params
{
	struct FName                                       KeyName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseAnimInstance.SetRootMotionBlendspace
struct UAriseAnimInstance_SetRootMotionBlendspace_Params
{
	struct FName                                       KeyName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseAnimInstance.SetGravityPowerWithInterpolation
struct UAriseAnimInstance_SetGravityPowerWithInterpolation_Params
{
	float                                              NewGravityPower;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseAnimInstance.SetDynamicsWeightWithInterpolation
struct UAriseAnimInstance_SetDynamicsWeightWithInterpolation_Params
{
	float                                              NewDynamicsWeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseAnimInstance.SetDampingPowerWithInterpolation
struct UAriseAnimInstance_SetDampingPowerWithInterpolation_Params
{
	float                                              NewDampingPower;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseAnimInstance.K2_IsCurrentState
struct UAriseAnimInstance_K2_IsCurrentState_Params
{
	struct FString                                     InMachineName;                                            // (Parm, ZeroConstructor)
	struct FString                                     InStateName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseAnimInstance.IsLevelSequenceControl
struct UAriseAnimInstance_IsLevelSequenceControl_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseAnimInstance.GetLookAtViewAngle
struct UAriseAnimInstance_GetLookAtViewAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseAnimInstance.GetLookAtViewAlpha
struct UAriseAnimInstance_GetLookAtViewAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.SetTears
struct AAriseCharacterBase_SetTears_Params
{
	struct FString                                     Type;                                                     // (Parm, ZeroConstructor)
};

// Function AriseActionCharacter.AriseCharacterBase.SetScalarParameterValueOnMaterials
struct AAriseCharacterBase_SetScalarParameterValueOnMaterials_Params
{
	struct FName                                       ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParameterValue;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.SetForceLOD
struct AAriseCharacterBase_SetForceLOD_Params
{
	int                                                InLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.SetCharacterVisibility
struct AAriseCharacterBase_SetCharacterVisibility_Params
{
	bool                                               bInValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.SetCharacterTickEnabled
struct AAriseCharacterBase_SetCharacterTickEnabled_Params
{
	bool                                               bInValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.ResetForceLOD
struct AAriseCharacterBase_ResetForceLOD_Params
{
};

// Function AriseActionCharacter.AriseCharacterBase.RemoveTears
struct AAriseCharacterBase_RemoveTears_Params
{
};

// Function AriseActionCharacter.AriseCharacterBase.ReceiveOnAnimInitialized
struct AAriseCharacterBase_ReceiveOnAnimInitialized_Params
{
};

// Function AriseActionCharacter.AriseCharacterBase.OnUnbuildCharacter
struct AAriseCharacterBase_OnUnbuildCharacter_Params
{
};

// Function AriseActionCharacter.AriseCharacterBase.OnRebuildCharacterModel
struct AAriseCharacterBase_OnRebuildCharacterModel_Params
{
};

// Function AriseActionCharacter.AriseCharacterBase.OnGetUserLoadAsset
struct AAriseCharacterBase_OnGetUserLoadAsset_Params
{
	TArray<struct FSoftObjectPath>                     OutAssetReference;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function AriseActionCharacter.AriseCharacterBase.OnBuildCharacterModelComplete
struct AAriseCharacterBase_OnBuildCharacterModelComplete_Params
{
};

// Function AriseActionCharacter.AriseCharacterBase.OnBuildCharacter
struct AAriseCharacterBase_OnBuildCharacter_Params
{
};

// Function AriseActionCharacter.AriseCharacterBase.K2_SetFootComponentsEnabled
struct AAriseCharacterBase_K2_SetFootComponentsEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.K2_SetAdjustMeshToCapsuleEnabled
struct AAriseCharacterBase_K2_SetAdjustMeshToCapsuleEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.K2_IsAnimCurrentState
struct AAriseCharacterBase_K2_IsAnimCurrentState_Params
{
	struct FString                                     InMahcineName;                                            // (Parm, ZeroConstructor)
	struct FString                                     InStateName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.K2_InitializeFootComponents
struct AAriseCharacterBase_K2_InitializeFootComponents_Params
{
	struct FString                                     InModelID;                                                // (Parm, ZeroConstructor)
};

// Function AriseActionCharacter.AriseCharacterBase.K2_GetFootIK
struct AAriseCharacterBase_K2_GetFootIK_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAchCharacterFootIKResult                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseActionCharacter.AriseCharacterBase.K2_AdjustMeshToCapsule
struct AAriseCharacterBase_K2_AdjustMeshToCapsule_Params
{
};

// Function AriseActionCharacter.AriseCharacterBase.IsVisibleCharacter
struct AAriseCharacterBase_IsVisibleCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.IsCharacterTickEnabled
struct AAriseCharacterBase_IsCharacterTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.GetWetRatio
struct AAriseCharacterBase_GetWetRatio_Params
{
	bool                                               bOutResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.GetWeaponID
struct AAriseCharacterBase_GetWeaponID_Params
{
	struct FString                                     WeaponID;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function AriseActionCharacter.AriseCharacterBase.GetTearsType
struct AAriseCharacterBase_GetTearsType_Params
{
	TArray<struct FString>                             OutTypes;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function AriseActionCharacter.AriseCharacterBase.GetModelID
struct AAriseCharacterBase_GetModelID_Params
{
	struct FString                                     ModelID;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function AriseActionCharacter.AriseCharacterBase.GetGroundPhysicalMaterialName
struct AAriseCharacterBase_GetGroundPhysicalMaterialName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.GetFootMaterial
struct AAriseCharacterBase_GetFootMaterial_Params
{
	struct FName                                       SurfaceName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.GetCachedBuildComponent
struct AAriseCharacterBase_GetCachedBuildComponent_Params
{
	class UAchCharacterBuildComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.GetBoneMeshComponnt
struct AAriseCharacterBase_GetBoneMeshComponnt_Params
{
	class UAchCharacterBoneMeshComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterBase.CollectAvailableLipPatternNames
struct AAriseCharacterBase_CollectAvailableLipPatternNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseActionCharacter.AriseBuildCharacter.K2_IsBuildCharacter
struct AAriseBuildCharacter_K2_IsBuildCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseBuildCharacterFunctionLibrary.MakePCBuildParameter2
struct UAriseBuildCharacterFunctionLibrary_MakePCBuildParameter2_Params
{
	EArisePartyID                                      InPartyID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InFlags;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAchCharacterBuildParameters                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseActionCharacter.AriseBuildCharacterFunctionLibrary.MakePCBuildParameter
struct UAriseBuildCharacterFunctionLibrary_MakePCBuildParameter_Params
{
	EArisePartyID                                      InPartyID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAchCharacterBuildParameters                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseActionCharacter.AriseBuildCharacterPawn.SetCollisionEnable
struct AAriseBuildCharacterPawn_SetCollisionEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseBuildCharacterPawn.SendAnimCommand
struct AAriseBuildCharacterPawn_SendAnimCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseBuildCharacterPawn.OnUnbuildCharacter
struct AAriseBuildCharacterPawn_OnUnbuildCharacter_Params
{
};

// Function AriseActionCharacter.AriseBuildCharacterPawn.OnGetUserLoadAsset
struct AAriseBuildCharacterPawn_OnGetUserLoadAsset_Params
{
	TArray<struct FSoftObjectPath>                     OutAssetReference;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function AriseActionCharacter.AriseBuildCharacterPawn.OnBuildCharacter
struct AAriseBuildCharacterPawn_OnBuildCharacter_Params
{
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseWrinkle1
struct UAriseCharacterFacialComponent_SetPoseWrinkle1_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseWrinkle0
struct UAriseCharacterFacialComponent_SetPoseWrinkle0_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseIris
struct UAriseCharacterFacialComponent_SetPoseIris_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseFacialPreset
struct UAriseCharacterFacialComponent_SetPoseFacialPreset_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseFacialDefault
struct UAriseCharacterFacialComponent_SetPoseFacialDefault_Params
{
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEyelid
struct UAriseCharacterFacialComponent_SetPoseEyelid_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEye_LookAt
struct UAriseCharacterFacialComponent_SetPoseEye_LookAt_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEye_Highlight
struct UAriseCharacterFacialComponent_SetPoseEye_Highlight_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEmotion1
struct UAriseCharacterFacialComponent_SetPoseEmotion1_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetPoseEmotion0
struct UAriseCharacterFacialComponent_SetPoseEmotion0_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterFacialComponent.SetEnableLip
struct UAriseCharacterFacialComponent_SetEnableLip_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetUseKeyFrameAnim
struct UAriseCharacterPhysicsComponent_SetUseKeyFrameAnim_Params
{
	bool                                               InUseKeyFrameAnim;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetUseGroudCollision
struct UAriseCharacterPhysicsComponent_SetUseGroudCollision_Params
{
	bool                                               InGroudCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetSimulationSpace
struct UAriseCharacterPhysicsComponent_SetSimulationSpace_Params
{
	EAnimPhysSimSpaceType                              InSimulationSpace;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetGravityPowerWithInterpolation
struct UAriseCharacterPhysicsComponent_SetGravityPowerWithInterpolation_Params
{
	float                                              InGravityPower;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetGravityPower
struct UAriseCharacterPhysicsComponent_SetGravityPower_Params
{
	float                                              InGravityPower;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateUpperParts
struct UAriseCharacterPhysicsComponent_SetEnableSimulateUpperParts_Params
{
	bool                                               InEnableSimulateUpperParts;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateLowerParts
struct UAriseCharacterPhysicsComponent_SetEnableSimulateLowerParts_Params
{
	bool                                               InEnableSimulateLowerParts;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateHairParts
struct UAriseCharacterPhysicsComponent_SetEnableSimulateHairParts_Params
{
	bool                                               InEnableSimulateHairParts;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetEnableSimulateExtraParts
struct UAriseCharacterPhysicsComponent_SetEnableSimulateExtraParts_Params
{
	bool                                               InEnableSimulateExtraParts;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDynamicsWeightWithInterpolation
struct UAriseCharacterPhysicsComponent_SetDynamicsWeightWithInterpolation_Params
{
	float                                              InDynamicsWeight;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDynamicsWeight
struct UAriseCharacterPhysicsComponent_SetDynamicsWeight_Params
{
	float                                              InDynamicsWeight;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDampingPowerWithInterpolation
struct UAriseCharacterPhysicsComponent_SetDampingPowerWithInterpolation_Params
{
	float                                              InDampingPower;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetDampingPower
struct UAriseCharacterPhysicsComponent_SetDampingPower_Params
{
	float                                              InDampingPower;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetClothBlendWeightWithInterpolation
struct UAriseCharacterPhysicsComponent_SetClothBlendWeightWithInterpolation_Params
{
	float                                              InClothBlendWeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetClothBlendWeight
struct UAriseCharacterPhysicsComponent_SetClothBlendWeight_Params
{
	float                                              InClothBlendWeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.SetCancelTeleportMoveByBone
struct UAriseCharacterPhysicsComponent_SetCancelTeleportMoveByBone_Params
{
	bool                                               bInCancelTeleportMoveByBone;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.IsUseKeyFrameAnim
struct UAriseCharacterPhysicsComponent_IsUseKeyFrameAnim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.IsUseGroudCollision
struct UAriseCharacterPhysicsComponent_IsUseGroudCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.IsCancelTeleportMoveByBone
struct UAriseCharacterPhysicsComponent_IsCancelTeleportMoveByBone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetSimulationSpace
struct UAriseCharacterPhysicsComponent_GetSimulationSpace_Params
{
	EAnimPhysSimSpaceType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetGravityPower
struct UAriseCharacterPhysicsComponent_GetGravityPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetDynamicsWeight
struct UAriseCharacterPhysicsComponent_GetDynamicsWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetDampingPower
struct UAriseCharacterPhysicsComponent_GetDampingPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.GetClothBlendWeight
struct UAriseCharacterPhysicsComponent_GetClothBlendWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateUpperParts
struct UAriseCharacterPhysicsComponent_EnableSimulateUpperParts_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateLowerParts
struct UAriseCharacterPhysicsComponent_EnableSimulateLowerParts_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateHairParts
struct UAriseCharacterPhysicsComponent_EnableSimulateHairParts_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCharacterPhysicsComponent.EnableSimulateExtraParts
struct UAriseCharacterPhysicsComponent_EnableSimulateExtraParts_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCinematicCharacter.SetEnableUpdateDynamics
struct AAriseCinematicCharacter_SetEnableUpdateDynamics_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AriseActionCharacter.AriseCinematicCharacter.GetAllSpawnedCharacters
struct AAriseCinematicCharacter_GetAllSpawnedCharacters_Params
{
	TArray<class AAriseCinematicCharacter*>            OutSpawnedCharacters;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function AriseActionCharacter.AriseLodPreviewBoneMeshComponent.GetCurrentLODInfo
struct UAriseLodPreviewBoneMeshComponent_GetCurrentLODInfo_Params
{
	struct FColor                                      Color;                                                    // (Parm, OutParm, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FAchCharacterLODInfo                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AriseActionCharacter.AriseLodPreviewCharacter.ImportFromDatabase
struct AAriseLodPreviewCharacter_ImportFromDatabase_Params
{
};

// Function AriseActionCharacter.AriseLodPreviewCharacter.GetModelList
struct AAriseLodPreviewCharacter_GetModelList_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AriseActionCharacter.AriseLodPreviewCharacter.BuildModel
struct AAriseLodPreviewCharacter_BuildModel_Params
{
	struct FString                                     ModelID;                                                  // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
