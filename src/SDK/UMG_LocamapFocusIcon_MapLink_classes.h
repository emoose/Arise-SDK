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

// WidgetBlueprintGeneratedClass UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C
// 0x00B7 (0x0350 - 0x0299)
class UUMG_LocamapFocusIcon_MapLink_C : public UUMG_LocamapFocusIcon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	struct FMapLinkInfo                                MapLinkInfo;                                              // 0x02A8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnMapLinkEvent;                                           // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LocamapFocusIcon_MapLink.UMG_LocamapFocusIcon_MapLink_C");
		return ptr;
	}


	void BindOnMapLinkEvent(const struct FScriptDelegate& Event);
	void GetMapLinkInfo(struct FMapLinkInfo* MapLinkInfo);
	void SetMapLinkInfo(const struct FMapLinkInfo& InMapLinkInfo);
	void OnDecide();
	void ExecuteUbergraph_UMG_LocamapFocusIcon_MapLink(int EntryPoint);
	void OnMapLinkEvent__DelegateSignature(const struct FString& LocationName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
