
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

// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.GetEditOnlyTacticsDefaultLabel
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         LabelList                      (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C::GetEditOnlyTacticsDefaultLabel(TArray<struct FString>* LabelList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.GetEditOnlyTacticsDefaultLabel");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_GetEditOnlyTacticsDefaultLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LabelList != nullptr)
		*LabelList = params.LabelList;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.ResetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C::ResetIndex(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.ResetIndex");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_ResetIndex_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.GetLabelString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C::GetLabelString(int Index, struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.GetLabelString");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_GetLabelString_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.PadWork");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C::CB_MouseEnter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_CB_MouseEnter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.CB_MouseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C::CB_MouseSelect(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.CB_MouseSelect");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_CB_MouseSelect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.InitDefaultTacticsList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C::InitDefaultTacticsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C.InitDefaultTacticsList");

	UTO14_BPI_GUI_MNU_TAG2_SELECT_LIST_C_InitDefaultTacticsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
