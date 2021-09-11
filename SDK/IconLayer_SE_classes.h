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

// WidgetBlueprintGeneratedClass IconLayer_SE.IconLayer_SE_C
// 0x0024 (0x022C - 0x0208)
class UIconLayer_SE_C : public UEnemyEncountBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                LayerCanvas;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class USymbolEnemyIconBase_C*>              IconImages;                                               // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                P_MaxIndex;                                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconLayer_SE.IconLayer_SE_C");
		return ptr;
	}


	void CreateIcon();
	void IsSymbolChak(class AActor* InSymbol, bool* OutIsHitRange, bool* OutIsHitShortRange);
	void Refresh();
	void Update();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnLoadNewLocation();
	void Destruct();
	void ExecuteUbergraph_IconLayer_SE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
