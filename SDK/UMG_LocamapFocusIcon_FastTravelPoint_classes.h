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

// WidgetBlueprintGeneratedClass UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C
// 0x0058 (0x02F1 - 0x0299)
class UUMG_LocamapFocusIcon_FastTravelPoint_C : public UUMG_LocamapFocusIcon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	struct FFastTravelPointInfo                        FastTravelPointInfo;                                      // 0x02A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnFastTravelEvent;                                        // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     LocationName;                                             // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDisableFastTravel;                                       // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LocamapFocusIcon_FastTravelPoint.UMG_LocamapFocusIcon_FastTravelPoint_C");
		return ptr;
	}


	void GetDialogMessage(const struct FMapAreaData& MapAreaData, const struct FString& MsgId, const struct FString& MsgIdWhenNoLocation, struct FMapLocationData* MapLocationData, struct FModifiedText* Message);
	void SetLocationName(const struct FString& InLocationName);
	void BindOnFastTravelEvent(const struct FScriptDelegate& OnFastTravel);
	void GetFastTravelPointInfo(struct FFastTravelPointInfo* FastTravelPointInfo);
	void SetFastTravelPointInfo(const struct FFastTravelPointInfo& InFastTravelPointInfo);
	void OnDecide();
	void ExecuteUbergraph_UMG_LocamapFocusIcon_FastTravelPoint(int EntryPoint);
	void OnFastTravelEvent__DelegateSignature(const struct FString& LocationName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
