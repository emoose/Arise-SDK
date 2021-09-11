
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

// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventChangeCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::EventChangeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventChangeCheck");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_EventChangeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetInputKeyHelp
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::SetInputKeyHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetInputKeyHelp");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetInputKeyHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.RefreshKeyID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C* InObject                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::RefreshKeyID(class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C* InObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.RefreshKeyID");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_RefreshKeyID_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetInputDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C* InObject                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::SetInputDialog(class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C* InObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetInputDialog");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetInputDialog_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetSelectInputID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C* InObject                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// unsigned char                  OutInputSelectID               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::GetSelectInputID(class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C* InObject, unsigned char* OutInputSelectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetSelectInputID");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetSelectInputID_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInputSelectID != nullptr)
		*OutInputSelectID = params.OutInputSelectID;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetAssingMouseID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, int>        InAssingMouseList              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   InName                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutMouseID                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::GetAssingMouseID(TMap<struct FName, int> InAssingMouseList, const struct FName& InName, int* OutMouseID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetAssingMouseID");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetAssingMouseID_Params params;
	params.InAssingMouseList = InAssingMouseList;
	params.InName = InName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMouseID != nullptr)
		*OutMouseID = params.OutMouseID;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnHoveredKeyEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::CB_OnHoveredKeyEvent(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnHoveredKeyEvent");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_OnHoveredKeyEvent_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnClickedKeyEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::CB_OnClickedKeyEvent(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnClickedKeyEvent");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_OnClickedKeyEvent_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnHoveredMouseEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::CB_OnHoveredMouseEvent(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnHoveredMouseEvent");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_OnHoveredMouseEvent_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnClickedMouseEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InUniqueID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::CB_OnClickedMouseEvent(int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_OnClickedMouseEvent");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_OnClickedMouseEvent_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Update_ChengeTypeState
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::Update_ChengeTypeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Update_ChengeTypeState");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_Update_ChengeTypeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.RefreshTempSavedKeyID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::RefreshTempSavedKeyID()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.RefreshTempSavedKeyID");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_RefreshTempSavedKeyID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetTempSavedKeyID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::SetTempSavedKeyID()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetTempSavedKeyID");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetTempSavedKeyID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetInputExtPlayerControll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AInputExtPlayerController* OutControll                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::GetInputExtPlayerControll(class AInputExtPlayerController** OutControll)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetInputExtPlayerControll");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetInputExtPlayerControll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutControll != nullptr)
		*OutControll = params.OutControll;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetDefoltKeyID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   InButtonName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OutKeyID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::GetDefoltKeyID(const struct FName& InButtonName, bool* OutResult, unsigned char* OutKeyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetDefoltKeyID");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetDefoltKeyID_Params params;
	params.InButtonName = InButtonName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
	if (OutKeyID != nullptr)
		*OutKeyID = params.OutKeyID;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengeSelectKeyID
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::ChengeSelectKeyID()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengeSelectKeyID");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ChengeSelectKeyID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 InStringID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FModifiedText           OutText                        (Parm, OutParm)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::GetText(const struct FString& InStringID, struct FModifiedText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetText");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetText_Params params;
	params.InStringID = InStringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengSelectKeyCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::ChengSelectKeyCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengSelectKeyCheck");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ChengSelectKeyCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Update_ChangeState
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::Update_ChangeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Update_ChangeState");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_Update_ChangeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.KeyboardChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::KeyboardChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.KeyboardChange");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_KeyboardChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetPadInputList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputCategory                 InCategory                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           OutName                        (Parm, OutParm, ZeroConstructor)
// TMap<struct FName, int>        OutAssingList                  (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::GetPadInputList(EInputCategory InCategory, TArray<struct FName>* OutName, TMap<struct FName, int>* OutAssingList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetPadInputList");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetPadInputList_Params params;
	params.InCategory = InCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutName != nullptr)
		*OutName = params.OutName;
	if (OutAssingList != nullptr)
		*OutAssingList = params.OutAssingList;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.StopChangeAnima
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsAll                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::StopChangeAnima(bool InIsAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.StopChangeAnima");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_StopChangeAnima_Params params;
	params.InIsAll = InIsAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.IsListShowe
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InListIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsListShowe                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::IsListShowe(int InListIndex, bool* OutIsListShowe)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.IsListShowe");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_IsListShowe_Params params;
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsListShowe != nullptr)
		*OutIsListShowe = params.OutIsListShowe;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ResetIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C*> InWidgetLists                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           InIsAnima                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::ResetIcon(bool InIsAnima, TArray<class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C*>* InWidgetLists)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ResetIcon");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ResetIcon_Params params;
	params.InIsAnima = InIsAnima;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWidgetLists != nullptr)
		*InWidgetLists = params.InWidgetLists;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.KeyReset
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::KeyReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.KeyReset");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_KeyReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ShowClickable
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::ShowClickable()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ShowClickable");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ShowClickable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_MouseCursorEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::CB_MouseCursorEnter(int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_MouseCursorEnter");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_MouseCursorEnter_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_MouseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::CB_MouseSelect(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_MouseSelect");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_MouseSelect_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::CB_MouseEnter(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CB_MouseEnter_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetFieldButtonList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::SetFieldButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetFieldButtonList");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetFieldButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.RefreshButton
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::RefreshButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.RefreshButton");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_RefreshButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengkeyID
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::ChengkeyID()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengkeyID");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ChengkeyID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengSelectKeyImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  InPadKeyID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InSelectIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::ChengSelectKeyImage(unsigned char InPadKeyID, int InSelectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ChengSelectKeyImage");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ChengSelectKeyImage_Params params;
	params.InPadKeyID = InPadKeyID;
	params.InSelectIndex = InSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SelectChengKeyPad
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::SelectChengKeyPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SelectChengKeyPad");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SelectChengKeyPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.PadChange
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::PadChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.PadChange");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_PadChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.UpDownCursorMove
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::UpDownCursorMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.UpDownCursorMove");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_UpDownCursorMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetWidgetList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C* OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::GetWidgetList(int InIndex, bool* OutIsResult, class UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.GetWidgetList");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_GetWidgetList_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsResult != nullptr)
		*OutIsResult = params.OutIsResult;
	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetBtlButtonList
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::SetBtlButtonList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetBtlButtonList");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetBtlButtonList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputCategory                 InInputCategory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::SetList(EInputCategory InInputCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.SetList");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_SetList_Params params;
	params.InInputCategory = InInputCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsKeyboard                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::Initialize(bool InIsKeyboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Initialize");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_Initialize_Params params;
	params.InIsKeyboard = InIsKeyboard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CreateList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputCategory                 InInPutCategore                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::CreateList(EInputCategory InInPutCategore)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.CreateList");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_CreateList_Params params;
	params.InInPutCategore = InInPutCategore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.PadControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InPadProsess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::PadControl(class AMenuPadProcess* InPadProsess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.PadControl");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_PadControl_Params params;
	params.InPadProsess = InPadProsess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.Construct");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventInputDialogClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::EventInputDialogClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventInputDialogClose__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_EventInputDialogClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventInputDialogOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModifiedText           InChengeTitle                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           InButtunIMessage_Text          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           InButtunID_Text                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModifiedText           InChengeMessage                (BlueprintVisible, BlueprintReadOnly, Parm)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::EventInputDialogOpen__DelegateSignature(const struct FModifiedText& InChengeTitle, const struct FModifiedText& InButtunIMessage_Text, const struct FModifiedText& InButtunID_Text, const struct FModifiedText& InChengeMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventInputDialogOpen__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_EventInputDialogOpen__DelegateSignature_Params params;
	params.InChengeTitle = InChengeTitle;
	params.InButtunIMessage_Text = InButtunIMessage_Text;
	params.InButtunID_Text = InButtunID_Text;
	params.InChengeMessage = InChengeMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventChangeKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C::EventChangeKey__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C.EventChangeKey__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_KEY_INPUT_GROUP_LIST_C_EventChangeKey__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
