
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

// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.GetPageNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C::GetPageNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.GetPageNum");

	UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_GetPageNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.GetPageIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C::GetPageIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.GetPageIndex");

	UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_GetPageIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.SetDetailData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C::SetDetailData(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.SetDetailData");

	UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_SetDetailData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.PrevPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C::PrevPage(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.PrevPage");

	UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_PrevPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.NextPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C::NextPage(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.NextPage");

	UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_NextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.SetDetail
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDetailData             DetailData                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C::SetDetail(struct FDetailData* DetailData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.SetDetail");

	UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_SetDetail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DetailData != nullptr)
		*DetailData = params.DetailData;
}


// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.PopupNextPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEndPage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C::PopupNextPage(bool* IsEndPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.PopupNextPage");

	UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_PopupNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEndPage != nullptr)
		*IsEndPage = params.IsEndPage;
}


// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.InputPad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C::InputPad(class AMenuPadProcess* PadProcess, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.InputPad");

	UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_InputPad_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.SetHelpData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHelpData               HelpData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C::SetHelpData(const struct FHelpData& HelpData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_COL_HLP_WIN00.TO14_BPI_GUI_MNU_COL_HLP_WIN00_C.SetHelpData");

	UTO14_BPI_GUI_MNU_COL_HLP_WIN00_C_SetHelpData_Params params;
	params.HelpData = HelpData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
