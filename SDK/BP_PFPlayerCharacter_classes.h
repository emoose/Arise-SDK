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

// BlueprintGeneratedClass BP_PFPlayerCharacter.BP_PFPlayerCharacter_C
// 0x0063 (0x0BD3 - 0x0B70)
class ABP_PFPlayerCharacter_C : public APFPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B70(0x0008) (Transient, DuplicateTransient)
	float                                              DefaultWalkSpeed;                                         // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultRunSpeed;                                          // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultJumpVelocity;                                      // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultJumpTime;                                          // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAcceleration;                                      // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B8C(0x0004) MISSED OFFSET
	TArray<float>                                      MoveSpeedRate;                                            // 0x0B90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentMoveSpeedIndex;                                    // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFlyMode;                                                 // 0x0BA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BA5(0x0003) MISSED OFFSET
	float                                              DebugDashSpeed;                                           // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FovIndex;                                                 // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      FovList;                                                  // 0x0BB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bDash;                                                    // 0x0BC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0BC1(0x0003) MISSED OFFSET
	float                                              FovChangeTime;                                            // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableChangeFov;                                         // 0x0BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bToggleDashFov;                                           // 0x0BC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPFPlayerCollisionPreset>              CurrentCollisionPreset;                                   // 0x0BCA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWallHitEnable;                                           // 0x0BCB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallHitNotifyDistanceWork;                                // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyFlyModeMovement;                                    // 0x0BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugVisibility;                                         // 0x0BD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartSwimSurface;                                        // 0x0BD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PFPlayerCharacter.BP_PFPlayerCharacter_C");
		return ptr;
	}


	void SetDebugVisibility(bool InNewValue);
	void IsDebugInputEnable(bool* bOut);
	void AdsorbGround();
	void IsIdle(bool* OutIdle);
	void PlaySearchSwim();
	void IdleTransLadder(int InBeginStepNum, int InTotalStepNum, const struct FVector& BeginLocation, const struct FRotator& BeginRotation, const struct FName& InPhysMaterialName);
	void LadderTransIdle();
	void LadderTransFloating();
	void SetCollisionPreset(TEnumAsByte<EPFPlayerCollisionPreset> InNewPreset);
	void CanOpenPFMenuTop(bool* CanOpen);
	void GetCurrentJumpZVelocity(float* JumpZVelocity);
	void ExecuteFlyModeMovement(float DeltaTime);
	void ChangeFlyMode(bool FlyMode);
	void ChangeJumpRate(float Rate);
	void ChangeMoveSpeedRate(float Rate);
	void SetupActionState();
	void UserConstructionScript();
	void OnMoveBlockedBy(const struct FHitResult& Impact);
	void OnResetCharacter(bool bInIndoorMode);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PFPlayerCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
