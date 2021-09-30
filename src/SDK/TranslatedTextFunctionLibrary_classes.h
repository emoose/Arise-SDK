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

// BlueprintGeneratedClass TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UTranslatedTextFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C");
		return ptr;
	}


	void STATIC_GetEULATypeFace(EULA_Language Language, class UObject* __WorldContext, struct FName* Typeface);
	void STATIC_GetPPLabel(class UObject* __WorldContext, struct FString* Label);
	void STATIC_GetEULALabel(class UObject* __WorldContext, struct FString* Label);
	void STATIC_SetTranslatedMultiText(class UAriseTextWidget* AriseText, const struct FString& Label, EULA_Language Lang, class UObject* __WorldContext);
	void STATIC_SetTranslatedText(class UAriseTextWidget* AriseText, const struct FString& Label, EULA_Language Lang, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
