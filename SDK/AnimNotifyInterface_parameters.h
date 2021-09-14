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

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimExtraPartsEnd
struct UAnimNotifyInterface_C_OnAnimExtraPartsEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimExtraPartsBegin
struct UAnimNotifyInterface_C_OnAnimExtraPartsBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGroundCollisionEnd
struct UAnimNotifyInterface_C_OnAnimGroundCollisionEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGroundCollisionBegin
struct UAnimNotifyInterface_C_OnAnimGroundCollisionBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimHairPartsEnd
struct UAnimNotifyInterface_C_OnAnimHairPartsEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimHairPartsBegin
struct UAnimNotifyInterface_C_OnAnimHairPartsBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimLowerPartsEnd
struct UAnimNotifyInterface_C_OnAnimLowerPartsEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimLowerPartsBegin
struct UAnimNotifyInterface_C_OnAnimLowerPartsBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUpperPartsEnd
struct UAnimNotifyInterface_C_OnAnimUpperPartsEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUpperPartsBegin
struct UAnimNotifyInterface_C_OnAnimUpperPartsBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimSimulationSpaceEnd
struct UAnimNotifyInterface_C_OnAnimSimulationSpaceEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimSimulationSpaceBegin
struct UAnimNotifyInterface_C_OnAnimSimulationSpaceBegin_Params
{
	EAnimPhysSimSpaceType                              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDampingPowerEnd
struct UAnimNotifyInterface_C_OnAnimDampingPowerEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDampingPowerBegin
struct UAnimNotifyInterface_C_OnAnimDampingPowerBegin_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGravityPowerEnd
struct UAnimNotifyInterface_C_OnAnimGravityPowerEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimGravityPowerBegin
struct UAnimNotifyInterface_C_OnAnimGravityPowerBegin_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDynamicsWeightEnd
struct UAnimNotifyInterface_C_OnAnimDynamicsWeightEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDynamicsWeightBegin
struct UAnimNotifyInterface_C_OnAnimDynamicsWeightBegin_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUseKeyFrameAnimEnd
struct UAnimNotifyInterface_C_OnAnimUseKeyFrameAnimEnd_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimUseKeyFrameAnimBegin
struct UAnimNotifyInterface_C_OnAnimUseKeyFrameAnimBegin_Params
{
	bool                                               on;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnCreateMagicAssetOverrideDeep
struct UAnimNotifyInterface_C_OnCreateMagicAssetOverrideDeep_Params
{
	class UBtlMagicAsset*                              MagicAsset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtl_MagicSpawnLocationParam                OverrideLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBtl_MagicSpawnRotationParam                OverrideRotation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ABtlMagicActor*                              SpawnMagic;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRadialBlurTick
struct UAnimNotifyInterface_C_OnAnimRadialBlurTick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRadialBlurEnd
struct UAnimNotifyInterface_C_OnAnimRadialBlurEnd_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRadialBlurBegin
struct UAnimNotifyInterface_C_OnAnimRadialBlurBegin_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnCreateMagicAssetOverride
struct UAnimNotifyInterface_C_OnCreateMagicAssetOverride_Params
{
	class UBtlMagicAsset*                              MagicAsset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBtl_MagicSpawnParam                        SpawnParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ABtlMagicActor*                              SpawnMagic;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDangerNoticeEnd
struct UAnimNotifyInterface_C_OnAnimDangerNoticeEnd_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimDangerNoticeBegin
struct UAnimNotifyInterface_C_OnAnimDangerNoticeBegin_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimAimWeaponEnd
struct UAnimNotifyInterface_C_OnAnimAimWeaponEnd_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimAimWeaponBegin
struct UAnimNotifyInterface_C_OnAnimAimWeaponBegin_Params
{
	float                                              AngleMin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnSetRotationWorld
struct UAnimNotifyInterface_C_OnSetRotationWorld_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnSetLocationWorld
struct UAnimNotifyInterface_C_OnSetLocationWorld_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnSetLocationRelativeTarget
struct UAnimNotifyInterface_C_OnSetLocationRelativeTarget_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RelativeOnGroundHeight;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeSuperArmorEnd
struct UAnimNotifyInterface_C_OnAnimChangeSuperArmorEnd_Params
{
	bool                                               SuperArmor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeSuperArmorBegin
struct UAnimNotifyInterface_C_OnAnimChangeSuperArmorBegin_Params
{
	bool                                               SuperArmor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeIsNotDieEnd
struct UAnimNotifyInterface_C_OnAnimChangeIsNotDieEnd_Params
{
	bool                                               IsNotDie;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeIsNotDieBegin
struct UAnimNotifyInterface_C_OnAnimChangeIsNotDieBegin_Params
{
	bool                                               IsNotDie;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeReceiveDamageEnd
struct UAnimNotifyInterface_C_OnAnimChangeReceiveDamageEnd_Params
{
	bool                                               ReceiveDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeReceiveDamageBegin
struct UAnimNotifyInterface_C_OnAnimChangeReceiveDamageBegin_Params
{
	bool                                               ReceiveDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeInvincibleEnd
struct UAnimNotifyInterface_C_OnAnimChangeInvincibleEnd_Params
{
	bool                                               Invincible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeInvincibleBegin
struct UAnimNotifyInterface_C_OnAnimChangeInvincibleBegin_Params
{
	bool                                               Invincible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeVisibilityEnd
struct UAnimNotifyInterface_C_OnAnimChangeVisibilityEnd_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeVisibilityBegin
struct UAnimNotifyInterface_C_OnAnimChangeVisibilityBegin_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnCreateMagicAsset
struct UAnimNotifyInterface_C_OnCreateMagicAsset_Params
{
	class UBtlMagicAsset*                              MagicAsset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABtlMagicActor*                              SpawnMagic;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRotationEnd
struct UAnimNotifyInterface_C_OnAnimRotationEnd_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimRotationBegin
struct UAnimNotifyInterface_C_OnAnimRotationBegin_Params
{
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimMovingEnd
struct UAnimNotifyInterface_C_OnAnimMovingEnd_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimMovingBegin
struct UAnimNotifyInterface_C_OnAnimMovingBegin_Params
{
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnIgnoreUnitPushEnd
struct UAnimNotifyInterface_C_OnIgnoreUnitPushEnd_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnIgnoreUnitPushBegin
struct UAnimNotifyInterface_C_OnIgnoreUnitPushBegin_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnManualTurnEnd
struct UAnimNotifyInterface_C_OnManualTurnEnd_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnManualTurnBegin
struct UAnimNotifyInterface_C_OnManualTurnBegin_Params
{
	float                                              RotationRate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeGravityTick
struct UAnimNotifyInterface_C_OnAnimChangeGravityTick_Params
{
	float                                              GravityScale;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimTurnTargetEnd
struct UAnimNotifyInterface_C_OnAnimTurnTargetEnd_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimTurnTargetBegin
struct UAnimNotifyInterface_C_OnAnimTurnTargetBegin_Params
{
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleRange;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeGravityEnd
struct UAnimNotifyInterface_C_OnAnimChangeGravityEnd_Params
{
};

// Function AnimNotifyInterface.AnimNotifyInterface_C.OnAnimChangeGravityBegin
struct UAnimNotifyInterface_C_OnAnimChangeGravityBegin_Params
{
	float                                              GravityScale;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
