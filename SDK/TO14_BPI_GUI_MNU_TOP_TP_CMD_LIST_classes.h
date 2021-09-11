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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C
// 0x0068 (0x0270 - 0x0208)
class UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C : public UUserWidget
{
public:
	class UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C*          TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_216;                      // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C*          TO14_BPI_GUI_MNU_TOP_TP_CMD_STR_263;                      // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FDictionaryText>                     TextLabel;                                                // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MouseSelectIndex;                                         // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MouseEnterIndex;                                          // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CursorIndex;                                              // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	TArray<class UTO14_BPI_GUI_MNU_TOP_TP_CMD_STR_C*>  WidgetList;                                               // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSelect;                                                 // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	int                                                SelectValue;                                              // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      TargetRatios;                                             // 0x0250(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnPreviewEvent;                                           // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C");
		return ptr;
	}


	void BindOnPreviewEvent(const struct FScriptDelegate& Event);
	void Preview(int Type);
	void Refresh();
	void SetIndex(int Index);
	void EnterCommand(int Index);
	void PadWork(class AMenuPadProcess* PadProcess, int* Index, bool* Select);
	void SelectCommand(int Index);
	void Initialize();
	void OnPreviewEvent__DelegateSignature(TMap<EArisePartyID, int> HealHPMap, int UseTP);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
