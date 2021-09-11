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

// BlueprintGeneratedClass BPAC_SCH_UI.BPAC_SCH_UI_C
// 0x0058 (0x0150 - 0x00F8)
class UBPAC_SCH_UI_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	TMap<EAriseCharaIconID, struct FString>            SpeakerMap;                                               // 0x0100(0x0050) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPAC_SCH_UI.BPAC_SCH_UI_C");
		return ptr;
	}


	void Abort();
	void Clear();
	void FindCharaIconID(const struct FString& Speaker, EAriseCharaIconID* IconId);
	void DestoryWidget();
	void CreateWidget(const struct FString& FaceIcon, const struct FString& Speaker, const struct FText& Text);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPAC_SCH_UI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
