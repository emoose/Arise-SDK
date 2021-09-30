
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

// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.MoveActive
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_CATE_C::MoveActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.MoveActive");

	UTO14_BPI_GUI_MNU_AFT_CATE_C_MoveActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.Input
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsChange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SelectCategory                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CATE_C::Input(class AMenuPadProcess* PadProcess, bool* IsChange, int* SelectCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.Input");

	UTO14_BPI_GUI_MNU_AFT_CATE_C_Input_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChange != nullptr)
		*IsChange = params.IsChange;
	if (SelectCategory != nullptr)
		*SelectCategory = params.SelectCategory;
}


// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.SetPadEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CATE_C::SetPadEnable(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.SetPadEnable");

	UTO14_BPI_GUI_MNU_AFT_CATE_C_SetPadEnable_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewSelectIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CATE_C::SetActive(int NewSelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.SetActive");

	UTO14_BPI_GUI_MNU_AFT_CATE_C_SetActive_Params params;
	params.NewSelectIndex = NewSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_AFT_CATE_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.Init");

	UTO14_BPI_GUI_MNU_AFT_CATE_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CATE_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.PreConstruct");

	UTO14_BPI_GUI_MNU_AFT_CATE_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_CATE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_AFT_CATE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_CATE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_AFT_CATE.TO14_BPI_GUI_MNU_AFT_CATE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_CATE");

	UTO14_BPI_GUI_MNU_AFT_CATE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_AFT_CATE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
