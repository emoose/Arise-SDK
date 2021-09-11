
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

// Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetText_Dictionary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         InTitleText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDictionaryText         InInformationText              (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_CNF_DET_C::SetText_Dictionary(const struct FDictionaryText& InTitleText, const struct FDictionaryText& InInformationText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetText_Dictionary");

	UTO14_BPI_GUI_MNU_CNF_DET_C_SetText_Dictionary_Params params;
	params.InTitleText = InTitleText;
	params.InInformationText = InInformationText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetText_Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InTitleName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InInformationText              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_DET_C::SetText_Name(const struct FName& InTitleName, const struct FName& InInformationText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetText_Name");

	UTO14_BPI_GUI_MNU_CNF_DET_C_SetText_Name_Params params;
	params.InTitleName = InTitleName;
	params.InInformationText = InInformationText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetInfomationText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InTextName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_DET_C::SetInfomationText(const struct FName& InTextName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetInfomationText");

	UTO14_BPI_GUI_MNU_CNF_DET_C_SetInfomationText_Params params;
	params.InTextName = InTextName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetTitleName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InTextName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_DET_C::SetTitleName(const struct FName& InTextName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_DET.TO14_BPI_GUI_MNU_CNF_DET_C.SetTitleName");

	UTO14_BPI_GUI_MNU_CNF_DET_C_SetTitleName_Params params;
	params.InTextName = InTextName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
