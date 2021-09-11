
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

// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.GetDLPListDisplayNewIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsDisplayNewIcon               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::GetDLPListDisplayNewIcon(bool* IsDisplayNewIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.GetDLPListDisplayNewIcon");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_GetDLPListDisplayNewIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDisplayNewIcon != nullptr)
		*IsDisplayNewIcon = params.IsDisplayNewIcon;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.CheckDisable
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsDisabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::CheckDisable(const struct FString& MenuID, bool* IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.CheckDisable");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_CheckDisable_Params params;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDisabled != nullptr)
		*IsDisabled = params.IsDisabled;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.IsMoveScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsMoveScene                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::IsMoveScene(bool* bIsMoveScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.IsMoveScene");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_IsMoveScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsMoveScene != nullptr)
		*bIsMoveScene = params.bIsMoveScene;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.GetNextName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 Index                          (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::GetNextName(struct FString* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.GetNextName");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_GetNextName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.GetSelectedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::GetSelectedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.GetSelectedIndex");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.RestructCmds
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::RestructCmds(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.RestructCmds");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_RestructCmds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.CreateListBoxHelper
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::CreateListBoxHelper(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.CreateListBoxHelper");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_CreateListBoxHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Up
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::Up(struct FName* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Up");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Down
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Down");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.SetupCMD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTO14_BPI_GUI_MNU_COL_CMD_C* TargetCMD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FDictionaryText         InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSelect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MenuID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::SetupCMD(class UTO14_BPI_GUI_MNU_COL_CMD_C* TargetCMD, const struct FDictionaryText& InText, bool IsSelect, int UniqueId, const struct FString& MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.SetupCMD");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_SetupCMD_Params params;
	params.TargetCMD = TargetCMD;
	params.InText = InText;
	params.IsSelect = IsSelect;
	params.UniqueId = UniqueId;
	params.MenuID = MenuID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Init");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectNum                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::Decide(int SelectNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Decide");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_Decide_Params params;
	params.SelectNum = SelectNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.InputPad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProces                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::InputPad(class AMenuPadProcess* PadProces)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.InputPad");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_InputPad_Params params;
	params.PadProces = PadProces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewSelectNum                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::Select(int NewSelectNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.Select");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_Select_Params params;
	params.NewSelectNum = NewSelectNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.PreConstruct");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SYS_CMD_LIST
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_SYS_CMD_LIST(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_SYS_CMD_LIST.TO14_BPI_GUI_MNU_SYS_CMD_LIST_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_SYS_CMD_LIST");

	UTO14_BPI_GUI_MNU_SYS_CMD_LIST_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_SYS_CMD_LIST_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
