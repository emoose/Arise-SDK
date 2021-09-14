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

// BlueprintGeneratedClass BP_BUS_SIO_000.BP_BUS_SIO_000_C
// 0x0028 (0x00E8 - 0x00C0)
class UBP_BUS_SIO_000_C : public UBP_BtlUnitScript_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (Transient, DuplicateTransient)
	bool                                               IsArtsSwapped;                                            // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsManualReloadInputReserved;                              // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BombShotEnable;                                           // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00CB(0x0005) MISSED OFFSET
	TArray<struct FName>                               UNIQUE_ACTION;                                            // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBP_DerivedInputStateComponent_C*            DerivedInputStateComponent;                               // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BUS_SIO_000.BP_BUS_SIO_000_C");
		return ptr;
	}


	void OnFilterComboArts(const struct FBtlArtsData& ArtsData, bool* Result);
	void InitializeBombBullet();
	int GetBombBulletMax();
	int GetBombBullet();
	void OnRequestArtsMagicOverride(const struct FName& ArtsLabel, struct FName* Result, bool* IgnoreArtsCost);
	void TryExplodeArts();
	void PlayExplodeArts(const struct FName& UniqueArtsLabel);
	bool CanReload(bool AutoReload);
	bool CanExplodeArts(const struct FName& ExplodeArtsLabel);
	void OnBoostAttackTraits(class UShapeComponent* AttackCollision, const struct FBtlArtsData& AttackArts, class ABtlCharacterBase* ReceiveUnit, class UBtlSphereComponent* ReceiveCollision, bool* bIsSuccessBoostBreak);
	void SetBombBulletNum(int Num, bool IsEndAction);
	void OnPlayableMystic(struct FName* MysticLabel);
	void GetExplodeArtsLabel(const struct FBtlArtsData& SourceArtsData, struct FName* ArtsLabel);
	void AssortFlexibleNotify(int UserInteger, float UserFloat, const struct FString& UserString, bool IsBegin, const struct FLinearColor& UserColor);
	void OnFlexibleNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject);
	void OnFlexibleNotifyEnd(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject);
	void OnBeginPlay();
	void AttackBegin(class ABtlCharacterBase* SelfCharacter, const struct FBtlArtsData& NowArts, EBattleActionState PreState);
	void OnBeginCancelRange(const struct FActionCancelParam& CancelParam);
	void SwapButtonPressed(const struct FName& ButtonName, EBtlInputEventType Type);
	void OnButtonPressed(const struct FName& ButtonName, EBtlInputEventType Type);
	void SwapButtonReleased(const struct FName& ButtonName, EBtlInputEventType Type);
	void AttackButtonPressed(const struct FName& ButtonName, EBtlInputEventType Type);
	void OnPostBeginBattle();
	void ExecuteUbergraph_BP_BUS_SIO_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
