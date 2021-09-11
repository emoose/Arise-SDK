
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

// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.SetPadProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         CurrentPadProcess              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_HLP_C::SetPadProcess(class AMenuPadProcess* CurrentPadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.SetPadProcess");

	UTO14_BPI_GUI_MNU_HLP_C_SetPadProcess_Params params;
	params.CurrentPadProcess = CurrentPadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.GetPadProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_HLP_C::GetPadProcess(class AMenuPadProcess** PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.GetPadProcess");

	UTO14_BPI_GUI_MNU_HLP_C_GetPadProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PadProcess != nullptr)
		*PadProcess = params.PadProcess;
}


// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_HLP_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.Hide");

	UTO14_BPI_GUI_MNU_HLP_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_HLP_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.Show");

	UTO14_BPI_GUI_MNU_HLP_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.SetHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_HLP_C::SetHelp(const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.SetHelp");

	UTO14_BPI_GUI_MNU_HLP_C_SetHelp_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.OnActivate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_HLP_C::OnActivate__DelegateSignature(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.OnActivate__DelegateSignature");

	UTO14_BPI_GUI_MNU_HLP_C_OnActivate__DelegateSignature_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.OnHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_HLP_C::OnHide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.OnHide__DelegateSignature");

	UTO14_BPI_GUI_MNU_HLP_C_OnHide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.OnShow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_HLP_C::OnShow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_HLP.TO14_BPI_GUI_MNU_HLP_C.OnShow__DelegateSignature");

	UTO14_BPI_GUI_MNU_HLP_C_OnShow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
