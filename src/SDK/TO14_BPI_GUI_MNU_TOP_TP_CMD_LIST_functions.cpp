
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

// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.BindOnPreviewEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C::BindOnPreviewEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.BindOnPreviewEvent");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_BindOnPreviewEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.Preview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C::Preview(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.Preview");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_Preview_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.Refresh");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C::SetIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.SetIndex");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_SetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.EnterCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C::EnterCommand(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.EnterCommand");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_EnterCommand_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.PadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Select                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C::PadWork(class AMenuPadProcess* PadProcess, int* Index, bool* Select)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.PadWork");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_PadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (Select != nullptr)
		*Select = params.Select;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.SelectCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C::SelectCommand(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.SelectCommand");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_SelectCommand_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.Initialize");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.OnPreviewEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EArisePartyID, int>       HealHPMap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            UseTP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C::OnPreviewEvent__DelegateSignature(TMap<EArisePartyID, int> HealHPMap, int UseTP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST.TO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C.OnPreviewEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP_TP_CMD_LIST_C_OnPreviewEvent__DelegateSignature_Params params;
	params.HealHPMap = HealHPMap;
	params.UseTP = UseTP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
