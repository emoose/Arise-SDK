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

// WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C
// 0x0088 (0x0298 - 0x0210)
class UTO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C : public UAriseUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	TArray<class UTO14_BPI_GUI_SYS_SCHT2_C*>           ShotChatWidgetList;                                       // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	float                                              Time;                                                     // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	TArray<struct FTO14_SCHT_DATA>                     PlayTextList;                                             // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CloseAnimWaitTime;                                        // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TMap<EAriseCharaIconID, struct FString>            SpeakerMap;                                               // 0x0248(0x0050) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BPI_GUI_SYS_SCHT_ROOT_BASE.TO14_BPI_GUI_SYS_SCHT_ROOT_BASE_C");
		return ptr;
	}


	void Abort();
	void Swap(int TextIndexA, int TextIndexB);
	void Init();
	void Clear();
	void Close();
	void PlayShortChat(EAriseCharaIconID CharaIconID, const struct FName& OverrideIconLabel, const struct FText& Message);
	void PlayShortChat_MessageData(class UMessageData* MessageData, const struct FName& OverrideIconLabel);
	void Construct();
	void ExecuteUbergraph_TO14_BPI_GUI_SYS_SCHT_ROOT_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
