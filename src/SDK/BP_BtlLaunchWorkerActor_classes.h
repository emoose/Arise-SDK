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

// BlueprintGeneratedClass BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C
// 0x00A1 (0x03F9 - 0x0358)
class ABP_BtlLaunchWorkerActor_C : public ABtlLauncherWorkerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BattleMap;                                                // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBtlEncountGroupParam>               EncountParam;                                             // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnBattlePhaseStart;                                       // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBattlePhaseEnd;                                         // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              BattleDelayTime;                                          // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FTransform                                  SavePlayerTransform;                                      // 0x03B0(0x0030) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoStart;                                                // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseOutsideCaptcha;                                      // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedReturnPoint;                                        // 0x03E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSavePlayerTransform;                                    // 0x03E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	struct FString                                     BattleLoadContext;                                        // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsLoadRequestBattle;                                      // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BtlLaunchWorkerActor.BP_BtlLaunchWorkerActor_C");
		return ptr;
	}


	void IsLoadComplated(bool* bIsLoadComplated);
	void DevBootBattleable(bool* Success);
	bool IsBattleRunable();
	void UnloadBattle();
	void LoadBattle();
	bool IsLoadComplateEncountEffect();
	bool ChangeBattleScene();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DoBattle();
	void OnWakeupPlayer();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnBattleEnd(const struct FBtlResultInfo& ResultInfo);
	void ExecuteUbergraph_BP_BtlLaunchWorkerActor(int EntryPoint);
	void OnBattlePhaseEnd__DelegateSignature();
	void OnBattlePhaseStart__DelegateSignature(bool Acepct);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
