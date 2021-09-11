
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

// Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.CanHide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_AutoSaveDummy_C::CanHide(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.CanHide");

	UTO14_AutoSaveDummy_C_CanHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.If_IsShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_AutoSaveDummy_C::If_IsShow(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.If_IsShow");

	UTO14_AutoSaveDummy_C_If_IsShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.IsShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_AutoSaveDummy_C::IsShow(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.IsShow");

	UTO14_AutoSaveDummy_C_IsShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_AutoSaveDummy_C::Show(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.Show");

	UTO14_AutoSaveDummy_C_Show_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.RequestShowNowlodingIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWhite                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_AutoSaveDummy_C::RequestShowNowlodingIcon(bool bShow, bool bWhite)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.RequestShowNowlodingIcon");

	UTO14_AutoSaveDummy_C_RequestShowNowlodingIcon_Params params;
	params.bShow = bShow;
	params.bWhite = bWhite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.RequestShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_AutoSaveDummy_C::RequestShow(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.RequestShow");

	UTO14_AutoSaveDummy_C_RequestShow_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_AutoSaveDummy_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.Tick");

	UTO14_AutoSaveDummy_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.ExecuteUbergraph_TO14_AutoSaveDummy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_AutoSaveDummy_C::ExecuteUbergraph_TO14_AutoSaveDummy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_AutoSaveDummy.TO14_AutoSaveDummy_C.ExecuteUbergraph_TO14_AutoSaveDummy");

	UTO14_AutoSaveDummy_C_ExecuteUbergraph_TO14_AutoSaveDummy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
