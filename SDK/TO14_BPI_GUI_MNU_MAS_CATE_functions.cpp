
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

// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_CATE_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.Update");

	UTO14_BPI_GUI_MNU_MAS_CATE_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.MoveRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_CATE_C::MoveRequest(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.MoveRequest");

	UTO14_BPI_GUI_MNU_MAS_CATE_C_MoveRequest_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.MoveActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_CATE_C::MoveActive(int Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.MoveActive");

	UTO14_BPI_GUI_MNU_MAS_CATE_C_MoveActive_Params params;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.SetPadEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_CATE_C::SetPadEnable(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.SetPadEnable");

	UTO14_BPI_GUI_MNU_MAS_CATE_C_SetPadEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewSelectIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAS_CATE_C::SetActive(int NewSelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.SetActive");

	UTO14_BPI_GUI_MNU_MAS_CATE_C_SetActive_Params params;
	params.NewSelectIndex = NewSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAS_CATE_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAS_CATE.TO14_BPI_GUI_MNU_MAS_CATE_C.Initialize");

	UTO14_BPI_GUI_MNU_MAS_CATE_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
