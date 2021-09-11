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

// BlueprintGeneratedClass BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C
// 0x0070 (0x0398 - 0x0328)
class ABP_AriseScriptSaveDataManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_SearchOwlSaveData_C*                     SearchOwlSaveData;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_TreasurePointSaveData_C*                 TreasurePointSaveData;                                    // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_SearchPointSaveData_C*                   SearchPointSaveData;                                      // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_BreakPointSaveData_C*                    BreakPointSaveData;                                       // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_MapGimmickSaveData_C*                    MapGimmickSaveData;                                       // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_OneTopSaveData_C*                        OneTopSaveData;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_FishingSaveData_C*                       FishingSaveData;                                          // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_QuestGuideSaveData_C*                    QuestGuideSaveData;                                       // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_QuestEnemyCountSaveData_C*               QuestEnemyCountSaveData;                                  // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_CampPointSaveData_C*                     CampPointSaveData;                                        // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_EncountSymbolSaveData_C*                 EncountSymbolSaveData;                                    // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_RecoveryPointSaveData_C*                 RecoveryPointSaveData;                                    // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseScriptSaveDataManager.BP_AriseScriptSaveDataManager_C");
		return ptr;
	}


	void GetRecoveryPointSaveData(class UAriseScriptSaveData** RecoveryPointSaveData);
	void GetSearchPointSaveData(class UAriseScriptSaveData** SearchPointSaveData);
	void GetEncountSymbolSaveData(class UAriseScriptSaveData** EncountSymbolSaveData);
	void GetCampPointSaveData(class UAriseScriptSaveData** CampPointSaveData);
	void GetQuestEnemyCountSaveData(class UAriseScriptSaveData** QuestEnemyCountSaveData);
	void GetQuestGuideSaveData(class UQuestSaveData** QuestGuideSaveData);
	void GetOneTopSaveData(class UAriseScriptSaveData** OneTopSaveData);
	void GetMapGimmickSaveData(class UAriseScriptSaveData** MapGimmickSaveData);
	void GetBreakPointSaveData(class UAriseScriptSaveData** BreakPointSaveData);
	void GetSearchOwlSaveData(class UAriseScriptSaveData** SearchOwlSaveData);
	void GetTreasurePointSaveData(class UAriseScriptSaveData** TreasurePointSaveData);
	void GetFishingSaveData(class UAriseScriptSaveData** FishingSaveData);
	void ÞV©_Ý0¤0ó0È0();
	void ¨0ó0«0¦0ó0È0·0ó0Ü0ë0();
	void Î‘¶UÝ0¤0ó0È0();
	void ã‘Š0Å`1X();
	void ¯0¨0¹0È0¬0¤0É0();
	void ¯0¨0¹0È0¨0Í0ß0ü0ŠO«0¦0ó0È0();
	void ï0ó0È0Ã0×0();
	void Þ0Ã0×0®0ß0Ã0¯0();
	void ¡c˜cÝ0¤0ó0È0();
	void ¡cÖSÝ0¤0ó0È0();
	void È0ì0¸0ã0ü0Ý0¤0ó0È0();
	void Õ0¯0í0¦0¢cW0();
	void PreMapChangeCallback(const struct FString& NewMapName, const struct FString& OldMapName);
	void Update_Implement(float InDeltaSeconds);
	void Initialize_Implement();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Initialize();
	void Update(float InDeltaSeconds);
	void ExecuteUbergraph_BP_AriseScriptSaveDataManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
