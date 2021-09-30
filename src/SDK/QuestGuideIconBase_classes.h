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

// WidgetBlueprintGeneratedClass QuestGuideIconBase.QuestGuideIconBase_C
// 0x0010 (0x0218 - 0x0208)
class UQuestGuideIconBase_C : public UUserWidget
{
public:
	struct FVector                                     Position;                                                 // 0x0208(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Range;                                                    // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestGuideIconBase.QuestGuideIconBase_C");
		return ptr;
	}


	void ApplyConfig(bool ShowMain, bool ShowSub);
	void SetOut(bool IsOutLeft, bool IsOutTop, bool IsOutRight, bool IsOutBottom);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
