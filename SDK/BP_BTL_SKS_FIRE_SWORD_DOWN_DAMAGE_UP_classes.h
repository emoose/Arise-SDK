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

// BlueprintGeneratedClass BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP.BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP_C
// 0x0009 (0x0059 - 0x0050)
class UBP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP_C : public UBtlStatusBuff_SkillBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (Transient, DuplicateTransient)
	bool                                               IsUniqueSkillUnit;                                        // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP.BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP_C");
		return ptr;
	}


	bool Received_IsCalculateDamageAddCondition(class ABtlCharacterBase* AttackerActor, const TScriptInterface<class UBtlAttackCollisionInterface>& AttackCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FBtlArtsHandle& ArtsHandle, const struct FBtlArtsData& ArtsData, bool IsGuard, bool IsCritical, bool IsWeakness, bool IsResistanc);
	void BeginPlay();
	void ExecuteUbergraph_BP_BTL_SKS_FIRE_SWORD_DOWN_DAMAGE_UP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
