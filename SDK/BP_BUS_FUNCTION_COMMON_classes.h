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

// BlueprintGeneratedClass BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C
// 0x0000 (0x0028 - 0x0028)
class UBP_BUS_FUNCTION_COMMON_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BUS_FUNCTION_COMMON.BP_BUS_FUNCTION_COMMON_C");
		return ptr;
	}


	void STATIC_PlayUnitBoostBreakText(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext);
	void STATIC_IsEnemyLive(class UObject* __WorldContext, bool* EnemyLive);
	void STATIC_CallOnSpecialDown(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, class UObject* __WorldContext);
	void STATIC_BtlCameraReset(float Range, float Ofset, class UObject* __WorldContext);
	void STATIC_BtlCameraSetNoLerp(class UObject* __WorldContext);
	void STATIC_IsEnemyMysticBootEnable(class UObject* __WorldContext, bool* Enable);
	void STATIC_BtlUnitIsHpRateRange(class ABtlCharacterBase* BtlUnit, float Min, float Max, class UObject* __WorldContext, bool* Enable);
	void STATIC_BtlUnitSetFixLocation(class ABtlCharacterBase* Unit, const struct FVector& Location, class UObject* __WorldContext);
	void STATIC_IsMomentaryRushDamage(class ABtlCharacterBase* AttackerUnit, class ABtlCharacterBase* RecieverUnit, const struct FBtlArtsData& ArtsData, bool RushBreak, class UObject* __WorldContext, bool* IsHit, bool* IsDamage);
	void STATIC_BtlUnitDeathEnemies(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext);
	void STATIC_BtlUnitCoreReborn(class ABtlCharacterBase* BtlUnit, int CoreHP, const struct FName& CollisionName, class UObject* __WorldContext);
	void STATIC_BtlUnitSetCoreMaterialOn(class ABtlCharacterBase* BtlUnit, float GlowScale, float EmissivePower, const struct FLinearColor& EmissiveColor, const struct FLinearColor& GlowColor, class UObject* __WorldContext, TArray<struct FName>* MaterialNames);
	void STATIC_BtlUnitSetReviveAll(bool ARI, bool SIO, bool NNA, bool ZGU, bool MNK, bool YRA, class UObject* __WorldContext);
	void STATIC_BtlUnitSetStrikeGageMax(bool ARI, bool SIO, bool NNA, bool ZGU, bool MNK, bool YRA, class UObject* __WorldContext);
	void STATIC_BtlSetupEnemyMystic(bool Enable, class UObject* __WorldContext);
	void STATIC_BtlUnitPlayBreakEffect(class ABtlCharacterBase* BtlUnit, const struct FVector& EffefctOfset, bool CursorPosition, float Range, class UShapeComponent* AttackerColision, class UBtlSphereComponent* RecieveCollision, class UObject* __WorldContext);
	void STATIC_BtlResetTransformParty(const struct FRotator& Rotation, class UObject* __WorldContext, TArray<struct FVector>* Location);
	void STATIC_BtlResetTransformEnemy(const struct FRotator& Rotation, class UObject* __WorldContext, TArray<struct FVector>* Location);
	void STATIC_BtlResetTransformBattleLocation(bool PlayerDisable, class UObject* __WorldContext);
	void STATIC_BtlUnitPlayArtsById(class ABtlCharacterBase* BtlUnit, const struct FBtlArts_XmlDatatableLabel& Label, bool Force, class UObject* __WorldContext);
	void STATIC_BtlUnitSetRevive(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext);
	void STATIC_BtlUnitOnFlexibleNotifyEndBoss(int UsetInteger, float UserFloat, const struct FString& UserString, class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial0, struct FBtlCoreMaterial* CoreMaterial1);
	void STATIC_BtlUnitResetPartyTarget(const struct FBtlUnitID& BtlUnitID, class UObject* __WorldContext);
	void STATIC_BtlUnitResetActionStateIdle(class UObject* __WorldContext);
	void STATIC_BtlUnitSetSpecialStrikeUI(class ABtlCharacterBase* BtlUnit, float Time, bool IsSlow, bool IsBlur, bool IsUI, const struct FName& TransformName, EArisePartyID CharaID, class UObject* __WorldContext);
	void STATIC_BtlUnitStopAIParty(bool Stop, class UObject* __WorldContext);
	void STATIC_BtlUnitPlayStrikeDownEffect(class ABtlCharacterBase* BtlUnit, const struct FVector& Location, int Num, class UObject* __WorldContext);
	void STATIC_BtlUnitPlayDeadEvent(class ABtlCharacterBase* BtlUnit, class ULevelSequence* LevelSequence, bool Force, const struct FTransform& Transform, bool RecoveryTransform, class UObject* __WorldContext);
	void STATIC_BtlUnitOnFlexibleNotifyBeginBoss(int UsetInteger, float UserFloat, const struct FString& UserString, class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, struct FBtlCoreMaterial* CoreMaterial0, struct FBtlCoreMaterial* CoreMaterial1);
	void STATIC_BtlUnitSetSlowWorld(float Time, class UObject* __WorldContext);
	void STATIC_BtlUnitPlayCoreBreakEffect(class ABtlCharacterBase* BtlUnit, const struct FVector& Location, bool CursorPosition, float Range, class UObject* __WorldContext);
	void STATIC_BtlUnitGetHpPercentValue(class ABtlCharacterBase* BtlUnit, int Percent, class UObject* __WorldContext, int* Value);
	void STATIC_BtlUnitIsSpecialDown(class ABtlCharacterBase* BtlUnit, bool AirDownDisable, bool Boss, bool ChantForce, class UObject* __WorldContext, bool* DownEnable);
	void STATIC_BtlUnitPlayPhaseChangeEffect(class ABtlCharacterBase* BtlUnit, const struct FVector& EffefctOfset, bool CursorPosition, float Range, class UObject* __WorldContext);
	void STATIC_BtlUnitGetHpValue(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, int* Value);
	void STATIC_BtlUnitSetHpValue(class ABtlCharacterBase* BtlUnit, int HPValue, class UObject* __WorldContext);
	void STATIC_BtlUnitIsBlackBoardSignal(class ABtlCharacterBase* BtlUnit, const struct FName& SignalName, class UObject* __WorldContext, bool* IsSignal);
	void STATIC_BtlCameraAimOffsetOverride(bool OverrideAimOffset, float AimOffset, float Interpolate, class UObject* __WorldContext);
	void STATIC_BtlUnitPlayArtsForce(class ABtlCharacterBase* BtlUnit, const struct FName& ArtsName, bool CrossFade, bool FallCheck, class UObject* __WorldContext);
	void STATIC_BtlUnitPlayEndArts(class ABtlCharacterBase* BtlUnit, const struct FName& ArtsName, class UObject* __WorldContext);
	void STATIC_BtlSetTargetPlayer_UnitID_(const struct FBtlUnitID& TargetEnemy, bool CameraReset, class UObject* __WorldContext);
	void STATIC_BtlCameraDistanceOverride(bool OverrideDistance, float Distance, float Interpolate, class UObject* __WorldContext);
	void STATIC_BtlStrikeDownCountUp(class ABtlCharacterBase* Attacker, class UObject* __WorldContext);
	void STATIC_BtlCameraAngleOverride(bool OverridePitch, float Pitch, bool OverrideYaw, float Yaw, float Interpolate, class UObject* __WorldContext);
	void STATIC_BtlUnitPlayEnemyMystic(class ULevelSequence* LevelSequence, class ABtlCharacterBase* BtlUnit, const struct FTransform& Transform, const struct FName& ArtsName, const struct FName& Key, const struct FBtlHudVisible_DatatableLabel& HUDPreset, bool RecoveryTransform, bool PlayMysticSE, bool ScreenCaptureDisable, class UObject* __WorldContext);
	void STATIC_BtlCameraAngleReset(class UObject* __WorldContext);
	void STATIC_BtlCameraAngleOffset(float OffsetPitch, float OffsetYaw, float Interpolate, class UObject* __WorldContext);
	void STATIC_BtlGetUnitForBtlID_UnitID_(const struct FBtlUnitID& BtlIUnitID, bool AliveOnly, bool TargetableOnly, class UObject* __WorldContext, class ABtlCharacterBase** BtlUnit, bool* Find);
	void STATIC_BtlUnitDeath(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext);
	void STATIC_BtlUnitDeleteBlackBoardSignal(class ABtlCharacterBase* BtlUnit, const struct FName& SignalName, class UObject* __WorldContext);
	void STATIC_IsBtlUnitBtlID(class ABtlCharacterBase* BtlUnit, const struct FBtlUnitID& BtlID, class UObject* __WorldContext, bool* Find);
	void STATIC_BtlUnitGetHpRate(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, float* Rate);
	void STATIC_BtlUnitStopAI(class ABtlCharacterBase* BtlUnit, bool Stop, class UObject* __WorldContext);
	void STATIC_BtlUnitPlayEvent(class ULevelSequence* LevelSequence, class ABtlCharacterBase* BtlUnit, const struct FTransform& Transform, const struct FName& Key, const struct FBtlHudVisible_DatatableLabel& HUDPreset, bool RecoveryTransform, class UObject* __WorldContext);
	void STATIC_BtlUnitSetParticleActivate(class ABtlCharacterBase* BtlUnit, const struct FName& ParticleName, bool Activate, class UObject* __WorldContext);
	void STATIC_BtlUnitSetCoreMaterialOff(class ABtlCharacterBase* BtlUnit, float ParamValue, class UObject* __WorldContext, TArray<struct FName>* MaterialNames);
	void STATIC_BtlUnitSetMaterialVector(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialName, const struct FName& ParamName, const struct FLinearColor& ParamValue, class UObject* __WorldContext);
	void STATIC_BtlUniqueButtonIsJustPressed(class UObject* __WorldContext, bool* Result);
	void STATIC_BtlUniqueButtonIsPressed(class UObject* __WorldContext, bool* Result);
	void STATIC_BtlUnitBreakParts(class ABtlCharacterBase* BtlUnit, const struct FString& HidePartsName, const struct FString& VisiblePartsName, class UObject* __WorldContext);
	void STATIC_BtlUnitPlayArts(class ABtlCharacterBase* BtlUnit, const struct FName& Label, bool Force, class UObject* __WorldContext);
	void STATIC_BtlUnitUpdateUniqueDownHp(class ABtlCharacterBase* Attacker, class UBtlUnitScript* BtlUnitScript, int HPPercent, const struct FName& ArtsName, class UObject* __WorldContext, int* HP, bool* IsReactionOverride);
	void STATIC_BtlUnitSetCollision(class ABtlCharacterBase* BtlUnit, bool DamageEnable, bool CollisionEnable, const struct FString& CollisionName, bool CollisionSetup, class UObject* __WorldContext);
	void STATIC_BtlUnitIsState(class ABtlCharacterBase* BtlUnit, EBattleActionState State, class UObject* __WorldContext, bool* IsState);
	void STATIC_BtlUnitCheckUniqueDownHp(class ABtlCharacterBase* BtlUnit, int HP, int HPPercent, class UObject* __WorldContext, bool* IsUniqueDown, int* NextUniqueDownHp);
	void STATIC_BtlUnitSetUniqueDownHpInitialize(class ABtlCharacterBase* BtlUnit, int HPPercent, class UObject* __WorldContext, int* HP, int* NextUniqueDownHp);
	void STATIC_BtlUnitGetMaterialDynamics(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* Material);
	void STATIC_BtlUnitDebugPrintMaterialName(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext);
	void STATIC_BtlUnitSetMaterialParam(class ABtlCharacterBase* BtlUnit, const struct FName& MaterialName, const struct FName& ParamName, float ParamValue, class UObject* __WorldContext);
	void STATIC_BtlUnitSetMaterialParamAll(class ABtlCharacterBase* BtlUnit, const struct FName& ParamName, float ParamValue, TEnumAsByte<EAchCharacterBuildComponent> InComponentType, class UObject* __WorldContext);
	void STATIC_BtlArtsButtonIsPressed(class UObject* __WorldContext, bool* Result);
	void STATIC_BtlUnitSetHpPercent(class ABtlCharacterBase* BtlUnit, int HPPercent, class UObject* __WorldContext);
	void STATIC_BtlUnitSetVisiblePartsList(class ABtlCharacterBase* BtlUnit, bool Visble, TEnumAsByte<EAchCharacterBuildComponent> NewParam, class UObject* __WorldContext, TArray<struct FName>* Nemes);
	void STATIC_BtlGetUnitForBtlID(const struct FName& BtlIUnitID, bool AliveOnly, bool TargetableOnly, class UObject* __WorldContext, class ABtlCharacterBase** BtlUnit, bool* Find);
	void STATIC_BtlUnitGetSocketLocation(class ABtlCharacterBase* BtlUnit, const struct FName& SocketName, class UObject* __WorldContext, struct FVector* Location);
	void STATIC_BtlUnitSetBlackBoardSignal(class ABtlCharacterBase* BtlUnit, const struct FName& SignalName, class UObject* __WorldContext);
	void STATIC_BtlUnitSetDown(class UBtlUnitScript* BtlUnit, float DownSec, bool IsFoward, class UObject* __WorldContext);
	void STATIC_BtlUnitSetVisibleMesh(class ABtlCharacterBase* BtlUnit, const struct FString& MeshName, bool Visible, class UObject* __WorldContext);
	void STATIC_BtlUnitDebugPrintMeshName(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext);
	void STATIC_BtlUnitDebugPrintPartsName(class ABtlCharacterBase* BtlUnit, class UObject* __WorldContext);
	void STATIC_BtlUnitSetVisibleParts(class ABtlCharacterBase* BtlUnit, const struct FName& PartsName, bool Visible, TEnumAsByte<EAchCharacterBuildComponent> Component_Type, class UObject* __WorldContext);
	void STATIC_BtlUnitSetSpecialDown(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* BtlUnit, bool IsSpecialDown, class UObject* __WorldContext);
	void STATIC_BtlUnitSetRotationTarget(class ABtlCharacterBase* Unit, class ABtlCharacterBase* UnitTarget, class UObject* __WorldContext, bool* Result);
	void STATIC_BtlArtsIsStrikeAttack(const struct FBtlArtsData& BtlArtsData, class UObject* __WorldContext, bool* IsStrikeAttack);
	void STATIC_BtlArtsIsFlashRaid(const struct FBtlArtsData& BtlArtsData, class UObject* __WorldContext, bool* IsFlashRaid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
