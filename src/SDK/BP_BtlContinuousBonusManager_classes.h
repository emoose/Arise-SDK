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

// BlueprintGeneratedClass BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C
// 0x000C (0x035C - 0x0350)
class ABP_BtlContinuousBonusManager_C : public ABtlContinuousBonusManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	int                                                EnemyCount;                                               // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlContinuousBonusManager.BP_BtlContinuousBonusManager_C");
		return ptr;
	}


	void DefeatEnemyLevelCheck(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, struct FName* Result);
	void UserConstructionScript();
	void Received_Initialize();
	void Received_Finalize();
	void OnUseItem_Event(int ItemID, EArisePartyID PartyId, bool UseItem);
	void OnEndBattle();
	void OnDeadCharacter(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& ArtsData);
	void OnBeginArtsStrikeAttack(class ABtlCharacterBase* Striker);
	void OnBeginArtsStrikeSmash(const struct FBtlStrikeSmashBeginParam& Param);
	void OnSpecialDown(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver);
	void OnApplyReward(EBtlResultType Cause);
	void OnBoostAttackBreak(const struct FBtlCollisionSignatureData& CollisionParam);
	void ExecuteUbergraph_BP_BtlContinuousBonusManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
