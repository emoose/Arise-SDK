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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C
// 0x0068 (0x0270 - 0x0208)
class UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                CHANGE_IN_TARGET;                                         // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      DEBUG_LINE;                                               // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UModifyImage*                                Image;                                                    // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                IMAGE_BASE_POS;                                           // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                Root;                                                     // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	EArisePartyID                                      CharaID;                                                  // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	struct FVector2D                                   TargetPosition;                                           // 0x023C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DefaultPosition;                                          // 0x0244(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FString                                     CurrentImagePath;                                         // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TScriptInterface<class UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_ANIM_Interface_C> CharaStrAnim;                                             // 0x0260(0x0030) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP2_CHARA_STR.TO14_BPI_GUI_MNU_TOP2_CHARA_STR_C");
		return ptr;
	}


	void GetANM_OPEN(class UWidgetAnimation** Animation);
	void GetANM_NEXT_IN(class UWidgetAnimation** Animation);
	void GetANM_NEXT_OUT(class UWidgetAnimation** Animation);
	void GetANM_PRE_OPEN(class UWidgetAnimation** Animation);
	void GetANM_CHANGE_IN(class UWidgetAnimation** Animation);
	void GetANM_CHANGE_OUT(class UWidgetAnimation** Animation);
	void BindCharStrAnim(const TScriptInterface<class UTO14_BPI_GUI_MNU_TOP2_CHARA_STR_ANIM_Interface_C>& InCharaStrAnim);
	void PlayAnimChangeOut();
	void PlayAnimChangeIn();
	void ProgramAnimInOut(class UWidgetAnimation* InAnimation, bool ReverseTime, bool* Finished);
	void GetCharaID(EArisePartyID* CharaID);
	void PlayAnimPreOpen();
	void PlayAnimComeback(bool IsIn);
	void PlayAnimNext(bool IsIn);
	void PlayAnimClose();
	void PlayAnimOpen();
	void Restruct(EArisePartyID CharaID, struct FString* Filename, struct FVector2D* Position, struct FVector2D* Scale);
	void OnViewOpen();
	void OnViewClose();
	void OnAnimNext(bool IsIn);
	void OnAnimComeback(bool IsIn);
	void OnViewPreOpen();
	void OnAnimChangeIn();
	void OnAnimChangeOut();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP2_CHARA_STR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
