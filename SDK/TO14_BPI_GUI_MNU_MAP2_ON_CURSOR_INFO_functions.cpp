
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

// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.UpdateShow
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bChanged                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ShowKey                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C::UpdateShow(class UWidget** Instigator, bool* bSuccess, bool* bChanged, class UWidget** ShowKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.UpdateShow");

	UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_UpdateShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Instigator != nullptr)
		*Instigator = params.Instigator;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (bChanged != nullptr)
		*bChanged = params.bChanged;
	if (ShowKey != nullptr)
		*ShowKey = params.ShowKey;
}


// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.IsShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bShow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C::IsShow(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.IsShow");

	UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_IsShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.Hide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C::Hide(class UWidget* Key, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.Hide");

	UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_Hide_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.Show
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FLocatorInfo            Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWidget*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ShowKey                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C::Show(class UWidget* Key, const struct FLocatorInfo& Value, class UWidget** Instigator, bool* bSuccess, class UWidget** ShowKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.Show");

	UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_Show_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Instigator != nullptr)
		*Instigator = params.Instigator;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (ShowKey != nullptr)
		*ShowKey = params.ShowKey;
}


// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.SetWidgetComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C::SetWidgetComponent(class UWidgetComponent* WidgetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.SetWidgetComponent");

	UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_SetWidgetComponent_Params params;
	params.WidgetComponent = WidgetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.UpdatePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C::UpdatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.UpdatePosition");

	UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_UpdatePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.SetPositionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 PositionWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C::SetPositionWidget(class UWidget* PositionWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.SetPositionWidget");

	UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_SetPositionWidget_Params params;
	params.PositionWidget = PositionWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocatorInfo            LocatorInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C::Refresh(const struct FLocatorInfo& LocatorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.Refresh");

	UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_Refresh_Params params;
	params.LocatorInfo = LocatorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.RefreshAsGigant
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C::RefreshAsGigant()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO.TO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C.RefreshAsGigant");

	UTO14_BPI_GUI_MNU_MAP2_ON_CURSOR_INFO_C_RefreshAsGigant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
