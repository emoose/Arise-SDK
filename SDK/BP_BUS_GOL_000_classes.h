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

// BlueprintGeneratedClass BP_BUS_GOL_000.BP_BUS_GOL_000_C
// 0x0028 (0x00E8 - 0x00C0)
class UBP_BUS_GOL_000_C : public UBP_BtlUnitScript_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (Transient, DuplicateTransient)
	struct FBtlCoreMaterial                            CoreMaterial;                                             // 0x00C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               CoreMaterialName;                                         // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CoreHPMax;                                                // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FlushRaidCount;                                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BUS_GOL_000.BP_BUS_GOL_000_C");
		return ptr;
	}


	void CanStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel, bool* Enabled);
	void SetUniqueDownHpInitialize();
	void UpdateCore(float DeltaTime);
	void SetCoreBreak(class USceneComponent* RecieveCollision);
	void CoreMaterialInitialize();
	void UpdateCheckSpecialDown(class ABtlCharacterBase* BtlUnitAttacker, bool IsCoreBreak, class USceneComponent* RecieveCollision, const struct FBtlArtsData& BtlArtsData, bool* IsReactionOverride);
	void OnReceiveDamage(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision, int Damage, bool IsCoreBreak, bool* IsReactionOverride);
	void OnBeginPlay();
	void OnTick(float DeltaTime);
	void OnFlexibleNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject);
	void OnCoreReborn();
	void OnFlexibleNotifyEnd(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject);
	void OnWaitDeathStrokeBegin();
	void ReceiveOnStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel);
	void ExecuteUbergraph_BP_BUS_GOL_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
