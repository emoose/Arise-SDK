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

// WidgetBlueprintGeneratedClass TO14_BP_MenuHeaderBase.TO14_BP_MenuHeaderBase_C
// 0x0018 (0x0220 - 0x0208)
class UTO14_BP_MenuHeaderBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnAnimationEnd;                                           // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TO14_BP_MenuHeaderBase.TO14_BP_MenuHeaderBase_C");
		return ptr;
	}


	void SetIconWithAnimation(const struct FString& MenuID);
	void SetIcon(const struct FString& MenuID);
	void Construct();
	void OpenWithFrame();
	void Open();
	void EventInitialize();
	void CloseWithFrame();
	void Close();
	void CloseImmidiate();
	void SetHeaderNameTopMenu(const struct FString& InMenuID, const struct FDictionaryText& InText);
	void ExecuteUbergraph_TO14_BP_MenuHeaderBase(int EntryPoint);
	void OnAnimationEnd__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
