
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

// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.Terminate
// (Public, BlueprintCallable, BlueprintEvent)

void UGUI_InstanceManagerInterface_C::Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.Terminate");

	UGUI_InstanceManagerInterface_C_Terminate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetNewstInfoManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNewsInfoManager*        NewstInfoManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetNewstInfoManager(class UNewsInfoManager** NewstInfoManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetNewstInfoManager");

	UGUI_InstanceManagerInterface_C_GetNewstInfoManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewstInfoManager != nullptr)
		*NewstInfoManager = params.NewstInfoManager;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SeNewstInfoManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNewsInfoManager*        NewstInfoManager               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SeNewstInfoManager(class UNewsInfoManager* NewstInfoManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SeNewstInfoManager");

	UGUI_InstanceManagerInterface_C_SeNewstInfoManager_Params params;
	params.NewstInfoManager = NewstInfoManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetSystemWindow_Reserved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetSystemWindow_Reserved(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetSystemWindow_Reserved");

	UGUI_InstanceManagerInterface_C_SetSystemWindow_Reserved_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetSystemWindow_Reserved
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetSystemWindow_Reserved(class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetSystemWindow_Reserved");

	UGUI_InstanceManagerInterface_C_GetSystemWindow_Reserved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetFishingToolSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             FishingToolSelect              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetFishingToolSelect(class UUserWidget* FishingToolSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetFishingToolSelect");

	UGUI_InstanceManagerInterface_C_SetFishingToolSelect_Params params;
	params.FishingToolSelect = FishingToolSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetFishingToolSelect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             FishingToolSelect              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetFishingToolSelect(class UUserWidget** FishingToolSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetFishingToolSelect");

	UGUI_InstanceManagerInterface_C_GetFishingToolSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FishingToolSelect != nullptr)
		*FishingToolSelect = params.FishingToolSelect;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetPauseWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             PauseWindow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetPauseWindow(class UUserWidget* PauseWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetPauseWindow");

	UGUI_InstanceManagerInterface_C_SetPauseWindow_Params params;
	params.PauseWindow = PauseWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetPauseWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             PauseWindow                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetPauseWindow(class UUserWidget** PauseWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetPauseWindow");

	UGUI_InstanceManagerInterface_C_GetPauseWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PauseWindow != nullptr)
		*PauseWindow = params.PauseWindow;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetFishingResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             FishingResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetFishingResult(class UUserWidget* FishingResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetFishingResult");

	UGUI_InstanceManagerInterface_C_SetFishingResult_Params params;
	params.FishingResult = FishingResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetFishingResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             FishingResult                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetFishingResult(class UUserWidget** FishingResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetFishingResult");

	UGUI_InstanceManagerInterface_C_GetFishingResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FishingResult != nullptr)
		*FishingResult = params.FishingResult;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetAliasGetWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             AliasGetWindow                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetAliasGetWindow(class UUserWidget* AliasGetWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetAliasGetWindow");

	UGUI_InstanceManagerInterface_C_SetAliasGetWindow_Params params;
	params.AliasGetWindow = AliasGetWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetAliasGetWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             AliasGetWindow                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetAliasGetWindow(class UUserWidget** AliasGetWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetAliasGetWindow");

	UGUI_InstanceManagerInterface_C_GetAliasGetWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AliasGetWindow != nullptr)
		*AliasGetWindow = params.AliasGetWindow;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetTPCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TPCurrent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetTPCurrent(float TPCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetTPCurrent");

	UGUI_InstanceManagerInterface_C_SetTPCurrent_Params params;
	params.TPCurrent = TPCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetTPCurrent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TPCurrent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetTPCurrent(float* TPCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetTPCurrent");

	UGUI_InstanceManagerInterface_C_GetTPCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPCurrent != nullptr)
		*TPCurrent = params.TPCurrent;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetTPRecent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TPRecent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetTPRecent(float TPRecent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetTPRecent");

	UGUI_InstanceManagerInterface_C_SetTPRecent_Params params;
	params.TPRecent = TPRecent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetTPRecent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TPRecent                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetTPRecent(float* TPRecent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetTPRecent");

	UGUI_InstanceManagerInterface_C_GetTPRecent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPRecent != nullptr)
		*TPRecent = params.TPRecent;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetNeedShowTP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NeedShowTP                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetNeedShowTP(bool NeedShowTP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetNeedShowTP");

	UGUI_InstanceManagerInterface_C_SetNeedShowTP_Params params;
	params.NeedShowTP = NeedShowTP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetNeedShowTP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NeedShowTP                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetNeedShowTP(bool* NeedShowTP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetNeedShowTP");

	UGUI_InstanceManagerInterface_C_GetNeedShowTP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedShowTP != nullptr)
		*NeedShowTP = params.NeedShowTP;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetNavimapFootprintManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNavimapFootprintManager* NavimapFootprint               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetNavimapFootprintManager(class UNavimapFootprintManager* NavimapFootprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetNavimapFootprintManager");

	UGUI_InstanceManagerInterface_C_SetNavimapFootprintManager_Params params;
	params.NavimapFootprint = NavimapFootprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetNavimapFootprintManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNavimapFootprintManager* NavimapFootprint               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetNavimapFootprintManager(class UNavimapFootprintManager** NavimapFootprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetNavimapFootprintManager");

	UGUI_InstanceManagerInterface_C_GetNavimapFootprintManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavimapFootprint != nullptr)
		*NavimapFootprint = params.NavimapFootprint;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetPopupInfoManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupInfoManager*       PopupInfoManager               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetPopupInfoManager(class UPopupInfoManager* PopupInfoManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetPopupInfoManager");

	UGUI_InstanceManagerInterface_C_SetPopupInfoManager_Params params;
	params.PopupInfoManager = PopupInfoManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetPopupInfoManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupInfoManager*       PopupInfoManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetPopupInfoManager(class UPopupInfoManager** PopupInfoManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetPopupInfoManager");

	UGUI_InstanceManagerInterface_C_GetPopupInfoManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopupInfoManager != nullptr)
		*PopupInfoManager = params.PopupInfoManager;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetSystemWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             SystemWindow                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetSystemWindow(class UUserWidget* SystemWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetSystemWindow");

	UGUI_InstanceManagerInterface_C_SetSystemWindow_Params params;
	params.SystemWindow = SystemWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetSystemWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             SystemWindow                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetSystemWindow(class UUserWidget** SystemWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetSystemWindow");

	UGUI_InstanceManagerInterface_C_GetSystemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SystemWindow != nullptr)
		*SystemWindow = params.SystemWindow;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetMessageWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             MessageWindow                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::SetMessageWindow(class UUserWidget* MessageWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.SetMessageWindow");

	UGUI_InstanceManagerInterface_C_SetMessageWindow_Params params;
	params.MessageWindow = MessageWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetMessageWindow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             MessageWindow                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUI_InstanceManagerInterface_C::GetMessageWindow(class UUserWidget** MessageWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUI_InstanceManagerInterface.GUI_InstanceManagerInterface_C.GetMessageWindow");

	UGUI_InstanceManagerInterface_C_GetMessageWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageWindow != nullptr)
		*MessageWindow = params.MessageWindow;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
