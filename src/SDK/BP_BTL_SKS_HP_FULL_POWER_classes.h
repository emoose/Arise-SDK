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

// BlueprintGeneratedClass BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C
// 0x0008 (0x0058 - 0x0050)
class UBP_BTL_SKS_HP_FULL_POWER_C : public UBtlStatusBuff_SkillBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_SKS_HP_FULL_POWER.BP_BTL_SKS_HP_FULL_POWER_C");
		return ptr;
	}


	bool Received_IsCalculateDamageAddCondition(class ABtlCharacterBase* AttackerActor, const TScriptInterface<class UBtlAttackCollisionInterface>& AttackCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FBtlArtsHandle& ArtsHandle, const struct FBtlArtsData& ArtsData, bool IsGuard, bool IsCritical, bool IsWeakness, bool IsResistanc);
	void BeginPlay();
	void EndPlay();
	void OnMaxHp(class UBtlStatusComponent* SelfComponent);
	void ExecuteUbergraph_BP_BTL_SKS_HP_FULL_POWER(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
