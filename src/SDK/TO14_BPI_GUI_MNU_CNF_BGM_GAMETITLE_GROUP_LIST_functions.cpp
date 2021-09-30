
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

// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.OpenAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::OpenAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.OpenAnim");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_OpenAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.SetAllClickableArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::SetAllClickableArea(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.SetAllClickableArea");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_SetAllClickableArea_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.CB_MouseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::CB_MouseSelect(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.CB_MouseSelect");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_CB_MouseSelect_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::CB_MouseEnter(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_CB_MouseEnter_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.UpDownCursorMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::UpDownCursorMove(bool* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.UpDownCursorMove");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_UpDownCursorMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.GetWidgetList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C* OutGameTitleWidget             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::GetWidgetList(int InIndex, bool* OutIsResult, class UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_C** OutGameTitleWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.GetWidgetList");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_GetWidgetList_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsResult != nullptr)
		*OutIsResult = params.OutIsResult;
	if (OutGameTitleWidget != nullptr)
		*OutGameTitleWidget = params.OutGameTitleWidget;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.PadControl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InPadProsess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsDecide                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::PadControl(class AMenuPadProcess* InPadProsess, bool* OutIsDecide)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.PadControl");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_PadControl_Params params;
	params.InPadProsess = InPadProsess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsDecide != nullptr)
		*OutIsDecide = params.OutIsDecide;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.RefreshList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::RefreshList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.RefreshList");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_RefreshList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.CreateGameTitleWidgetList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigBgmData          InConfingBgmData               (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::CreateGameTitleWidgetList(const struct FConfigBgmData& InConfingBgmData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.CreateGameTitleWidgetList");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_CreateGameTitleWidgetList_Params params;
	params.InConfingBgmData = InConfingBgmData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.Initialize");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.ChangGameTitleCursor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InGameTitleSort                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C::ChangGameTitleCursor__DelegateSignature(int InGameTitleSort)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C.ChangGameTitleCursor__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_BGM_GAMETITLE_GROUP_LIST_C_ChangGameTitleCursor__DelegateSignature_Params params;
	params.InGameTitleSort = InGameTitleSort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
