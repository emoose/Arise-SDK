
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

// Function TO14_BPI_GUI_MNU_EQU_SET2_STR.TO14_BPI_GUI_MNU_EQU_SET2_STR_C.OpenAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET2_STR_C::OpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2_STR.TO14_BPI_GUI_MNU_EQU_SET2_STR_C.OpenAnimation");

	UTO14_BPI_GUI_MNU_EQU_SET2_STR_C_OpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET2_STR.TO14_BPI_GUI_MNU_EQU_SET2_STR_C.SetCategoryText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         DicText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_EQU_SET2_STR_C::SetCategoryText(const struct FDictionaryText& DicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET2_STR.TO14_BPI_GUI_MNU_EQU_SET2_STR_C.SetCategoryText");

	UTO14_BPI_GUI_MNU_EQU_SET2_STR_C_SetCategoryText_Params params;
	params.DicText = DicText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
