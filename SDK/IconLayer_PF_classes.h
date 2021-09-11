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

// WidgetBlueprintGeneratedClass IconLayer_PF.IconLayer_PF_C
// 0x0049 (0x0251 - 0x0208)
class UIconLayer_PF_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                LayerCanvas;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1;                                               // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UQuestGuideIconBase_C*>               IconImages;                                               // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EIconDataUsage                                     Usage;                                                    // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	class UIconLayerData_C*                            LayerCommonData;                                          // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                     // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bInitialized;                                             // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconLayer_PF.IconLayer_PF_C");
		return ptr;
	}


	void IsOutOfBox(const struct FVector2D& Point, const struct FBox2D& Box, struct FVector2D* Output, bool* IsOutLeft, bool* IsOutTop, bool* IsOutRight, bool* IsOutBottom);
	bool GetSafeScreenPosition(struct FVector* WorldPosition, struct FVector2D* ReturnValue2);
	void Refresh();
	void Update();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnQuestUpdate();
	void OnLoadNewLocation();
	void CustomEvent_1(const struct FString& UserData);
	void ExecuteUbergraph_IconLayer_PF(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
