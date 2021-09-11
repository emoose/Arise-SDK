
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

// Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.SetBattleMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBattle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_CATE2_C::SetBattleMode(bool IsBattle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.SetBattleMode");

	UTO14_BPI_GUI_MNU_ITM_CATE2_C_SetBattleMode_Params params;
	params.IsBattle = IsBattle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewSelectIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_CATE2_C::SetActive(int NewSelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.SetActive");

	UTO14_BPI_GUI_MNU_ITM_CATE2_C_SetActive_Params params;
	params.NewSelectIndex = NewSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.SetPadEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_CATE2_C::SetPadEnable(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.SetPadEnable");

	UTO14_BPI_GUI_MNU_ITM_CATE2_C_SetPadEnable_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.MoveActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_CATE2_C::MoveActive(int Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.MoveActive");

	UTO14_BPI_GUI_MNU_ITM_CATE2_C_MoveActive_Params params;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_CATE2_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.Initialize");

	UTO14_BPI_GUI_MNU_ITM_CATE2_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_ITM_CATE2_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_ITM_CATE2_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_CATE2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_ITM_CATE2_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_CATE2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_ITM_CATE2.TO14_BPI_GUI_MNU_ITM_CATE2_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_CATE2");

	UTO14_BPI_GUI_MNU_ITM_CATE2_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_ITM_CATE2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
