#pragma once

#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.GetEULATypeFace
struct UTranslatedTextFunctionLibrary_C_GetEULATypeFace_Params
{
	EULA_Language                                      Language;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Typeface;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.GetPPLabel
struct UTranslatedTextFunctionLibrary_C_GetPPLabel_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.GetEULALabel
struct UTranslatedTextFunctionLibrary_C_GetEULALabel_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.SetTranslatedMultiText
struct UTranslatedTextFunctionLibrary_C_SetTranslatedMultiText_Params
{
	class UAriseTextWidget*                            AriseText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EULA_Language                                      Lang;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TranslatedTextFunctionLibrary.TranslatedTextFunctionLibrary_C.SetTranslatedText
struct UTranslatedTextFunctionLibrary_C_SetTranslatedText_Params
{
	class UAriseTextWidget*                            AriseText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EULA_Language                                      Lang;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
