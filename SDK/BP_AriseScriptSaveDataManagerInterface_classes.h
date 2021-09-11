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

// BlueprintGeneratedClass BP_AriseScriptSaveDataManagerInterface.BP_AriseScriptSaveDataManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AriseScriptSaveDataManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AriseScriptSaveDataManagerInterface.BP_AriseScriptSaveDataManagerInterface_C");
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
	void Update(float InDeltaSeconds);
	void Initialize();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
