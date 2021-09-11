
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

// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.RequestMouseFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::RequestMouseFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.RequestMouseFocus");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_RequestMouseFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.SetMouseFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::SetMouseFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.SetMouseFocus");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_SetMouseFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.IndexToReturnValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPauseMenuResult>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPauseMenuResult> UTO14_BPI_GUI_MNU_PAU_LIST_C::IndexToReturnValue(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.IndexToReturnValue");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_IndexToReturnValue_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Next
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Next");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Prev
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Prev");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_Prev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.InitItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C* InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifiedText           ModifiedText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::InitItem(class UTO14_BPI_GUI_MNU_PAU_LIST_000_STR_C* InputPin, int UniqueId, const struct FModifiedText& ModifiedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.InitItem");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_InitItem_Params params;
	params.InputPin = InputPin;
	params.UniqueId = UniqueId;
	params.ModifiedText = ModifiedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::Select(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Select");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_Select_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.MouseDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::MouseDecide(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.MouseDecide");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_MouseDecide_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.SetActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::SetActivate(int NewIndex, int OldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.SetActivate");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_SetActivate_Params params;
	params.NewIndex = NewIndex;
	params.OldIndex = OldIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.GetResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::GetResult(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.GetResult");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_GetResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Decided                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPauseMenuResult>  Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::PadWork(class AMenuPadProcess* PadProcess, bool* Decided, TEnumAsByte<EPauseMenuResult>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.PadWork");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decided != nullptr)
		*Decided = params.Decided;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPauseMenuOpenType> OpenType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_PAU_LIST_C::Init(TEnumAsByte<EPauseMenuOpenType> OpenType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_PAU_LIST.TO14_BPI_GUI_MNU_PAU_LIST_C.Init");

	UTO14_BPI_GUI_MNU_PAU_LIST_C_Init_Params params;
	params.OpenType = OpenType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
