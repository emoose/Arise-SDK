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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C
// 0x0018 (0x0368 - 0x0350)
class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C : public UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	TArray<struct FAreaData>                           AreaDatas;                                                // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA_C");
		return ptr;
	}


	void GetHierarchyCount(TArray<struct FLocationTreeData>* LocationTreeDataArray, int* Count);
	void RefreshAsRegion(const struct FString& RegionName);
	void RefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString> SubQuestIDs, TArray<int> SubStepIndices);
	void RefreshAsLocation(const struct FMapLocationData& Location);
	void OnRefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString> SubQuestIDs, TArray<int> SubStepIndices);
	void OnRefreshAsRegion(const struct FString& RegionName);
	void OnRefreshAsLocation(const struct FMapLocationData& Location);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_AREA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
