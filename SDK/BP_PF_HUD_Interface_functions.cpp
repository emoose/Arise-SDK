
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

// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.GetDefaultShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<bool>                   IsDefaultShow                  (Parm, OutParm, ZeroConstructor)

void UBP_PF_HUD_Interface_C::GetDefaultShow(TArray<bool>* IsDefaultShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.GetDefaultShow");

	UBP_PF_HUD_Interface_C_GetDefaultShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDefaultShow != nullptr)
		*IsDefaultShow = params.IsDefaultShow;
}


// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.Hide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Interface_C::Hide(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.Hide");

	UBP_PF_HUD_Interface_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.CheckPastStory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutIsPastStory                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Interface_C::CheckPastStory(bool* OutIsPastStory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.CheckPastStory");

	UBP_PF_HUD_Interface_C_CheckPastStory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsPastStory != nullptr)
		*OutIsPastStory = params.OutIsPastStory;
}


// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.Refresh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Interface_C::Refresh(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.Refresh");

	UBP_PF_HUD_Interface_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.ChangePFUIPattern
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPFUIPattern                   InEPFUIPattern                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsChangeLock                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Interface_C::ChangePFUIPattern(EPFUIPattern InEPFUIPattern, bool InIsChangeLock, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.ChangePFUIPattern");

	UBP_PF_HUD_Interface_C_ChangePFUIPattern_Params params;
	params.InEPFUIPattern = InEPFUIPattern;
	params.InIsChangeLock = InIsChangeLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.UpdateDuringControl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPFUIParts                     InPFUIParts                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Interface_C::UpdateDuringControl(EPFUIParts InPFUIParts, ESlateVisibility InVisibility, bool* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.UpdateDuringControl");

	UBP_PF_HUD_Interface_C_UpdateDuringControl_Params params;
	params.InPFUIParts = InPFUIParts;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.GetPFLayoutInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C> PFLayout                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PF_HUD_Interface_C::GetPFLayoutInterface(TScriptInterface<class UTO14_BPI_GUI_SYS_LAYOUT_PF_Interface_C>* PFLayout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.GetPFLayoutInterface");

	UBP_PF_HUD_Interface_C_GetPFLayoutInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PFLayout != nullptr)
		*PFLayout = params.PFLayout;
}


// Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.RequestInitializeLongChatManager
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PF_HUD_Interface_C::RequestInitializeLongChatManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PF_HUD_Interface.BP_PF_HUD_Interface_C.RequestInitializeLongChatManager");

	UBP_PF_HUD_Interface_C_RequestInitializeLongChatManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
