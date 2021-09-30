
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

// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.ResizeOverlay
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::ResizeOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.ResizeOverlay");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_ResizeOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::Activate(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.Activate");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_Activate_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.GetSelectMenuID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 MenuID                         (Parm, OutParm, ZeroConstructor)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::GetSelectMenuID(struct FString* MenuID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.GetSelectMenuID");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_GetSelectMenuID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuID != nullptr)
		*MenuID = params.MenuID;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.BindClosedEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::BindClosedEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.BindClosedEvent");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_BindClosedEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PlayAnimClose
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::PlayAnimClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PlayAnimClose");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_PlayAnimClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.BindDecideEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::BindDecideEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.BindDecideEvent");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_BindDecideEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PlayAnimOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::PlayAnimOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PlayAnimOpen");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_PlayAnimOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PadWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::PadWork(class AMenuPadProcess* PadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PadWork");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_PadWork_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.Initialize");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::OnAnimOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimOpen");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_OnAnimOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimOpenFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::OnAnimOpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimOpenFinished");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_OnAnimOpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimClose
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::OnAnimClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimClose");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_OnAnimClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimCloseFinished
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::OnAnimCloseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnAnimCloseFinished");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_OnAnimCloseFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.PreConstruct");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.Construct");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_CMD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_CMD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_CMD");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_CMD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnClosedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_CMD_C::OnClosedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_CMD.TO14_BPI_GUI_MNU_TOP3_CMD_C.OnClosedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP3_CMD_C_OnClosedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
