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

// BlueprintGeneratedClass BP_MessageWindow.BP_MessageWindow_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MessageWindow_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MessageWindow.BP_MessageWindow_C");
		return ptr;
	}


	void STATIC_AddSelectionWithFlags(int SelectedIndex, bool EnableCancel, bool IsFocusLastByCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList, TArray<bool>* IsRead);
	void STATIC_IsCloseMessageWindow(class UObject* __WorldContext, bool* NewParam);
	void STATIC_IsMessageEnd(class UObject* __WorldContext, bool* IsEnd);
	void STATIC_CloseMessageWindow(class UObject* __WorldContext);
	void STATIC_AddSelection(int SelectedIndex, bool EnableCancel, bool IsFocusLastByCancel, class UObject* __WorldContext, TArray<struct FModifiedText>* SelectList);
	void STATIC_AddMessage(const struct FModifiedText& Message, const struct FModifiedText& SpeakerName, class UObject* __WorldContext);
	void STATIC_GetWidget(class UObject* __WorldContext, class UTO14_BPI_GUI_SYS_MSG_C** NewParam);
	void STATIC_OpenMessageWindow(const struct FModifiedText& FirstMessage, const struct FModifiedText& FirstSpeakerName, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
