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

// BlueprintGeneratedClass BP_BUS_GIN_000.BP_BUS_GIN_000_C
// 0x0060 (0x0120 - 0x00C0)
class UBP_BUS_GIN_000_C : public UBP_BtlUnitScript_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (Transient, DuplicateTransient)
	int                                                DownCount;                                                // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UniqueDownHp;                                             // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBtlCoreMaterial                            CoreMaterial;                                             // 0x00D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               CoreMaterialName;                                         // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       SummonMonsterID;                                          // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABtlCharacterBase*                           ArtsTargetEnemys;                                         // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBladeHit;                                               // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              CheckEatTime;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FInsh;                                                    // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TArray<struct FName>                               SpawnInsIDs;                                              // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CoreHPMax;                                                // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FlushRaidCount;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BUS_GIN_000.BP_BUS_GIN_000_C");
		return ptr;
	}


	void CanStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel, bool* Enabled);
	void CoreMaterialInitialize();
	void SetInsID();
	void UpdateCore(float DeltaTime);
	void SetCoreBreak(class USceneComponent* RecieveCollision);
	void OnReceiveDamage(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision, int Damage, bool IsCoreBreak, bool* IsReactionOverride);
	void IsSpecialDown(bool* Enable);
	void ArtsHum();
	void ArtsBladeHit_Initialize();
	void UpdateCheckSpecialDown(class ABtlCharacterBase* BtlUnitAttacker, bool IsCoreBreak, const struct FBtlArtsData& BtlArtsData, class USceneComponent* RecieveCollision, bool* IsReactionOverride);
	void BtlUnitSetDown(class UBtlUnitScript* 򠸖񸰄�0, bool IsForward, float InputPin);
	void SetUniqueDownHpInitialize();
	void OnFlexibleNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject);
	void OnTick(float DeltaTime);
	void OnDeadCinematicEvent();
	void OnGiveDamage(class UShapeComponent* AttackCollision, const struct FBtlArtsData& AttackArts, class ABtlCharacterBase* ReceiveUnit, class UBtlSphereComponent* ReceiveCollision, int Damage);
	void OnWaitDeathStrokeBegin();
	void OnDead();
	void OnBeginPlay();
	void OnEndStrikeSmash(const struct FBtlStrikeSmashEndParam& Param);
	void OnFlexibleNotifyEnd(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject);
	void OnCoreReborn();
	void ReceiveOnStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel);
	void ExecuteUbergraph_BP_BUS_GIN_000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
