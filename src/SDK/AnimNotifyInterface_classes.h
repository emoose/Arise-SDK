#pragma once

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotifyInterface.AnimNotifyInterface_C
// 0x0000 (0x0028 - 0x0028)
class UAnimNotifyInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyInterface.AnimNotifyInterface_C");
		return ptr;
	}


	void OnAnimExtraPartsEnd(bool Reset);
	void OnAnimExtraPartsBegin(bool on);
	void OnAnimGroundCollisionEnd(bool Reset);
	void OnAnimGroundCollisionBegin(bool on);
	void OnAnimHairPartsEnd(bool Reset);
	void OnAnimHairPartsBegin(bool on);
	void OnAnimLowerPartsEnd(bool Reset);
	void OnAnimLowerPartsBegin(bool on);
	void OnAnimUpperPartsEnd(bool Reset);
	void OnAnimUpperPartsBegin(bool on);
	void OnAnimSimulationSpaceEnd(bool Reset);
	void OnAnimSimulationSpaceBegin(EAnimPhysSimSpaceType Type);
	void OnAnimDampingPowerEnd(bool Reset, float InterpolationTime);
	void OnAnimDampingPowerBegin(float Value, float InterpolationTime);
	void OnAnimGravityPowerEnd(bool Reset, float InterpolationTime);
	void OnAnimGravityPowerBegin(float Value, float InterpolationTime);
	void OnAnimDynamicsWeightEnd(bool Reset, float InterpolationTime);
	void OnAnimDynamicsWeightBegin(float Value, float InterpolationTime);
	void OnAnimUseKeyFrameAnimEnd(bool Reset);
	void OnAnimUseKeyFrameAnimBegin(bool on);
	void OnCreateMagicAssetOverrideDeep(class UBtlMagicAsset* MagicAsset, const struct FBtl_MagicSpawnLocationParam& OverrideLocation, const struct FBtl_MagicSpawnRotationParam& OverrideRotation, class ABtlMagicActor** SpawnMagic);
	void OnAnimRadialBlurTick(float DeltaTime);
	void OnAnimRadialBlurEnd();
	void OnAnimRadialBlurBegin(const struct FName& SocketName, float Strength, float Length);
	void OnCreateMagicAssetOverride(class UBtlMagicAsset* MagicAsset, const struct FBtl_MagicSpawnParam& SpawnParam, class ABtlMagicActor** SpawnMagic);
	void OnAnimDangerNoticeEnd();
	void OnAnimDangerNoticeBegin();
	void OnAnimAimWeaponEnd();
	void OnAnimAimWeaponBegin(float AngleMin, float AngleMax, float AngleSpeed);
	void OnSetRotationWorld(const struct FRotator& Rotation);
	void OnSetLocationWorld(const struct FVector& Location);
	void OnSetLocationRelativeTarget(float Distance, float Height, bool RelativeOnGroundHeight);
	void OnAnimChangeSuperArmorEnd(bool SuperArmor);
	void OnAnimChangeSuperArmorBegin(bool SuperArmor);
	void OnAnimChangeIsNotDieEnd(bool IsNotDie);
	void OnAnimChangeIsNotDieBegin(bool IsNotDie);
	void OnAnimChangeReceiveDamageEnd(bool ReceiveDamage);
	void OnAnimChangeReceiveDamageBegin(bool ReceiveDamage);
	void OnAnimChangeInvincibleEnd(bool Invincible);
	void OnAnimChangeInvincibleBegin(bool Invincible);
	void OnAnimChangeVisibilityEnd(bool Visibility);
	void OnAnimChangeVisibilityBegin(bool Visibility);
	void OnCreateMagicAsset(class UBtlMagicAsset* MagicAsset, class ABtlMagicActor** SpawnMagic);
	void OnAnimRotationEnd();
	void OnAnimRotationBegin(float InterpSpeed);
	void OnAnimMovingEnd();
	void OnAnimMovingBegin(float InterpSpeed);
	void OnIgnoreUnitPushEnd();
	void OnIgnoreUnitPushBegin();
	void OnManualTurnEnd();
	void OnManualTurnBegin(float RotationRate);
	void OnAnimChangeGravityTick(float GravityScale);
	void OnAnimTurnTargetEnd();
	void OnAnimTurnTargetBegin(float InterpSpeed, float AngleRange);
	void OnAnimChangeGravityEnd();
	void OnAnimChangeGravityBegin(float GravityScale);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
