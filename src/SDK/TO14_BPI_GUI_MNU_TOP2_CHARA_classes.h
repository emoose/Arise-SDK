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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C
// 0x0068 (0x0270 - 0x0208)
class UTO14_BPI_GUI_MNU_TOP2_CHARA_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                CHARA_STR_ROOT;                                           // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                            DynamicEntryBox_1;                                        // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URetainerBox*                                RetainerBox_1;                                            // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                Root;                                                     // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<EArisePartyID>                              PreviewPartyIds;                                          // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C*>  Strs;                                                     // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ActiveStrNum;                                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArisePartyID                                      SelectCharaID;                                            // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNext;                                                    // 0x0255(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0256(0x0002) MISSED OFFSET
	TScriptInterface<class UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_ANIM_Interface_C> CharaStrAnim;                                             // 0x0258(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTO14_BPI_GUI_MNU_TOP2_CHARA_ANIM_C*         MyAnim;                                                   // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP2_CHARA.TO14_BPI_GUI_MNU_TOP2_CHARA_C");
		return ptr;
	}


	void GetMyAnim_ANM_OPEN(class UWidgetAnimation** Animation);
	void GetMyAnim_ANM_NEXT(class UWidgetAnimation** Animation);
	void GetMyAnim_ANM_COMEBACK(class UWidgetAnimation** Animation);
	void GetMyAnim_ANM_CLOSE(class UWidgetAnimation** Animation);
	void GetMyAnim_ANM_NEXT_HIDE(class UWidgetAnimation** Animation);
	void GetMyAnim_AMM_COMEBACK_HIDE(class UWidgetAnimation** Animation);
	void GetMyAnim_ANM_NEXT_STAY(class UWidgetAnimation** Animation);
	void GetMyAnim_ANM_COMEBACK_STAY(class UWidgetAnimation** Animation);
	void GetMyAnim(bool* bValid, class UTO14_BPI_GUI_MNU_TOP2_CHARA_ANIM_C** MyAnim);
	void DestroyCharaStrAnim(bool* bSuccess);
	void Terminate();
	void CreateCharaStrAnim(bool* bSuccess);
	void PlayAnimPreOpen();
	void RestructByImages(bool bDesignTime, bool bPlayPreOpen, TArray<struct FMenuTopChara>* Images);
	void PlayAnimComebackStay();
	void PlayAnimNextStay();
	void PlayAnimComebackHide();
	void PlayAnimNextHide();
	void Initialize();
	void FindStr(EArisePartyID CharaID, class UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C** str, int* Index);
	void PlayAnimChange(EArisePartyID NewSelectCharaID);
	void PlayAnimComeback();
	void PlayAnimNext(EArisePartyID* CharaID);
	void PlayAnimClose();
	void PlayAnimOpen();
	void GetFilename(EArisePartyID CharaID, bool* IsValid, struct FString* Filename);
	void Restruct(bool bDesignTime, TArray<EArisePartyID>* PartyIDs);
	void Preview();
	void ANM_OPEN_STR(int Index);
	void OnViewOpen();
	void OnViewClose();
	void OnAnimNext();
	void OnAnimComeback();
	void ANM_NEXT_STR(int Index);
	void ANM_COMEBACK_STR(int Index);
	void ANM_CLOSE_STR(int Index);
	void ANM_PRE_OPEN_STR(int Index);
	void OnAnimNextHide();
	void OnAnimComebackHide();
	void OnAnimNextStay();
	void ANM_NEXT_STAY_STR(int Index);
	void OnAnimComebackStay();
	void ANM_COMEBACK_STAY_STR(int Index);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_CHARA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
