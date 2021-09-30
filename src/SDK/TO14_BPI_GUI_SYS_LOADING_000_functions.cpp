
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

// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.CanHide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOADING_000_C::CanHide(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.CanHide");

	UTO14_BPI_GUI_SYS_LOADING_000_C_CanHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.If_IsShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOADING_000_C::If_IsShow(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.If_IsShow");

	UTO14_BPI_GUI_SYS_LOADING_000_C_If_IsShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.ShowIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWhite                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOADING_000_C::ShowIcon(bool bShow, bool bWhite)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.ShowIcon");

	UTO14_BPI_GUI_SYS_LOADING_000_C_ShowIcon_Params params;
	params.bShow = bShow;
	params.bWhite = bWhite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.EventShowStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWhite                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOADING_000_C::EventShowStart(bool bWhite)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.EventShowStart");

	UTO14_BPI_GUI_SYS_LOADING_000_C_EventShowStart_Params params;
	params.bWhite = bWhite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.EventHide
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LOADING_000_C::EventHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.EventHide");

	UTO14_BPI_GUI_SYS_LOADING_000_C_EventHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_SYS_LOADING_000_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.Construct");

	UTO14_BPI_GUI_SYS_LOADING_000_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.RequestShowNowlodingIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWhite                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOADING_000_C::RequestShowNowlodingIcon(bool bShow, bool bWhite)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.RequestShowNowlodingIcon");

	UTO14_BPI_GUI_SYS_LOADING_000_C_RequestShowNowlodingIcon_Params params;
	params.bShow = bShow;
	params.bWhite = bWhite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.RequestShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOADING_000_C::RequestShow(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.RequestShow");

	UTO14_BPI_GUI_SYS_LOADING_000_C_RequestShow_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_000
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_SYS_LOADING_000_C::ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_SYS_LOADING_000.TO14_BPI_GUI_SYS_LOADING_000_C.ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_000");

	UTO14_BPI_GUI_SYS_LOADING_000_C_ExecuteUbergraph_TO14_BPI_GUI_SYS_LOADING_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
