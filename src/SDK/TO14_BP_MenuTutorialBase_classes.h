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

// WidgetBlueprintGeneratedClass TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C
// 0x001D (0x0225 - 0x0208)
class UTO14_BP_MenuTutorialBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnAnimationEnd;                                           // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              OpenDelay;                                                // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSupressCapture;                                          // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BP_MenuTutorialBase.TO14_BP_MenuTutorialBase_C");
		return ptr;
	}


	void OpenMulti(TArray<struct FString>* TutorialLabelList);
	void OpenFirst(const struct FString& TutorialLabel);
	void IsClosed(bool* IsClosed);
	void Construct();
	void PlayInAnimation();
	void PlayOutAnimation();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void EventInitialize();
	void ExecuteUbergraph_TO14_BP_MenuTutorialBase(int EntryPoint);
	void OnAnimationEnd__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
