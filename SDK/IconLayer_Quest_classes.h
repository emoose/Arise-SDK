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

// WidgetBlueprintGeneratedClass IconLayer_Quest.IconLayer_Quest_C
// 0x0098 (0x02A0 - 0x0208)
class UIconLayer_Quest_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                LayerCanvas;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UUMG_LayerIconBase_C*>                IconImages;                                               // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EIconDataUsage                                     Usage;                                                    // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UIconLayerData_C*                            LayerCommonData;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UUMG_LayerIconBase_C*>                CircleImages;                                             // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      BothQuest;                                                // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	TMap<class UUMG_LayerIconBase_C*, EMapIconType>    IconMap;                                                  // 0x0250(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconLayer_Quest.IconLayer_Quest_C");
		return ptr;
	}


	void CheckIconType(class UUMG_LayerIconBase_C* Icons, EMapIconType* Type);
	void GetIconsFromTypes(TArray<EMapIconType>* IconTypes, TArray<class UUMG_LayerIconBase_C*>* Icons);
	void GetIconsFromType(EMapIconType IconType, TArray<class UUMG_LayerIconBase_C*>* Icons);
	void Refresh();
	void Update();
	void Construct();
	void EventUpdate();
	void EventInitialize(class UIconLayerData_C* LayerData);
	void ExecuteUbergraph_IconLayer_Quest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
