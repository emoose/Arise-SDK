
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

// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.UpdatePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::UpdatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.UpdatePosition");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_UpdatePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.SetWidgetComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::SetWidgetComponent(class UWidgetComponent* WidgetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.SetWidgetComponent");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_SetWidgetComponent_Params params;
	params.WidgetComponent = WidgetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.AdjustScaling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::AdjustScaling(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.AdjustScaling");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_AdjustScaling_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.Refresh");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.GetOwnerWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 OwnerWidget                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::GetOwnerWidget(class UWidget** OwnerWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.GetOwnerWidget");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_GetOwnerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OwnerWidget != nullptr)
		*OwnerWidget = params.OwnerWidget;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.Restruct
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::Restruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.Restruct");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_Restruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 OwnerWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::Initialize(class UWidget* OwnerWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.Initialize");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_Initialize_Params params;
	params.OwnerWidget = OwnerWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.CustomEvent_RequestShow
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* Panel                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::CustomEvent_RequestShow(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.CustomEvent_RequestShow");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_CustomEvent_RequestShow_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.CustomEvent_RequestHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::CustomEvent_RequestHide(class UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_C* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.CustomEvent_RequestHide");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_CustomEvent_RequestHide_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.ChangedVisibleDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::ChangedVisibleDelegate__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.ChangedVisibleDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_ChangedVisibleDelegate__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.EnabledDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::EnabledDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.EnabledDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_EnabledDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.CompletedDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::CompletedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.CompletedDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_CompletedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.DeselectDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::DeselectDelegate__DelegateSignature(int AliasID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.DeselectDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_DeselectDelegate__DelegateSignature_Params params;
	params.AliasID = AliasID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.SelectDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::SelectDelegate__DelegateSignature(int AliasID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.SelectDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_SelectDelegate__DelegateSignature_Params params;
	params.AliasID = AliasID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.DecideDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::DecideDelegate__DelegateSignature(const struct FString& Result, int AliasID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.DecideDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_DecideDelegate__DelegateSignature_Params params;
	params.Result = Result;
	params.AliasID = AliasID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.ActivateDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           sw                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C::ActivateDelegate__DelegateSignature(bool sw)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO.TO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C.ActivateDelegate__DelegateSignature");

	UTO14_BPI_GUI_MNU_TIT2_SKL_PANEL_INFO_C_ActivateDelegate__DelegateSignature_Params params;
	params.sw = sw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
