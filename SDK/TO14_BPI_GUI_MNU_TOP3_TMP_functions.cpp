
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

// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.InitEnableRequestMovePFFlag
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::InitEnableRequestMovePFFlag(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.InitEnableRequestMovePFFlag");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_InitEnableRequestMovePFFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.IsHealListOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsHealListOpen                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::IsHealListOpen(bool* IsHealListOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.IsHealListOpen");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_IsHealListOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHealListOpen != nullptr)
		*IsHealListOpen = params.IsHealListOpen;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindChangeMenuStaEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::BindChangeMenuStaEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindChangeMenuStaEvent");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_BindChangeMenuStaEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindChangeMenuForEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::BindChangeMenuForEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindChangeMenuForEvent");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_BindChangeMenuForEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.CheckInputOpenSta
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::CheckInputOpenSta(class AMenuPadProcess* PadData, bool* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.CheckInputOpenSta");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_CheckInputOpenSta_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.CheckInputOpenFor
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::CheckInputOpenFor(class AMenuPadProcess* PadData, bool* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.CheckInputOpenFor");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_CheckInputOpenFor_Params params;
	params.PadData = PadData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.InitEnableSta
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::InitEnableSta(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.InitEnableSta");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_InitEnableSta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.InitEnableFor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::InitEnableFor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.InitEnableFor");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_InitEnableFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindClosedEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::BindClosedEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindClosedEvent");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_BindClosedEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindDecideEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::BindDecideEvent(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.BindDecideEvent");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_BindDecideEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.PlayAnimClose
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::PlayAnimClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.PlayAnimClose");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_PlayAnimClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.PlayAnimOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::PlayAnimOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.PlayAnimOpen");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_PlayAnimOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.UpdateHelpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHeal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::UpdateHelpText(bool IsHeal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.UpdateHelpText");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_UpdateHelpText_Params params;
	params.IsHeal = IsHeal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.HealSelectWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::HealSelectWork(class AMenuPadProcess* PadProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.HealSelectWork");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_HealSelectWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.IconPadWork
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelect                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::IconPadWork(class AMenuPadProcess* PadProcess, bool* IsSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.IconPadWork");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_IconPadWork_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelect != nullptr)
		*IsSelect = params.IsSelect;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.Terminate
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.Terminate");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.Execute
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenuPadProcess*         PadProcess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InHeal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::Execute(class AMenuPadProcess* PadProcess, bool* InHeal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.Execute");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_Execute_Params params;
	params.PadProcess = PadProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InHeal != nullptr)
		*InHeal = params.InHeal;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.Initialize");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnRequestMovePFFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::OnRequestMovePFFlag(int Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnRequestMovePFFlag");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnRequestMovePFFlag_Params params;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnClosedFromCmd
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::OnClosedFromCmd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnClosedFromCmd");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnClosedFromCmd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnViewOpen
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::OnViewOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnViewOpen");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnViewOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnInit
// (BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnInit");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnHealIconClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::OnHealIconClick(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnHealIconClick");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnHealIconClick_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnPreviewFromTP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EArisePartyID, int>       HealHPMap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            UseTP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::OnPreviewFromTP(TMap<EArisePartyID, int> HealHPMap, int UseTP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnPreviewFromTP");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnPreviewFromTP_Params params;
	params.HealHPMap = HealHPMap;
	params.UseTP = UseTP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_TMP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_TMP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_TMP");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_ExecuteUbergraph_TO14_BPI_GUI_MNU_TOP3_TMP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnChangeMenuStaEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::OnChangeMenuStaEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnChangeMenuStaEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnChangeMenuStaEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnChangeMenuForEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::OnChangeMenuForEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnChangeMenuForEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnChangeMenuForEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnClosedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTO14_BPI_GUI_MNU_TOP3_TMP_C::OnClosedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TO14_BPI_GUI_MNU_TOP3_TMP.TO14_BPI_GUI_MNU_TOP3_TMP_C.OnClosedEvent__DelegateSignature");

	UTO14_BPI_GUI_MNU_TOP3_TMP_C_OnClosedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
