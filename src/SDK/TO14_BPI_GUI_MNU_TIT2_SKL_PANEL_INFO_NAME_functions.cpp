
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

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.Restruct
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlAliasData           BtlAliasData                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C::Restruct(const struct FBtlAliasData& BtlAliasData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.Restruct");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_Restruct_Params params;
	params.BtlAliasData = BtlAliasData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.ChangedVisibleDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C::ChangedVisibleDelegate__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.ChangedVisibleDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_ChangedVisibleDelegate__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.EnabledDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C::EnabledDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.EnabledDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_EnabledDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.CompletedDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C::CompletedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.CompletedDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_CompletedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.DeselectDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C::DeselectDelegate__DelegateSignature(int AliasID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.DeselectDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_DeselectDelegate__DelegateSignature_Params params;
	params.AliasID = AliasID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.SelectDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C::SelectDelegate__DelegateSignature(int AliasID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.SelectDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_SelectDelegate__DelegateSignature_Params params;
	params.AliasID = AliasID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.DecideDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C::DecideDelegate__DelegateSignature(const struct FString& Result, int AliasID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.DecideDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_DecideDelegate__DelegateSignature_Params params;
	params.Result = Result;
	params.AliasID = AliasID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.ActivateDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C::ActivateDelegate__DelegateSignature(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C.ActivateDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_NAME_C_ActivateDelegate__DelegateSignature_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
