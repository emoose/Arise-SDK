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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C
// 0x0008 (0x0358 - 0x0350)
class UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C : public UTO14_BPI_GUI_MNU_MAP2_LIST_LOCA_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION.TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION_C");
		return ptr;
	}


	void RefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString>* SubQuestIDs, TArray<int>* SubStepIndices);
	void RefreshAsLocation(const struct FMapLocationData& Location);
	void OnRefreshQuest(const struct FString& MainQuestID, int MainStepIndex, TArray<struct FString> SubQuestIDs, TArray<int> SubStepIndices);
	void OnRefreshAsLocation(const struct FMapLocationData& Location);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_MAP2_LIST_LOCA_LOCATION(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
