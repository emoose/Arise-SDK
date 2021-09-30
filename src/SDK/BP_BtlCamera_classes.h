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

// BlueprintGeneratedClass BP_BtlCamera.BP_BtlCamera_C
// 0x0ED4 (0x2E54 - 0x1F80)
class ABP_BtlCamera_C : public ABtl_Camera
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1F80(0x0008) (Transient, DuplicateTransient)
	float                                              AimJumpHeightRate;                                        // 0x1F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceChk;                                              // 0x1F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightChk;                                                // 0x1F90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawChk;                                                   // 0x1F94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateValueChk;                                      // 0x1F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsShowDebug;                                              // 0x1F9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMouseControl;                                           // 0x1F9D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x1F9E(0x0002) MISSED OFFSET
	struct FVector                                     PrevSetAimPoint;                                          // 0x1FA0(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevSetCamPoint;                                          // 0x1FAC(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              IgnoreBlockingActors;                                     // 0x1FB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class ABP_BattleManagerBase_C*                     BtlManager;                                               // 0x1FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class ABtlCharacterBase*                           StrikeAttackUnit;                                         // 0x1FD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              StrikeAttackTimer;                                        // 0x1FD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrikeAttackInTime;                                       // 0x1FDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlashRaidTimer;                                           // 0x1FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlashRaidDistance;                                        // 0x1FE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlashRaidInTime;                                          // 0x1FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // 0x1FEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              LimitHeightDown;                                          // 0x1FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isExternalAimOffsetOverride;                              // 0x1FF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1FF5(0x0003) MISSED OFFSET
	float                                              ExternalAimOffset;                                        // 0x1FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpolateCoefficient;                                   // 0x1FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LimitHeightUp;                                            // 0x2000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2004(0x0004) MISSED OFFSET
	class UBtlTargetCursorComponent*                   CursorComponent;                                          // 0x2008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              DistanceStart;                                            // 0x2010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceTarget;                                           // 0x2014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceElapsedTime;                                      // 0x2018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FocusUnitTimer;                                           // 0x201C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FocusUnitDistance;                                        // 0x2020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FocusUnitInTime;                                          // 0x2024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FocusUnitDirection;                                       // 0x2028(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugCreateCameraTime;                                    // 0x2034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x2038(0x0008) MISSED OFFSET
	struct FMinimalViewInfo                            SavedCutSceneCamera;                                      // 0x2040(0x0D20) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	float                                              ExternalYawOffset;                                        // 0x2D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExternalPitchOffset;                                      // 0x2D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceInterpolateCoefficient;                           // 0x2D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnableInputYaw;                                         // 0x2D6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnableInputHeight;                                      // 0x2D6D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isExternalYawOverride;                                    // 0x2D6E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isExternalPitchOverride;                                  // 0x2D6F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExternalYawOverride;                                      // 0x2D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExternalPitchOverride;                                    // 0x2D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpolateCoefficient_Timer;                             // 0x2D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpolateCoefficient_Start;                             // 0x2D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpolateCoefficient_End;                               // 0x2D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpolateCoefficient_Time;                              // 0x2D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CutsceneToTimer;                                          // 0x2D88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isExternalDistanceOverride;                               // 0x2D8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2D8D(0x0003) MISSED OFFSET
	float                                              ExternalDistanceOverride;                                 // 0x2D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleTimer;                                                // 0x2D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InputAnyControl;                                          // 0x2D98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2D99(0x0003) MISSED OFFSET
	float                                              FocusLocationTimer;                                       // 0x2D9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FocusLocationDirection;                                   // 0x2DA0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FocusLocationStartInAimPoint;                             // 0x2DAC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FocusLocationStartInCamPoint;                             // 0x2DB8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FocusLocationBackInAimPoint;                              // 0x2DC4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FocusLocationBackInCamPoint;                              // 0x2DD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ExternalInputLimitHeightDown;                             // 0x2DDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExternalInputLimitHeightUp;                               // 0x2DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExternalInputLimitYawMin;                                 // 0x2DE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExternalInputLimitYawMax;                                 // 0x2DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isExternalInputLimitHeight;                               // 0x2DEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isExternalInputLimitYaw;                                  // 0x2DED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x2DEE(0x0002) MISSED OFFSET
	float                                              ExternalInputLimitPitchMin;                               // 0x2DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExternalInputLimitPitchMax;                               // 0x2DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isExternalInputLimitPitch;                                // 0x2DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2DF9(0x0003) MISSED OFFSET
	float                                              NormalBattleEndTimer;                                     // 0x2DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpolateCoefficient_CamPoint;                          // 0x2E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EasingActionTimer;                                        // 0x2E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EasingActionStartAimPoint;                                // 0x2E08(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EasingActionStartCamPoint;                                // 0x2E14(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnoreRewindTimer;                                        // 0x2E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetCameraCutsceneEndFlag;                               // 0x2E24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2E25(0x0003) MISSED OFFSET
	float                                              StrikeAttackSoundBoostEnd2Timer;                          // 0x2E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpolateCoefficient_IgnoreTimer;                       // 0x2E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AimPoint_BeforeFocus;                                     // 0x2E30(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CamPoint_BeforeFocus;                                     // 0x2E3C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ReturnBeforeFocusUnitTimer;                               // 0x2E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DistanceTableScore;                                       // 0x2E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnoreAutoResetTimer;                                     // 0x2E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlCamera.BP_BtlCamera_C");
		return ptr;
	}


	void LimitAimHeight(const struct FVector& AimPoint, struct FVector* NewAimPoint);
	void ResetCameraInstant();
	void UpdateResetToYaw(float DeltaSeconds);
	void LimitCameraHeight(const struct FVector& CamPoint, struct FVector* NewCamPoint);
	void SetInputAnyControl(bool New);
	void ExecuteEasingInspiration(float DeltaSeconds);
	void ExecuteEasingOverlimit(float DeltaSeconds);
	void SetInterpolateCoefficient_CamPoint(float CoefficientCamPoint);
	void GetCamPointNormalBattleEnd(const struct FVector& AimPoint, float Yaw, struct FVector* CamPoint);
	void GetAimPointNormalBattleEnd(struct FVector* AimPoint);
	void ExecuteNormalBattleEnd(float DeltaSeconds);
	void SetInputLimitPitch(bool Enable, float PitchMin, float PitchMax);
	void SetInputLimitHeight(bool Enable, float Low, float Hight);
	void SetInputLimitYaw(bool Enable, float YawMin, float YawMax);
	void GetCamPointFocusLocation(const struct FVector& AimPoint, const struct FVector& CamDirection, struct FVector* Result);
	void GetCamDirectionFocusLocation(const struct FVector& AimPoint, struct FVector* Result);
	void ExecuteFocusLocation(float DeltaSeconds);
	void GetCamPointPreSmash(const struct FVector& AimPoint, float Yaw, struct FVector* CamPoint);
	void GetAimPointPreSmash(struct FVector* AimPoint);
	void ExecutePreStrikeSmash(float DeltaSeconds);
	void ClearInputAnyFlag();
	void UpdateRewindToYawHeight(float DeltaSeconds);
	void GetResetCameraValue(float* Yaw, float* Height);
	void ResetCamera();
	void SetDistanceInterpolateValue(float Interpolate);
	void SetExternalDistanceOverride(bool UseOverride, float OverrideDistance);
	void StartCutsceneToNormal();
	void CalculateNormalCamera(float DeltaSeconds, struct FVector* NewLocation, struct FRotator* NewRotation, struct FVector* NewAimPoint, struct FVector* NewCamPoint);
	void ExecuteCutsceneTo(float DeltaSeconds);
	void UpdateInterpolateCoefficient();
	void SetExternalPitchOverride(bool UseOverride, float OverridePitch);
	void SetExternalYawOverride(bool UseOverride, float OverrideYaw);
	void SetEnableInputHeight(bool Enable);
	void SetEnableInputYaw(bool Enable);
	void SetExternalPitchOffset(float AddPitchOffset);
	void SetExternalYawOffset(float AddYawOffset);
	void DrawDebugCamera(const struct FVector& Location, const struct FRotator& Rotation, const struct FText& Text, const struct FColor& Color);
	void GetFocusUnitRate(float* Rate);
	void GetCamDirectionFocusUnit(const struct FVector& AimPoint, struct FVector* Result);
	void GetCamPointFocusUnit(const struct FVector& AimPoint, const struct FVector& CamDirection, struct FVector* Result);
	void GetAimPointFocusUnit(struct FVector* Result);
	void ExecuteFocusUnit(float DeltaSeconds);
	void UpdateCamDistanceNormal(float CheckDistance);
	void GetCamDistanceTargetNormal(float* DistanceTarget);
	void SetInterpolateCoefficient(float Coefficient, float Time);
	void SetNormalCamera(const struct FVector& Aim, float Yaw, float Height, float Distance);
	void SetExternalAimOffset(bool UseOverride, float AddAimOffset);
	void LookupNormal(const struct FVector& AimPoint, const struct FVector& CamPoint, struct FVector* ResultAimPoint, struct FVector* ResultCamPoint);
	void ExecuteFlashRaid(float DeltaSeconds);
	void ExecuteStrikeAttack(float DeltaSeconds);
	void DetectBlocking(const struct FVector& AimPoint, const struct FVector& CamPoint, struct FVector* EscapePoint);
	void OldDetectBlocking(const struct FVector& AimPoint, const struct FVector& CamPoint, struct FVector* EscapePoint);
	void GetFittingYawNormal(const struct FVector& AimPoint, const struct FVector& CamPoint, float* Yaw);
	void ExecuteNormal(float DeltaSeconds);
	void SavedPrevPoints(const struct FVector& AimPoint, const struct FVector& CamPoint);
	void UpdateCursorList();
	void ChangeTarget();
	void GetTargetCursorPoint(struct FVector* Result);
	void SetMouseControl(bool IsMouseControl, bool IsGamepadControl);
	void GetCamDirectionNormal(float Yaw, struct FVector* Directional);
	void ExecuteInitialize();
	void SetInputHeightAdd(float Value);
	void SetInputYawAdd(float Value);
	void GetAimPointNormalCurrent(struct FVector* Result);
	void GetCamPointNormal(const struct FVector& AimPoint, const struct FVector& CamDirectionXY, struct FVector* Result);
	void GetAimPointNormal(struct FVector* Result);
	void UserConstructionScript();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlFlashRaidSignature__DelegateSignature(class ABtlCharacterBase* Unit);
	void SubStateStart(EBattleState State);
	void SubStateEnd(EBattleState State);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlStrikeSmashEndSignature__DelegateSignature(const struct FBtlStrikeSmashEndParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlFlashRaidSignature__DelegateSignature(class ABtlCharacterBase* Unit);
	void SetFocusUnitCamera(bool Enable, class ABtlCharacterBase* Unit, class USceneComponent* Part);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeSmashBeginSignature__DelegateSignature(const struct FBtlStrikeSmashBeginParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCameraModeChangeSignature__DelegateSignature(class ABtl_Camera* BtlCamera, EBtlCameraMode Prev, EBtlCameraMode Now);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_16_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlMysticEndSignature__DelegateSignature(const struct FBtlMysticEndParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlChangeTargetSignature__DelegateSignature(class ABtlCharacterBase* Unit, class UBtlTargetCursorComponent* NewTargetComponent, class UBtlTargetCursorComponent* PrevTargetComponent);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlPreStrikeSmashBeginWarpStrikerSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Striker);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void SetFocusLocationCamera(bool Enable, const struct FVector& Location, float Distance, float InTime, float keepTime, float EndTime);
	void SetNormalBtlWinCamera();
	void SetOverlimitUnitCamera(class ABtlCharacterBase* Unit);
	void SetInspirationUnitCamera(class ABtlCharacterBase* Unit);
	void ReturnBeforeFocusUnit();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_10_BtlPreStrikeSmashEndSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlPreStrikeSmashBeginSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Striker);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlSpecialStrikeBeginSignature__DelegateSignature(const struct FBtlSpecialStrikeBeginParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlSpawnCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character, bool Reinforcement);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_13_BtlSpecialStrikeEndSignature__DelegateSignature(const struct FBtlSpecialStrikeEndParam& Param);
	void ExecuteUbergraph_BP_BtlCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
