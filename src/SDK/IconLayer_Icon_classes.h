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

// WidgetBlueprintGeneratedClass IconLayer_Icon.IconLayer_Icon_C
// 0x004C (0x0254 - 0x0208)
class UIconLayer_Icon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                LayerCanvas;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UUMG_LayerIconBase_C*>                IconImages;                                               // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EIconDataUsage                                     Usage;                                                    // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UIconLayerData_C*                            LayerCommonData;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IconCulling;                                              // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	int                                                MaxIconNum;                                               // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     actorId;                                                  // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                P_IconMaxCount;                                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconLayer_Icon.IconLayer_Icon_C");
		return ptr;
	}


	void CreateIcon();
	void UpdateLadderIcon(const struct FString& actorId);
	void Refresh();
	void Update();
	void Construct();
	void EventUpdate();
	void EventInitialize(class UIconLayerData_C* LayerData);
	void OnDiscoverOwl(const struct FString& InActorID);
	void OnDiscoverBreak(const struct FString& actorId);
	void OnDiscoverSearchPoint(const struct FString& actorId);
	void OnDiscoverTreasure(const struct FString& actorId);
	void OnDiscoverGimmick(const struct FString& actorId);
	void CustomEvent_1(const struct FString& actorId);
	void ExecuteUbergraph_IconLayer_Icon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
