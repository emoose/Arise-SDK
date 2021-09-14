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

// BlueprintGeneratedClass BP_BTL_SKS_ELM_ARTS_DAMAGE_UP.BP_BTL_SKS_ELM_ARTS_DAMAGE_UP_C
// 0x0010 (0x0060 - 0x0050)
class UBP_BTL_SKS_ELM_ARTS_DAMAGE_UP_C : public UBtlStatusBuff_SkillBase
{
public:
	TArray<EBtlElementType>                            Element;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_SKS_ELM_ARTS_DAMAGE_UP.BP_BTL_SKS_ELM_ARTS_DAMAGE_UP_C");
		return ptr;
	}


	bool Received_IsCalculateDamageAddCondition(class ABtlCharacterBase* AttackerActor, const TScriptInterface<class UBtlAttackCollisionInterface>& AttackCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FBtlArtsHandle& ArtsHandle, const struct FBtlArtsData& ArtsData, bool IsGuard, bool IsCritical, bool IsWeakness, bool IsResistanc);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
