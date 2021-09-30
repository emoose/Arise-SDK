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

// BlueprintGeneratedClass BP_BTL_SKS_ACC_SUB_AG_DAMAGE_UP.BP_BTL_SKS_ACC_SUB_AG_DAMAGE_UP_C
// 0x0028 (0x0078 - 0x0050)
class UBP_BTL_SKS_ACC_SUB_AG_DAMAGE_UP_C : public UBtlStatusBuff_SkillBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (Transient, DuplicateTransient)
	struct FBtlArtsHandle                              LastArtsRequestId;                                        // 0x0058(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_SKS_ACC_SUB_AG_DAMAGE_UP.BP_BTL_SKS_ACC_SUB_AG_DAMAGE_UP_C");
		return ptr;
	}


	void OnArtsRequest(class UBtlArtsQuery* ArtsQuery);
	bool IsLastArts(struct FBtlArtsData* RequestArtsData);
	bool Received_IsCalculateDamageAddCondition(class ABtlCharacterBase* AttackerActor, const TScriptInterface<class UBtlAttackCollisionInterface>& AttackCollision, class ABtlCharacterBase* DmgActor, class UBtlDamageSphereComponent* DmgCollision, const struct FBtlArtsHandle& ArtsHandle, const struct FBtlArtsData& ArtsData, bool IsGuard, bool IsCritical, bool IsWeakness, bool IsResistanc);
	void BeginPlay();
	void EndPlay();
	void ExecuteUbergraph_BP_BTL_SKS_ACC_SUB_AG_DAMAGE_UP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
