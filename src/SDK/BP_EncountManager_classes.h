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

// BlueprintGeneratedClass BP_EncountManager.BP_EncountManager_C
// 0x00C8 (0x04B8 - 0x03F0)
class ABP_EncountManager_C : public AEncountManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AAriseGameMode*                              AriseGameMode;                                            // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Encounting;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AEncountGroup*>                       EncountGroups;                                            // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FSTR_BattleAssetUser>                BattleAssetUsers;                                         // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBtlEncountGroupParam>               EncountGroupParams;                                       // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bSpawnBlock;                                              // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEncountDelayed;                                          // 0x0441(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0442(0x0006) MISSED OFFSET
	TArray<struct FPFEnSymEncountGauge>                EncountGaugeData;                                         // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bBattleScene;                                             // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	TArray<struct FPFEnSymEncountBonusGauge>           EncountBonusGaugeData;                                    // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUpdateRare;                                              // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSceneCaptured;                                           // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBattleEnd;                                               // 0x0472(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0473(0x0001) MISSED OFFSET
	float                                              P_CautionLongHeight;                                      // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              P_CautionLongRange;                                       // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              P_CautionShortHeight;                                     // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              P_CautionShortRange;                                      // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WakeupPlayerLocation;                                     // 0x0484(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ViewDistanceMagnify;                                      // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ViewAngleMagnify;                                         // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SearchRangeMagnify;                                       // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	struct FBtlResultInfo                              LatestEndBattleSceneResultInfo;                           // 0x04A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EncountManager.BP_EncountManager_C");
		return ptr;
	}


	bool BPE_IsLoadedSymbolAssets();
	void UpdateSearchRangeMagnify();
	void UpdateViewAngleMagnifty();
	void UpdateViewDistanceMagnify();
	void BPE_GetMinimapRange(float* OutRange, float* OutHeight);
	void OnChangeStateImpl(EAriseGameState ChangedState, bool NewState);
	float BPE_GetEncountSurroundHeight();
	void LoadBattleAssetAll();
	void SetEncountingState(bool bEnable);
	int BPE_GetLevelDiffValue();
	void SetBtlResult(const struct FBtlResultInfo& BtlResultInfo);
	float BPE_GetEncountSurroundDistance();
	float BPE_GetBattleBonusEndValue();
	float BPE_GetBattleBonusDeduction();
	void ResetBattleFlag();
	void ApplyCookSkill(float In, float* Out);
	void IsInSECautionRange(class AActor* InSymbol, bool* OutIsHitRange, bool* OutIsHitShortRange);
	void CreateEncountEffect(class ABP_EncountScreenMask_C** ScreenMask);
	bool IsInCautionRange(class AActor* Actor);
	void GetSymbolsWithinCautionRange(TArray<class AActor*>* OutSymbols);
	void RespawnSymbol();
	bool IsCaution();
	void OnGetInteractionProhibitedRange(float* ReactHorizontalDistance, float* ReactVerticalDistance);
	float GetSearchRangeMagnify();
	float GetViewAngleMagnify();
	float GetViewDistanceMagnify();
	void RemoveEncountMAPOBJ(class AActor* MapObj);
	void AddEncountMAPOBJ(class AActor* MapObj);
	void EndOfBattleScene();
	bool OnGetSurroundEncountMAPOBJNames(class AActor* InMAPOBJ, struct FBtlEncountGroupParam* Param);
	void UnloadBattleAssetAll();
	bool OnGetSurroundEncountGroupNames(TArray<struct FString> EncountGroupNames, class AEncountGroup* InGroup, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName);
	bool OnGetEncountGroupNames(const struct FString& AutoSymbolName, class AEncountGroup* InGroup, struct FBtlEncountGroupParam* Param, struct FString* EncountGroupName);
	void GetBattleBonusDecValue(TEnumAsByte<ENUM_EnSym_Bonus> Index, float* Value);
	void GetBonusGaugeData(TEnumAsByte<ENUM_EnSym_Bonus> Index, float* Value);
	void UpdateRareGroup();
	void EncountLinkImpl(class APFEncountSymbol* Spawner);
	void DestroyAllSymbol();
	void GetDataTable(TEnumAsByte<ENUM_EnSym_Encount> Index, float* A, float* B, int* INT_A, int* INT_B);
	void InitDataTable();
	void SetEncountGroupState();
	void GetEncountGroupNames(const struct FString& EncountSymbolName, TArray<struct FBtlEncountGroupParam>* Groups);
	void ClearEncountItems();
	void DoEncount(const struct FString& BattleMapName);
	void UserConstructionScript();
	void OnPreMapChange(const struct FString& OldMapName, const struct FString& NewMapName);
	void OnPostMapChange(const struct FString& OldMapName, const struct FString& NewMapName);
	void BPE_OnChangeDisplayScene(EAriseGameScene ChangedScene, EAriseGameScene OldScene);
	void OnBattleStart(bool bAccept);
	void OnBattleEnd();
	void OnFinalizeEvent(const struct FString& EventName, const struct FString& OptionName);
	void BPE_OutCamp();
	void OnEndBattleScene(const struct FBtlResultInfo& ResultInfo);
	void InitCallback();
	void OnBattleWakeup();
	void OnGoBackTitleEvent();
	void OnChangeStateBP(EAriseGameState ChangedState, bool NewState);
	void OnPostWakeupShowPlayer();
	void DoEncountImpl(const struct FString& BattleMapName);
	void ReceiveBeginPlay();
	void OnReleaseBattleAsset();
	void OnPlayEvent();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_EncountManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
