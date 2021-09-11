
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

// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetIcnMnuAnimInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C> Interface                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetIcnMnuAnimInterface(TScriptInterface<class UTO14_BPI_GUI_ICN_MNU_ANIM_Interface_C>* Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetIcnMnuAnimInterface");

	ATO14_BP_MenuManagerBase_C_GetIcnMnuAnimInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interface != nullptr)
		*Interface = params.Interface;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBtlControlChara
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetBtlControlChara(EArisePartyID* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBtlControlChara");

	ATO14_BP_MenuManagerBase_C_GetBtlControlChara_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetVisibilityHeaderWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetVisibilityHeaderWidget(ESlateVisibility InVisibility, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetVisibilityHeaderWidget");

	ATO14_BP_MenuManagerBase_C_SetVisibilityHeaderWidget_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBtlUsetItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetBtlUsetItemID(const struct FString& ItemID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBtlUsetItemID");

	ATO14_BP_MenuManagerBase_C_SetBtlUsetItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetIsNewGameStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsNewGameStart                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetIsNewGameStart(bool* IsNewGameStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetIsNewGameStart");

	ATO14_BP_MenuManagerBase_C_GetIsNewGameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNewGameStart != nullptr)
		*IsNewGameStart = params.IsNewGameStart;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetIsNewGameStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsNewGameStart                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetIsNewGameStart(bool bIsNewGameStart, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetIsNewGameStart");

	ATO14_BP_MenuManagerBase_C_SetIsNewGameStart_Params params;
	params.bIsNewGameStart = bIsNewGameStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetNextSceneID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 NextSceneID                    (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetNextSceneID(struct FString* NextSceneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetNextSceneID");

	ATO14_BP_MenuManagerBase_C_GetNextSceneID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextSceneID != nullptr)
		*NextSceneID = params.NextSceneID;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderNameTopMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InMenuID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FDictionaryText         InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetHeaderNameTopMenu(const struct FString& InMenuID, const struct FDictionaryText& InText, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderNameTopMenu");

	ATO14_BP_MenuManagerBase_C_SetHeaderNameTopMenu_Params params;
	params.InMenuID = InMenuID;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetSaveDataLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InSaveDataLoaded               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetSaveDataLoaded(bool InSaveDataLoaded, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetSaveDataLoaded");

	ATO14_BP_MenuManagerBase_C_SetSaveDataLoaded_Params params;
	params.InSaveDataLoaded = InSaveDataLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetLoadedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LoadedSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetLoadedSlot(int LoadedSlot, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetLoadedSlot");

	ATO14_BP_MenuManagerBase_C_SetLoadedSlot_Params params;
	params.LoadedSlot = LoadedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowHelpWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ShowHelpWidget(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowHelpWidget");

	ATO14_BP_MenuManagerBase_C_ShowHelpWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetCurrentMenuData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMenuData               CurrentMenuData                (Parm, OutParm)

void ATO14_BP_MenuManagerBase_C::GetCurrentMenuData(struct FMenuData* CurrentMenuData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetCurrentMenuData");

	ATO14_BP_MenuManagerBase_C_GetCurrentMenuData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentMenuData != nullptr)
		*CurrentMenuData = params.CurrentMenuData;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderWidget3D
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             HeaderWidget3D                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetHeaderWidget3D(class UUserWidget* HeaderWidget3D, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderWidget3D");

	ATO14_BP_MenuManagerBase_C_SetHeaderWidget3D_Params params;
	params.HeaderWidget3D = HeaderWidget3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HeaderActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetHeaderActor(class AActor* HeaderActor, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderActor");

	ATO14_BP_MenuManagerBase_C_SetHeaderActor_Params params;
	params.HeaderActor = HeaderActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           WithAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetHeaderIcon(const struct FString& MenuID, bool WithAnimation, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderIcon");

	ATO14_BP_MenuManagerBase_C_SetHeaderIcon_Params params;
	params.MenuID = MenuID;
	params.WithAnimation = WithAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetShowAlias
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetShowAlias(struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetShowAlias");

	ATO14_BP_MenuManagerBase_C_GetShowAlias_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetHelpWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UUserWidget*             HelpWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetHelpWidget(class UUserWidget** HelpWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetHelpWidget");

	ATO14_BP_MenuManagerBase_C_GetHelpWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HelpWidget != nullptr)
		*HelpWidget = params.HelpWidget;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetQuestID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetQuestID(struct FString* QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetQuestID");

	ATO14_BP_MenuManagerBase_C_GetQuestID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestID != nullptr)
		*QuestID = params.QuestID;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Close
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::Close(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Close");

	ATO14_BP_MenuManagerBase_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetOpenMapLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenMapLocation                (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetOpenMapLocation(struct FString* OpenMapLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetOpenMapLocation");

	ATO14_BP_MenuManagerBase_C_GetOpenMapLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OpenMapLocation != nullptr)
		*OpenMapLocation = params.OpenMapLocation;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetOpenMapLocationSecondary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenMapLocationSecondary       (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetOpenMapLocationSecondary(struct FString* OpenMapLocationSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetOpenMapLocationSecondary");

	ATO14_BP_MenuManagerBase_C_GetOpenMapLocationSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OpenMapLocationSecondary != nullptr)
		*OpenMapLocationSecondary = params.OpenMapLocationSecondary;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetQuestIDSecondary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestIDSecondary               (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetQuestIDSecondary(struct FString* QuestIDSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetQuestIDSecondary");

	ATO14_BP_MenuManagerBase_C_GetQuestIDSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestIDSecondary != nullptr)
		*QuestIDSecondary = params.QuestIDSecondary;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CallGetBackMenuID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::CallGetBackMenuID(struct FString* MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CallGetBackMenuID");

	ATO14_BP_MenuManagerBase_C_CallGetBackMenuID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuID != nullptr)
		*MenuID = params.MenuID;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetOpenMapLocationSecondary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenMapLocationSecondary       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetOpenMapLocationSecondary(const struct FString& OpenMapLocationSecondary, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetOpenMapLocationSecondary");

	ATO14_BP_MenuManagerBase_C_SetOpenMapLocationSecondary_Params params;
	params.OpenMapLocationSecondary = OpenMapLocationSecondary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetOpenMapLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenMapLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetOpenMapLocation(const struct FString& OpenMapLocation, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetOpenMapLocation");

	ATO14_BP_MenuManagerBase_C_SetOpenMapLocation_Params params;
	params.OpenMapLocation = OpenMapLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetQuestIDSecondary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestIDSecondary               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetQuestIDSecondary(const struct FString& QuestIDSecondary, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetQuestIDSecondary");

	ATO14_BP_MenuManagerBase_C_SetQuestIDSecondary_Params params;
	params.QuestIDSecondary = QuestIDSecondary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetQuestID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetQuestID(const struct FString& QuestID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetQuestID");

	ATO14_BP_MenuManagerBase_C_SetQuestID_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckPrevMenuCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::CheckPrevMenuCount(const struct FString& MenuID, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckPrevMenuCount");

	ATO14_BP_MenuManagerBase_C_CheckPrevMenuCount_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetPadProcess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetPadProcess(class AMenuPadProcess** PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetPadProcess");

	ATO14_BP_MenuManagerBase_C_GetPadProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PadProcess != nullptr)
		*PadProcess = params.PadProcess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.PrepareToCloseView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NextMenuID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::PrepareToCloseView(const struct FString& NextMenuID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.PrepareToCloseView");

	ATO14_BP_MenuManagerBase_C_PrepareToCloseView_Params params;
	params.NextMenuID = NextMenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetShowAlias
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetShowAlias(const struct FString& Label, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetShowAlias");

	ATO14_BP_MenuManagerBase_C_SetShowAlias_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHelpID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetHelpID(const struct FString& HelpID, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHelpID");

	ATO14_BP_MenuManagerBase_C_SetHelpID_Params params;
	params.HelpID = HelpID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetMenuBGType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EMenuBGType                    BGType                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetMenuBGType(EMenuBGType* BGType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetMenuBGType");

	ATO14_BP_MenuManagerBase_C_GetMenuBGType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGType != nullptr)
		*BGType = params.BGType;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetExternalHelpInnerWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             HelpInnerWidget                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetExternalHelpInnerWidget(class UUserWidget* HelpInnerWidget, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetExternalHelpInnerWidget");

	ATO14_BP_MenuManagerBase_C_SetExternalHelpInnerWidget_Params params;
	params.HelpInnerWidget = HelpInnerWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetPrevSceneCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetPrevSceneCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetPrevSceneCount");

	ATO14_BP_MenuManagerBase_C_GetPrevSceneCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckIsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::CheckIsClose(bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckIsClose");

	ATO14_BP_MenuManagerBase_C_CheckIsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Open
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class APlayerController*       OwnerPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideCapture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::Open(const struct FString& MenuID, class APlayerController* OwnerPlayer, bool HideCapture, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Open");

	ATO14_BP_MenuManagerBase_C_Open_Params params;
	params.MenuID = MenuID;
	params.OwnerPlayer = OwnerPlayer;
	params.HideCapture = HideCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetShopID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ShopID                         (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetShopID(struct FString* ShopID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetShopID");

	ATO14_BP_MenuManagerBase_C_GetShopID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShopID != nullptr)
		*ShopID = params.ShopID;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsAllowInputChangeMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAllow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::IsAllowInputChangeMenu(bool* bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsAllowInputChangeMenu");

	ATO14_BP_MenuManagerBase_C_IsAllowInputChangeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllow != nullptr)
		*bAllow = params.bAllow;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHelp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HelpLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetHelp(const struct FString& HelpLabel, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHelp");

	ATO14_BP_MenuManagerBase_C_SetHelp_Params params;
	params.HelpLabel = HelpLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FadeInForLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::FadeInForLevel(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FadeInForLevel");

	ATO14_BP_MenuManagerBase_C_FadeInForLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FadeOutForLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::FadeOutForLevel(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FadeOutForLevel");

	ATO14_BP_MenuManagerBase_C_FadeOutForLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBattleMenuParam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleMenuParam        BattleMenuParam                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetBattleMenuParam(const struct FBattleMenuParam& BattleMenuParam, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBattleMenuParam");

	ATO14_BP_MenuManagerBase_C_SetBattleMenuParam_Params params;
	params.BattleMenuParam = BattleMenuParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBattleMenuParam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBattleMenuParam        BattleMenuParam                (Parm, OutParm)

void ATO14_BP_MenuManagerBase_C::GetBattleMenuParam(struct FBattleMenuParam* BattleMenuParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBattleMenuParam");

	ATO14_BP_MenuManagerBase_C_GetBattleMenuParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BattleMenuParam != nullptr)
		*BattleMenuParam = params.BattleMenuParam;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBtlItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 BtlItemID                      (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetBtlItemID(struct FString* BtlItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBtlItemID");

	ATO14_BP_MenuManagerBase_C_GetBtlItemID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BtlItemID != nullptr)
		*BtlItemID = params.BtlItemID;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ForceFinalize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ForceFinalize(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ForceFinalize");

	ATO14_BP_MenuManagerBase_C_ForceFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetCurrentMenuID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetCurrentMenuID(struct FString* MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetCurrentMenuID");

	ATO14_BP_MenuManagerBase_C_GetCurrentMenuID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuID != nullptr)
		*MenuID = params.MenuID;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsTutorialState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bTutorialState                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::IsTutorialState(bool* bTutorialState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsTutorialState");

	ATO14_BP_MenuManagerBase_C_IsTutorialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bTutorialState != nullptr)
		*bTutorialState = params.bTutorialState;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckAndExecCurrentMenuTutorial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bExecTutorial                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::CheckAndExecCurrentMenuTutorial(bool* bExecTutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckAndExecCurrentMenuTutorial");

	ATO14_BP_MenuManagerBase_C_CheckAndExecCurrentMenuTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bExecTutorial != nullptr)
		*bExecTutorial = params.bExecTutorial;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetMenuResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetMenuResult(struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetMenuResult");

	ATO14_BP_MenuManagerBase_C_GetMenuResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetLoadedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OutLoadedSlot                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetLoadedSlot(int* OutLoadedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetLoadedSlot");

	ATO14_BP_MenuManagerBase_C_GetLoadedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoadedSlot != nullptr)
		*OutLoadedSlot = params.OutLoadedSlot;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsSaveDataLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutSaveDataLoaded              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::IsSaveDataLoaded(bool* OutSaveDataLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsSaveDataLoaded");

	ATO14_BP_MenuManagerBase_C_IsSaveDataLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSaveDataLoaded != nullptr)
		*OutSaveDataLoaded = params.OutSaveDataLoaded;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsLoadStatusImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Loaded1                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::IsLoadStatusImage(bool* Loaded1)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsLoadStatusImage");

	ATO14_BP_MenuManagerBase_C_IsLoadStatusImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loaded1 != nullptr)
		*Loaded1 = params.Loaded1;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnloadStatusImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::UnloadStatusImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnloadStatusImage");

	ATO14_BP_MenuManagerBase_C_UnloadStatusImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.PreloadStatusImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::PreloadStatusImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.PreloadStatusImage");

	ATO14_BP_MenuManagerBase_C_PreloadStatusImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FinalizeVariables
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::FinalizeVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FinalizeVariables");

	ATO14_BP_MenuManagerBase_C_FinalizeVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.RequestDLCEntitlementCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsNeedDLC_Check               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::RequestDLCEntitlementCheck(bool bIsNeedDLC_Check)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.RequestDLCEntitlementCheck");

	ATO14_BP_MenuManagerBase_C_RequestDLCEntitlementCheck_Params params;
	params.bIsNeedDLC_Check = bIsNeedDLC_Check;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckDLCEntitlementIfNeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OKorNotNeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::CheckDLCEntitlementIfNeed(bool* OKorNotNeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckDLCEntitlementIfNeed");

	ATO14_BP_MenuManagerBase_C_CheckDLCEntitlementIfNeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OKorNotNeed != nullptr)
		*OKorNotNeed = params.OKorNotNeed;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBGTypeOld
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EMenuBGType                    BGType                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetBGTypeOld(EMenuBGType* BGType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBGTypeOld");

	ATO14_BP_MenuManagerBase_C_GetBGTypeOld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGType != nullptr)
		*BGType = params.BGType;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsDucking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsDucking                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::IsDucking(bool* IsDucking)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsDucking");

	ATO14_BP_MenuManagerBase_C_IsDucking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDucking != nullptr)
		*IsDucking = params.IsDucking;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowMapEnvironment
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ShowMapEnvironment(bool bNewShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowMapEnvironment");

	ATO14_BP_MenuManagerBase_C_ShowMapEnvironment_Params params;
	params.bNewShow = bNewShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.RestoreMapEnvironment
// (Private, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::RestoreMapEnvironment()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.RestoreMapEnvironment");

	ATO14_BP_MenuManagerBase_C_RestoreMapEnvironment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.StoreMapEnvironment
// (Private, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::StoreMapEnvironment()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.StoreMapEnvironment");

	ATO14_BP_MenuManagerBase_C_StoreMapEnvironment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBackMenuID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 MenuID                         (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetBackMenuID(struct FString* MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBackMenuID");

	ATO14_BP_MenuManagerBase_C_GetBackMenuID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuID != nullptr)
		*MenuID = params.MenuID;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckPrevMenuCountImpl
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::CheckPrevMenuCountImpl(const struct FString& MenuID, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckPrevMenuCountImpl");

	ATO14_BP_MenuManagerBase_C_CheckPrevMenuCountImpl_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBGType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EMenuBGType                    BGType                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetBGType(EMenuBGType* BGType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBGType");

	ATO14_BP_MenuManagerBase_C_GetBGType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGType != nullptr)
		*BGType = params.BGType;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsTitleScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsTitle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::IsTitleScene(bool* OutIsTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsTitleScene");

	ATO14_BP_MenuManagerBase_C_IsTitleScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsTitle != nullptr)
		*OutIsTitle = params.OutIsTitle;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetShowDomeMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsShow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetShowDomeMesh(bool InIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetShowDomeMesh");

	ATO14_BP_MenuManagerBase_C_SetShowDomeMesh_Params params;
	params.InIsShow = InIsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetMenuResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::SetMenuResult(const struct FString& MenuResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetMenuResult");

	ATO14_BP_MenuManagerBase_C_SetMenuResult_Params params;
	params.MenuResult = MenuResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Terminate
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Terminate");

	ATO14_BP_MenuManagerBase_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetTopCharaType
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuData               MenuData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATO14_BP_MenuManagerBase_C::SetTopCharaType(struct FMenuData* MenuData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetTopCharaType");

	ATO14_BP_MenuManagerBase_C_SetTopCharaType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuData != nullptr)
		*MenuData = params.MenuData;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Set3DHeaderVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::Set3DHeaderVisibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Set3DHeaderVisibility");

	ATO14_BP_MenuManagerBase_C_Set3DHeaderVisibility_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetHeaderWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BP_MenuHeaderBase_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetHeaderWidget(class UTO14_BP_MenuHeaderBase_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetHeaderWidget");

	ATO14_BP_MenuManagerBase_C_GetHeaderWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BackupInheritFlags
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::BackupInheritFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BackupInheritFlags");

	ATO14_BP_MenuManagerBase_C_BackupInheritFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateInitialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::UpdateInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateInitialize");

	ATO14_BP_MenuManagerBase_C_UpdateInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsMenuTransparent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATO14_BP_MenuManagerBase_C::IsMenuTransparent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsMenuTransparent");

	ATO14_BP_MenuManagerBase_C_IsMenuTransparent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateInitTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::UpdateInitTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateInitTutorial");

	ATO14_BP_MenuManagerBase_C_UpdateInitTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::UpdateTutorial(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateTutorial");

	ATO14_BP_MenuManagerBase_C_UpdateTutorial_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ClearTITSettings
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::ClearTITSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ClearTITSettings");

	ATO14_BP_MenuManagerBase_C_ClearTITSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetTITSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EArisePartyID                  CharaID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AliasID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetTITSettings(EArisePartyID* CharaID, int* AliasID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetTITSettings");

	ATO14_BP_MenuManagerBase_C_GetTITSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharaID != nullptr)
		*CharaID = params.CharaID;
	if (AliasID != nullptr)
		*AliasID = params.AliasID;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetTITSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  CharaID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AliasID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetTITSettings(EArisePartyID CharaID, int AliasID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetTITSettings");

	ATO14_BP_MenuManagerBase_C_SetTITSettings_Params params;
	params.CharaID = CharaID;
	params.AliasID = AliasID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetShowAliasImpl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Label                          (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::GetShowAliasImpl(struct FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetShowAliasImpl");

	ATO14_BP_MenuManagerBase_C_GetShowAliasImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderIconImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           WithAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetHeaderIconImpl(const struct FString& MenuID, bool WithAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetHeaderIconImpl");

	ATO14_BP_MenuManagerBase_C_SetHeaderIconImpl_Params params;
	params.MenuID = MenuID;
	params.WithAnimation = WithAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetCharaOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::SetCharaOffset(const struct FVector2D& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetCharaOffset");

	ATO14_BP_MenuManagerBase_C_SetCharaOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowCharaLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ShowCharaLevel(bool IsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowCharaLevel");

	ATO14_BP_MenuManagerBase_C_ShowCharaLevel_Params params;
	params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Open_Delayed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class APlayerController*       OwnerPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideCapture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::Open_Delayed(const struct FString& MenuID, class APlayerController* OwnerPlayer, bool HideCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Open_Delayed");

	ATO14_BP_MenuManagerBase_C_Open_Delayed_Params params;
	params.MenuID = MenuID;
	params.OwnerPlayer = OwnerPlayer;
	params.HideCapture = HideCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_TopFade
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::WaitEnd_TopFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_TopFade");

	ATO14_BP_MenuManagerBase_C_WaitEnd_TopFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_Help
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::WaitEnd_Help()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_Help");

	ATO14_BP_MenuManagerBase_C_WaitEnd_Help_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_Capture
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::WaitEnd_Capture()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_Capture");

	ATO14_BP_MenuManagerBase_C_WaitEnd_Capture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWidgetUse                     Bit                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::WaitEnd(EWidgetUse Bit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd");

	ATO14_BP_MenuManagerBase_C_WaitEnd_Params params;
	params.Bit = Bit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_Frame
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::WaitEnd_Frame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_Frame");

	ATO14_BP_MenuManagerBase_C_WaitEnd_Frame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_BtlBG
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::WaitEnd_BtlBG()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.WaitEnd_BtlBG");

	ATO14_BP_MenuManagerBase_C_WaitEnd_BtlBG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CallCloseAnimations
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::CallCloseAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CallCloseAnimations");

	ATO14_BP_MenuManagerBase_C_CallCloseAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetSCHTRoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_SYS_SCHT_ROOT_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetSCHTRoot(class UTO14_BPI_GUI_SYS_SCHT_ROOT_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetSCHTRoot");

	ATO14_BP_MenuManagerBase_C_GetSCHTRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckHelpMenuID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 HelpMenuID                     (Parm, OutParm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::CheckHelpMenuID(const struct FString& MenuID, struct FString* HelpMenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CheckHelpMenuID");

	ATO14_BP_MenuManagerBase_C_CheckHelpMenuID_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HelpMenuID != nullptr)
		*HelpMenuID = params.HelpMenuID;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateBeforExit
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::UpdateBeforExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateBeforExit");

	ATO14_BP_MenuManagerBase_C_UpdateBeforExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.TerminatePauseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::TerminatePauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.TerminatePauseMenu");

	ATO14_BP_MenuManagerBase_C_TerminatePauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OpenPause
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OpenPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OpenPause");

	ATO14_BP_MenuManagerBase_C_OpenPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBtlUseMagicArts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  UseChara                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::SetBtlUseMagicArts(EArisePartyID UseChara, const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBtlUseMagicArts");

	ATO14_BP_MenuManagerBase_C_SetBtlUseMagicArts_Params params;
	params.UseChara = UseChara;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBtlContrloMode
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::SetBtlContrloMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetBtlContrloMode");

	ATO14_BP_MenuManagerBase_C_SetBtlContrloMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBtlControlMode
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::GetBtlControlMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetBtlControlMode");

	ATO14_BP_MenuManagerBase_C_GetBtlControlMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnBattleMenuEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnBattleMenuEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnBattleMenuEnd");

	ATO14_BP_MenuManagerBase_C_OnBattleMenuEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.LoadEnd_CharaLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::LoadEnd_CharaLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.LoadEnd_CharaLevel");

	ATO14_BP_MenuManagerBase_C_LoadEnd_CharaLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnloadEnd_CharaLevel
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::UnloadEnd_CharaLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnloadEnd_CharaLevel");

	ATO14_BP_MenuManagerBase_C_UnloadEnd_CharaLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnloadCharaLevel
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::UnloadCharaLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnloadCharaLevel");

	ATO14_BP_MenuManagerBase_C_UnloadCharaLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.LoadCharaLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::LoadCharaLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.LoadCharaLevel");

	ATO14_BP_MenuManagerBase_C_LoadCharaLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BlendVector2D
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D ATO14_BP_MenuManagerBase_C::BlendVector2D(const struct FVector2D& Goal, const struct FVector2D& Start, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BlendVector2D");

	ATO14_BP_MenuManagerBase_C_BlendVector2D_Params params;
	params.Goal = Goal;
	params.Start = Start;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetNeedFlags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuData               MenuData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATO14_BP_MenuManagerBase_C::SetNeedFlags(struct FMenuData* MenuData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetNeedFlags");

	ATO14_BP_MenuManagerBase_C_SetNeedFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuData != nullptr)
		*MenuData = params.MenuData;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CreateViewWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::CreateViewWidget(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CreateViewWidget");

	ATO14_BP_MenuManagerBase_C_CreateViewWidget_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OpenNext
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ATO14_BP_MenuManagerBase_C::OpenNext(const struct FString& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OpenNext");

	ATO14_BP_MenuManagerBase_C_OpenNext_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Initialize");

	ATO14_BP_MenuManagerBase_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateMain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::UpdateMain(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateMain");

	ATO14_BP_MenuManagerBase_C_UpdateMain_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateExitWait
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::UpdateExitWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateExitWait");

	ATO14_BP_MenuManagerBase_C_UpdateExitWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.DoCapture
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::DoCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.DoCapture");

	ATO14_BP_MenuManagerBase_C_DoCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateFinalize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::UpdateFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateFinalize");

	ATO14_BP_MenuManagerBase_C_UpdateFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateLoading
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Tick                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::UpdateLoading(float Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateLoading");

	ATO14_BP_MenuManagerBase_C_UpdateLoading_Params params;
	params.Tick = Tick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetSceneDepth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SceneCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::GetSceneDepth(int* SceneCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.GetSceneDepth");

	ATO14_BP_MenuManagerBase_C_GetSceneDepth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SceneCount != nullptr)
		*SceneCount = params.SceneCount;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::IsOpen(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsOpen");

	ATO14_BP_MenuManagerBase_C_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ReleaseGlobalItem
// (Private, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::ReleaseGlobalItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ReleaseGlobalItem");

	ATO14_BP_MenuManagerBase_C_ReleaseGlobalItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CreateGlobalItem
// (Private, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::CreateGlobalItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CreateGlobalItem");

	ATO14_BP_MenuManagerBase_C_CreateGlobalItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.HelpUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::HelpUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.HelpUpdate");

	ATO14_BP_MenuManagerBase_C_HelpUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BGWork
// (Private, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::BGWork()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BGWork");

	ATO14_BP_MenuManagerBase_C_BGWork_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FinishPad
// (Private, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::FinishPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.FinishPad");

	ATO14_BP_MenuManagerBase_C_FinishPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.InitPad
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCreate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::InitPad(bool* IsCreate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.InitPad");

	ATO14_BP_MenuManagerBase_C_InitPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCreate != nullptr)
		*IsCreate = params.IsCreate;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CloseImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::CloseImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CloseImpl");

	ATO14_BP_MenuManagerBase_C_CloseImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::IsClose(bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.IsClose");

	ATO14_BP_MenuManagerBase_C_IsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UserConstructionScript");

	ATO14_BP_MenuManagerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnOpenStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnOpenStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnOpenStartEvent");

	ATO14_BP_MenuManagerBase_C_BindOnOpenStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnOpenStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnOpenStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnOpenStartEvent");

	ATO14_BP_MenuManagerBase_C_UnbindOnOpenStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCloseStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnCloseStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCloseStartEvent");

	ATO14_BP_MenuManagerBase_C_BindOnCloseStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCloseStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnCloseStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCloseStartEvent");

	ATO14_BP_MenuManagerBase_C_UnbindOnCloseStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnChangeEquipmentEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseCharaEventData    Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnChangeEquipmentEvent(const struct FAriseCharaEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnChangeEquipmentEvent");

	ATO14_BP_MenuManagerBase_C_BindOnChangeEquipmentEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnChangeEquipmentEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseCharaEventData    Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnChangeEquipmentEvent(const struct FAriseCharaEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnChangeEquipmentEvent");

	ATO14_BP_MenuManagerBase_C_UnbindOnChangeEquipmentEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.RestoreInheritFlags
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::RestoreInheritFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.RestoreInheritFlags");

	ATO14_BP_MenuManagerBase_C_RestoreInheritFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCloseViewStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnCloseViewStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCloseViewStartEvent");

	ATO14_BP_MenuManagerBase_C_BindOnCloseViewStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCloseViewStartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnCloseViewStartEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCloseViewStartEvent");

	ATO14_BP_MenuManagerBase_C_UnbindOnCloseViewStartEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnOpenEndEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnOpenEndEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnOpenEndEvent");

	ATO14_BP_MenuManagerBase_C_BindOnOpenEndEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCloseEndEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnCloseEndEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCloseEndEvent");

	ATO14_BP_MenuManagerBase_C_UnbindOnCloseEndEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnOpenEndEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnOpenEndEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnOpenEndEvent");

	ATO14_BP_MenuManagerBase_C_UnbindOnOpenEndEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCloseEndEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseSimpleEventData   Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnCloseEndEvent(const struct FAriseSimpleEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCloseEndEvent");

	ATO14_BP_MenuManagerBase_C_BindOnCloseEndEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowTopBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuShowTopBGEventData Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnShowTopBG(const struct FOnMenuShowTopBGEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowTopBG");

	ATO14_BP_MenuManagerBase_C_BindOnShowTopBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowTopBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuShowTopBGEventData Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnShowTopBG(const struct FOnMenuShowTopBGEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowTopBG");

	ATO14_BP_MenuManagerBase_C_UnbindOnShowTopBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnChangeTopBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuChangeTopBGEventData Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnChangeTopBG(const struct FOnMenuChangeTopBGEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnChangeTopBG");

	ATO14_BP_MenuManagerBase_C_BindOnChangeTopBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnChangeTopBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuChangeTopBGEventData Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnChangeTopBG(const struct FOnMenuChangeTopBGEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnChangeTopBG");

	ATO14_BP_MenuManagerBase_C_UnbindOnChangeTopBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnLevelActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuLevelActivate    Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnLevelActivate(const struct FOnMenuLevelActivate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnLevelActivate");

	ATO14_BP_MenuManagerBase_C_BindOnLevelActivate_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnLevelActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuLevelActivate    Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnLevelActivate(const struct FOnMenuLevelActivate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnLevelActivate");

	ATO14_BP_MenuManagerBase_C_UnbindOnLevelActivate_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowLevelHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnShowLevelHeader(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowLevelHeader");

	ATO14_BP_MenuManagerBase_C_BindOnShowLevelHeader_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowLevelHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnShowLevelHeader(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowLevelHeader");

	ATO14_BP_MenuManagerBase_C_UnbindOnShowLevelHeader_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowCaptureBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnShowCaptureBG(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowCaptureBG");

	ATO14_BP_MenuManagerBase_C_BindOnShowCaptureBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowCaptureBG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnShowCaptureBG(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowCaptureBG");

	ATO14_BP_MenuManagerBase_C_UnbindOnShowCaptureBG_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowTopParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnShowTopParticle(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowTopParticle");

	ATO14_BP_MenuManagerBase_C_BindOnShowTopParticle_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowTopParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnShowTopParticle(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowTopParticle");

	ATO14_BP_MenuManagerBase_C_UnbindOnShowTopParticle_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnShowLight(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnShowLight");

	ATO14_BP_MenuManagerBase_C_BindOnShowLight_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnMenuSimpleShow       Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnShowLight(const struct FOnMenuSimpleShow& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnShowLight");

	ATO14_BP_MenuManagerBase_C_UnbindOnShowLight_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.NotifyOnChangeEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::NotifyOnChangeEquipment(EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.NotifyOnChangeEquipment");

	ATO14_BP_MenuManagerBase_C_NotifyOnChangeEquipment_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCookingEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseCookingEventData  Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::BindOnCookingEvent(const struct FAriseCookingEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.BindOnCookingEvent");

	ATO14_BP_MenuManagerBase_C_BindOnCookingEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCookingEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAriseCookingEventData  Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATO14_BP_MenuManagerBase_C::UnbindOnCookingEvent(const struct FAriseCookingEventData& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UnbindOnCookingEvent");

	ATO14_BP_MenuManagerBase_C_UnbindOnCookingEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CallOnCookingEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::CallOnCookingEvent(EArisePartyID PartyId, int RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.CallOnCookingEvent");

	ATO14_BP_MenuManagerBase_C_CallOnCookingEvent_Params params;
	params.PartyId = PartyId;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ResetMenuArenaSelect
// (Public, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::ResetMenuArenaSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ResetMenuArenaSelect");

	ATO14_BP_MenuManagerBase_C_ResetMenuArenaSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ReceiveBeginPlay");

	ATO14_BP_MenuManagerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateFunc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::UpdateFunc(float TickData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.UpdateFunc");

	ATO14_BP_MenuManagerBase_C_UpdateFunc_Params params;
	params.TickData = TickData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetupDelegate
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::SetupDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.SetupDelegate");

	ATO14_BP_MenuManagerBase_C_SetupDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnStarMapRemove
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnStarMapRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnStarMapRemove");

	ATO14_BP_MenuManagerBase_C_OnStarMapRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenView
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnOpenView()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenView");

	ATO14_BP_MenuManagerBase_C_OnOpenView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseView
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnCloseView()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseView");

	ATO14_BP_MenuManagerBase_C_OnCloseView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseImmidiate
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnCloseImmidiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseImmidiate");

	ATO14_BP_MenuManagerBase_C_OnCloseImmidiate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.EventGameStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAriseGameState                ChangedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::EventGameStateChanged(EAriseGameState ChangedState, bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.EventGameStateChanged");

	ATO14_BP_MenuManagerBase_C_EventGameStateChanged_Params params;
	params.ChangedState = ChangedState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ReceiveEndPlay");

	ATO14_BP_MenuManagerBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnWaitEnd_TopFade
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnWaitEnd_TopFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnWaitEnd_TopFade");

	ATO14_BP_MenuManagerBase_C_OnWaitEnd_TopFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnDuckingStart
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnDuckingStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnDuckingStart");

	ATO14_BP_MenuManagerBase_C_OnDuckingStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnDuckingEnd
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnDuckingEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnDuckingEnd");

	ATO14_BP_MenuManagerBase_C_OnDuckingEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.onGoBackToTitle
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::onGoBackToTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.onGoBackToTitle");

	ATO14_BP_MenuManagerBase_C_onGoBackToTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnLoadedTop2BackActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InLoadedAsset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::OnLoadedTop2BackActor(class UObject* InLoadedAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnLoadedTop2BackActor");

	ATO14_BP_MenuManagerBase_C_OnLoadedTop2BackActor_Params params;
	params.InLoadedAsset = InLoadedAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenSystemWindow
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnOpenSystemWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenSystemWindow");

	ATO14_BP_MenuManagerBase_C_OnOpenSystemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseSystemWindow
// (BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnCloseSystemWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseSystemWindow");

	ATO14_BP_MenuManagerBase_C_OnCloseSystemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ExecuteUbergraph_TO14_BP_MenuManagerBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ExecuteUbergraph_TO14_BP_MenuManagerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ExecuteUbergraph_TO14_BP_MenuManagerBase");

	ATO14_BP_MenuManagerBase_C_ExecuteUbergraph_TO14_BP_MenuManagerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCookingEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::OnCookingEvent__DelegateSignature(EArisePartyID PartyId, int RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCookingEvent__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_OnCookingEvent__DelegateSignature_Params params;
	params.PartyId = PartyId;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowLight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ShowLight__DelegateSignature(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowLight__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_ShowLight__DelegateSignature_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseViewStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnCloseViewStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseViewStart__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_OnCloseViewStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnChangeEquipment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArisePartyID                  PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::OnChangeEquipment__DelegateSignature(EArisePartyID PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnChangeEquipment__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_OnChangeEquipment__DelegateSignature_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnCloseEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseEnd__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_OnCloseEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnOpenEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenEnd__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_OnOpenEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnCloseStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnCloseStart__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_OnCloseStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::OnOpenStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.OnOpenStart__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_OnOpenStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowTopParticle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ShowTopParticle__DelegateSignature(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowTopParticle__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_ShowTopParticle__DelegateSignature_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ChangeTopBG__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNext                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OldShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMenuTopCharaType              OldCharaType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewShow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMenuTopCharaType              NewCharaType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BackDarkness                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ChangeTopBG__DelegateSignature(bool bNext, bool OldShow, EMenuTopCharaType OldCharaType, bool NewShow, EMenuTopCharaType NewCharaType, float BackDarkness)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ChangeTopBG__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_ChangeTopBG__DelegateSignature_Params params;
	params.bNext = bNext;
	params.OldShow = OldShow;
	params.OldCharaType = OldCharaType;
	params.NewShow = NewShow;
	params.NewCharaType = NewCharaType;
	params.BackDarkness = BackDarkness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowTopBG__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMenuTopCharaType              ShowCharaType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BackDarkness                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ShowTopBG__DelegateSignature(bool bShow, EMenuTopCharaType ShowCharaType, float BackDarkness)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowTopBG__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_ShowTopBG__DelegateSignature_Params params;
	params.bShow = bShow;
	params.ShowCharaType = ShowCharaType;
	params.BackDarkness = BackDarkness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.EventFinalizeMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::EventFinalizeMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.EventFinalizeMenu__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_EventFinalizeMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.EventInitMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::EventInitMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.EventInitMenu__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_EventInitMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowLevelHeader__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ShowLevelHeader__DelegateSignature(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowLevelHeader__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_ShowLevelHeader__DelegateSignature_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowCaptureBG__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::ShowCaptureBG__DelegateSignature(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.ShowCaptureBG__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_ShowCaptureBG__DelegateSignature_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.LevelActivate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePostProcess                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATO14_BP_MenuManagerBase_C::LevelActivate__DelegateSignature(bool Active, bool bUsePostProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.LevelActivate__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_LevelActivate__DelegateSignature_Params params;
	params.Active = Active;
	params.bUsePostProcess = bUsePostProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Eventinit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATO14_BP_MenuManagerBase_C::Eventinit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BP_MenuManagerBase.TO14_BP_MenuManagerBase_C.Eventinit__DelegateSignature");

	ATO14_BP_MenuManagerBase_C_Eventinit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
