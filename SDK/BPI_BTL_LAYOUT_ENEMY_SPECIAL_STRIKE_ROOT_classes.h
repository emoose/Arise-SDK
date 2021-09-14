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

// WidgetBlueprintGeneratedClass BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C
// 0x0020 (0x0280 - 0x0260)
class UBPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C : public UBtlCommonViewSpaceWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                Root;                                                     // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTO14_BPI_GUI_BTL_TARGET_SPECIAL_STRIKE_C*   SpecialStrike;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTimerHandle                                CancelStrikeHandle;                                       // 0x0278(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT.BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT_C");
		return ptr;
	}


	void CheckReceiveStrikeSmash(bool* IsReceuveStrikeSmash);
	class APlayerController* GetController();
	class UCanvasPanelSlot* GetMoveSlot();
	struct FVector GetWorldPosition();
	void Event_OnOpen();
	void Construct();
	void Destruct();
	void EventOnClose();
	void OnUsedSpecialStrike();
	void UnBindEvent();
	void OnBeginSpecialStrike(class UBtlStatusViewModelBase* NewTargetUnit, EArisePartyID FilterPartyId, float Timer);
	void BindEvent();
	void OnChangePlayerTargetSmashCondition(class ABtlCharacterBase* Striker);
	void OnChangeVisiblePreset(const struct FName& Preset);
	void OnChangeTarget();
	void CancelStrike();
	void ExecuteUbergraph_BPI_BTL_LAYOUT_ENEMY_SPECIAL_STRIKE_ROOT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
