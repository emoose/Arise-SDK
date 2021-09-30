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

// BlueprintGeneratedClass BP_BtlCharacterBase.BP_BtlCharacterBase_C
// 0x0128 (0x0F48 - 0x0E20)
class ABP_BtlCharacterBase_C : public ABtlCharacterBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E20(0x0008) (Transient, DuplicateTransient)
	class UBP_BtlAlphaMaskComponent_C*                 BP_BtlAlphaMaskComponent;                                 // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BtlSemiautoComponent_C*                  BP_BtlSemiautoComponent;                                  // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHitObjectMemory_C*                          HitObjectMemory;                                          // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReceivePhysicsPowerRate;                                  // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitStopTimer;                                             // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsManualTurn;                                             // 0x0E48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E49(0x0003) MISSED OFFSET
	float                                              ManualRotationRate;                                       // 0x0E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimWeaponAngleMin;                                        // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimWeaponAngleMax;                                        // 0x0E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimWeaponAngleSpeed;                                      // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoisonTimer;                                              // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParalyzeTimer;                                            // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E64(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    AbnormalEffect;                                           // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       RadialBlurSocketName;                                     // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadialBlurStrength;                                       // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadialBlurLength;                                         // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PoisonEffect;                                             // 0x0E80(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FrozenEffect;                                             // 0x0E88(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParalysisEffect;                                          // 0x0E90(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CurseEffect;                                              // 0x0E98(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FlashRaidParticle;                                        // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StrikeAttackAdded;                                        // 0x0EA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0EA9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    MomentaryRushEffect;                                      // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      OverlimitPartyVisual;                                     // 0x0EB8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EAbnormalType, class UClass*>                 AbnormalVisualMap;                                        // 0x0EC0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                AbnormalTaskPriority;                                     // 0x0F10(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0F14(0x0004) MISSED OFFSET
	class UClass*                                      FlashRaidVisualTask;                                      // 0x0F18(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrepareOverlimitPartyVisual;                              // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      JustAvoidVisualTask;                                      // 0x0F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrozenTimer;                                              // 0x0F30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0F34(0x0004) MISSED OFFSET
	class UBtlVisualRootTaskBase*                      RushVisualTask;                                           // 0x0F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MomentaryRushTask;                                        // 0x0F40(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlCharacterBase.BP_BtlCharacterBase_C");
		return ptr;
	}


	struct FBtlArtsHandle GetCollisionHostArtsHandle();
	class ABtlCharacterBase* GetCollisionHostCharacter();
	class UBtlHitObjectMemoryBase* GetCollisionHostHitObjectMemory();
	void OnCreateMagicAssetOverrideDeep(class UBtlMagicAsset* MagicAsset, const struct FBtl_MagicSpawnLocationParam& OverrideLocation, const struct FBtl_MagicSpawnRotationParam& OverrideRotation, class ABtlMagicActor** SpawnMagic);
	void OnCreateMagicAssetOverride(class UBtlMagicAsset* MagicAsset, const struct FBtl_MagicSpawnParam& SpawnParam, class ABtlMagicActor** SpawnMagic);
	void OnCreateMagicAsset(class UBtlMagicAsset* MagicAsset, class ABtlMagicActor** SpawnMagic);
	bool CanBoostAttackBreak(class ABtlCharacterBase* ReceiveUnit, const struct FBtlArtsData& ArtsData);
	void OnBeginMove();
	bool CanMysticAction(class ABtlCharacterBase* TargetUnit, struct FBtlArtsData* ArtsData);
	bool CanParalyzeAction(EBattleActionState State);
	void UseStrikeResource();
	void NotifyDead(class ABtlCharacterBase* DeadCharacter, struct FBtlArtsData* ArtsData);
	void OnBeginOverlimit(bool* RequestAccepted, class UBtlActionQuery** ActionQuery);
	struct FRotator FindLookAtRotation(const struct FVector& Start, const struct FVector& Target, bool IgnoreZAxis);
	void GetDirectionByTargetToCollision(class USceneComponent* AttackCollision, class AActor* Target, float Speed, float FloatingSpeed, struct FVector* Direction);
	void SuperAvoidProcess(class ABtlCharacterBase* DmgActor, const struct FBtlArtsData& AttackArtsData, bool* IsSuperAvoid);
	void GetFlashRaidPoint(float Distance, bool IsAir, struct FVector* FlashRaidPoint);
	bool HealBadStatus(class ABtlCharacterBase* Target, const struct FName& HitEffect, const struct FName& ArtsName);
	void OnDeadEvent();
	void RaiseDead(class ABtlCharacterBase* Target, const struct FName& HitEffect, const struct FName& ArtsName, int* ResultHealValue);
	void HealMagic(class ABtlCharacterBase* Target, const struct FName& HitEffect, const struct FName& ArtsName, int* ResultHealValue);
	void OnDeadCharacterEvent(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* DeadCharacter, const struct FBtlArtsData& ArtsData);
	void OnStateChange(EBattleActionState NowState, EBattleActionState PreState);
	void OnAttackBeginEvent(class ABtlCharacterBase* SelfCharacter, const struct FBtlArtsData& NowArts, EBattleActionState PreState);
	class UAlphaMaskComponent* GetAlphaMaskComponent();
	bool UseItemProcess(int ItemID);
	void HealHateProcess(class ABtlCharacterBase* Target, int Value);
	void DamageHateProcess(class ABtlCharacterBase* DmgActor, int DmgValue, bool TargetIsDie, const struct FBtlArtsData& ArtsData);
	void GetAbnormalEffectLocation(struct FVector* Result);
	void ParalyzeOnAction();
	void AbnormalTimerOnHit(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, bool IsGuard, bool IsCritical, bool IsWeakness, bool IsResistance);
	void TickAbnormal(EAbnormalType Abnormal, float DeltaTime);
	void EndAbnormal(EAbnormalType Abnormal);
	void BeginAbnormal(EAbnormalType Abnormal);
	void AddAbnormalValue(class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData, bool IsGuard, bool IsCritical, bool IsWeakness, bool IsResistance, class UBtlDamageSphereComponent* DmgCollision);
	void AutoStepProcess(class ABtlCharacterBase* DmgActor, bool* IsAutoStep);
	void EventOnEndOverlimit();
	void EventOnBeginOverlimit(bool* RequestAccepted, class UBtlActionQuery** ActionQuery);
	void StopTurnTarget();
	void UpdateStrikeAttackValue(bool IsCritical, bool IsWeakness, const struct FBtlArtsData& ArtsData);
	void HitStopProcess(class ABtlCharacterBase* DmgActor, const TScriptInterface<class UBtlAttackCollisionInterface>& AtkCollision, class UBtlDamageSphereComponent* DmgCollision, float HitStopSec, bool IsCritical);
	void ReactionProcess(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FVector& HitEffectLocation, const struct FRotator& HitEffectRotation, bool bIsCritical);
	void HitProcess(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor, const struct FVector& HitEffectLocation, const struct FRotator& HitEffectRotation, int DmgValue, bool IsCritical);
	void GuardProcess(class UShapeComponent* AtkCollision, class UBtlDamageSphereComponent* DmgCollision, class ABtlCharacterBase* DmgActor, const struct FVector& HitEffectLocation, int DmgValue);
	void IsTargetGuard(class ABtlCharacterBase* DmgActor, bool RunAutoGuard, bool* IsGuard);
	void HoldHeightOnHit(const TScriptInterface<class UBtlAttackCollisionInterface>& AtkCollision, class ABtlCharacterBase* DmgActor);
	void BlowProcess(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor, float KnockBackSpeed, float KnockFloatSpeed, bool IsMighty, float DownSec);
	void KnockbackProcess(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor);
	void CalculateHitEffectTransform(class UShapeComponent* AtkCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, struct FVector* Location, struct FRotator* Rotation);
	void TargetDamageProcess(class ABtlCharacterBase* DmgActor, float KnockbackSec, const struct FRotator& HitEffectRotation);
	void BodyDamageProcess(class UShapeComponent* AtkCollision, class UBtlDamageSphereComponent* DmgCollision, class ABtlCharacterBase* DmgActor, const struct FBtlArtsData& ArtsData, int DmgValue, bool IsNotDie, bool IsInstantDeath, bool IsCritical, const TScriptInterface<class UBtlAttackCollisionInterface>& AtkCollisionInterface, bool* TargetDie, bool* IsSuccessBoostAttackBreak);
	void CoreDamageProcess(class UBtlDamageSphereComponent* DmgCollision, int DmgValue, class ABtlCharacterBase* DmgActor, const struct FBtlArtsData& ArtsData, bool* IsCoreBreak);
	void JustStepProcess(class ABtlCharacterBase* DmgActor, bool* JustStep);
	void JustGuardProcess(class ABtlCharacterBase* DmgActor, bool* JustGuard);
	void AutoGuardProcess(class ABtlCharacterBase* DmgActor, bool* IsAutoGuard);
	void IsCorrectHitCollisionProcess(class ABtlCharacterBase* DmgActor, bool IsFriendlyFire, bool* IsCorrect);
	class UBtlSemiautoComponent* GetSemiautoComponent();
	void SetAnimRotationYaw(float Yaw);
	void SetAnimMovingRotationToDirection(bool Enable);
	void SetAnimMovingToArtsTarget();
	void SetAnimMovingTargetLocation(const struct FVector& TargetPoint);
	void UpdateManualTurn(const struct FVector& StickVectorInWorld, float Delta);
	void SetHomingMove(bool Enable, const struct FVector& Velocity);
	void SetTurnTargetArts(const struct FBtlArtsData& ArtsData);
	void SetTurnTarget(float Range, float Speed, float Time);
	void UserConstructionScript();
	void OnSetLocationRelativeTarget(float Distance, float Height, bool RelativeOnGroundHeight);
	void OnSetLocationWorld(const struct FVector& Location);
	void OnSetRotationWorld(const struct FRotator& Rotation);
	void OnAnimChangeSuperArmorEnd(bool SuperArmor);
	void OnAnimChangeSuperArmorBegin(bool SuperArmor);
	void OnAnimChangeIsNotDieEnd(bool IsNotDie);
	void OnAnimAimWeaponBegin(float AngleMin, float AngleMax, float AngleSpeed);
	void OnAnimAimWeaponEnd();
	void OnAnimChangeIsNotDieBegin(bool IsNotDie);
	void OnAnimDangerNoticeBegin();
	void OnAnimDangerNoticeEnd();
	void OnAnimRadialBlurBegin(const struct FName& SocketName, float Strength, float Length);
	void OnAnimRadialBlurTick(float DeltaTime);
	void OnAnimRadialBlurEnd();
	void OnAnimDynamicsWeightBegin(float Value, float InterpolationTime);
	void OnAnimUseKeyFrameAnimBegin(bool on);
	void OnAnimUseKeyFrameAnimEnd(bool Reset);
	void OnAnimDynamicsWeightEnd(bool Reset, float InterpolationTime);
	void OnAnimGravityPowerBegin(float Value, float InterpolationTime);
	void OnAnimGravityPowerEnd(bool Reset, float InterpolationTime);
	void OnAnimDampingPowerBegin(float Value, float InterpolationTime);
	void OnAnimDampingPowerEnd(bool Reset, float InterpolationTime);
	void OnAnimSimulationSpaceBegin(EAnimPhysSimSpaceType Type);
	void OnAnimSimulationSpaceEnd(bool Reset);
	void OnAnimUpperPartsBegin(bool on);
	void OnAnimUpperPartsEnd(bool Reset);
	void OnAnimLowerPartsBegin(bool on);
	void OnAnimLowerPartsEnd(bool Reset);
	void OnAnimHairPartsBegin(bool on);
	void OnAnimHairPartsEnd(bool Reset);
	void OnAnimGroundCollisionBegin(bool on);
	void OnAnimGroundCollisionEnd(bool Reset);
	void OnAnimChangeReceiveDamageEnd(bool ReceiveDamage);
	void OnAnimExtraPartsBegin(bool on);
	void OnAnimExtraPartsEnd(bool Reset);
	void ReceiveBeginPlay();
	void OnReceiveFlexibleAnimNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor);
	void OnReceiveFlexibleAnimNotifyEnd(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor);
	void OnAnimChangeReceiveDamageBegin(bool ReceiveDamage);
	void OnAnimChangeInvincibleEnd(bool Invincible);
	void OnAnimChangeInvincibleBegin(bool Invincible);
	void ReviveProcess(class ABtlCharacterBase* Healer, int HealValue);
	void AttackEndEvent_Event(class ABtlCharacterBase* SelfCharacter, EBattleActionState NowState, const struct FBtlArtsData& PreArts);
	void OnAnimChangeVisibilityEnd(bool Visibility);
	void OnAnimChangeVisibilityBegin(bool Visibility);
	void OnAnimRotationEnd();
	void OnAnimRotationBegin(float InterpSpeed);
	void TargetDeadProcess(class ABtlCharacterBase* DmgActor, const struct FBtlArtsData& ArtsData);
	void OnAnimMovingEnd();
	void OnAnimMovingBegin(float InterpSpeed);
	void OnIgnoreUnitPushEnd();
	void OnIgnoreUnitPushBegin();
	void BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_0_OnStateChangeEvent__DelegateSignature(EBattleActionState NowState, EBattleActionState PreState);
	void BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_6_BtlAttackArtsSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_0_BtlStatusSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent);
	void BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_1_BtlStatusSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent);
	void BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_2_BtlStatusSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent);
	void BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_3_BtlStatusAbnormalTickSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType, float DeltaTime);
	void BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_4_BtlStatusAbnormalSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType);
	void BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_5_BtlStatusAbnormalSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent, EAbnormalType AbnormalType);
	void OnManualTurnBegin(float RotationRate);
	void 򹘞򬿾�0{k();
	void OnManualTurnEnd();
	void PlayFlashRaidEnable();
	void OnAnimChangeGravityTick(float GravityScale);
	void OnAnimTurnTargetBegin(float InterpSpeed, float AngleRange);
	void BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterBeginMomentaryRushSignature__DelegateSignature(class ABtlCharacterBase* Unit);
	void BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterEndMomentaryRushSignature__DelegateSignature(class ABtlCharacterBase* Unit);
	void OnAnimTurnTargetEnd();
	void OnAnimChangeGravityEnd();
	void BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_5_BtlHeelSignature__DelegateSignature(class ABtlCharacterBase* Healer, class ABtlCharacterBase* Receiver, int HealValue);
	void OnAnimChangeGravityBegin(float GravityScale);
	void OnEndInspirationArts(class ABtlCharacterBase* Unit, const struct FName& InspirationArts);
	void BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_8_BtlEnduranceBreakSignature__DelegateSignature();
	void OnReceiveMessage(const struct FString& Message, class UObject* UserData);
	void BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidChangeStateSignature__DelegateSignature(class ABtlCharacterBase* Unit, EBtlFlashRaidState Prev, EBtlFlashRaidState Now);
	void OnSelfDead();
	void OnFlashRaidIn();
	void EventOnFlashRaidIn();
	void BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker);
	void OnPostGiveDamage(class ABtlCharacterBase* TargetUnit, struct FBtlArtsData* ArtsData);
	void RequestMysticArts(class ABtlCharacterBase* TargetUnit, struct FBtlArtsData* ArtsData);
	void BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_7_BtlChangeOperationSignature__DelegateSignature(class ABtlCharacterBase* PrevOperationUnit, class ABtlCharacterBase* NowOperationUnit);
	void OnPlayerOperationDisabled();
	void BndEvt__BattleStatusComponent_K2Node_ComponentBoundEvent_10_BtlPrepareOverlimitSignature__DelegateSignature(class UBtlStatusComponent* SelfComponent);
	void SetCapsuleCollisionResponseBtlUnits(bool Enable);
	void SetCapsuleCollisionResponseOnAttack(bool Enable);
	void BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_11_BtlCollisionSignature__DelegateSignature(const struct FBtlCollisionSignatureData& CollisionParam);
	void OnEndCounterRaid();
	void BndEvt__BattleEventDispatcher_K2Node_ComponentBoundEvent_12_BtlSimpleSignature__DelegateSignature();
	void BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_13_ArtsEvent__DelegateSignature(const struct FBtlArtsHandle& ArtsHandle);
	void BndEvt__BattleActionProcessor_K2Node_ComponentBoundEvent_15_ArtsRequestEvent__DelegateSignature(class UBtlArtsQuery* ArtsQuery);
	void OnFlashRaidNotAccept(class UBtlActionQuery* ActionQuery);
	void ExecuteUbergraph_BP_BtlCharacterBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
