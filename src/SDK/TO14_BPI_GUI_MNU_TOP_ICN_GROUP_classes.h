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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C
// 0x0090 (0x03A8 - 0x0318)
class UTO14_BPI_GUI_MNU_TOP_ICN_GROUP_C : public UTopmenuIconSet
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            VerticalClose;                                            // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            VerticalOpen;                                             // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            HorizontalAnime;                                          // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    PlayIconAnimationV;                                       // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayIconAnimationH;                                       // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<bool>                                       FinishFlag;                                               // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LineIndex;                                                // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IconIndex;                                                // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MouseClickedID;                                           // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FString                                     CursorSelectID;                                           // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NextSceneID;                                              // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnDecideEvent;                                            // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TOP_ICN_GROUP.TO14_BPI_GUI_MNU_TOP_ICN_GROUP_C");
		return ptr;
	}


	void Initialize2nd();
	void Activate(bool bActive);
	void GetCurrentId(struct FString* ID);
	void BindDecideEvent(const struct FScriptDelegate& Event);
	void GetIconIsDisable(int InLineIndex, int InIconIndex, bool* OutIsDisable);
	void CB_MouseHovered(int InUniqueID);
	void CB_MouseClicked(int InUniqueID);
	void Initialize(bool bDelayInit2nd);
	void ChangeSelectCursor();
	void PadWork(class AMenuPadProcess* PadData, bool* IsSelect);
	void IconTextAnimation(int Line, bool Visible);
	void GetInitializeData(int IndexH, int IndexV, struct FTopmenuIconData* OutData);
	void ChangeIconData(const struct FString& TargetMenuID, EMenuIconType NewIconType, const struct FString& NewMenuID);
	void InitializeIcon();
	bool GetAnimationFinishFlag(int Type);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void PlayVerticalAnimation(int NewLine, int OldLine);
	void PlayHorizontalAnimation(bool Open);
	void Construct();
	void OnInit(bool bDelayed2ndInit);
	void ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP_ICN_GROUP(int EntryPoint);
	void OnDecideEvent__DelegateSignature(const struct FString& MenuID);
	void PlayIconAnimationH__DelegateSignature(bool IsOpen);
	void PlayIconAnimationV__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
