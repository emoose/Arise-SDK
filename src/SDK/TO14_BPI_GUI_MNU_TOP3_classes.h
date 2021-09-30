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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C
// 0x0068 (0x0270 - 0x0208)
class UTO14_BPI_GUI_MNU_TOP3_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                Root;                                                     // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_MNU_TOP3_TMP_C*                TMP;                                                      // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsFinish;                                                // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInitialized;                                           // 0x0221(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClose;                                                 // 0x0222(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0223(0x0005) MISSED OFFSET
	struct FString                                     nextScene;                                                // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_MNU_3DWIDGET_BaseActor_C*                _3DBGActor;                                               // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsComeback;                                              // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsNext;                                                  // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArisePartyID                                      PartyTopWhenOpen;                                         // 0x0242(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0243(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0243(0x0028) UNKNOWN PROPERTY: SoftClassProperty TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C.3DBGActorClassPath

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP3.TO14_BPI_GUI_MNU_TOP3_C");
		return ptr;
	}


	void ForceFinalize(bool* IsSuccess);
	void Exit(const struct FST_MenuGlobalData& GlobalData, bool* IsSuccess);
	void Init(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData, bool* IsSuccess);
	void ReadWait(struct FST_MenuGlobalData* GlobalData, bool* IsFinish);
	void Exec(float Time, class AMenuPadProcess* PadData, struct FST_MenuGlobalData* GlobalData, bool* IsFinish);
	void GetNextScene(struct FString* NextSceneID, bool* SelfRemain);
	void Finish(struct FST_MenuGlobalData* GlobalData, bool* IsSuccess, int* ResultValue);
	void Get3DBGActor(class ABP_MNU_3DWIDGET_BaseActor_C** _3DBGActor);
	void CheckArtifactMenu();
	void ChangeNextMenu(const struct FString& NextMenu, bool* Success);
	void CheckChangedPartyTop();
	void UpdatePartyTopWhenOpen();
	void PlayAnimNext();
	void PlayAnimComeback();
	void PlayAnimOpen();
	void PlayAnimClose();
	void OnChangeMenuForFromTmp();
	void OnChangeMenuStaFromTmp();
	void OnInit(int Value, const struct FString& PrevSceneID, struct FST_MenuGlobalData* GlobalData);
	void OnClosedFromTmp();
	void OnDecideFromTmp(const struct FString& MenuID);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
