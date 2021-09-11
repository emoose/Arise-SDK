
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

// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.ResetMenuArenaSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuManagerInterface_C::ResetMenuArenaSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.ResetMenuArenaSelect");

	UTO14_BP_MenuManagerInterface_C_ResetMenuArenaSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CallOnCookingEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::CallOnCookingEvent(EArisePartyID PartyId, int RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CallOnCookingEvent");

	UTO14_BP_MenuManagerInterface_C_CallOnCookingEvent_Params params;
	params.PartyId = PartyId;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCookingEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseCookingEventData  Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnCookingEvent(const struct FAriseCookingEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCookingEvent");

	UTO14_BP_MenuManagerInterface_C_UnbindOnCookingEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCookingEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseCookingEventData  Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnCookingEvent(const struct FAriseCookingEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCookingEvent");

	UTO14_BP_MenuManagerInterface_C_BindOnCookingEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetIcnMnuAnimInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C> Interface                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::GetIcnMnuAnimInterface(TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C>* Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetIcnMnuAnimInterface");

	UTO14_BP_MenuManagerInterface_C_GetIcnMnuAnimInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interface != nullptr)
		*Interface = params.Interface;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.NotifyOnChangeEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::NotifyOnChangeEquipment(EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.NotifyOnChangeEquipment");

	UTO14_BP_MenuManagerInterface_C_NotifyOnChangeEquipment_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetBtlControlChara
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::GetBtlControlChara(EArisePartyID* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetBtlControlChara");

	UTO14_BP_MenuManagerInterface_C_GetBtlControlChara_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetVisibilityHeaderWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetVisibilityHeaderWidget(ESlateVisibility InVisibility, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetVisibilityHeaderWidget");

	UTO14_BP_MenuManagerInterface_C_SetVisibilityHeaderWidget_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetBtlUsetItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetBtlUsetItemID(const struct FString& ItemID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetBtlUsetItemID");

	UTO14_BP_MenuManagerInterface_C_SetBtlUsetItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetIsNewGameStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNewGameStart                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::GetIsNewGameStart(bool* IsNewGameStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetIsNewGameStart");

	UTO14_BP_MenuManagerInterface_C_GetIsNewGameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNewGameStart != nullptr)
		*IsNewGameStart = params.IsNewGameStart;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetIsNewGameStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsNewGameStart                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetIsNewGameStart(bool bIsNewGameStart, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetIsNewGameStart");

	UTO14_BP_MenuManagerInterface_C_SetIsNewGameStart_Params params;
	params.bIsNewGameStart = bIsNewGameStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetNextSceneID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::GetNextSceneID(struct FString* NextSceneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetNextSceneID");

	UTO14_BP_MenuManagerInterface_C_GetNextSceneID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderNameTopMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InMenuID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FDictionaryText         InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetHeaderNameTopMenu(const struct FString& InMenuID, const struct FDictionaryText& InText, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderNameTopMenu");

	UTO14_BP_MenuManagerInterface_C_SetHeaderNameTopMenu_Params params;
	params.InMenuID = InMenuID;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetSaveDataLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InSaveDataLoaded               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetSaveDataLoaded(bool InSaveDataLoaded, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetSaveDataLoaded");

	UTO14_BP_MenuManagerInterface_C_SetSaveDataLoaded_Params params;
	params.InSaveDataLoaded = InSaveDataLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetLoadedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LoadedSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetLoadedSlot(int LoadedSlot, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetLoadedSlot");

	UTO14_BP_MenuManagerInterface_C_SetLoadedSlot_Params params;
	params.LoadedSlot = LoadedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.ShowHelpWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::ShowHelpWidget(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.ShowHelpWidget");

	UTO14_BP_MenuManagerInterface_C_ShowHelpWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnShowLight(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowLight");

	UTO14_BP_MenuManagerInterface_C_UnbindOnShowLight_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnShowLight(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowLight");

	UTO14_BP_MenuManagerInterface_C_BindOnShowLight_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowTopParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnShowTopParticle(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowTopParticle");

	UTO14_BP_MenuManagerInterface_C_UnbindOnShowTopParticle_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowTopParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnShowTopParticle(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowTopParticle");

	UTO14_BP_MenuManagerInterface_C_BindOnShowTopParticle_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowCaptureBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnShowCaptureBG(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowCaptureBG");

	UTO14_BP_MenuManagerInterface_C_UnbindOnShowCaptureBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowCaptureBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnShowCaptureBG(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowCaptureBG");

	UTO14_BP_MenuManagerInterface_C_BindOnShowCaptureBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowLevelHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnShowLevelHeader(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowLevelHeader");

	UTO14_BP_MenuManagerInterface_C_UnbindOnShowLevelHeader_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowLevelHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnShowLevelHeader(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowLevelHeader");

	UTO14_BP_MenuManagerInterface_C_BindOnShowLevelHeader_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnLevelActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuLevelActivate    Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnLevelActivate(const struct FOnMenuLevelActivate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnLevelActivate");

	UTO14_BP_MenuManagerInterface_C_UnbindOnLevelActivate_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnLevelActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuLevelActivate    Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnLevelActivate(const struct FOnMenuLevelActivate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnLevelActivate");

	UTO14_BP_MenuManagerInterface_C_BindOnLevelActivate_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetCurrentMenuData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMenuData               CurrentMenuData                (Parm, OutParm)

void UTO14_BP_MenuManagerInterface_C::GetCurrentMenuData(struct FMenuData* CurrentMenuData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetCurrentMenuData");

	UTO14_BP_MenuManagerInterface_C_GetCurrentMenuData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentMenuData != nullptr)
		*CurrentMenuData = params.CurrentMenuData;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderWidget3D
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             HeaderWidget3D                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetHeaderWidget3D(class UUserWidget* HeaderWidget3D, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderWidget3D");

	UTO14_BP_MenuManagerInterface_C_SetHeaderWidget3D_Params params;
	params.HeaderWidget3D = HeaderWidget3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HeaderActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetHeaderActor(class AActor* HeaderActor, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderActor");

	UTO14_BP_MenuManagerInterface_C_SetHeaderActor_Params params;
	params.HeaderActor = HeaderActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           WithAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetHeaderIcon(const struct FString& MenuID, bool WithAnimation, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHeaderIcon");

	UTO14_BP_MenuManagerInterface_C_SetHeaderIcon_Params params;
	params.MenuID = MenuID;
	params.WithAnimation = WithAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetShowAlias
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::GetShowAlias(struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetShowAlias");

	UTO14_BP_MenuManagerInterface_C_GetShowAlias_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetHelpWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UUserWidget*             HelpWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::GetHelpWidget(class UUserWidget** HelpWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetHelpWidget");

	UTO14_BP_MenuManagerInterface_C_GetHelpWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HelpWidget != nullptr)
		*HelpWidget = params.HelpWidget;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetQuestID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::GetQuestID(struct FString* QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetQuestID");

	UTO14_BP_MenuManagerInterface_C_GetQuestID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestID != nullptr)
		*QuestID = params.QuestID;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.Close
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::Close(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.Close");

	UTO14_BP_MenuManagerInterface_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetOpenMapLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenMapLocation                (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::GetOpenMapLocation(struct FString* OpenMapLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetOpenMapLocation");

	UTO14_BP_MenuManagerInterface_C_GetOpenMapLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OpenMapLocation != nullptr)
		*OpenMapLocation = params.OpenMapLocation;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetOpenMapLocationSecondary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenMapLocationSecondary       (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::GetOpenMapLocationSecondary(struct FString* OpenMapLocationSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetOpenMapLocationSecondary");

	UTO14_BP_MenuManagerInterface_C_GetOpenMapLocationSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OpenMapLocationSecondary != nullptr)
		*OpenMapLocationSecondary = params.OpenMapLocationSecondary;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetQuestIDSecondary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestIDSecondary               (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::GetQuestIDSecondary(struct FString* QuestIDSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetQuestIDSecondary");

	UTO14_BP_MenuManagerInterface_C_GetQuestIDSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestIDSecondary != nullptr)
		*QuestIDSecondary = params.QuestIDSecondary;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CallGetBackMenuID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::CallGetBackMenuID(struct FString* MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CallGetBackMenuID");

	UTO14_BP_MenuManagerInterface_C_CallGetBackMenuID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuID != nullptr)
		*MenuID = params.MenuID;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetOpenMapLocationSecondary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenMapLocationSecondary       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetOpenMapLocationSecondary(const struct FString& OpenMapLocationSecondary, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetOpenMapLocationSecondary");

	UTO14_BP_MenuManagerInterface_C_SetOpenMapLocationSecondary_Params params;
	params.OpenMapLocationSecondary = OpenMapLocationSecondary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetOpenMapLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenMapLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetOpenMapLocation(const struct FString& OpenMapLocation, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetOpenMapLocation");

	UTO14_BP_MenuManagerInterface_C_SetOpenMapLocation_Params params;
	params.OpenMapLocation = OpenMapLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetQuestIDSecondary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestIDSecondary               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetQuestIDSecondary(const struct FString& QuestIDSecondary, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetQuestIDSecondary");

	UTO14_BP_MenuManagerInterface_C_SetQuestIDSecondary_Params params;
	params.QuestIDSecondary = QuestIDSecondary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetQuestID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetQuestID(const struct FString& QuestID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetQuestID");

	UTO14_BP_MenuManagerInterface_C_SetQuestID_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CheckPrevMenuCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::CheckPrevMenuCount(const struct FString& MenuID, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CheckPrevMenuCount");

	UTO14_BP_MenuManagerInterface_C_CheckPrevMenuCount_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetPadProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::GetPadProcess(class AMenuPadProcess** PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetPadProcess");

	UTO14_BP_MenuManagerInterface_C_GetPadProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PadProcess != nullptr)
		*PadProcess = params.PadProcess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.PrepareToCloseView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextMenuID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::PrepareToCloseView(const struct FString& NextMenuID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.PrepareToCloseView");

	UTO14_BP_MenuManagerInterface_C_PrepareToCloseView_Params params;
	params.NextMenuID = NextMenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetShowAlias
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetShowAlias(const struct FString& Label, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetShowAlias");

	UTO14_BP_MenuManagerInterface_C_SetShowAlias_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHelpID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetHelpID(const struct FString& HelpID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHelpID");

	UTO14_BP_MenuManagerInterface_C_SetHelpID_Params params;
	params.HelpID = HelpID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnChangeTopBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuChangeTopBGEventData Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnChangeTopBG(const struct FOnMenuChangeTopBGEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnChangeTopBG");

	UTO14_BP_MenuManagerInterface_C_UnbindOnChangeTopBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnChangeTopBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuChangeTopBGEventData Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnChangeTopBG(const struct FOnMenuChangeTopBGEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnChangeTopBG");

	UTO14_BP_MenuManagerInterface_C_BindOnChangeTopBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowTopBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuShowTopBGEventData Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnShowTopBG(const struct FOnMenuShowTopBGEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnShowTopBG");

	UTO14_BP_MenuManagerInterface_C_UnbindOnShowTopBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowTopBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuShowTopBGEventData Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnShowTopBG(const struct FOnMenuShowTopBGEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnShowTopBG");

	UTO14_BP_MenuManagerInterface_C_BindOnShowTopBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetMenuBGType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EMenuBGType                    BGType                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::GetMenuBGType(EMenuBGType* BGType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetMenuBGType");

	UTO14_BP_MenuManagerInterface_C_GetMenuBGType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGType != nullptr)
		*BGType = params.BGType;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetExternalHelpInnerWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             HelpInnerWidget                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetExternalHelpInnerWidget(class UUserWidget* HelpInnerWidget, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetExternalHelpInnerWidget");

	UTO14_BP_MenuManagerInterface_C_SetExternalHelpInnerWidget_Params params;
	params.HelpInnerWidget = HelpInnerWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetPrevSceneCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::GetPrevSceneCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetPrevSceneCount");

	UTO14_BP_MenuManagerInterface_C_GetPrevSceneCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CheckIsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::CheckIsClose(bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CheckIsClose");

	UTO14_BP_MenuManagerInterface_C_CheckIsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.Open
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class APlayerController*       OwnerPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideCapture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::Open(const struct FString& MenuID, class APlayerController* OwnerPlayer, bool HideCapture, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.Open");

	UTO14_BP_MenuManagerInterface_C_Open_Params params;
	params.MenuID = MenuID;
	params.OwnerPlayer = OwnerPlayer;
	params.HideCapture = HideCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetShopID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ShopID                         (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::GetShopID(struct FString* ShopID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetShopID");

	UTO14_BP_MenuManagerInterface_C_GetShopID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShopID != nullptr)
		*ShopID = params.ShopID;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.IsAllowInputChangeMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAllow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::IsAllowInputChangeMenu(bool* bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.IsAllowInputChangeMenu");

	UTO14_BP_MenuManagerInterface_C_IsAllowInputChangeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllow != nullptr)
		*bAllow = params.bAllow;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHelp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetHelp(const struct FString& HelpLabel, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetHelp");

	UTO14_BP_MenuManagerInterface_C_SetHelp_Params params;
	params.HelpLabel = HelpLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.FadeInForLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::FadeInForLevel(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.FadeInForLevel");

	UTO14_BP_MenuManagerInterface_C_FadeInForLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.FadeOutForLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::FadeOutForLevel(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.FadeOutForLevel");

	UTO14_BP_MenuManagerInterface_C_FadeOutForLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetBattleMenuParam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleMenuParam        BattleMenuParam                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::SetBattleMenuParam(const struct FBattleMenuParam& BattleMenuParam, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.SetBattleMenuParam");

	UTO14_BP_MenuManagerInterface_C_SetBattleMenuParam_Params params;
	params.BattleMenuParam = BattleMenuParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetBattleMenuParam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBattleMenuParam        BattleMenuParam                (Parm, OutParm)

void UTO14_BP_MenuManagerInterface_C::GetBattleMenuParam(struct FBattleMenuParam* BattleMenuParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetBattleMenuParam");

	UTO14_BP_MenuManagerInterface_C_GetBattleMenuParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BattleMenuParam != nullptr)
		*BattleMenuParam = params.BattleMenuParam;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetBtlItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 BtlItemID                      (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::GetBtlItemID(struct FString* BtlItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetBtlItemID");

	UTO14_BP_MenuManagerInterface_C_GetBtlItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BtlItemID != nullptr)
		*BtlItemID = params.BtlItemID;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::ForceFinalize(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.ForceFinalize");

	UTO14_BP_MenuManagerInterface_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetCurrentMenuID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::GetCurrentMenuID(struct FString* MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetCurrentMenuID");

	UTO14_BP_MenuManagerInterface_C_GetCurrentMenuID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuID != nullptr)
		*MenuID = params.MenuID;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.IsTutorialState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bTutorialState                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::IsTutorialState(bool* bTutorialState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.IsTutorialState");

	UTO14_BP_MenuManagerInterface_C_IsTutorialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bTutorialState != nullptr)
		*bTutorialState = params.bTutorialState;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CheckAndExecCurrentMenuTutorial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bExecTutorial                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::CheckAndExecCurrentMenuTutorial(bool* bExecTutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.CheckAndExecCurrentMenuTutorial");

	UTO14_BP_MenuManagerInterface_C_CheckAndExecCurrentMenuTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bExecTutorial != nullptr)
		*bExecTutorial = params.bExecTutorial;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCloseEndEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnCloseEndEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCloseEndEvent");

	UTO14_BP_MenuManagerInterface_C_UnbindOnCloseEndEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCloseEndEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnCloseEndEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCloseEndEvent");

	UTO14_BP_MenuManagerInterface_C_BindOnCloseEndEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnOpenEndEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnOpenEndEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnOpenEndEvent");

	UTO14_BP_MenuManagerInterface_C_UnbindOnOpenEndEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnOpenEndEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnOpenEndEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnOpenEndEvent");

	UTO14_BP_MenuManagerInterface_C_BindOnOpenEndEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCloseViewStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnCloseViewStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCloseViewStartEvent");

	UTO14_BP_MenuManagerInterface_C_UnbindOnCloseViewStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCloseViewStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnCloseViewStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCloseViewStartEvent");

	UTO14_BP_MenuManagerInterface_C_BindOnCloseViewStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnChangeEquipmentEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseCharaEventData    Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnChangeEquipmentEvent(const struct FAriseCharaEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnChangeEquipmentEvent");

	UTO14_BP_MenuManagerInterface_C_UnbindOnChangeEquipmentEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnChangeEquipmentEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseCharaEventData    Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnChangeEquipmentEvent(const struct FAriseCharaEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnChangeEquipmentEvent");

	UTO14_BP_MenuManagerInterface_C_BindOnChangeEquipmentEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCloseStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnCloseStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnCloseStartEvent");

	UTO14_BP_MenuManagerInterface_C_UnbindOnCloseStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCloseStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnCloseStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnCloseStartEvent");

	UTO14_BP_MenuManagerInterface_C_BindOnCloseStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnOpenStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::UnbindOnOpenStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.UnbindOnOpenStartEvent");

	UTO14_BP_MenuManagerInterface_C_UnbindOnOpenStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnOpenStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BP_MenuManagerInterface_C::BindOnOpenStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.BindOnOpenStartEvent");

	UTO14_BP_MenuManagerInterface_C_BindOnOpenStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetMenuResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void UTO14_BP_MenuManagerInterface_C::GetMenuResult(struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetMenuResult");

	UTO14_BP_MenuManagerInterface_C_GetMenuResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.RestoreInheritFlags
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BP_MenuManagerInterface_C::RestoreInheritFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.RestoreInheritFlags");

	UTO14_BP_MenuManagerInterface_C_RestoreInheritFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetLoadedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OutLoadedSlot                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::GetLoadedSlot(int* OutLoadedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.GetLoadedSlot");

	UTO14_BP_MenuManagerInterface_C_GetLoadedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoadedSlot != nullptr)
		*OutLoadedSlot = params.OutLoadedSlot;
}


// Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.IsSaveDataLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutSaveDataLoaded              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BP_MenuManagerInterface_C::IsSaveDataLoaded(bool* OutSaveDataLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerInterface.TO14_BP_MenuManagerInterface_C.IsSaveDataLoaded");

	UTO14_BP_MenuManagerInterface_C_IsSaveDataLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSaveDataLoaded != nullptr)
		*OutSaveDataLoaded = params.OutSaveDataLoaded;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
