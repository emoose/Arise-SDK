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

// Class LocalizePlugin.CultureCallbackManager
// 0x0000 (0x0028 - 0x0028)
class UCultureCallbackManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LocalizePlugin.CultureCallbackManager");
		return ptr;
	}


	void STATIC_K2_UnregisterCallback(const struct FCultureCallbackHandle& iHandle);
	struct FCultureCallbackHandle STATIC_K2_RegisterCallback(const struct FScriptDelegate& iDelegate, int iPriority);
};


// Class LocalizePlugin.LocalizeBPLibrary
// 0x0000 (0x0028 - 0x0028)
class ULocalizeBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LocalizePlugin.LocalizeBPLibrary");
		return ptr;
	}


	void STATIC_SetCurrentVoiceLanguage(ELocalizeSupportLanguage iLanguage);
	void STATIC_SetCurrentTextLanguge(ELocalizeSupportLanguage iLanguage);
	void STATIC_GetSupportVoiceLanguageList(TArray<ELocalizeSupportLanguage>* oLanguageList);
	void STATIC_GetSupportTextLangaugeList(TArray<ELocalizeSupportLanguage>* oLanguageList);
	ELocalizeSupportLanguage STATIC_GetCurrentVoiceLanguage();
	ELocalizeSupportLanguage STATIC_GetCurrentTextLanguage();
	bool STATIC_CheckCurrentVoiceLanguage(ELocalizeSupportLanguage iLanguage);
	bool STATIC_CheckCurrentTextLanguage(ELocalizeSupportLanguage iLanguage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
