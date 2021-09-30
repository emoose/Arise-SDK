
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

// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.SetDictionaryText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         DictionaryText                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_SYS_WIN_TITLE_C::SetDictionaryText(const struct FDictionaryText& DictionaryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.SetDictionaryText");

	UTO14_BPI_GUI_SYS_WIN_TITLE_C_SetDictionaryText_Params params;
	params.DictionaryText = DictionaryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.GetReturnValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTO14_BPI_GUI_SYS_WIN_TITLE_C::GetReturnValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.GetReturnValue");

	UTO14_BPI_GUI_SYS_WIN_TITLE_C_GetReturnValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.GetRenderSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UTO14_BPI_GUI_SYS_WIN_TITLE_C::GetRenderSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.GetRenderSize");

	UTO14_BPI_GUI_SYS_WIN_TITLE_C_GetRenderSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.ChangeTitleText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           UseDictionary                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_TITLE_C::ChangeTitleText(const struct FText& TitleText, bool UseDictionary)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.ChangeTitleText");

	UTO14_BPI_GUI_SYS_WIN_TITLE_C_ChangeTitleText_Params params;
	params.TitleText = TitleText;
	params.UseDictionary = UseDictionary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.TextChange
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   UpdateText                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 DictionaryGroup                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_SYS_WIN_TITLE_C::TextChange(const struct FText& UpdateText, const struct FString& DictionaryGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.TextChange");

	UTO14_BPI_GUI_SYS_WIN_TITLE_C_TextChange_Params params;
	params.UpdateText = UpdateText;
	params.DictionaryGroup = DictionaryGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.PlayOpenAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_TITLE_C::PlayOpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.PlayOpenAnimation");

	UTO14_BPI_GUI_SYS_WIN_TITLE_C_PlayOpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.PlayCloseAnimation
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_WIN_TITLE_C::PlayCloseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.PlayCloseAnimation");

	UTO14_BPI_GUI_SYS_WIN_TITLE_C_PlayCloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TITLE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_WIN_TITLE_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TITLE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_WIN_TITLE.TO14_BPI_GUI_SYS_WIN_TITLE_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TITLE");

	UTO14_BPI_GUI_SYS_WIN_TITLE_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_WIN_TITLE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
