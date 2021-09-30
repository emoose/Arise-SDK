
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

// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.CheckSelectColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemCategory                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::CheckSelectColor(int CharacterID, EItemCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.CheckSelectColor");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_CheckSelectColor_Params params;
	params.CharacterID = CharacterID;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetVisualItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuVisualData         VisualData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetVisualItem(const struct FMenuVisualData& VisualData, EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetVisualItem");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetVisualItem_Params params;
	params.VisualData = VisualData;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetCursorVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCursorVisible");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetCursorVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetNameText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 DictionaryID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetNameText(const struct FString& GroupID, const struct FString& DictionaryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetNameText");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetNameText_Params params;
	params.GroupID = GroupID;
	params.DictionaryID = DictionaryID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCategoryVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetCategoryVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCategoryVisible");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetCategoryVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetupVisualJumpText
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetupVisualJumpText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetupVisualJumpText");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetupVisualJumpText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetMouseActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetMouseActivate(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetMouseActivate");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetMouseActivate_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetTextOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDictionaryText         TextData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetTextOnly(const struct FDictionaryText& TextData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetTextOnly");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetTextOnly_Params params;
	params.TextData = TextData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCursorAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetCursorAnimation(bool Play)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCursorAnimation");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetCursorAnimation_Params params;
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.AnimeUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::AnimeUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.AnimeUpdate");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_AnimeUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetActivate(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetActivate");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetActivate_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetItemID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetItemID(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetItemID");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetItemID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.OnDeselected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_EQU_SET_STR_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.OnDeselected");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.OnSelected
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTO14_BPI_GUI_MNU_EQU_SET_STR_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.OnSelected");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCategoryText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 GroupID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 DictionaryID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::SetCategoryText(const struct FString& GroupID, const struct FString& DictionaryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.SetCategoryText");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_SetCategoryText_Params params;
	params.GroupID = GroupID;
	params.DictionaryID = DictionaryID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.OnWidgetCreated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::OnWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.OnWidgetCreated");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_OnWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.Tick");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_11_OnMouseClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_11_OnMouseClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_11_OnMouseClickedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_BndEvt__AriseClickableArea_368_K2Node_ComponentBoundEvent_11_OnMouseClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_STR
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_EQU_SET_STR_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_STR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_EQU_SET_STR.TO14_BPI_GUI_MNU_EQU_SET_STR_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_STR");

	UTO14_BPI_GUI_MNU_EQU_SET_STR_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_EQU_SET_STR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
