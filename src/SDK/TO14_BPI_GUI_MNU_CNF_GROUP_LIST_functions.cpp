
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

// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.IsNewGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutIsNewGame                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::IsNewGame(bool* OutIsNewGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.IsNewGame");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_IsNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsNewGame != nullptr)
		*OutIsNewGame = params.OutIsNewGame;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.EventChangeCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::EventChangeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.EventChangeCheck");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_EventChangeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.StopChangeAnima
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsAll                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::StopChangeAnima(bool InIsAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.StopChangeAnima");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_StopChangeAnima_Params params;
	params.InIsAll = InIsAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.ScenChangeCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InTitleLavel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EConfigState>      OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::ScenChangeCheck(const struct FName& InTitleLavel, TEnumAsByte<EConfigState>* OutState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.ScenChangeCheck");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_ScenChangeCheck_Params params;
	params.InTitleLavel = InTitleLavel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.UpdateGameSaveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsOverwrite                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::UpdateGameSaveData(bool InIsOverwrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.UpdateGameSaveData");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_UpdateGameSaveData_Params params;
	params.InIsOverwrite = InIsOverwrite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.IsListShowe
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InListIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsListShowe                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::IsListShowe(int InListIndex, bool* OutIsListShowe)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.IsListShowe");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_IsListShowe_Params params;
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsListShowe != nullptr)
		*OutIsListShowe = params.OutIsListShowe;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.SetDefaultValue
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::SetDefaultValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.SetDefaultValue");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_SetDefaultValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 InStringID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FModifiedText           OutText                        (Parm, OutParm)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::GetText(const struct FString& InStringID, struct FModifiedText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.GetText");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_GetText_Params params;
	params.InStringID = InStringID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseChangeCliked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESetting                       InSetting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::CB_MouseChangeCliked(ESetting InSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseChangeCliked");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CB_MouseChangeCliked_Params params;
	params.InSetting = InSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.OnInfomation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::OnInfomation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.OnInfomation");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_OnInfomation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseCursorEnter_R
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESetting                       InSetting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::CB_MouseCursorEnter_R(ESetting InSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseCursorEnter_R");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CB_MouseCursorEnter_R_Params params;
	params.InSetting = InSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseCursorEnter_L
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESetting                       InSetting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::CB_MouseCursorEnter_L(ESetting InSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseCursorEnter_L");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CB_MouseCursorEnter_L_Params params;
	params.InSetting = InSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.UpDownCursorMove
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::UpDownCursorMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.UpDownCursorMove");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_UpDownCursorMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.GetWidgetList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTO14_BPI_GUI_MNU_CNF_GROUP_C* OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::GetWidgetList(int InIndex, bool* OutIsResult, class UTO14_BPI_GUI_MNU_CNF_GROUP_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.GetWidgetList");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_GetWidgetList_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsResult != nullptr)
		*OutIsResult = params.OutIsResult;
	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.PadControl
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         InPadProsess                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EConfigState>      OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::PadControl(class AMenuPadProcess* InPadProsess, TEnumAsByte<EConfigState>* OutState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.PadControl");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_PadControl_Params params;
	params.InPadProsess = InPadProsess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CreateListWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::CreateListWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CreateListWidget");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CreateListWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.DataConstruct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FConfigData>     InConfigDatas                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::DataConstruct(TArray<struct FConfigData>* InConfigDatas)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.DataConstruct");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_DataConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InConfigDatas != nullptr)
		*InConfigDatas = params.InConfigDatas;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::CB_MouseSelect(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseSelect");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CB_MouseSelect_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::CB_MouseEnter(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.CB_MouseEnter");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_CB_MouseEnter_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.Initialize");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.ChangeCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::ChangeCheck__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.ChangeCheck__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_ChangeCheck__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.DialogOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::DialogOpen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.DialogOpen__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_DialogOpen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.ChangeItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InIsChanged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::ChangeItem__DelegateSignature(bool InIsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.ChangeItem__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_ChangeItem__DelegateSignature_Params params;
	params.InIsChanged = InIsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.UpdateInformation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConfigData             InConfigDatat                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            InCursorIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C::UpdateInformation__DelegateSignature(const struct FConfigData& InConfigDatat, int InCursorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_CNF_GROUP_LIST.TO14_BPI_GUI_MNU_CNF_GROUP_LIST_C.UpdateInformation__DelegateSignature");

	UTO14_BPI_GUI_MNU_CNF_GROUP_LIST_C_UpdateInformation__DelegateSignature_Params params;
	params.InConfigDatat = InConfigDatat;
	params.InCursorIndex = InCursorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
