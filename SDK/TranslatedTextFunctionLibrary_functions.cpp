
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.GetEULATypeFace
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EULA_Language                  Language                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Typeface                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTranslatedTextFunctionLibrary_C::STATIC_GetEULATypeFace(EULA_Language Language, class UObject* __WorldContext, struct FName* Typeface)
{
	static auto fn = UObject::FindObject<UFunction>("Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.GetEULATypeFace");

	UTranslatedTextFunctionLibrary_C_GetEULATypeFace_Params params;
	params.Language = Language;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Typeface != nullptr)
		*Typeface = params.Typeface;
}


// Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.GetPPLabel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UTranslatedTextFunctionLibrary_C::STATIC_GetPPLabel(class UObject* __WorldContext, struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.GetPPLabel");

	UTranslatedTextFunctionLibrary_C_GetPPLabel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.GetEULALabel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UTranslatedTextFunctionLibrary_C::STATIC_GetEULALabel(class UObject* __WorldContext, struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.GetEULALabel");

	UTranslatedTextFunctionLibrary_C_GetEULALabel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.SetTranslatedMultiText
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseTextWidget*        AriseText                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EULA_Language                  Lang                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTranslatedTextFunctionLibrary_C::STATIC_SetTranslatedMultiText(class UAriseTextWidget* AriseText, const struct FString& Label, EULA_Language Lang, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.SetTranslatedMultiText");

	UTranslatedTextFunctionLibrary_C_SetTranslatedMultiText_Params params;
	params.AriseText = AriseText;
	params.Label = Label;
	params.Lang = Lang;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.SetTranslatedText
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAriseTextWidget*        AriseText                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EULA_Language                  Lang                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTranslatedTextFunctionLibrary_C::STATIC_SetTranslatedText(class UAriseTextWidget* AriseText, const struct FString& Label, EULA_Language Lang, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.SetTranslatedText");

	UTranslatedTextFunctionLibrary_C_SetTranslatedText_Params params;
	params.AriseText = AriseText;
	params.Label = Label;
	params.Lang = Lang;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
