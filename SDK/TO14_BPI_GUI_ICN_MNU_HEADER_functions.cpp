
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

// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.Open
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_MNU_HEADER_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.Open");

	UTO14_BPI_GUI_ICN_MNU_HEADER_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.OpenWithFrame
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_MNU_HEADER_C::OpenWithFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.OpenWithFrame");

	UTO14_BPI_GUI_ICN_MNU_HEADER_C_OpenWithFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.CloseWithFrame
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_MNU_HEADER_C::CloseWithFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.CloseWithFrame");

	UTO14_BPI_GUI_ICN_MNU_HEADER_C_CloseWithFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.Close
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_MNU_HEADER_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.Close");

	UTO14_BPI_GUI_ICN_MNU_HEADER_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.CloseImmidiate
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_MNU_HEADER_C::CloseImmidiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.CloseImmidiate");

	UTO14_BPI_GUI_ICN_MNU_HEADER_C_CloseImmidiate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_ICN_MNU_HEADER_C::SetIcon(const struct FString& MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.SetIcon");

	UTO14_BPI_GUI_ICN_MNU_HEADER_C_SetIcon_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.SetIconWithAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_ICN_MNU_HEADER_C::SetIconWithAnimation(const struct FString& MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.SetIconWithAnimation");

	UTO14_BPI_GUI_ICN_MNU_HEADER_C_SetIconWithAnimation_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.SetHeaderNameTopMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InMenuID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FDictionaryText         InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_ICN_MNU_HEADER_C::SetHeaderNameTopMenu(const struct FString& InMenuID, const struct FDictionaryText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.SetHeaderNameTopMenu");

	UTO14_BPI_GUI_ICN_MNU_HEADER_C_SetHeaderNameTopMenu_Params params;
	params.InMenuID = InMenuID;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU_HEADER
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_HEADER_C::ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU_HEADER(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU_HEADER.TO14_BPI_GUI_ICN_MNU_HEADER_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU_HEADER");

	UTO14_BPI_GUI_ICN_MNU_HEADER_C_ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU_HEADER_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
