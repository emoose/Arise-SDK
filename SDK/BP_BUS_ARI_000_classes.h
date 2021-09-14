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

// BlueprintGeneratedClass BP_BUS_ARI_000.BP_BUS_ARI_000_C
// 0x0098 (0x0158 - 0x00C0)
class UBP_BUS_ARI_000_C : public UBP_BtlUnitScript_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (Transient, DuplicateTransient)
	float                                              HotTimeSec;                                               // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurnTimeSec;                                              // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFireSwordUse;                                           // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFireSwordFadeout;                                       // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	float                                              FireSwordAlpha;                                           // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireSwordEmissive;                                        // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFireRightArmUse;                                        // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFireRightArmFadeout;                                    // 0x00DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFireLeftArmUse;                                         // 0x00DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFireLeftArmFadeout;                                     // 0x00DF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRightArmAlpha;                                        // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRightArmEmissive;                                     // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireLeftArmAlpha;                                         // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireLeftArmEmissive;                                      // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireSwordChargingTime;                                    // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireSwordTimeLimit;                                       // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsStoring;                                                // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCounterRange;                                           // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
	struct FString                                     FireSwordBuff_Power;                                      // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               UNIQUE_ACTION;                                            // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UBP_DerivedInputStateComponent_C*            DerivedInputStateComponent;                               // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     Firesword_min_Color_A_KING;                               // 0x0128(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Firesword_min_Color_B_KING;                               // 0x0134(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Firesword_min_Color_A_NONE;                               // 0x0140(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Firesword_min_Color_B_NONE;                               // 0x014C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BUS_ARI_000.BP_BUS_ARI_000_C");
		return ptr;
	}


	void OnFilterComboArts(const struct FBtlArtsData& ArtsData, bool* Result);
	float GetFireSwordTimeLimit();
	float GetHPMax();
	float GetFireSwordChargePower();
	int GetFireSwordFirstDamage();
	float GetFireUseHpMax();
	int GetFireSwordUsedHp();
	void SetFireSwordUsedHp(int UsedHp);
	void PlayFireSword(const struct FName& FireSwordArtsLabel);
	void CanFireSword(const struct FName& FireSwordArtsLabel, bool bAutoRequest, bool* ArtsData);
	void CanFireSwordCharge(bool* TryFireSword);
	void ChargeFireSword(float DeltaTime, bool* TryFireSword);
	void OnBoostAttackTraits(class UShapeComponent* AttackCollision, const struct FBtlArtsData& AttackArts, class ABtlCharacterBase* ReceiveUnit, class UBtlSphereComponent* ReceiveCollision, bool* bIsSuccessBoostBreak);
	void CreateLastMysticBinding(class UBtlCutSceneBindingParam** Binding);
	void SpawnChargeRankChangedEffect();
	void GetFireSwordChargeRank(int* Rank);
	void OnGetBoostAttackAirSub(struct FName* Result);
	void OnGetBoostAttackSub(struct FName* Result);
	void OnGetBoostAttackAir(struct FName* Result);
	void OnGetBoostAttack(struct FName* Result);
	void OnPlayableMystic(struct FName* MysticLabel);
	void StartFireSwordUseForStrike();
	void AssortFlexibleNotify(const struct FString& UserString, const struct FLinearColor& UserColor, bool Fresnel_ON);
	void OnReceiveDamage(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision, int Damage, bool IsCoreBreak, bool* IsReactionOverride);
	void ToStoringArtsNext();
	void FadeOutProcess(bool NotFadeAlpha, bool* IsFadeOutFlag, float* FadeOutEmissive, float* FadeOutAlpha, float* DeltaTime, bool* IsFinish);
	void StartFireLeftArm();
	void StartFireRightArm();
	void SetMatParamBody(float Alpha, float Emissive);
	void SetMatParamWeapon(float Alpha, float Emissive);
	void SetMatParamLeftArm(float Alpha, float Emissive);
	void SetMatParamRightArm(float Alpha, float Emissive);
	void TickFireSword(float DeltaTime);
	void StartFireSwordUse();
	void OnTick(float DeltaTime);
	void OnFlexibleNotifyEnd(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject);
	void OnFlexibleNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject);
	void OnBeginPlay();
	void AttackBegin(class ABtlCharacterBase* SelfCharacter, const struct FBtlArtsData& NowArts, EBattleActionState PreState);
	void OnFireSwordCharge(float DeltaTime);
	void OnEndFireSwordChange();
	void OnBeginCancelRange(const struct FActionCancelParam& CancelParam);
	void OnEndMystic(const struct FBtlMysticEndParam& Param);
	void OnGiveDamage(class UShapeComponent* AttackCollision, const struct FBtlArtsData& AttackArts, class ABtlCharacterBase* ReceiveUnit, class UBtlSphereComponent* ReceiveCollision, int Damage);
	void ExecuteUbergraph_BP_BUS_ARI_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
