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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C
// 0x000C (0x0588 - 0x057C)
class UTO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C : public UBP_MNU_FREE_CURSOR_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	class UTO14_BPI_GUI_ICN_RETICLE2_C*                RETICLE;                                                  // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR.TO14_BPI_GUI_MNU_TIT2_FREE_CURSOR_C");
		return ptr;
	}


	void DeReaction(class UWidget* Widget, bool* EndReaction);
	void Reaction(class UWidget* Widget, bool* StartReaction);
	void GetEntityWidget(class UWidget** Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
