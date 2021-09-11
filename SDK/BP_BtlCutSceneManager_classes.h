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

// BlueprintGeneratedClass BP_BtlCutSceneManager.BP_BtlCutSceneManager_C
// 0x0034 (0x0844 - 0x0810)
class ABP_BtlCutSceneManager_C : public ABtlCutSceneManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0810(0x0008) (Transient, DuplicateTransient)
	TArray<struct FName>                               BackupVisibleLevel;                                       // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	class ULevelStreaming*                             MysticLevelStream;                                        // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                MysticLevelLoadCount;                                     // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	class AActor*                                      WindManagerActor;                                         // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               WindStashTickEnabled;                                     // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               WindStashTickActive;                                      // 0x0841(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddStreamLevel;                                           // 0x0842(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMysticLevelStreamComplated;                              // 0x0843(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlCutSceneManager.BP_BtlCutSceneManager_C");
		return ptr;
	}


	bool IsMysticLevelInvisiableComplated();
	bool IsMysticLevelVisiableComplated();
	bool IsMysticLevelReleased();
	void IsLeanmedMystic(class ABtlCharacterBase* TargetCharacter, bool* Result);
	void UserConstructionScript();
	void PrePlayMystic();
	void PreEndMystic();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_0_BtlCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character);
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_1_BtlCharacterSignature__DelegateSignature(class ABtlCharacterBase* Character);
	void LoadRequestMysticLevel();
	void UnloadRequestMysticLevel();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_2_BtlEventBeginSignature__DelegateSignature(const struct FBtlCutSceneBeginParam& Param);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Received_OnPlayEvent();
	void Received_OnEndEvent();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_3_BtlSimpleSignature__DelegateSignature();
	void ReservationPlayMystic();
	void BndEvt__EventDispatcher_K2Node_ComponentBoundEvent_4_BtlSimpleSignature__DelegateSignature();
	void ExecuteUbergraph_BP_BtlCutSceneManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
