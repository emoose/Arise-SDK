
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

// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.RefreshUpdatedIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::RefreshUpdatedIcon(const struct FString& MenuID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.RefreshUpdatedIcon");

	UTO14_BPI_GUI_ICN_MNU_C_RefreshUpdatedIcon_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.ClearUpdatedIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::ClearUpdatedIcon(const struct FString& MenuID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.ClearUpdatedIcon");

	UTO14_BPI_GUI_ICN_MNU_C_ClearUpdatedIcon_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetNameForMenuTitle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InMenuID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FDictionaryText         InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::SetNameForMenuTitle(const struct FString& InMenuID, const struct FDictionaryText& InText, bool* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetNameForMenuTitle");

	UTO14_BPI_GUI_ICN_MNU_C_SetNameForMenuTitle_Params params;
	params.InMenuID = InMenuID;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.PlayTextVisibleAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::PlayTextVisibleAnimation(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.PlayTextVisibleAnimation");

	UTO14_BPI_GUI_ICN_MNU_C_PlayTextVisibleAnimation_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.OpenFont
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_MNU_C::OpenFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.OpenFont");

	UTO14_BPI_GUI_ICN_MNU_C_OpenFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.CheckDisabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuData               MenuData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsDisabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::CheckDisabled(const struct FMenuData& MenuData, bool* IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.CheckDisabled");

	UTO14_BPI_GUI_ICN_MNU_C_CheckDisabled_Params params;
	params.MenuData = MenuData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDisabled != nullptr)
		*IsDisabled = params.IsDisabled;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.ChangeFontDisableColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::ChangeFontDisableColor(bool Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.ChangeFontDisableColor");

	UTO14_BPI_GUI_ICN_MNU_C_ChangeFontDisableColor_Params params;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetDataForTopMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_ICN_MNU_C::SetDataForTopMenu(const struct FString& MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetDataForTopMenu");

	UTO14_BPI_GUI_ICN_MNU_C_SetDataForTopMenu_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.NoSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_ICN_MNU_C::NoSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.NoSelect");

	UTO14_BPI_GUI_ICN_MNU_C_NoSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetDataForMenuTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_ICN_MNU_C::SetDataForMenuTitle(const struct FString& MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetDataForMenuTitle");

	UTO14_BPI_GUI_ICN_MNU_C_SetDataForMenuTitle_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CategoryNo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDictionaryText         DicText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_ICN_MNU_C::SetData(int CategoryNo, const struct FDictionaryText& DicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetData");

	UTO14_BPI_GUI_ICN_MNU_C_SetData_Params params;
	params.CategoryNo = CategoryNo;
	params.DicText = DicText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_ICN_MNU_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.OnDeselected");

	UTO14_BPI_GUI_ICN_MNU_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::SetID(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetID");

	UTO14_BPI_GUI_ICN_MNU_C_SetID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_ICN_MNU_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.OnSelected");

	UTO14_BPI_GUI_ICN_MNU_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SelectAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::SelectAnimation(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SelectAnimation");

	UTO14_BPI_GUI_ICN_MNU_C_SelectAnimation_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetIconDataDicText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CategoryNo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::SetIconDataDicText(int CategoryNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetIconDataDicText");

	UTO14_BPI_GUI_ICN_MNU_C_SetIconDataDicText_Params params;
	params.CategoryNo = CategoryNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TextView                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::Select(bool IsSelect, bool TextView)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.Select");

	UTO14_BPI_GUI_ICN_MNU_C_Select_Params params;
	params.IsSelect = IsSelect;
	params.TextView = TextView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetIconData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CategoryNo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_ICN_MNU_C::SetIconData(int CategoryNo, const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.SetIconData");

	UTO14_BPI_GUI_ICN_MNU_C_SetIconData_Params params;
	params.CategoryNo = CategoryNo;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_64_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_ICN_MNU_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_64_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_64_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_ICN_MNU_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_64_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_ICN_MNU_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.Construct");

	UTO14_BPI_GUI_ICN_MNU_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_ICN_MNU_C::BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_ICN_MNU_C_BndEvt__AriseClickableArea_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.AnimationReset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::AnimationReset(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.AnimationReset");

	UTO14_BPI_GUI_ICN_MNU_C_AnimationReset_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_ICN_MNU_C::ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_ICN_MNU.TO14_BPI_GUI_ICN_MNU_C.ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU");

	UTO14_BPI_GUI_ICN_MNU_C_ExecuteUbergraph_TO14_BPI_GUI_ICN_MNU_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
