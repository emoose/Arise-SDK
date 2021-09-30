
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

// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.CheckAddListable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C::CheckAddListable(const struct FString& Label, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.CheckAddListable");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_CheckAddListable_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.GetLabelData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C::GetLabelData(int Index, struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.GetLabelData");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_GetLabelData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C::PadWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.PadWork");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.InitList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CursorLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 BaseLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C::InitList(int Type, const struct FString& CursorLabel, const struct FString& BaseLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.InitList");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_InitList_Params params;
	params.Type = Type;
	params.CursorLabel = CursorLabel;
	params.BaseLabel = BaseLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.Initialize");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C::CB_MouseEnter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_CB_MouseEnter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.CB_MouseMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C::CB_MouseMove(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST.TO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C.CB_MouseMove");

	UTO14_BPI_GUI_MNU_TAG2_ACT_SELECT_LIST_C_CB_MouseMove_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
