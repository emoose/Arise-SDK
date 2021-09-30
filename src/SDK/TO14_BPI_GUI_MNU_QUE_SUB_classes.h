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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C
// 0x0018 (0x0220 - 0x0208)
class UTO14_BPI_GUI_MNU_QUE_SUB_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UTO14_BPI_GUI_MNU_QUE_WIN_C*                 TO14_BPI_GUI_MNU_QUE_WIN;                                 // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB_C*         TO14_BPI_GUI_MNU_QUE_WIN_EXP_SUB;                         // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_QUE_SUB.TO14_BPI_GUI_MNU_QUE_SUB_C");
		return ptr;
	}


	void GetViewType(int* Type);
	void SetViewType(int Type);
	void PadWork(class AMenuPadProcess* PadProcess, bool* IsChanged);
	void SetQuestData(const struct FQuestData& QuestData, bool HighPriority);
	void DataConstruct();
	void OnViewOpen();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_SUB(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
