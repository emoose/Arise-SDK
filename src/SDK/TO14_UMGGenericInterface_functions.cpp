
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

// Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.CanHide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_UMGGenericInterface_C::CanHide(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.CanHide");

	UTO14_UMGGenericInterface_C_CanHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.RequestShowNowlodingIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWhite                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_UMGGenericInterface_C::RequestShowNowlodingIcon(bool bShow, bool bWhite)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.RequestShowNowlodingIcon");

	UTO14_UMGGenericInterface_C_RequestShowNowlodingIcon_Params params;
	params.bShow = bShow;
	params.bWhite = bWhite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.If_IsShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_UMGGenericInterface_C::If_IsShow(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.If_IsShow");

	UTO14_UMGGenericInterface_C_If_IsShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.RequestShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_UMGGenericInterface_C::RequestShow(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_UMGGenericInterface.TO14_UMGGenericInterface_C.RequestShow");

	UTO14_UMGGenericInterface_C_RequestShow_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
