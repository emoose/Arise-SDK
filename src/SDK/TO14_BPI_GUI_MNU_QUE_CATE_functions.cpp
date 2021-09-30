
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

// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.TextAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_CATE_C::TextAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.TextAnimation");

	UTO14_BPI_GUI_MNU_QUE_CATE_C_TextAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ChangeIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_CATE_C::PadWork(class AMenuPadProcess* PadProcess, int* ChangeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.PadWork");

	UTO14_BPI_GUI_MNU_QUE_CATE_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangeIndex != nullptr)
		*ChangeIndex = params.ChangeIndex;
}


// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.RequestSelectIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_CATE_C::RequestSelectIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.RequestSelectIndex");

	UTO14_BPI_GUI_MNU_QUE_CATE_C_RequestSelectIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewSelectIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_CATE_C::SetActive(int NewSelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.SetActive");

	UTO14_BPI_GUI_MNU_QUE_CATE_C_SetActive_Params params;
	params.NewSelectIndex = NewSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.SetPadEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_CATE_C::SetPadEnable(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.SetPadEnable");

	UTO14_BPI_GUI_MNU_QUE_CATE_C_SetPadEnable_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.MoveActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_CATE_C::MoveActive(int Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.MoveActive");

	UTO14_BPI_GUI_MNU_QUE_CATE_C_MoveActive_Params params;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_CATE_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.Initialize");

	UTO14_BPI_GUI_MNU_QUE_CATE_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_QUE_CATE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.Construct");

	UTO14_BPI_GUI_MNU_QUE_CATE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_CATE
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_QUE_CATE_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_CATE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_QUE_CATE.TO14_BPI_GUI_MNU_QUE_CATE_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_CATE");

	UTO14_BPI_GUI_MNU_QUE_CATE_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_QUE_CATE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
