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

// WidgetBlueprintGeneratedClass UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C
// 0x001F (0x02B8 - 0x0299)
class UUMG_LocamapFocusIcon_Quest_C : public UUMG_LocamapFocusIcon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnGotoQuestEvent;                                         // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LocamapFocusIcon_Quest.UMG_LocamapFocusIcon_Quest_C");
		return ptr;
	}


	void GetQuestID(struct FString* QuestID);
	void BindOnGotoQuestEvent(const struct FScriptDelegate& OnGotoQuest);
	void OnDecide();
	void ExecuteUbergraph_UMG_LocamapFocusIcon_Quest(int EntryPoint);
	void OnGotoQuestEvent__DelegateSignature(const struct FString& QuestID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
