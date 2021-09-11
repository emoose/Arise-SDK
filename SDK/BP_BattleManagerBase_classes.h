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

// BlueprintGeneratedClass BP_BattleManagerBase.BP_BattleManagerBase_C
// 0x0148 (0x0B28 - 0x09E0)
class ABP_BattleManagerBase_C : public ABtlManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (Transient, DuplicateTransient)
	TArray<class UAlphaMaskComponent*>                 AlphaMaskComponents;                                      // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FName                                       SpecialStrikeLabel;                                       // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               BackupVisibleLevel;                                       // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TMap<class ABtlCharacterBase*, struct FTransform>  BackupMysticTransforms;                                   // 0x0A10(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UBtlFadeWidgetBase*                          MysticEndFade;                                            // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AScreenMaskBase*                             ScreenMask;                                               // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	class ABP_ScreenMaskBase_C*                        BattleExitMask;                                           // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      BattleExitMaskClass;                                      // 0x0A78(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AWindDirectionalSource*                      BattleWind;                                               // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AWindDirectionalSource*>              PrevWind;                                                 // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      WindControl;                                              // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BattleEncountMaskClass;                                   // 0x0AA0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0AA8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_BattleManagerBase.BP_BattleManagerBase_C.NotUse_EncountGroupDatabasePath
	unsigned char                                      UnknownData01[0x28];                                      // 0x0AD0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_BattleManagerBase.BP_BattleManagerBase_C.NotUse_ArtsDatabasePath
	unsigned char                                      UnknownData02[0x28];                                      // 0x0AF8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_BattleManagerBase.BP_BattleManagerBase_C.NotUse_UnitDatabasePath
	struct FName                                       MysticScreenMaskTag;                                      // 0x0B20(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleManagerBase.BP_BattleManagerBase_C");
		return ptr;
	}


	void RunBoostAttackReserveDwon(class ABtlCharacterBase* Attacker);
	void UserConstructionScript();
	void GetSpecialStrikeLabel(struct FName* Label);
	void IsReadySpecialStrike(bool* Result);
	void OnMysticFadeInFinished();
	void MysticFadeIn();
	void RegisterMysticEndFade(class UClass* FadeWidget);
	void AllUnitStateReset();
	void ChangeMysticUnitVisibility(class ABtlCharacterBase* PlayUnit, class ABtlCharacterBase* TargetUnit, bool In);
	void RestoreMysticTransform();
	void BackupMysticTransform(const struct FBtlMysticBeginParam& MysticParam);
	void GetAlphaMaskComponents(TArray<class UAlphaMaskComponent*>* NewParam);
	void ClearAlphaMaskComponent();
	void RemoveAlphaMaskComponent(class UAlphaMaskComponent* Remove);
	void RegistAlphaMaskComponent(class UAlphaMaskComponent* Regist);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_5_BtlStrikeSmashBeginSignature__DelegateSignature(const struct FBtlStrikeSmashBeginParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_7_BtlStrikeSmashEndSignature__DelegateSignature(const struct FBtlStrikeSmashEndParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_9_BtlMysticBeginSignature__DelegateSignature(const struct FBtlMysticBeginParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlMysticEndSignature__DelegateSignature(const struct FBtlMysticEndParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventEndSignature__DelegateSignature(const struct FBtlCutSceneEndParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlSimpleSignature__DelegateSignature();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlMysticBeginSignature__DelegateSignature(const struct FBtlMysticBeginParam& Param);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_6_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_8_BtlFlashRaidSignature__DelegateSignature(class ABtlCharacterBase* Unit);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCoreBreakSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, class UBtlDamageSphereComponent* DmgCollision);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_11_BtlStrikeAttackReserveDownSignature__DelegateSignature(class ABtlCharacterBase* Attacker);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_12_BtlDamageSignature__DelegateSignature(class ABtlCharacterBase* Attacker, class ABtlCharacterBase* Receiver, const struct FBtlArtsData& PreArts, int PrevHp, bool InstantDeath, bool Critical, int DamageValue);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_14_BtlStrikeAttackSignature__DelegateSignature(class ABtlCharacterBase* Striker);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_15_BtlCollisionSignature__DelegateSignature(const struct FBtlCollisionSignatureData& CollisionParam);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlRequestUseItemBeginSignature__DelegateSignature(class ABtlCharacterBase* ItemUser, int ItemID);
	void ReceiveInitialize();
	void Receive_BattleResume();
	void Receive_BattlePause();
	void ReceiveFinalize();
	void NotReadySpecialStrike();
	void ReadySpecialStrike(const struct FName& NewSpecialStrike);
	void PlayBattleExitMask();
	void OnBattleExitMaskDestory(class AActor* DestroyedActor);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnBeginBattleScene();
	void OnGoBackTitle();
	void OnEndLoad(EAriseSaveResult iResult);
	void @OnExitMaskStartAnimFinish();
	void ExecuteUbergraph_BP_BattleManagerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
