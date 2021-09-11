
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

// Function GUI_InstanceManager.GUI_InstanceManager_C.GetNewstInfoManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNewsInfoManager*        NewstInfoManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::GetNewstInfoManager(class UNewsInfoManager** NewstInfoManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetNewstInfoManager");

	UGUI_InstanceManager_C_GetNewstInfoManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewstInfoManager != nullptr)
		*NewstInfoManager = params.NewstInfoManager;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetSystemWindow_Reserved
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::GetSystemWindow_Reserved(class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetSystemWindow_Reserved");

	UGUI_InstanceManager_C_GetSystemWindow_Reserved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetFishingToolSelect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             FishingToolSelect              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::GetFishingToolSelect(class UUserWidget** FishingToolSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetFishingToolSelect");

	UGUI_InstanceManager_C_GetFishingToolSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FishingToolSelect != nullptr)
		*FishingToolSelect = params.FishingToolSelect;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetMessageWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             MessageWindow                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::GetMessageWindow(class UUserWidget** MessageWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetMessageWindow");

	UGUI_InstanceManager_C_GetMessageWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWindow != nullptr)
		*MessageWindow = params.MessageWindow;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetSystemWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             SystemWindow                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::GetSystemWindow(class UUserWidget** SystemWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetSystemWindow");

	UGUI_InstanceManager_C_GetSystemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SystemWindow != nullptr)
		*SystemWindow = params.SystemWindow;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetPopupInfoManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupInfoManager*       PopupInfoManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::GetPopupInfoManager(class UPopupInfoManager** PopupInfoManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetPopupInfoManager");

	UGUI_InstanceManager_C_GetPopupInfoManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopupInfoManager != nullptr)
		*PopupInfoManager = params.PopupInfoManager;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetNavimapFootprintManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNavimapFootprintManager* NavimapFootprint               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::GetNavimapFootprintManager(class UNavimapFootprintManager** NavimapFootprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetNavimapFootprintManager");

	UGUI_InstanceManager_C_GetNavimapFootprintManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavimapFootprint != nullptr)
		*NavimapFootprint = params.NavimapFootprint;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetNeedShowTP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NeedShowTP                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::GetNeedShowTP(bool* NeedShowTP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetNeedShowTP");

	UGUI_InstanceManager_C_GetNeedShowTP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedShowTP != nullptr)
		*NeedShowTP = params.NeedShowTP;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetTPRecent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TPRecent                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::GetTPRecent(float* TPRecent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetTPRecent");

	UGUI_InstanceManager_C_GetTPRecent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPRecent != nullptr)
		*TPRecent = params.TPRecent;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetTPCurrent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TPCurrent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::GetTPCurrent(float* TPCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetTPCurrent");

	UGUI_InstanceManager_C_GetTPCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPCurrent != nullptr)
		*TPCurrent = params.TPCurrent;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetAliasGetWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             AliasGetWindow                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::GetAliasGetWindow(class UUserWidget** AliasGetWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetAliasGetWindow");

	UGUI_InstanceManager_C_GetAliasGetWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AliasGetWindow != nullptr)
		*AliasGetWindow = params.AliasGetWindow;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetFishingResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             FishingResult                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::GetFishingResult(class UUserWidget** FishingResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetFishingResult");

	UGUI_InstanceManager_C_GetFishingResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FishingResult != nullptr)
		*FishingResult = params.FishingResult;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.GetPauseWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             PauseWindow                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::GetPauseWindow(class UUserWidget** PauseWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.GetPauseWindow");

	UGUI_InstanceManager_C_GetPauseWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PauseWindow != nullptr)
		*PauseWindow = params.PauseWindow;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetPauseWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             PauseWindow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::SetPauseWindow(class UUserWidget* PauseWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetPauseWindow");

	UGUI_InstanceManager_C_SetPauseWindow_Params params;
	params.PauseWindow = PauseWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetFishingResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             FishingResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::SetFishingResult(class UUserWidget* FishingResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetFishingResult");

	UGUI_InstanceManager_C_SetFishingResult_Params params;
	params.FishingResult = FishingResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetAliasGetWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             AliasGetWindow                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::SetAliasGetWindow(class UUserWidget* AliasGetWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetAliasGetWindow");

	UGUI_InstanceManager_C_SetAliasGetWindow_Params params;
	params.AliasGetWindow = AliasGetWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetTPCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TPCurrent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::SetTPCurrent(float TPCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetTPCurrent");

	UGUI_InstanceManager_C_SetTPCurrent_Params params;
	params.TPCurrent = TPCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetTPRecent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TPRecent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::SetTPRecent(float TPRecent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetTPRecent");

	UGUI_InstanceManager_C_SetTPRecent_Params params;
	params.TPRecent = TPRecent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetNeedShowTP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NeedShowTP                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::SetNeedShowTP(bool NeedShowTP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetNeedShowTP");

	UGUI_InstanceManager_C_SetNeedShowTP_Params params;
	params.NeedShowTP = NeedShowTP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetNavimapFootprintManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNavimapFootprintManager* NavimapFootprint               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::SetNavimapFootprintManager(class UNavimapFootprintManager* NavimapFootprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetNavimapFootprintManager");

	UGUI_InstanceManager_C_SetNavimapFootprintManager_Params params;
	params.NavimapFootprint = NavimapFootprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetPopupInfoManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupInfoManager*       PopupInfoManager               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::SetPopupInfoManager(class UPopupInfoManager* PopupInfoManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetPopupInfoManager");

	UGUI_InstanceManager_C_SetPopupInfoManager_Params params;
	params.PopupInfoManager = PopupInfoManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetSystemWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             SystemWindow                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::SetSystemWindow(class UUserWidget* SystemWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetSystemWindow");

	UGUI_InstanceManager_C_SetSystemWindow_Params params;
	params.SystemWindow = SystemWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetMessageWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             MessageWindow                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::SetMessageWindow(class UUserWidget* MessageWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetMessageWindow");

	UGUI_InstanceManager_C_SetMessageWindow_Params params;
	params.MessageWindow = MessageWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetFishingToolSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             FishingToolSelect              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::SetFishingToolSelect(class UUserWidget* FishingToolSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetFishingToolSelect");

	UGUI_InstanceManager_C_SetFishingToolSelect_Params params;
	params.FishingToolSelect = FishingToolSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SetSystemWindow_Reserved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManager_C::SetSystemWindow_Reserved(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SetSystemWindow_Reserved");

	UGUI_InstanceManager_C_SetSystemWindow_Reserved_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.SeNewstInfoManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNewsInfoManager*        NewstInfoManager               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::SeNewstInfoManager(class UNewsInfoManager* NewstInfoManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.SeNewstInfoManager");

	UGUI_InstanceManager_C_SeNewstInfoManager_Params params;
	params.NewstInfoManager = NewstInfoManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.Terminate
// (Public, BlueprintCallable, BlueprintEvent)

void UGUI_InstanceManager_C::Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.Terminate");

	UGUI_InstanceManager_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManager.GUI_InstanceManager_C.ExecuteUbergraph_GUI_InstanceManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManager_C::ExecuteUbergraph_GUI_InstanceManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManager.GUI_InstanceManager_C.ExecuteUbergraph_GUI_InstanceManager");

	UGUI_InstanceManager_C_ExecuteUbergraph_GUI_InstanceManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
